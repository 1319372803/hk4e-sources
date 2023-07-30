// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/include/packet_utils.h

// Line 34: range 000000000C7AEC56-000000000C7AECA2
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::AddGateserverNotify>(
        const proto::AddGateserverNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x2733u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C2FAE-000000000C7C2FFA
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::GetPlayerTokenRsp>(
        const proto::GetPlayerTokenRsp *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0xC6u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7D4E88-000000000C7D4ED4
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PacketFreqencyExceedNotify>(
        const proto::PacketFreqencyExceedNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x2713u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C03EC-000000000C7C0438
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PathfindingPingNotify>(
        const proto::PathfindingPingNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x91Fu, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7BFB6E-000000000C7BFBBA
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PingRsp>(const proto::PingRsp *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x15u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C400B-000000000C7C4057
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PlayerLoginReq>(
        const proto::PlayerLoginReq *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x70u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C3572-000000000C7C35BE
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PlayerLoginRsp>(
        const proto::PlayerLoginRsp *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x87u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C1441-000000000C7C148D
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::SavePlayerExtraBinDataNotify>(
        const proto::SavePlayerExtraBinDataNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x27A4u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C4AA8-000000000C7C4AF4
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::ServerDisconnectClientNotify>(
        const proto::ServerDisconnectClientNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0xB8u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 34: range 000000000C7C0439-000000000C7C0485
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::ToTheMoonPingNotify>(
        const proto::ToTheMoonPingNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x17E0u, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 74: range 000000000C7BE940-000000000C7BE98C
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::PlayerDisconnectNotify>(
        const proto::PlayerDisconnectNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x27CEu, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};

// Line 294: range 000000000C7D4903-000000000C7D494F
common::minet::PacketPtr __cdecl common::minet::PacketUtils::createPacket<proto::ServerLogNotify>(
        const proto::ServerLogNotify *proto)
{
  const google::protobuf::Message *v1; // rsi
  const google::protobuf::Message *v2; // rdx
  common::minet::PacketPtr result; // rax

  v2 = v1;
  if ( *(_WORD *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_store16(proto, v1);
  result = common::minet::PacketUtils::createPacket(0x1Fu, v2);
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)proto;
  return result;
};
