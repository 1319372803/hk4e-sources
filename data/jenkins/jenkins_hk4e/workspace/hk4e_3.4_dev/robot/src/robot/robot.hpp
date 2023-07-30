// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/robot.hpp

// Line 18: range 0000000000516786-0000000000516946
int32_t __cdecl Robot::sendProto<proto::EnterTransPointRegionNotify>(
        Robot *const this,
        proto::EnterTransPointRegionNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::EnterTransPointRegionNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::EnterTransPointRegionNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 000000000051A6AC-000000000051A86C
int32_t __cdecl Robot::sendProto<proto::EvtBeingHitNotify>(Robot *const this, proto::EvtBeingHitNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::EvtBeingHitNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::EvtBeingHitNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 0000000000535F20-00000000005360E0
int32_t __cdecl Robot::sendProto<proto::EvtDoSkillSuccNotify>(Robot *const this, proto::EvtDoSkillSuccNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::EvtDoSkillSuccNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::EvtDoSkillSuccNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 0000000000516948-0000000000516B08
int32_t __cdecl Robot::sendProto<proto::ExitTransPointRegionNotify>(
        Robot *const this,
        proto::ExitTransPointRegionNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::ExitTransPointRegionNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::ExitTransPointRegionNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 00000000005215D8-0000000000521798
int32_t __cdecl Robot::sendProto<proto::GachaOpenWishNotify>(Robot *const this, proto::GachaOpenWishNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::GachaOpenWishNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::GachaOpenWishNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 0000000000523AD4-0000000000523C94
int32_t __cdecl Robot::sendProto<proto::HitClientTrivialNotify>(
        Robot *const this,
        proto::HitClientTrivialNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::HitClientTrivialNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::HitClientTrivialNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 000000000052B0AE-000000000052B26E
int32_t __cdecl Robot::sendProto<proto::HomeGetBasicInfoReq>(Robot *const this, proto::HomeGetBasicInfoReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::HomeGetBasicInfoReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::HomeGetBasicInfoReq>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 000000000051EF00-000000000051F0C0
int32_t __cdecl Robot::sendProto<proto::PlayerCookReq>(Robot *const this, proto::PlayerCookReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::PlayerCookReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::PlayerCookReq>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 0000000000537930-0000000000537AF0
int32_t __cdecl Robot::sendProto<proto::PlayerForceExitReq>(Robot *const this, proto::PlayerForceExitReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::PlayerForceExitReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::PlayerForceExitReq>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 000000000051534A-000000000051550A
int32_t __cdecl Robot::sendProto<proto::SceneEntityMoveReq>(Robot *const this, proto::SceneEntityMoveReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::SceneEntityMoveReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::SceneEntityMoveReq>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 18: range 000000000052658A-000000000052674A
int32_t __cdecl Robot::sendProto<proto::UnionCmdNotify>(Robot *const this, proto::UnionCmdNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::minet::Packet *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:20";
  *(_QWORD *)(v2 + 16) = Robot::sendProto<proto::UnionCmdNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      23);
    common::milog::MiLogStream::operator()(&v8, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setProto<proto::UnionCmdNotify>(v6, proto);
    v5 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v2 + 32));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 32: range 0000000000528252-0000000000528515
int32_t __cdecl Robot::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>(
        Robot *const this,
        proto::AcceptCityReputationRequestReq *req,
        proto::AcceptCityReputationRequestRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000525DAE-0000000000526071
int32_t __cdecl Robot::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>(
        Robot *const this,
        proto::ActivityTakeWatcherRewardReq *req,
        proto::ActivityTakeWatcherRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051A97C-000000000051AC3F
int32_t __cdecl Robot::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>(
        Robot *const this,
        proto::AddQuestContentProgressReq *req,
        proto::AddQuestContentProgressRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052A862-000000000052AB25
int32_t __cdecl Robot::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>(
        Robot *const this,
        proto::AdjustWorldLevelReq *req,
        proto::AdjustWorldLevelRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000524B4E-0000000000524E11
int32_t __cdecl Robot::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>(
        Robot *const this,
        proto::AskAddFriendReq *req,
        proto::AskAddFriendRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051E0CE-000000000051E391
int32_t __cdecl Robot::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>(
        Robot *const this,
        proto::AvatarChangeElementTypeReq *req,
        proto::AvatarChangeElementTypeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051837A-000000000051863D
int32_t __cdecl Robot::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>(
        Robot *const this,
        proto::AvatarDieAnimationEndReq *req,
        proto::AvatarDieAnimationEndRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051BBFE-000000000051BEC1
int32_t __cdecl Robot::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>(
        Robot *const this,
        proto::AvatarPromoteReq *req,
        proto::AvatarPromoteRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052AB26-000000000052ADE9
int32_t __cdecl Robot::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>(
        Robot *const this,
        proto::BackMyWorldReq *req,
        proto::BackMyWorldRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000525AEA-0000000000525DAD
int32_t __cdecl Robot::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>(
        Robot *const this,
        proto::BuyGoodsReq *req,
        proto::BuyGoodsRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000528516-00000000005287D9
int32_t __cdecl Robot::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>(
        Robot *const this,
        proto::CancelCityReputationRequestReq *req,
        proto::CancelCityReputationRequestRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000518012-00000000005182D5
int32_t __cdecl Robot::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>(
        Robot *const this,
        proto::ChangeAvatarReq *req,
        proto::ChangeAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051611A-00000000005163DD
int32_t __cdecl Robot::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>(
        Robot *const this,
        proto::ChangeGameTimeReq *req,
        proto::ChangeGameTimeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000517712-00000000005179D5
int32_t __cdecl Robot::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>(
        Robot *const this,
        proto::ChooseCurAvatarTeamReq *req,
        proto::ChooseCurAvatarTeamRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052179A-0000000000521A5D
int32_t __cdecl Robot::sendProto<proto::CombineReq,proto::CombineRsp>(
        Robot *const this,
        proto::CombineReq *req,
        proto::CombineRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::CombineReq,proto::CombineRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::CombineReq,proto::CombineRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000521050-0000000000521313
int32_t __cdecl Robot::sendProto<proto::DoGachaReq,proto::DoGachaRsp>(
        Robot *const this,
        proto::DoGachaReq *req,
        proto::DoGachaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::DoGachaReq,proto::DoGachaRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::DoGachaReq,proto::DoGachaRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000518DD6-0000000000519099
int32_t __cdecl Robot::sendProto<proto::DropItemReq,proto::DropItemRsp>(
        Robot *const this,
        proto::DropItemReq *req,
        proto::DropItemRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::DropItemReq,proto::DropItemRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::DropItemReq,proto::DropItemRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051C26A-000000000051C52D
int32_t __cdecl Robot::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>(
        Robot *const this,
        proto::DungeonDieOptionReq *req,
        proto::DungeonDieOptionRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051AE2C-000000000051B0EF
int32_t __cdecl Robot::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>(
        Robot *const this,
        proto::DungeonEntryInfoReq *req,
        proto::DungeonEntryInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051B93A-000000000051BBFD
int32_t __cdecl Robot::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>(
        Robot *const this,
        proto::DungeonWayPointActivateReq *req,
        proto::DungeonWayPointActivateRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052A59E-000000000052A861
int32_t __cdecl Robot::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>(
        Robot *const this,
        proto::EnterMechanicusDungeonReq *req,
        proto::EnterMechanicusDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005140BE-0000000000514381
int32_t __cdecl Robot::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>(
        Robot *const this,
        proto::EnterSceneDoneReq *req,
        proto::EnterSceneDoneRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000513B36-0000000000513DF9
int32_t __cdecl Robot::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>(
        Robot *const this,
        proto::EnterSceneReadyReq *req,
        proto::EnterSceneReadyRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051FA54-000000000051FD17
int32_t __cdecl Robot::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>(
        Robot *const this,
        proto::ExecuteGadgetLuaReq *req,
        proto::ExecuteGadgetLuaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051D774-000000000051DA37
int32_t __cdecl Robot::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>(
        Robot *const this,
        proto::ExecuteGroupTriggerReq *req,
        proto::ExecuteGroupTriggerRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000523D7A-000000000052403D
int32_t __cdecl Robot::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>(
        Robot *const this,
        proto::FocusAvatarReq *req,
        proto::FocusAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000521314-00000000005215D7
int32_t __cdecl Robot::sendProto<proto::GachaWishReq,proto::GachaWishRsp>(
        Robot *const this,
        proto::GachaWishReq *req,
        proto::GachaWishRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GachaWishReq,proto::GachaWishRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GachaWishReq,proto::GachaWishRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005194E8-00000000005197AB
int32_t __cdecl Robot::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
        Robot *const this,
        proto::GadgetInteractReq *req,
        proto::GadgetInteractRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000524302-00000000005245C5
int32_t __cdecl Robot::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>(
        Robot *const this,
        proto::GetActivityInfoReq *req,
        proto::GetActivityInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052403E-0000000000524301
int32_t __cdecl Robot::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>(
        Robot *const this,
        proto::GetActivityScheduleReq *req,
        proto::GetActivityScheduleRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005273CC-000000000052768F
int32_t __cdecl Robot::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>(
        Robot *const this,
        proto::GetCityReputationInfoReq *req,
        proto::GetCityReputationInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005287DA-0000000000528A9D
int32_t __cdecl Robot::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>(
        Robot *const this,
        proto::GetCityReputationMapInfoReq *req,
        proto::GetCityReputationMapInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051F386-000000000051F649
int32_t __cdecl Robot::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>(
        Robot *const this,
        proto::GetCompoundDataReq *req,
        proto::GetCompoundDataRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000520D8C-000000000052104F
int32_t __cdecl Robot::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>(
        Robot *const this,
        proto::GetGachaInfoReq *req,
        proto::GetGachaInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051D03E-000000000051D301
int32_t __cdecl Robot::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>(
        Robot *const this,
        proto::GetOnlinePlayerListReq *req,
        proto::GetOnlinePlayerListRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052488A-0000000000524B4D
int32_t __cdecl Robot::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>(
        Robot *const this,
        proto::GetPlayerFriendListReq *req,
        proto::GetPlayerFriendListRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051D302-000000000051D5C5
int32_t __cdecl Robot::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>(
        Robot *const this,
        proto::GetQuestTalkHistoryReq *req,
        proto::GetQuestTalkHistoryRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000516DCE-0000000000517091
int32_t __cdecl Robot::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>(
        Robot *const this,
        proto::GetSceneAreaReq *req,
        proto::GetSceneAreaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051863E-0000000000518901
int32_t __cdecl Robot::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>(
        Robot *const this,
        proto::GetSceneNpcPositionReq *req,
        proto::GetSceneNpcPositionRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005163DE-00000000005166A1
int32_t __cdecl Robot::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>(
        Robot *const this,
        proto::GetScenePointReq *req,
        proto::GetScenePointReq *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005256E0-00000000005259A3
int32_t __cdecl Robot::sendProto<proto::GetShopReq,proto::GetShopRsp>(
        Robot *const this,
        proto::GetShopReq *req,
        proto::GetShopRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetShopReq,proto::GetShopRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetShopReq,proto::GetShopRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052541C-00000000005256DF
int32_t __cdecl Robot::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>(
        Robot *const this,
        proto::GetShopmallDataReq *req,
        proto::GetShopmallDataRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000514AA4-0000000000514D67
int32_t __cdecl Robot::sendProto<proto::GmTalkReq,proto::GmTalkRsp>(
        Robot *const this,
        proto::GmTalkReq *req,
        proto::GmTalkRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GmTalkReq,proto::GmTalkRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GmTalkReq,proto::GmTalkRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052C73C-000000000052C9FF
int32_t __cdecl Robot::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>(
        Robot *const this,
        proto::HomeAvatarRewardEventGetReq *req,
        proto::HomeAvatarRewardEventGetRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052CA00-000000000052CCC3
int32_t __cdecl Robot::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>(
        Robot *const this,
        proto::HomeAvatarSummonEventReq *req,
        proto::HomeAvatarSummonEventRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052C1DC-000000000052C49F
int32_t __cdecl Robot::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>(
        Robot *const this,
        proto::HomeAvatarTalkReq *req,
        proto::HomeAvatarTalkRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052B270-000000000052B533
int32_t __cdecl Robot::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>(
        Robot *const this,
        proto::HomeChangeEditModeReq *req,
        proto::HomeChangeEditModeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052B534-000000000052B7F7
int32_t __cdecl Robot::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>(
        Robot *const this,
        proto::HomeChangeModuleReq *req,
        proto::HomeChangeModuleRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052BF18-000000000052C1DB
int32_t __cdecl Robot::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>(
        Robot *const this,
        proto::HomeChooseModuleReq *req,
        proto::HomeChooseModuleRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052B7F8-000000000052BABB
int32_t __cdecl Robot::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>(
        Robot *const this,
        proto::HomeGetArrangementInfoReq *req,
        proto::HomeGetArrangementInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052BC54-000000000052BF17
int32_t __cdecl Robot::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>(
        Robot *const this,
        proto::HomeUpdateArrangementInfoReq *req,
        proto::HomeUpdateArrangementInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000521B6C-0000000000521E2F
int32_t __cdecl Robot::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>(
        Robot *const this,
        proto::ItemGivingReq *req,
        proto::ItemGivingRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000523810-0000000000523AD3
int32_t __cdecl Robot::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>(
        Robot *const this,
        proto::JoinPlayerSceneReq *req,
        proto::JoinPlayerSceneRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051DB46-000000000051DE09
int32_t __cdecl Robot::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>(
        Robot *const this,
        proto::LevelupCityReq *req,
        proto::LevelupCityRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000527108-00000000005273CB
int32_t __cdecl Robot::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>(
        Robot *const this,
        proto::McoinExchangeHcoinReq *req,
        proto::McoinExchangeHcoinRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052A2DA-000000000052A59D
int32_t __cdecl Robot::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>(
        Robot *const this,
        proto::MechanicusLevelupGearReq *req,
        proto::MechanicusLevelupGearRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052A016-000000000052A2D9
int32_t __cdecl Robot::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>(
        Robot *const this,
        proto::MechanicusUnlockGearReq *req,
        proto::MechanicusUnlockGearRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000526E44-0000000000527107
int32_t __cdecl Robot::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>(
        Robot *const this,
        proto::MpPlayGuestReplyInviteReq *req,
        proto::MpPlayGuestReplyInviteRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000526072-0000000000526335
int32_t __cdecl Robot::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>(
        Robot *const this,
        proto::MpPlayOwnerCheckReq *req,
        proto::MpPlayOwnerCheckRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000526B80-0000000000526E43
int32_t __cdecl Robot::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>(
        Robot *const this,
        proto::MpPlayOwnerStartInviteReq *req,
        proto::MpPlayOwnerStartInviteRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000515E56-0000000000516119
int32_t __cdecl Robot::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>(
        Robot *const this,
        proto::NpcTalkReq *req,
        proto::NpcTalkRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051212E-00000000005123F1
int32_t __cdecl Robot::sendProto<proto::PingReq,proto::PingRsp>(
        Robot *const this,
        proto::PingReq *req,
        proto::PingRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PingReq,proto::PingRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PingReq,proto::PingRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052354C-000000000052380F
int32_t __cdecl Robot::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>(
        Robot *const this,
        proto::PlayerApplyEnterMpReq *req,
        proto::PlayerApplyEnterMpRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000523288-000000000052354B
int32_t __cdecl Robot::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>(
        Robot *const this,
        proto::PlayerChatReq *req,
        proto::PlayerChatRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051F0C2-000000000051F385
int32_t __cdecl Robot::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>(
        Robot *const this,
        proto::PlayerCompoundMaterialReq *req,
        proto::PlayerCompoundMaterialRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051B3B2-000000000051B675
int32_t __cdecl Robot::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>(
        Robot *const this,
        proto::PlayerEnterDungeonReq *req,
        proto::PlayerEnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000513398-000000000051365B
int32_t __cdecl Robot::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>(
        Robot *const this,
        proto::PlayerLoginReq *req,
        proto::PlayerLoginRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000528D62-0000000000529025
int32_t __cdecl Robot::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>(
        Robot *const this,
        proto::PlayerOfferingReq *req,
        proto::PlayerOfferingRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051B676-000000000051B939
int32_t __cdecl Robot::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>(
        Robot *const this,
        proto::PlayerQuitDungeonReq *req,
        proto::PlayerQuitDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000514382-0000000000514645
int32_t __cdecl Robot::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>(
        Robot *const this,
        proto::PostEnterSceneReq *req,
        proto::PostEnterSceneRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000520AC8-0000000000520D8B
int32_t __cdecl Robot::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>(
        Robot *const this,
        proto::QuestCreateEntityReq *req,
        proto::QuestCreateEntityRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000525158-000000000052541B
int32_t __cdecl Robot::sendProto<proto::RechargeReq,proto::RechargeRsp>(
        Robot *const this,
        proto::RechargeReq *req,
        proto::RechargeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::RechargeReq,proto::RechargeRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::RechargeReq,proto::RechargeRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051CAB6-000000000051CD79
int32_t __cdecl Robot::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>(
        Robot *const this,
        proto::RefreshBackgroundAvatarReq *req,
        proto::RefreshBackgroundAvatarRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051A266-000000000051A529
int32_t __cdecl Robot::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>(
        Robot *const this,
        proto::SceneEntityDrownReq *req,
        proto::SceneEntityDrownRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000513DFA-00000000005140BD
int32_t __cdecl Robot::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>(
        Robot *const this,
        proto::SceneInitFinishReq *req,
        proto::SceneInitFinishRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000516B0A-0000000000516DCD
int32_t __cdecl Robot::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>(
        Robot *const this,
        proto::SceneTransToPointReq *req,
        proto::SceneTransToPointRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005245C6-0000000000524889
int32_t __cdecl Robot::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>(
        Robot *const this,
        proto::SeaLampFlyLampReq *req,
        proto::SeaLampFlyLampRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051CD7A-000000000051D03D
int32_t __cdecl Robot::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>(
        Robot *const this,
        proto::SelectWorktopOptionReq *req,
        proto::SelectWorktopOptionRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051DE0A-000000000051E0CD
int32_t __cdecl Robot::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>(
        Robot *const this,
        proto::SetPlayerNameReq *req,
        proto::SetPlayerNameRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051C7F2-000000000051CAB5
int32_t __cdecl Robot::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>(
        Robot *const this,
        proto::SetPlayerPropReq *req,
        proto::SetPlayerPropRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051744E-0000000000517711
int32_t __cdecl Robot::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>(
        Robot *const this,
        proto::SetUpAvatarTeamReq *req,
        proto::SetUpAvatarTeamRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005292EA-00000000005295AD
int32_t __cdecl Robot::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>(
        Robot *const this,
        proto::SetWidgetSlotReq *req,
        proto::SetWidgetSlotRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051C52E-000000000051C7F1
int32_t __cdecl Robot::sendProto<proto::SpringUseReq,proto::SpringUseRsp>(
        Robot *const this,
        proto::SpringUseReq *req,
        proto::SpringUseRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SpringUseReq,proto::SpringUseRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SpringUseReq,proto::SpringUseRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000528A9E-0000000000528D61
int32_t __cdecl Robot::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>(
        Robot *const this,
        proto::TakeCityReputationExploreRewardReq *req,
        proto::TakeCityReputationExploreRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000527690-0000000000527953
int32_t __cdecl Robot::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>(
        Robot *const this,
        proto::TakeCityReputationLevelRewardReq *req,
        proto::TakeCityReputationLevelRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000527F8E-0000000000528251
int32_t __cdecl Robot::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>(
        Robot *const this,
        proto::TakeCityReputationParentQuestReq *req,
        proto::TakeCityReputationParentQuestRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051F64A-000000000051F90D
int32_t __cdecl Robot::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>(
        Robot *const this,
        proto::TakeCompoundOutputReq *req,
        proto::TakeCompoundOutputRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000529026-00000000005292E9
int32_t __cdecl Robot::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>(
        Robot *const this,
        proto::TakeOfferingLevelRewardReq *req,
        proto::TakeOfferingLevelRewardRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000519B54-0000000000519E17
int32_t __cdecl Robot::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>(
        Robot *const this,
        proto::TakeoffEquipReq *req,
        proto::TakeoffEquipRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000052ADEA-000000000052B0AD
int32_t __cdecl Robot::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>(
        Robot *const this,
        proto::TryEnterHomeReq *req,
        proto::TryEnterHomeRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051BFA6-000000000051C269
int32_t __cdecl Robot::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>(
        Robot *const this,
        proto::UnlockAvatarTalentReq *req,
        proto::UnlockAvatarTalentRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 000000000051EB2E-000000000051EDF1
int32_t __cdecl Robot::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>(
        Robot *const this,
        proto::UnlockTransPointReq *req,
        proto::UnlockTransPointRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 0000000000518A04-0000000000518CC7
int32_t __cdecl Robot::sendProto<proto::UseItemReq,proto::UseItemRsp>(
        Robot *const this,
        proto::UseItemReq *req,
        proto::UseItemRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::UseItemReq,proto::UseItemRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::UseItemReq,proto::UseItemRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 32: range 00000000005197AC-0000000000519A6F
int32_t __cdecl Robot::sendProto<proto::WearEquipReq,proto::WearEquipRsp>(
        Robot *const this,
        proto::WearEquipReq *req,
        proto::WearEquipRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::WearEquipReq,proto::WearEquipRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::WearEquipReq,proto::WearEquipRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 74: range 000000000051276A-0000000000512A2D
int32_t __cdecl Robot::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>(
        Robot *const this,
        proto::GetPlayerTokenReq *req,
        proto::GetPlayerTokenRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 74: range 00000000005147E0-0000000000514AA3
int32_t __cdecl Robot::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>(
        Robot *const this,
        proto::LeaveSceneReq *req,
        proto::LeaveSceneRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 74: range 00000000005202E8-00000000005205AB
int32_t __cdecl Robot::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>(
        Robot *const this,
        proto::PersonalSceneJumpReq *req,
        proto::PersonalSceneJumpRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 74: range 0000000000512A80-0000000000512D43
int32_t __cdecl Robot::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>(
        Robot *const this,
        proto::PlayerLogoutReq *req,
        proto::PlayerLogoutRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 74: range 0000000000513872-0000000000513B35
int32_t __cdecl Robot::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>(
        Robot *const this,
        proto::SetPlayerBornDataReq *req,
        proto::SetPlayerBornDataRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  common::minet::PacketSenderCoroExec *p_timeout_ms; // rdi
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 ret:39";
  *(_QWORD *)(v3 + 16) = Robot::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/robot/robot.hpp",
      "sendProto",
      36);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v15, (const char (*)[23])"coro_exec_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    p_timeout_ms = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->conf_.timeout_ms >> 3) + 0x7FFF8000) )
    {
      p_timeout_ms = (common::minet::PacketSenderCoroExec *)&this->conf_.timeout_ms;
      __asan_report_load4(&this->conf_.timeout_ms);
    }
    *(_DWORD *)(v3 + 32) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>(
                             p_timeout_ms,
                             req,
                             rsp_0,
                             this->conf_.timeout_ms);
    if ( *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/robot/robot.hpp",
        "sendProto",
        42);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v15,
             (const char (*)[29])"sendProto fails, is_timeout:");
      v9 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v9);
      v11 = common::milog::MiLogStream::operator<<(v8, isTimeout);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v3 )
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
