// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/include/kcp_session.h

// Line 33: range 000000000C79DE6E-000000000C79DEB5
uint32_t __cdecl common::minet::KcpSession::getSessionId(common::minet::KcpSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->session_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->session_id_);
  }
  return this->session_id_;
};

// Line 35: range 000000000C79DEB6-000000000C79DF05
uint32_t __cdecl common::minet::KcpSession::getToken(common::minet::KcpSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->token_);
  }
  return this->token_;
};

// Line 37: range 000000000C79DF06-000000000C79DF40
uint32_t __cdecl common::minet::KcpSession::getTimeOutMs(common::minet::KcpSession *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->timeout_ms_);
  return this->timeout_ms_;
};

// Line 39: range 000000000C79DF42-000000000C79DF82
void __cdecl common::minet::KcpSession::setTimeOutMs(common::minet::KcpSession *const this, uint32_t timeout_ms)
{
  uint64_t v2; // rdx

  v2 = timeout_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->timeout_ms_ = v2;
};

// Line 74: range 000000000C7BEB4C-000000000C7BEDD5
int32_t __cdecl common::minet::KcpSession::sendProto<proto::ServerLogNotify>(
        common::minet::KcpSession *const this,
        proto::ServerLogNotify *proto,
        common::minet::PacketPtr *p_recv)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t v6; // r14d
  common::minet::Packet *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(common::minet::KcpSession *const, std::shared_ptr<common::minet::Packet> *); // r14
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 packet_ptr:120";
  *(_QWORD *)(v3 + 16) = common::minet::KcpSession::sendProto<proto::ServerLogNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ServerLogNotify>((const proto::ServerLogNotify *)(v3 + 32));
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/minet/kcp_server/include/kcp_session.h",
      "sendProto",
      123);
    common::milog::MiLogStream::operator()(&v14, "createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    if ( std::operator!=<common::minet::Packet>(p_recv, 0LL) )
    {
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_recv);
      common::minet::Packet::copyHead(v7, v8);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned __int64)(this->_vptr_KcpSession + 5);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(this->_vptr_KcpSession + 5);
    v10 = *(__int64 (__fastcall **)(common::minet::KcpSession *const, std::shared_ptr<common::minet::Packet> *))v9;
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v13, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v6 = v10(this, &v13);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v13);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  result = v6;
  if ( v15 == (char *)v3 )
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
