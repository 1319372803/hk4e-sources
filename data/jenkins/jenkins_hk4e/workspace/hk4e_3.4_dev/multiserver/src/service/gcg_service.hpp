// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/gcg_service.hpp

// Line 18: range 000000000DF54860-000000000DF54A81
int32_t __cdecl GCGService::broadcastToAllThread<proto::ReloadConfigNotify>(
        GCGService *const this,
        std::shared_ptr<proto::ReloadConfigNotify> *p_proto_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::minet::Packet *v5; // rax
  common::minet::Packet *v6; // rax
  common::minet::PacketPtr v7; // rdi
  int32_t result; // eax
  uint32_t thread_index; // [rsp+1Ch] [rbp-74h]
  std::shared_ptr<proto::ReloadConfigNotify> __r; // [rsp+20h] [rbp-70h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:22";
  *(_QWORD *)(v2 + 16) = GCGService::broadcastToAllThread<proto::ReloadConfigNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  for ( thread_index = 0; ; ++thread_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( thread_index >= this->thread_num_ )
      break;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ReloadConfigNotify>(&__r);
    common::minet::PacketUtils::createPacket(v2 + 32, (common::minet::ConstMessagePtr)__PAIR128__(&__r, 10031LL));
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    if ( std::operator!=<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v5, 0x14u);
      v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setMultiThreadIndex(v6, thread_index);
    }
    v7._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 + 32);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)&__r,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v7._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&__r;
    ServiceBox::pushPacketToService(v7);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  result = 0;
  if ( v12 == (char *)v2 )
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
