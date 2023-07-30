// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/include/pb/packet_head.pb.h

// Line 165: range 000000000C829BAE-000000000C829BC0
proto::PacketHead *__fastcall proto::PacketHead::New(const proto::PacketHead *const this)
{
  return proto::PacketHead::New(this, 0LL);
};

// Line 182: range 000000000C81FFDE-000000000C820046
int __fastcall proto::PacketHead::GetCachedSize(const proto::PacketHead *const this)
{
  char v1; // cl

  v1 = *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 4) & 7) + 3) >= v1 && v1 )
  {
    __asan_report_load4(&this->_cached_size_);
    JUMPOUT(0xC820017LL);
  }
  return this->_cached_size_;
};

// Line 483: range 000000000C822C0E-000000000C822C20
proto::DebugNotify *__fastcall proto::DebugNotify::New(const proto::DebugNotify *const this)
{
  return proto::DebugNotify::New(this, 0LL);
};

// Line 835: range 000000000C636940-000000000C63698C
google::protobuf::uint32 __cdecl proto::PacketHead::sender_load(const proto::PacketHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sender_load_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sender_load_);
  }
  return this->sender_load_;
};

// Line 916: range 000000000C63698E-000000000C6369DA
google::protobuf::uint32 __cdecl proto::PacketHead::target_service(const proto::PacketHead *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_service_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_service_);
  }
  return this->target_service_;
};

// Line 1472: range 000000000C6368F6-000000000C63693E
void __cdecl proto::PacketHead::set_recv_time_ms(proto::PacketHead *const this, google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->recv_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->recv_time_ms_, value);
  this->recv_time_ms_ = value;
};
