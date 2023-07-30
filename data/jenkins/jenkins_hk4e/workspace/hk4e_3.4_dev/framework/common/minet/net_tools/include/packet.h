// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/include/packet.h

// Line 78: range 000000000C636A18-000000000C636A60
uint16_t __cdecl common::minet::Packet::getCmdId(const common::minet::Packet *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->cmd_id_);
  }
  return this->cmd_id_;
};

// Line 111: range 000000000C66088A-000000000C660B75
int32_t __cdecl common::minet::Packet::getProto<proto::AddGateserverNotify>(
        common::minet::Packet *const this,
        proto::AddGateserverNotify *proto)
{
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  char v4; // al
  const char *v5; // rbx
  __int64 v6; // rcx
  std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::shared_ptr<proto::AddGateserverNotify> v8; // [rsp+10h] [rbp-70h] BYREF
  std::shared_ptr<proto::AddGateserverNotify> __r; // [rsp+20h] [rbp-60h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-50h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->cmd_id_);
  }
  if ( this->cmd_id_ == 10035 )
  {
    if ( std::operator==<google::protobuf::Message>(0LL, &this->proto_ptr_)
      && ((common::tools::perf::make_shared<proto::AddGateserverNotify>(),
           std::dynamic_pointer_cast<google::protobuf::Message,proto::AddGateserverNotify>(&__r),
           std::shared_ptr<google::protobuf::Message>::operator=(
             &this->proto_ptr_,
             (std::shared_ptr<google::protobuf::Message> *)&__r),
           std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r),
           std::shared_ptr<proto::AddGateserverNotify>::~shared_ptr(&v8),
           !std::operator==<google::protobuf::Message>(&this->proto_ptr_, 0LL))
       && (v3 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->proto_ptr_),
           (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3, &this->recv_str_) == 1)
        ? (v4 = 0)
        : (v4 = 1),
          v4) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/common/minet/net_tools/include/packet.h",
        "getProto",
        123);
      common::minet::Packet::encodeShortStringToBase64((std::string *)&v11, &this->recv_str_);
      v5 = (const char *)std::string::c_str(&v11);
      v6 = std::string::size(&this->recv_str_);
      if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_load2(&this->cmd_id_);
      }
      common::milog::MiLogStream::operator()(
        &v10,
        "ParseFromString cmd_id: %u fails, len: %lu, base64: %s",
        this->cmd_id_,
        v6,
        v5);
      std::string::~string(&v11);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->proto_ptr_);
      proto::AddGateserverNotify::MergeFrom(proto, v7);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/common/minet/net_tools/include/packet.h",
      "getProto",
      115);
    common::milog::MiLogStream::operator()(&v11, "T::CMD_ID %u != cmd_id_: %u", 10035LL, this->cmd_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
};

// Line 270: range 000000000C636A62-000000000C636A8B
void __cdecl common::minet::Packet::setRecvTimeMs(common::minet::Packet *const this, uint64_t recv_time_ms)
{
  proto::PacketHead::set_recv_time_ms(&this->head_, recv_time_ms);
};

// Line 273: range 000000000C636A8C-000000000C636AA9
uint32_t __cdecl common::minet::Packet::getSenderLoad(const common::minet::Packet *const this)
{
  return proto::PacketHead::sender_load(&this->head_);
};

// Line 283: range 000000000C636AAA-000000000C636AC7
uint32_t __cdecl common::minet::Packet::getTargetService(const common::minet::Packet *const this)
{
  return proto::PacketHead::target_service(&this->head_);
};
