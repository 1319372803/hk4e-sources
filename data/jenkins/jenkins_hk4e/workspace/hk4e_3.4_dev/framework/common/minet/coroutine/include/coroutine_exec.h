// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/coroutine/include/coroutine_exec.h

// Line 34: range 00000000004ADEFE-00000000004ADF46
bool __cdecl common::minet::TimeoutCoroExec::isTimeout(common::minet::TimeoutCoroExec *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_time_out_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_time_out_);
  return this->is_time_out_;
};

// Line 63: range 00000000004AE028-00000000004AE057
common::minet::PacketPtr __cdecl common::minet::PacketSenderCoroExec::getRspPacketPtr(
        common::minet::PacketSenderCoroExec *const this)
{
  const std::shared_ptr<common::minet::Packet> *v1; // rsi
  common::minet::PacketPtr result; // rax

  std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)this, v1 + 9);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 75: range 00000000005C5F00-00000000005C640B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerEnterDungeonReq *req,
        proto::PlayerEnterDungeonRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerEnterDungeonReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerEnterDungeonRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D97DA-00000000005D9CE5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AcceptCityReputationRequestReq *req,
        proto::AcceptCityReputationRequestRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AcceptCityReputationRequestReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AcceptCityReputationRequestRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D6372-00000000005D687D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ActivityTakeWatcherRewardReq *req,
        proto::ActivityTakeWatcherRewardRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ActivityTakeWatcherRewardReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ActivityTakeWatcherRewardRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C43C0-00000000005C48CB
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AddQuestContentProgressReq *req,
        proto::AddQuestContentProgressRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AddQuestContentProgressReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AddQuestContentProgressRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DD0BE-00000000005DD5C9
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AdjustWorldLevelReq *req,
        proto::AdjustWorldLevelRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AdjustWorldLevelReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AdjustWorldLevelRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D46A2-00000000005D4BAD
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AskAddFriendReq *req,
        proto::AskAddFriendRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AskAddFriendReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AskAddFriendRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CAC2C-00000000005CB137
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AvatarChangeElementTypeReq *req,
        proto::AvatarChangeElementTypeRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AvatarChangeElementTypeReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AvatarChangeElementTypeRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C0D1E-00000000005C1229
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AvatarDieAnimationEndReq *req,
        proto::AvatarDieAnimationEndRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AvatarDieAnimationEndReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AvatarDieAnimationEndRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C6E24-00000000005C732F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::AvatarPromoteReq *req,
        proto::AvatarPromoteRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::AvatarPromoteReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::AvatarPromoteRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DD5CA-00000000005DDAD5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::BackMyWorldReq *req,
        proto::BackMyWorldRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::BackMyWorldReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::BackMyWorldRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D5E66-00000000005D6371
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::BuyGoodsReq *req,
        proto::BuyGoodsRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::BuyGoodsReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::BuyGoodsRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D9CE6-00000000005DA1F1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::CancelCityReputationRequestReq *req,
        proto::CancelCityReputationRequestRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::CancelCityReputationRequestReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::CancelCityReputationRequestRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C07B0-00000000005C0CBB
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ChangeAvatarReq *req,
        proto::ChangeAvatarRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ChangeAvatarReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ChangeAvatarRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BDFB6-00000000005BE4C1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ChangeGameTimeReq *req,
        proto::ChangeGameTimeRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ChangeGameTimeReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ChangeGameTimeRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C0274-00000000005C077F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ChooseCurAvatarTeamReq *req,
        proto::ChooseCurAvatarTeamRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ChooseCurAvatarTeamReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ChooseCurAvatarTeamRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CF9EE-00000000005CFEF9
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::CombineReq,proto::CombineRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::CombineReq *req,
        proto::CombineRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::CombineReq,proto::CombineRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::CombineReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::CombineRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CEC76-00000000005CF181
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::DoGachaReq,proto::DoGachaRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::DoGachaReq *req,
        proto::DoGachaRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::DoGachaReq,proto::DoGachaRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::DoGachaReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::DoGachaRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C2296-00000000005C27A1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::DropItemReq,proto::DropItemRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::DropItemReq *req,
        proto::DropItemRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::DropItemReq,proto::DropItemRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::DropItemReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::DropItemRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C783C-00000000005C7D47
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::DungeonDieOptionReq *req,
        proto::DungeonDieOptionRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::DungeonDieOptionReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::DungeonDieOptionRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C5802-00000000005C5D0D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::DungeonEntryInfoReq *req,
        proto::DungeonEntryInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::DungeonEntryInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::DungeonEntryInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C6918-00000000005C6E23
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::DungeonWayPointActivateReq *req,
        proto::DungeonWayPointActivateRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::DungeonWayPointActivateReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::DungeonWayPointActivateRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DCBB2-00000000005DD0BD
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::EnterMechanicusDungeonReq *req,
        proto::EnterMechanicusDungeonRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::EnterMechanicusDungeonReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::EnterMechanicusDungeonRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BB318-00000000005BB823
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::EnterSceneDoneReq *req,
        proto::EnterSceneDoneRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::EnterSceneDoneReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::EnterSceneDoneRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BA900-00000000005BAE0B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::EnterSceneReadyReq *req,
        proto::EnterSceneReadyRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::EnterSceneReadyReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::EnterSceneReadyRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CD23E-00000000005CD749
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ExecuteGadgetLuaReq *req,
        proto::ExecuteGadgetLuaRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ExecuteGadgetLuaReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ExecuteGadgetLuaRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C9D08-00000000005CA213
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ExecuteGroupTriggerReq *req,
        proto::ExecuteGroupTriggerRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ExecuteGroupTriggerReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ExecuteGroupTriggerRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D2D66-00000000005D3271
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::FocusAvatarReq *req,
        proto::FocusAvatarRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::FocusAvatarReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::FocusAvatarRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CF182-00000000005CF68D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GachaWishReq,proto::GachaWishRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GachaWishReq *req,
        proto::GachaWishRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GachaWishReq,proto::GachaWishRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GachaWishReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GachaWishRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C28B0-00000000005C2DBB
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GadgetInteractReq *req,
        proto::GadgetInteractRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GadgetInteractReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GadgetInteractRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D377E-00000000005D3C89
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetActivityInfoReq *req,
        proto::GetActivityInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetActivityInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetActivityInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D3272-00000000005D377D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetActivityScheduleReq *req,
        proto::GetActivityScheduleRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetActivityScheduleReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetActivityScheduleRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D82F4-00000000005D87FF
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetCityReputationInfoReq *req,
        proto::GetCityReputationInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetCityReputationInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetCityReputationInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DA1F2-00000000005DA6FD
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetCityReputationMapInfoReq *req,
        proto::GetCityReputationMapInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetCityReputationMapInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetCityReputationMapInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CC718-00000000005CCC23
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetCompoundDataReq *req,
        proto::GetCompoundDataRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetCompoundDataReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetCompoundDataRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CE76A-00000000005CEC75
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetGachaInfoReq *req,
        proto::GetGachaInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetGachaInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetGachaInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C9178-00000000005C9683
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetOnlinePlayerListReq *req,
        proto::GetOnlinePlayerListRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetOnlinePlayerListReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetOnlinePlayerListRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D4196-00000000005D46A1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetPlayerFriendListReq *req,
        proto::GetPlayerFriendListRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetPlayerFriendListReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetPlayerFriendListRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005B925C-00000000005B9767
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetPlayerTokenReq *req,
        proto::GetPlayerTokenRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetPlayerTokenReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetPlayerTokenRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C9684-00000000005C9B8F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetQuestTalkHistoryReq *req,
        proto::GetQuestTalkHistoryRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetQuestTalkHistoryReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetQuestTalkHistoryRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BF59A-00000000005BFAA5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetSceneAreaReq *req,
        proto::GetSceneAreaRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetSceneAreaReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetSceneAreaRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C122A-00000000005C1735
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetSceneNpcPositionReq *req,
        proto::GetSceneNpcPositionRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetSceneNpcPositionReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetSceneNpcPositionRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BE4C2-00000000005BE9CD
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetScenePointReq *req,
        proto::GetScenePointReq *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetScenePointReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetScenePointReq>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D584C-00000000005D5D57
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetShopReq,proto::GetShopRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetShopReq *req,
        proto::GetShopRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetShopReq,proto::GetShopRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetShopReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetShopRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D5340-00000000005D584B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GetShopmallDataReq *req,
        proto::GetShopmallDataRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GetShopmallDataReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GetShopmallDataRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BC23C-00000000005BC747
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::GmTalkReq,proto::GmTalkRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::GmTalkReq *req,
        proto::GmTalkRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::GmTalkReq,proto::GmTalkRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::GmTalkReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::GmTalkRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005E09BA-00000000005E0EC5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeAvatarSummonEventReq *req,
        proto::HomeAvatarSummonEventRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeAvatarSummonEventReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeAvatarSummonEventRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DFE90-00000000005E039B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeAvatarTalkReq *req,
        proto::HomeAvatarTalkRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeAvatarTalkReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeAvatarTalkRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DE342-00000000005DE84D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeChangeEditModeReq *req,
        proto::HomeChangeEditModeRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeChangeEditModeReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeChangeEditModeRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DE84E-00000000005DED59
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeChangeModuleReq *req,
        proto::HomeChangeModuleRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeChangeModuleReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeChangeModuleRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DF984-00000000005DFE8F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeChooseModuleReq *req,
        proto::HomeChooseModuleRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeChooseModuleReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeChooseModuleRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DED5A-00000000005DF265
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeGetArrangementInfoReq *req,
        proto::HomeGetArrangementInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeGetArrangementInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeGetArrangementInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DF478-00000000005DF983
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeUpdateArrangementInfoReq *req,
        proto::HomeUpdateArrangementInfoRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeUpdateArrangementInfoReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeUpdateArrangementInfoRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CFEFA-00000000005D0405
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::ItemGivingReq *req,
        proto::ItemGivingRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::ItemGivingReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::ItemGivingRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D1870-00000000005D1D7B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::JoinPlayerSceneReq *req,
        proto::JoinPlayerSceneRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::JoinPlayerSceneReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::JoinPlayerSceneRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BBD30-00000000005BC23B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::LeaveSceneReq *req,
        proto::LeaveSceneRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::LeaveSceneReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::LeaveSceneRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CA214-00000000005CA71F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::LevelupCityReq *req,
        proto::LevelupCityRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::LevelupCityReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::LevelupCityRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D7DE8-00000000005D82F3
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::McoinExchangeHcoinReq *req,
        proto::McoinExchangeHcoinRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::McoinExchangeHcoinReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::McoinExchangeHcoinRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DC6A6-00000000005DCBB1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::MechanicusLevelupGearReq *req,
        proto::MechanicusLevelupGearRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::MechanicusLevelupGearReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::MechanicusLevelupGearRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DC19A-00000000005DC6A5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::MechanicusUnlockGearReq *req,
        proto::MechanicusUnlockGearRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::MechanicusUnlockGearReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::MechanicusUnlockGearRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D78DC-00000000005D7DE7
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::MpPlayGuestReplyInviteReq *req,
        proto::MpPlayGuestReplyInviteRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::MpPlayGuestReplyInviteReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::MpPlayGuestReplyInviteRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D687E-00000000005D6D89
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::MpPlayOwnerCheckReq *req,
        proto::MpPlayOwnerCheckRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::MpPlayOwnerCheckReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::MpPlayOwnerCheckRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D73D0-00000000005D78DB
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::MpPlayOwnerStartInviteReq *req,
        proto::MpPlayOwnerStartInviteRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::MpPlayOwnerStartInviteReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::MpPlayOwnerStartInviteRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BDAAA-00000000005BDFB5
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::NpcTalkReq *req,
        proto::NpcTalkRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::NpcTalkReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::NpcTalkRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005B8BE4-00000000005B90EF
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PingReq,proto::PingRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PingReq *req,
        proto::PingRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PingReq,proto::PingRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PingReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PingRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D1364-00000000005D186F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerApplyEnterMpReq *req,
        proto::PlayerApplyEnterMpRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerApplyEnterMpReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerApplyEnterMpRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CC20C-00000000005CC717
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerCompoundMaterialReq *req,
        proto::PlayerCompoundMaterialRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerCompoundMaterialReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerCompoundMaterialRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005B9E82-00000000005BA38D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerLoginReq *req,
        proto::PlayerLoginRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerLoginReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerLoginRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005B9768-00000000005B9C73
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerLogoutReq *req,
        proto::PlayerLogoutRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerLogoutReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerLogoutRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DAC0A-00000000005DB115
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerOfferingReq *req,
        proto::PlayerOfferingRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerOfferingReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerOfferingRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C640C-00000000005C6917
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerQuitDungeonReq *req,
        proto::PlayerQuitDungeonRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerQuitDungeonReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerQuitDungeonRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BB824-00000000005BBD2F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PostEnterSceneReq *req,
        proto::PostEnterSceneRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PostEnterSceneReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PostEnterSceneRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CE25E-00000000005CE769
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::QuestCreateEntityReq *req,
        proto::QuestCreateEntityRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::QuestCreateEntityReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::QuestCreateEntityRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D4E34-00000000005D533F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::RechargeReq,proto::RechargeRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::RechargeReq *req,
        proto::RechargeRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::RechargeReq,proto::RechargeRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::RechargeReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::RechargeRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C8760-00000000005C8C6B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::RefreshBackgroundAvatarReq *req,
        proto::RefreshBackgroundAvatarRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::RefreshBackgroundAvatarReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::RefreshBackgroundAvatarRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C38E2-00000000005C3DED
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SceneEntityDrownReq *req,
        proto::SceneEntityDrownRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SceneEntityDrownReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SceneEntityDrownRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BAE0C-00000000005BB317
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SceneInitFinishReq *req,
        proto::SceneInitFinishRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SceneInitFinishReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SceneInitFinishRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005BF08E-00000000005BF599
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SceneTransToPointReq *req,
        proto::SceneTransToPointRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SceneTransToPointReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SceneTransToPointRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D3C8A-00000000005D4195
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SeaLampFlyLampReq *req,
        proto::SeaLampFlyLampRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SeaLampFlyLampReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SeaLampFlyLampRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C8C6C-00000000005C9177
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SelectWorktopOptionReq *req,
        proto::SelectWorktopOptionRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SelectWorktopOptionReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SelectWorktopOptionRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CA720-00000000005CAC2B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SetPlayerNameReq *req,
        proto::SetPlayerNameRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SetPlayerNameReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SetPlayerNameRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C8254-00000000005C875F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SetPlayerPropReq *req,
        proto::SetPlayerPropRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SetPlayerPropReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SetPlayerPropRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DB622-00000000005DBB2D
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SetWidgetSlotReq *req,
        proto::SetWidgetSlotRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SetWidgetSlotReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SetWidgetSlotRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C7D48-00000000005C8253
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SpringUseReq,proto::SpringUseRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SpringUseReq *req,
        proto::SpringUseRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SpringUseReq,proto::SpringUseRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SpringUseReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SpringUseRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DA6FE-00000000005DAC09
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeCityReputationExploreRewardReq *req,
        proto::TakeCityReputationExploreRewardRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeCityReputationExploreRewardReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeCityReputationExploreRewardRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D8800-00000000005D8D0B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeCityReputationLevelRewardReq *req,
        proto::TakeCityReputationLevelRewardRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeCityReputationLevelRewardReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeCityReputationLevelRewardRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005D92CE-00000000005D97D9
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeCityReputationParentQuestReq *req,
        proto::TakeCityReputationParentQuestRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeCityReputationParentQuestReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeCityReputationParentQuestRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005CCC24-00000000005CD12F
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeCompoundOutputReq *req,
        proto::TakeCompoundOutputRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeCompoundOutputReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeCompoundOutputRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DB116-00000000005DB621
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeOfferingLevelRewardReq *req,
        proto::TakeOfferingLevelRewardRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeOfferingLevelRewardReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeOfferingLevelRewardRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C32C8-00000000005C37D3
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TakeoffEquipReq *req,
        proto::TakeoffEquipRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TakeoffEquipReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TakeoffEquipRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005DDAD6-00000000005DDFE1
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::TryEnterHomeReq *req,
        proto::TryEnterHomeRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::TryEnterHomeReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::TryEnterHomeRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C7330-00000000005C783B
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::UnlockAvatarTalentReq *req,
        proto::UnlockAvatarTalentRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::UnlockAvatarTalentReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::UnlockAvatarTalentRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C1736-00000000005C1C41
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::UseItemReq,proto::UseItemRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::UseItemReq *req,
        proto::UseItemRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::UseItemReq,proto::UseItemRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::UseItemReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::UseItemRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 84: range 00000000005C2DBC-00000000005C32C7
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::WearEquipReq,proto::WearEquipRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::WearEquipReq *req,
        proto::WearEquipRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::WearEquipReq,proto::WearEquipRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::WearEquipReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::WearEquipRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 349: range 00000000005BA3F4-00000000005BA8FF
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SetPlayerBornDataReq *req,
        proto::SetPlayerBornDataRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SetPlayerBornDataReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SetPlayerBornDataRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 872: range 00000000005BFD68-00000000005C0273
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::SetUpAvatarTeamReq *req,
        proto::SetUpAvatarTeamRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::SetUpAvatarTeamReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::SetUpAvatarTeamRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 896: range 00000000005E04AE-00000000005E09B9
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::HomeAvatarRewardEventGetReq *req,
        proto::HomeAvatarRewardEventGetRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::HomeAvatarRewardEventGetReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::HomeAvatarRewardEventGetRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1021: range 00000000005CD9A8-00000000005CDEB3
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PersonalSceneJumpReq *req,
        proto::PersonalSceneJumpRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PersonalSceneJumpReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PersonalSceneJumpRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1021: range 00000000005CB8AE-00000000005CBDB9
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::UnlockTransPointReq *req,
        proto::UnlockTransPointRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::UnlockTransPointReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::UnlockTransPointRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1037: range 00000000005D0E58-00000000005D1363
int32_t __cdecl common::minet::PacketSenderCoroExec::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>(
        common::minet::PacketSenderCoroExec *const this,
        proto::PlayerChatReq *req,
        proto::PlayerChatRsp *rsp_0,
        uint32_t timeout_ms)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  common::minet::Packet *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::minet::Packet *v14; // rdx
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 ret:94 64 16 17 req_packet_ptr:87";
  *(_QWORD *)(v4 + 16) = common::minet::PacketSenderCoroExec::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_out_);
  }
  this->time_out_ = timeout_ms;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/coroutine/include/coroutine_exec.h",
      "sendProto",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v21,
           (const char (*)[30])"create packet fails, coro_id:");
    val = common::minet::TimeoutCoroExec::getCoroId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 1;
  }
  else
  {
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    common::minet::Packet::setProto<proto::PlayerChatReq>(v9, req);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 64));
    *(_DWORD *)(v4 + 48) = common::minet::PacketSenderCoroExec::sendPacket(
                             this,
                             (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        97);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"sendProto fails, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])", coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = *(_DWORD *)(v4 + 48);
    }
    else if ( std::operator==<common::minet::Packet>(&this->rsp_packet_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/coroutine/include/coroutine_exec.h",
        "sendProto",
        102);
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v21,
              (const char (*)[33])"rsp_packet_ptr is null, coro_id:");
      val = common::minet::TimeoutCoroExec::getCoroId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->rsp_packet_ptr_);
      if ( common::minet::Packet::getProto<proto::PlayerChatRsp>(v14, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "../framework/common/minet/coroutine/include/coroutine_exec.h",
          "sendProto",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v21,
                (const char (*)[25])"getProto fails, coro_id:");
        val = common::minet::TimeoutCoroExec::getCoroId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 64));
  result = v8;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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
