// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_offline_msg_comp.cpp

// Line 66: range 0000000013DAF4EC-0000000013DAF6CF
int32_t __cdecl PlayerOfflineMsgComp::fromBin(
        PlayerOfflineMsgComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ebx
  __int64 v5; // rdx
  char v6; // al
  const proto::VectorBin *v7; // rax
  int32_t idx; // [rsp+1Ch] [rbp-34h]
  const proto::PlayerOfflineMsgCompBin *proto_comp; // [rsp+20h] [rbp-30h]
  const proto::OfflineMsgExeBin *msg_bin; // [rsp+28h] [rbp-28h]
  Vector3 v12; // [rsp+34h] [rbp-1Ch] BYREF

  proto_comp = proto::PlayerDataBin::offline_msg_bin(player_data_bin);
  v2 = proto::PlayerOfflineMsgCompBin::index(proto_comp);
  v3 = *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(player_data_bin) = v3 != 0;
    __asan_report_store4(&this->index_, player_data_bin, v2);
  }
  this->index_ = v2;
  std::vector<OfflineMsgExeInfo>::clear(&this->next_offline_msg_vec_);
  std::map<unsigned int,unsigned int>::clear(&this->remain_del_item_map_);
  for ( idx = 0; idx < proto::PlayerOfflineMsgCompBin::next_offline_msg_list_size(proto_comp); ++idx )
  {
    msg_bin = proto::PlayerOfflineMsgCompBin::next_offline_msg_list(proto_comp, idx);
    v4 = proto::OfflineMsgExeBin::exe_times(msg_bin);
    player_data_bin = (const proto::PlayerDataBin *)proto::OfflineMsgExeBin::msg(msg_bin);
    PlayerOfflineMsgComp::addNextOfflineMsg(this, (const proto::OfflineMsgBin *)player_data_bin, v4);
  }
  v5 = proto::PlayerOfflineMsgCompBin::born_scene_id(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(player_data_bin) = v6 != 0;
    __asan_report_store4(&this->born_scene_id_, player_data_bin, v5);
  }
  this->born_scene_id_ = v5;
  v7 = proto::PlayerOfflineMsgCompBin::born_pos(proto_comp);
  Vector3::Vector3(&v12, v7);
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos_, 12LL);
  }
  this->born_pos_ = v12;
  return 0;
};

// Line 85: range 0000000013DAF6D0-0000000013DAF886
int32_t __cdecl PlayerOfflineMsgComp::toBin(PlayerOfflineMsgComp *const this, proto::PlayerDataBin *player_data_bin)
{
  const OfflineMsgExeInfo *v2; // rbx
  proto::OfflineMsgBin *v3; // rax
  proto::VectorBin *v4; // rax
  std::vector<OfflineMsgExeInfo>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::vector<OfflineMsgExeInfo>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::PlayerOfflineMsgCompBin *proto_comp; // [rsp+20h] [rbp-30h]
  std::vector<OfflineMsgExeInfo> *__for_range; // [rsp+28h] [rbp-28h]
  const OfflineMsgExeInfo *msg_info; // [rsp+30h] [rbp-20h]
  proto::OfflineMsgExeBin *msg_bin; // [rsp+38h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_offline_msg_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->index_);
  }
  proto::PlayerOfflineMsgCompBin::set_index(proto_comp, this->index_);
  __for_range = &this->next_offline_msg_vec_;
  __for_begin._M_current = std::vector<OfflineMsgExeInfo>::begin(&this->next_offline_msg_vec_)._M_current;
  __for_end._M_current = std::vector<OfflineMsgExeInfo>::end(&this->next_offline_msg_vec_)._M_current;
  while ( __gnu_cxx::operator!=<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>(&__for_begin, &__for_end) )
  {
    msg_info = __gnu_cxx::__normal_iterator<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>::operator*(&__for_begin);
    msg_bin = proto::PlayerOfflineMsgCompBin::add_next_offline_msg_list(proto_comp);
    v2 = msg_info;
    v3 = proto::OfflineMsgExeBin::mutable_msg(msg_bin);
    proto::OfflineMsgBin::operator=(v3, &v2->msg);
    if ( *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&msg_info->exe_times);
    }
    proto::OfflineMsgExeBin::set_exe_times(msg_bin, msg_info->exe_times);
    __gnu_cxx::__normal_iterator<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->born_scene_id_);
  }
  proto::PlayerOfflineMsgCompBin::set_born_scene_id(proto_comp, this->born_scene_id_);
  v4 = proto::PlayerOfflineMsgCompBin::mutable_born_pos(proto_comp);
  Vector3::toBin(&this->born_pos_, v4);
  return 0;
};

// Line 102: range 0000000013DAF888-0000000013DAF8C8
int32_t __cdecl PlayerOfflineMsgComp::onLogin(PlayerOfflineMsgComp *const this, bool is_new_player)
{
  PlayerOfflineMsgComp::exeNextOfflineMsgVec(this);
  PlayerOfflineMsgComp::removeOfflineMsgRedisData(this);
  PlayerOfflineMsgComp::getOfflineMsgRedisData(this, 1);
  return 0;
};

// Line 113: range 0000000013DAF8CA-0000000013DAFB22
void __cdecl PlayerOfflineMsgComp::exeNextOfflineMsgVec(PlayerOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<OfflineMsgExeInfo>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<OfflineMsgExeInfo>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::vector<OfflineMsgExeInfo> *__for_range; // [rsp+20h] [rbp-90h]
  OfflineMsgExeInfo *msg_info; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 msg_vec:114";
  *(_QWORD *)(v1 + 16) = PlayerOfflineMsgComp::exeNextOfflineMsgVec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<OfflineMsgExeInfo>::vector((std::vector<OfflineMsgExeInfo> *const)(v1 + 32));
  std::swap<OfflineMsgExeInfo>((std::vector<OfflineMsgExeInfo> *)(v1 + 32), &this->next_offline_msg_vec_);
  std::vector<OfflineMsgExeInfo>::clear(&this->next_offline_msg_vec_);
  std::map<unsigned int,unsigned int>::clear(&this->remain_del_item_map_);
  __for_range = (std::vector<OfflineMsgExeInfo> *)(v1 + 32);
  __for_begin._M_current = std::vector<OfflineMsgExeInfo>::begin((std::vector<OfflineMsgExeInfo> *const)(v1 + 32))._M_current;
  __for_end._M_current = std::vector<OfflineMsgExeInfo>::end((std::vector<OfflineMsgExeInfo> *const)(v1 + 32))._M_current;
  while ( __gnu_cxx::operator!=<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>(&__for_begin, &__for_end) )
  {
    msg_info = __gnu_cxx::__normal_iterator<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>::operator*(&__for_begin);
    if ( PlayerOfflineMsgComp::exeOfflineMsg(this, &msg_info->msg) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&msg_info->exe_times >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&msg_info->exe_times);
      }
      PlayerOfflineMsgComp::addNextOfflineMsg(this, &msg_info->msg, msg_info->exe_times + 1);
    }
    __gnu_cxx::__normal_iterator<OfflineMsgExeInfo *,std::vector<OfflineMsgExeInfo>>::operator++(&__for_begin);
  }
  std::vector<OfflineMsgExeInfo>::~vector((std::vector<OfflineMsgExeInfo> *const)(v1 + 32));
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

// Line 129: range 0000000013DAFB24-0000000013DAFC8F
void __cdecl PlayerOfflineMsgComp::clear(PlayerOfflineMsgComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 notify:132";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::clear;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index_, v1, &this->index_);
  }
  this->index_ = 0;
  proto::ClearOfflineMsgNotify::ClearOfflineMsgNotify((proto::ClearOfflineMsgNotify *const)(v2 + 32));
  PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearOfflineMsgNotify>(
    this,
    (const proto::ClearOfflineMsgNotify *)(v2 + 32));
  proto::ClearOfflineMsgNotify::~ClearOfflineMsgNotify((proto::ClearOfflineMsgNotify *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 138: range 0000000013DAFC90-0000000013DAFCB3
int32_t __cdecl PlayerOfflineMsgComp::onNewOfflineMsgNotify(PlayerOfflineMsgComp *const this)
{
  PlayerOfflineMsgComp::getOfflineMsgRedisData(this, 0);
  return 0;
};

// Line 145: range 0000000013DAFCB4-0000000013DAFE71
void __cdecl PlayerOfflineMsgComp::removeOfflineMsgRedisData(PlayerOfflineMsgComp *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:150";
  *(_QWORD *)(v1 + 16) = PlayerOfflineMsgComp::removeOfflineMsgRedisData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->index_);
  }
  if ( this->index_ )
  {
    proto::RemoveOfflineMsgNotify::RemoveOfflineMsgNotify((proto::RemoveOfflineMsgNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->index_);
    }
    proto::RemoveOfflineMsgNotify::set_index((proto::RemoveOfflineMsgNotify *const)(v1 + 32), this->index_);
    PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveOfflineMsgNotify>(
      this,
      (const proto::RemoveOfflineMsgNotify *)(v1 + 32));
    proto::RemoveOfflineMsgNotify::~RemoveOfflineMsgNotify((proto::RemoveOfflineMsgNotify *const)(v1 + 32));
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

// Line 158: range 0000000013DAFE72-0000000013DAFFF8
void __cdecl PlayerOfflineMsgComp::getOfflineMsgRedisData(PlayerOfflineMsgComp *const this, bool is_login)
{
  proto::GetOfflineMsgReq *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (proto::GetOfflineMsgReq *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (proto::GetOfflineMsgReq *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 32 32 7 req:159";
  *(_QWORD *)&v2->index_ = PlayerOfflineMsgComp::getOfflineMsgRedisData;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::GetOfflineMsgReq::GetOfflineMsgReq(v2 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->index_);
  }
  proto::GetOfflineMsgReq::set_index(v2 + 1, this->index_);
  proto::GetOfflineMsgReq::set_is_login(v2 + 1, is_login);
  PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetOfflineMsgReq>(this, v2 + 1);
  proto::GetOfflineMsgReq::~GetOfflineMsgReq(v2 + 1);
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 166: range 0000000013EC83B8-0000000013EC880E
void __cdecl PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearOfflineMsgNotify>(
        PlayerOfflineMsgComp *const this,
        const proto::ClearOfflineMsgNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:168";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::ClearOfflineMsgNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::ClearOfflineMsgNotify>((const proto::ClearOfflineMsgNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      171);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
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
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 9u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        181);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v20,
              (const char (*)[24])"sendPacket fails, cmd: ");
      v16 = common::milog::MiLogStream::operator<<<proto::ClearOfflineMsgNotify_CmdId,(proto::ClearOfflineMsgNotify_CmdId*)0>(
              v15,
              &proto::ClearOfflineMsgNotify::CMD_ID);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 166: range 0000000013EC8C68-0000000013EC90BE
void __cdecl PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetOfflineMsgReq>(
        PlayerOfflineMsgComp *const this,
        const proto::GetOfflineMsgReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *OfflineMsgReq_Cmd; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:168";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::GetOfflineMsgReq>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::GetOfflineMsgReq>((const proto::GetOfflineMsgReq *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      171);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
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
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 9u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        181);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v20,
              (const char (*)[24])"sendPacket fails, cmd: ");
      OfflineMsgReq_Cmd = common::milog::MiLogStream::operator<<<proto::GetOfflineMsgReq_CmdId,(proto::GetOfflineMsgReq_CmdId*)0>(
                            v15,
                            &proto::GetOfflineMsgReq::CMD_ID);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
              OfflineMsgReq_Cmd,
              (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 166: range 0000000013EC8810-0000000013EC8C66
void __cdecl PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveOfflineMsgNotify>(
        PlayerOfflineMsgComp *const this,
        const proto::RemoveOfflineMsgNotify *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // r14
  unsigned __int64 v6; // rdx
  GameserverService *v7; // r14
  common::minet::Packet *v8; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  unsigned int (__fastcall *v13)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:168";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::sendProtoToOfflineMsgService<proto::RemoveOfflineMsgNotify>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket<proto::RemoveOfflineMsgNotify>((const proto::RemoveOfflineMsgNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "sendProtoToOfflineMsgService",
      171);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"createPacket fails");
    common::milog::MiLogStream::~MiLogStream(&v20);
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
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::minet::Packet::setUserId(v8, Uid);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::minet::Packet::setTargetService(v10, 9u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v12;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    v14 = v13(v11, &packet_ptr) != 0;
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "sendProtoToOfflineMsgService",
        181);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v20,
              (const char (*)[24])"sendPacket fails, cmd: ");
      v16 = common::milog::MiLogStream::operator<<<proto::RemoveOfflineMsgNotify_CmdId,(proto::RemoveOfflineMsgNotify_CmdId*)0>(
              v15,
              &proto::RemoveOfflineMsgNotify::CMD_ID);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 187: range 0000000013DAFFFA-0000000013DB07D6
int32_t __cdecl PlayerOfflineMsgComp::onGetOfflineMsgRsp(
        PlayerOfflineMsgComp *const this,
        const proto::GetOfflineMsgRsp *rsp_0)
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
  const proto::OfflineMsgBin *p_val; // rsi
  uint32_t v16; // ecx
  uint32_t v17; // r14d
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  __int64 v23; // rdx
  char v24; // al
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  unsigned int Uid; // [rsp+10h] [rbp-100h] BYREF
  int val; // [rsp+14h] [rbp-FCh] BYREF
  int32_t idx; // [rsp+18h] [rbp-F8h]
  uint32_t list_size; // [rsp+1Ch] [rbp-F4h]
  common::milog::MiLogStream v37; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 7 uid:188 48 48 7 msg:211";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::onGetOfflineMsgRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  if ( proto::GetOfflineMsgRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "onGetOfflineMsgRsp",
      191);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v38, (const char (*)[16])off_251599C0);
    val = proto::GetOfflineMsgRsp::retcode(rsp_0);
    v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = proto::GetOfflineMsgRsp::retcode(rsp_0);
  }
  else
  {
    list_size = proto::GetOfflineMsgRsp::offline_msg_list_size(rsp_0);
    if ( list_size )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->index_);
      }
      index = this->index_;
      if ( index == proto::GetOfflineMsgRsp::last_index(rsp_0) )
      {
        for ( idx = 0; list_size > idx; ++idx )
        {
          p_val = proto::GetOfflineMsgRsp::offline_msg_list(rsp_0, idx);
          proto::OfflineMsgBin::OfflineMsgBin((proto::OfflineMsgBin *const)(v2 + 48), p_val);
          v16 = proto::OfflineMsgBin::index((const proto::OfflineMsgBin *const)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->index_);
          }
          if ( v16 <= this->index_ )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "onGetOfflineMsgRsp",
              226);
            v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Uid = Player::getUid(this->player_);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &Uid);
            v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v26,
                    (const char (*)[12])" msg.index:");
            val = proto::OfflineMsgBin::index((const proto::OfflineMsgBin *const)(v2 + 48));
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)&val);
            v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" index_:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->index_);
            v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])" proto:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)&v38,
              (google::protobuf::Message *)(v2 + 48));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v38);
            std::string::~string(&v38);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v17 = this->index_ + 1;
            if ( v17 != proto::OfflineMsgBin::index((const proto::OfflineMsgBin *const)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "onGetOfflineMsgRsp",
                216);
              v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v38, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Uid);
              v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" index_:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->index_);
              v22 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v21, (const char (*)[3])"->");
              val = proto::OfflineMsgBin::index((const proto::OfflineMsgBin *const)(v2 + 48));
              p_val = (const proto::OfflineMsgBin *)&val;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)&val);
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
            v23 = proto::OfflineMsgBin::index((const proto::OfflineMsgBin *const)(v2 + 48));
            v24 = *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000);
            if ( v24 != 0 && v24 <= 3 )
            {
              LOBYTE(p_val) = v24 != 0;
              __asan_report_store4(&this->index_, p_val, v23);
            }
            this->index_ = v23;
            if ( PlayerOfflineMsgComp::exeOfflineMsg(this, (proto::OfflineMsgBin *)(v2 + 48)) == 1 )
              PlayerOfflineMsgComp::addNextOfflineMsg(this, (const proto::OfflineMsgBin *)(v2 + 48), 1u);
          }
          proto::OfflineMsgBin::~OfflineMsgBin((proto::OfflineMsgBin *const)(v2 + 48));
        }
        PlayerOfflineMsgComp::removeOfflineMsgRedisData(this);
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "onGetOfflineMsgRsp",
          204);
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v38, (const char (*)[6])"uid: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" index_: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->index_);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])" rsp.last_index: ");
        val = proto::GetOfflineMsgRsp::last_index(rsp_0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v38);
        result = -1;
      }
    }
    else
    {
      result = 0;
    }
  }
  if ( v39 == (char *)v2 )
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

// Line 235: range 0000000013DB07D8-0000000013DB0E2B
ScenePtr __cdecl PlayerOfflineMsgComp::getAndClearBornScenePos(PlayerOfflineMsgComp *const this, Vector3 *born_pos)
{
  Vector3 *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  ScenePtr result; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Vector3 *born_posa; // [rsp+8h] [rbp-F8h]
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  Vector3 v18; // [rsp+24h] [rbp-DCh] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  born_posa = v2;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 22 last_born_scene_id:242 64 12 17 last_born_pos:243 96 16 13 scene_ptr:247";
  *(_QWORD *)(v3 + 16) = PlayerOfflineMsgComp::getAndClearBornScenePos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&born_pos[5].y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&born_pos[5].y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&born_pos[5].y);
  }
  if ( !LODWORD(born_pos[5].y) )
  {
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&born_pos[5].y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&born_pos[5].y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&born_pos[5].y);
  }
  *(float *)(v3 + 48) = born_pos[5].y;
  if ( (((unsigned __int8)born_pos + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&born_pos[5].z >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&born_pos[5].z >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&born_pos[6].y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)born_pos + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos[6].y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&born_pos[5].z, 12LL);
  }
  *(_QWORD *)(v3 + 64) = *(_QWORD *)&born_pos[5].z;
  *(float *)(v3 + 72) = born_pos[6].y;
  born_pos[5].y = 0.0;
  Vector3::Vector3(&v18, 0.0, 0.0, 0.0);
  if ( (((unsigned __int8)born_pos + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&born_pos[5].z >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&born_pos[5].z >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&born_pos[6].y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)born_pos + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos[6].y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&born_pos[5].z, 12LL);
  }
  *(Vector3 *)((char *)born_pos + 68) = v18;
  if ( *(_BYTE *)(((unsigned __int64)&born_pos[2] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Player::getSceneComp(*(Player *const *)&born_pos[2].x);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 96), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "getAndClearBornScenePos",
      250);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" invalid, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&born_pos[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( Scene::isPosValid(v11, (const Vector3 *)(v3 + 64)) )
    {
      if ( ((unsigned __int8)born_posa & 7) >= *(_BYTE *)(((unsigned __int64)born_posa >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)born_posa >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&born_posa->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)born_posa + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_posa->z + 3) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(born_posa, 12LL);
      }
      *(_QWORD *)&born_posa->x = *(_QWORD *)(v3 + 64);
      born_posa->z = *(float *)(v3 + 72);
      std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, (std::shared_ptr<Scene> *)(v3 + 96));
      goto LABEL_27;
    }
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "getAndClearBornScenePos",
      255);
    v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v19, (const char (*)[10])"scene_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" pos:");
    v15 = operator<<(v14, (const Vector3 *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" invalid, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&born_pos[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  val = Player::getUid(*(const Player *const *)&born_pos[2].x);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
LABEL_27:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
LABEL_28:
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 265: range 0000000013DB0E2C-0000000013DB2363
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerOfflineMsgComp::exeOfflineMsg(PlayerOfflineMsgComp *const this, proto::OfflineMsgBin *msg)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::OfflineMsgBin::DetailCase v5; // eax
  const proto::DelItemOp *v6; // rax
  proto::DelItemNegativeOp *v7; // rax
  const proto::DelEquipOp *v8; // rax
  const proto::PlayerGotoOp *v9; // rax
  const proto::ResetParentQuestOp *v10; // rax
  uint32_t v11; // eax
  const proto::RefreshGroupOp *refreshed; // rax
  const proto::SetScenePointLockStatusOp *v13; // rax
  const proto::SetPlayerNickNameOp *v14; // rax
  const proto::RefreshShopOp *v15; // rax
  const proto::UnlockTalentOp *v16; // rax
  const proto::TakeOffEquipOp *v17; // rax
  const proto::DelMailOp *v18; // rax
  const proto::UnlockAreaOp *v19; // rax
  const proto::FinishDailyTaskOp *v20; // rax
  const proto::FinishDailyTaskUnloadGroupOp *v21; // rax
  const proto::AddItemOp *v22; // rax
  const proto::ModifyBornPosOp *v23; // rax
  const proto::SubCoinNegativeOp *v24; // rax
  const proto::SetQuestContentProgressOp *v25; // rax
  const proto::FinishOrderOp *v26; // rax
  const proto::AddOrModifyWatcherOp *v27; // rax
  const proto::DelWatcherOp *v28; // rax
  const proto::SetSignatureOp *v29; // rax
  const proto::AddOrSubResinOp *v30; // rax
  const proto::SetQuestGlobalVarValueOp *v31; // rax
  const proto::AddMcoinVipPointOp *v32; // rax
  const proto::GroupBinOp *v33; // rax
  const proto::DelOneOffOp *v34; // rax
  const proto::FinishRoutineOp *v35; // rax
  const proto::BlessingActivityGivePicOp *v36; // rax
  const proto::ExpeditionActivityAssistOp *v37; // rax
  const proto::RefreshBlossomCircleCampOp *v38; // rax
  const proto::RecoverWorldLevelOp *v39; // rax
  const proto::AddRegionSearchProgressOp *v40; // rax
  const proto::SetMatchPunishTimesOp *v41; // rax
  const proto::ForceAcceptQuestOp *v42; // rax
  const proto::SetMainCoopConfidenceOp *v43; // rax
  const proto::AddCoopPointSavePointListOp *v44; // rax
  const proto::ResetChannellerSlabCampGroupOp *v45; // rax
  const proto::SetClimateAreaTypeOp *v46; // rax
  const proto::ProcSceneTagOp *v47; // rax
  const proto::ExchangeMcoinOp *v48; // rax
  const proto::SetFinishedParentQuestChildStateOp *v49; // rax
  const proto::ChangeMapAreaInfoOp *v50; // rax
  const proto::SetLevel1AreaExplorePointOp *v51; // rax
  const proto::SetCodexOpenOrCloseOp *v52; // rax
  const proto::GroupLinkOp *v53; // rax
  const proto::SetWatcherCompRecordValueOp *v54; // rax
  const proto::AddFriendOp *v55; // rax
  const proto::DelFriendOp *v56; // rax
  const proto::AddFriendAskOp *v57; // rax
  const proto::DelFriendAskOp *v58; // rax
  const proto::BanCustomDungeonOp *v59; // rax
  const proto::RemoveInvalidMapMarksOp *v60; // rax
  proto::RecalculateAreaExplorePointOp *v61; // rax
  const proto::NicknameAuditResultOp *v62; // rax
  const proto::SignatureAuditResultOp *v63; // rax
  const proto::PassHomeSceneArrangementAuditOp *v64; // rax
  const proto::FailHomeSceneArrangementAuditOp *v65; // rax
  const proto::FailHomeModulesArrangementAuditOp *v66; // rax
  const proto::BanUgcPublishOp *v67; // rax
  const proto::ResetPlayerPersistentDungeonOp *v68; // rax
  const proto::ResetPlayerPosInPersistentDungeonOp *v69; // rax
  const proto::LevelTagChangeOp *v70; // rax
  const proto::ResetPlayerWayPointInPersistentDungeonOp *v71; // rax
  const proto::ExhibitionSetOp *v72; // rax
  const proto::SetAvatarExtraPropOp *v73; // rax
  proto::AddItemWithLimitOp *v74; // rax
  const proto::SetGadgetChainLevelOp *v75; // rax
  const proto::SetDailyTaskVarOp *v76; // rax
  proto::AvatarRenameAuditResultOp *v77; // rax
  proto::ResetAvatarRenameOp *v78; // rax
  proto::AddFinishedTalkOp *v79; // rax
  proto::DelFinishedTalkOp *v80; // rax
  const proto::SetPlayerGCGMatchScoreOp *matched; // rax
  const proto::SetPushTipsStateOp *v82; // rax
  const proto::DeletePlayerGCGCardOp *v83; // rax
  const proto::DeletePlayerGCGCardFaceOp *v84; // rax
  const proto::DeletePlayerGCGCardBackOp *v85; // rax
  const proto::DeletePlayerGCGDeckFieldOp *v86; // rax
  const proto::BanPlayerGCGMatchOp *v87; // rax
  const proto::BanPlayerGCGPVPOp *v88; // rax
  common::milog::MiLogStream *v89; // r14
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // r14
  common::milog::MiLogStream *v92; // r14
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v98; // r14
  const std::string *v99; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v100; // r14
  google::protobuf::uint32 v101; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v102; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v103; // r14
  Player *v104; // r14
  int32_t result; // eax
  std::string msga; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v109; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v110; // [rsp+60h] [rbp-B0h] BYREF
  char v111[144]; // [rsp+80h] [rbp-90h] BYREF

  msga._M_string_length = (std::string::size_type)this;
  msga._M_dataplus._M_p = (std::string::pointer)msg;
  v2 = (unsigned __int64)v111;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 22 log_context_holder:522 48 4 7 ret:266 64 16 11 log_ptr:523";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::exeOfflineMsg;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = 0;
  v5 = proto::OfflineMsgBin::detail_case((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
  if ( v5 > kBanPlayerGcgPvpOp )
    goto LABEL_107;
  if ( v5 >= kAvatarRenameAuditResultOp )
  {
    switch ( v5 )
    {
      case kAvatarRenameAuditResultOp:
        v77 = proto::OfflineMsgBin::mutable_avatar_rename_audit_result_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procAvatarRenameAuditResultOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v77);
        break;
      case kResetAvatarRenameOp:
        v78 = proto::OfflineMsgBin::mutable_reset_avatar_rename_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procResetAvatarRenameOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v78);
        break;
      case kAddFinishedTalkOp:
        v79 = proto::OfflineMsgBin::mutable_add_finished_talk_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procAddFinishedTalkOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v79);
        break;
      case kDelFinishedTalkOp:
        v80 = proto::OfflineMsgBin::mutable_del_finished_talk_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDelFinishedTalkOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v80);
        break;
      case kSetPlayerGcgMatchScoreOp:
        matched = proto::OfflineMsgBin::set_player_gcg_match_score_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSetPlayerGCGMatchScoreOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 matched);
        break;
      case kSetPushTipsStateOp:
        v82 = proto::OfflineMsgBin::set_push_tips_state_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSetPushTipsStateOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v82);
        break;
      case kDeletePlayerGcgCardOp:
        v83 = proto::OfflineMsgBin::delete_player_gcg_card_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDeletePlayerGCGCardOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v83);
        break;
      case kDeletePlayerGcgCardFaceOp:
        v84 = proto::OfflineMsgBin::delete_player_gcg_card_face_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDeletePlayerGCGCardFaceOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v84);
        break;
      case kDeletePlayerGcgCardBackOp:
        v85 = proto::OfflineMsgBin::delete_player_gcg_card_back_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDeletePlayerGCGCardBackOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v85);
        break;
      case kDeletePlayerGcgDeckFieldOp:
        v86 = proto::OfflineMsgBin::delete_player_gcg_deck_field_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDeletePlayerGCGDeckFieldOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v86);
        break;
      case kBanPlayerGcgMatchOp:
        v87 = proto::OfflineMsgBin::ban_player_gcg_match_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procBanPlayerGCGMatchOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v87);
        break;
      case kBanPlayerGcgPvpOp:
        v88 = proto::OfflineMsgBin::ban_player_gcg_pvp_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procBanPlayerGCGPVPOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v88);
        break;
      default:
        goto LABEL_107;
    }
  }
  else
  {
    if ( v5 == kSetDailyTaskVarOp )
    {
      v76 = proto::OfflineMsgBin::set_daily_task_var_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSetDailyTaskVarOp(
                               (PlayerOfflineMsgComp *const)msga._M_string_length,
                               v76);
      goto LABEL_110;
    }
    if ( v5 > kSetDailyTaskVarOp )
      goto LABEL_107;
    if ( v5 == kSetGadgetChainLevelOp )
    {
      v75 = proto::OfflineMsgBin::set_gadget_chain_level_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSetGadgetChainLevelOp(
                               (PlayerOfflineMsgComp *const)msga._M_string_length,
                               v75);
      goto LABEL_110;
    }
    if ( v5 > kSetGadgetChainLevelOp )
      goto LABEL_107;
    if ( v5 == kAddItemWithLimitOp )
    {
      v74 = proto::OfflineMsgBin::mutable_add_item_with_limit_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procAddItemWithLimitOp(
                               (PlayerOfflineMsgComp *const)msga._M_string_length,
                               v74);
      goto LABEL_110;
    }
    if ( v5 > kAddItemWithLimitOp )
      goto LABEL_107;
    switch ( v5 )
    {
      case kSetAvatarExtraPropOp:
        v73 = proto::OfflineMsgBin::set_avatar_extra_prop_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSetAvatarExtraPropOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v73);
        goto LABEL_110;
      case kExhibitionSetOp:
        v72 = proto::OfflineMsgBin::exhibition_set_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procExhibitionSetOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v72);
        goto LABEL_110;
      case kResetPlayerWayPointInPersistentDungeonOp:
        v71 = proto::OfflineMsgBin::reset_player_way_point_in_persistent_dungeon_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procResetPlayerWayPointInPersistentDungeonOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v71);
        goto LABEL_110;
    }
    if ( v5 > kResetPlayerWayPointInPersistentDungeonOp )
      goto LABEL_107;
    if ( v5 == kLevelTagChangeOp )
    {
      v70 = proto::OfflineMsgBin::level_tag_change_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procLevelTagChangeOp(
                               (PlayerOfflineMsgComp *const)msga._M_string_length,
                               v70);
      goto LABEL_110;
    }
    if ( v5 == kResetPlayerPosInPersistentDungeonOp )
    {
      v69 = proto::OfflineMsgBin::reset_player_pos_in_persistent_dungeon_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procResetPlayerPosInPersistentDungeonOp(
                               (PlayerOfflineMsgComp *const)msga._M_string_length,
                               v69);
      goto LABEL_110;
    }
    if ( v5 > kBanUgcPublishOp )
    {
      if ( v5 == kResetPlayerPersistentDungeonOp )
      {
        v68 = proto::OfflineMsgBin::reset_player_persistent_dungeon_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procResetPlayerPersistentDungeonOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v68);
        goto LABEL_110;
      }
      goto LABEL_107;
    }
    if ( v5 < kDelItemOp )
    {
LABEL_107:
      common::milog::MiLogStream::create(
        &v110,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "exeOfflineMsg",
        516);
      v89 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v110, (const char (*)[26])off_25159E40);
      *((_DWORD *)&msga._anon_0._M_allocated_capacity + 2) = proto::OfflineMsgBin::detail_case((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
      v90 = common::milog::MiLogStream::operator<<<proto::OfflineMsgBin::DetailCase,(proto::OfflineMsgBin::DetailCase*)0>(
              v89,
              (const proto::OfflineMsgBin::DetailCase *)&msga._anon_0._M_allocated_capacity + 2);
      v91 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v90, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((msga._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *((_DWORD *)&msga._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(msga._M_string_length + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v91,
        (const unsigned int *)&msga._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::~MiLogStream(&v110);
      *(_DWORD *)(v2 + 48) = -1;
      goto LABEL_110;
    }
    switch ( v5 )
    {
      case kDelItemOp:
        v6 = proto::OfflineMsgBin::del_item_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::delItemOp((PlayerOfflineMsgComp *const)msga._M_string_length, v6);
        break;
      case kGotoOp:
        v9 = proto::OfflineMsgBin::goto_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::gotoOp((PlayerOfflineMsgComp *const)msga._M_string_length, v9);
        break;
      case kResetParentQuestOp:
        v10 = proto::OfflineMsgBin::reset_parent_quest_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        v11 = proto::ResetParentQuestOp::parent_quest_id(v10);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::resetParentQuestOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v11);
        break;
      case kRefreshGroupOp:
        refreshed = proto::OfflineMsgBin::refresh_group_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::refreshGroupOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 refreshed);
        break;
      case kSetScenePointLockStatusOp:
        v13 = proto::OfflineMsgBin::set_scene_point_lock_status_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setScenePointLockStatusOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v13);
        break;
      case kSetNickNameOp:
        v14 = proto::OfflineMsgBin::set_nick_name_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setNickNameOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v14);
        break;
      case kRefreshShopOp:
        v15 = proto::OfflineMsgBin::refresh_shop_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::refreshShopOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v15);
        break;
      case kUnlockTalentOp:
        v16 = proto::OfflineMsgBin::unlock_talent_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::unlockTalentOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v16);
        break;
      case kTakeOffEquipOp:
        v17 = proto::OfflineMsgBin::take_off_equip_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::takeoffEquipOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v17);
        break;
      case kDelMailOp:
        v18 = proto::OfflineMsgBin::del_mail_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::delMailOp((PlayerOfflineMsgComp *const)msga._M_string_length, v18);
        break;
      case kFinishDailyTaskOp:
        v20 = proto::OfflineMsgBin::finish_daily_task_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::finishDailyTaskOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v20);
        break;
      case kUnlockAreaOp:
        v19 = proto::OfflineMsgBin::unlock_area_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::unlockAreaOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v19);
        break;
      case kDelItemNegativeOp:
        v7 = proto::OfflineMsgBin::mutable_del_item_negative_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::delItemNegativeOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v7);
        break;
      case kDelEquipOp:
        v8 = proto::OfflineMsgBin::del_equip_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::delEquipOp((PlayerOfflineMsgComp *const)msga._M_string_length, v8);
        break;
      case kAddItemOp:
        v22 = proto::OfflineMsgBin::add_item_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addItemOp((PlayerOfflineMsgComp *const)msga._M_string_length, v22);
        break;
      case kModifyBornPosOp:
        v23 = proto::OfflineMsgBin::modify_born_pos_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::modifyBornPosOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v23);
        break;
      case kSubCoinNegativeOp:
        v24 = proto::OfflineMsgBin::sub_coin_negative_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::subCoinNegativeOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v24);
        break;
      case kSetQuestContentProgressOp:
        v25 = proto::OfflineMsgBin::set_quest_content_progress_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setQuestContentProgressOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v25);
        break;
      case kFinishOrderOp:
        v26 = proto::OfflineMsgBin::finish_order_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::finishOrderOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v26);
        break;
      case kAddOrModifyWatcherOp:
        v27 = proto::OfflineMsgBin::add_or_modify_watcher_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addOrModifyWatcherOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v27);
        break;
      case kDelWatcherOp:
        v28 = proto::OfflineMsgBin::del_watcher_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::delWatcherOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v28);
        break;
      case kSetSignatureOp:
        v29 = proto::OfflineMsgBin::set_signature_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setSignatureOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v29);
        break;
      case kAddOrSubResinOp:
        v30 = proto::OfflineMsgBin::add_or_sub_resin_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addOrSubResinOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v30);
        break;
      case kSetQuestGlobalVarValueOp:
        v31 = proto::OfflineMsgBin::set_quest_global_var_value_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setQuestGlobalVarValueOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v31);
        break;
      case kAddMcoinOp:
        v32 = proto::OfflineMsgBin::add_mcoin_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addMcoinOp((PlayerOfflineMsgComp *const)msga._M_string_length, v32);
        break;
      case kGroupBinOp:
        v33 = proto::OfflineMsgBin::group_bin_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procGroupBinOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v33);
        break;
      case kDelOneOffOp:
        v34 = proto::OfflineMsgBin::del_one_off_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDelOneOffOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v34);
        break;
      case kFinishRoutineOp:
        v35 = proto::OfflineMsgBin::finish_routine_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::finishRoutineOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v35);
        break;
      case kFinishDailyTaskGroupOp:
        v21 = proto::OfflineMsgBin::finish_daily_task_group_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::finishDailyTaskUnloadGroupOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v21);
        break;
      case kRefreshBlossomCircleCampOp:
        v38 = proto::OfflineMsgBin::refresh_blossom_circle_camp_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::refreshBlossomCircleCampOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v38);
        break;
      case kBlessingGivePicOp:
        v36 = proto::OfflineMsgBin::blessing_give_pic_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::blessingGivePicOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v36);
        break;
      case kExpeditionAssistOp:
        v37 = proto::OfflineMsgBin::expedition_assist_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::expeditionAssistOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v37);
        break;
      case kRecoverWorldLevelOp:
        v39 = proto::OfflineMsgBin::recover_world_level_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::recoverWorldLevelOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v39);
        break;
      case kForceAcceptQuestOp:
        v42 = proto::OfflineMsgBin::force_accept_quest_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::forceAcceptQuestOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v42);
        break;
      case kSetMainCoopConfidenceOp:
        v43 = proto::OfflineMsgBin::set_main_coop_confidence_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setMainCoopConfidenceOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v43);
        break;
      case kAddCoopPointSavePointListOp:
        v44 = proto::OfflineMsgBin::add_coop_point_save_point_list_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addCoopPointSavePointListOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v44);
        break;
      case kAddRegionSearchProgressOp:
        v40 = proto::OfflineMsgBin::add_region_search_progress_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::addRegionSearchProgressOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v40);
        break;
      case kSetMatchPunishTimesOp:
        v41 = proto::OfflineMsgBin::set_match_punish_times_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setMatchPunishTimesOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v41);
        break;
      case kResetChannellerSlabCampGroupOp:
        v45 = proto::OfflineMsgBin::reset_channeller_slab_camp_group_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::resetChannellerSlabCampGroupOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v45);
        break;
      case kProcSceneTagOp:
        v47 = proto::OfflineMsgBin::proc_scene_tag_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSceneTagOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v47);
        break;
      case kSetClimateAreaTypeOp:
        v46 = proto::OfflineMsgBin::set_climate_area_type_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setClimateAreaType(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v46);
        break;
      case kExchangeMcoinOp:
        v48 = proto::OfflineMsgBin::exchange_mcoin_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::exchangeMcoinPlatformOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v48);
        break;
      case kSetFinishedParentQuestChildStateOp:
        v49 = proto::OfflineMsgBin::set_finished_parent_quest_child_state_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setFinishedParentQuestChildStateOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v49);
        break;
      case kSetLevel1AreaExplorePointOp:
        v51 = proto::OfflineMsgBin::set_level1_area_explore_point_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setLevel1AreaExplorePoint(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v51);
        break;
      case kSetCodexOpenOrCloseOp:
        v52 = proto::OfflineMsgBin::set_codex_open_or_close_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setCodexOpenOrClose(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v52);
        break;
      case kChangeMapAreaInfoOp:
        v50 = proto::OfflineMsgBin::change_map_area_info_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::changeMapAreaInfoOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v50);
        break;
      case kGroupLinkOp:
        v53 = proto::OfflineMsgBin::group_link_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procGroupLinkOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v53);
        break;
      case kSetWatcherCompRecordValueOp:
        v54 = proto::OfflineMsgBin::set_watcher_comp_record_value_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::setWatcherCompRecordValueOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v54);
        break;
      case kAddFriendOp:
        v55 = proto::OfflineMsgBin::add_friend_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procAddFriendOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v55);
        break;
      case kDelFriendOp:
        v56 = proto::OfflineMsgBin::del_friend_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDelFriendOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v56);
        break;
      case kAddFriendAskOp:
        v57 = proto::OfflineMsgBin::add_friend_ask_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procAddFriendAskOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v57);
        break;
      case kDelFriendAskOp:
        v58 = proto::OfflineMsgBin::del_friend_ask_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procDelFriendAskOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v58);
        break;
      case kBanCustomDungeonOp:
        v59 = proto::OfflineMsgBin::ban_custom_dungeon_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procBanCustomDungeonOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v59);
        break;
      case kRemoveInvalidMapMarksOp:
        v60 = proto::OfflineMsgBin::remove_invalid_map_marks_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procRemoveInvalidMapMarksOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v60);
        break;
      case kRecalculateAreaExplorePointOp:
        v61 = proto::OfflineMsgBin::mutable_recalculate_area_explore_point_op((proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procRecalculateAreaExplorePointOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v61);
        break;
      case kNicknameAuditResultOp:
        v62 = proto::OfflineMsgBin::nickname_audit_result_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procNicknameAuditResultOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v62);
        break;
      case kSignatureAuditResultOp:
        v63 = proto::OfflineMsgBin::signature_audit_result_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procSignatureAuditResultOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v63);
        break;
      case kPassHomeSceneArrangementAuditOp:
        v64 = proto::OfflineMsgBin::pass_home_scene_arrangement_audit_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procPassHomeSceneArrangementAuditOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v64);
        break;
      case kFailHomeSceneArrangementAuditOp:
        v65 = proto::OfflineMsgBin::fail_home_scene_arrangement_audit_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procFailHomeSceneArrangementAuditOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v65);
        break;
      case kFailHomeModulesArrangementAuditOp:
        v66 = proto::OfflineMsgBin::fail_home_modules_arrangement_audit_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procFailHomeModulesArrangementAuditOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v66);
        break;
      case kBanUgcPublishOp:
        v67 = proto::OfflineMsgBin::ban_ugc_publish_op((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
        *(_DWORD *)(v2 + 48) = PlayerOfflineMsgComp::procBanUgcPublishOp(
                                 (PlayerOfflineMsgComp *const)msga._M_string_length,
                                 v67);
        break;
      default:
        goto LABEL_107;
    }
  }
LABEL_110:
  common::milog::MiLogStream::create(
    &v109,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_offline_msg_comp.cpp",
    "exeOfflineMsg",
    520);
  v92 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v109, (const char (*)[15])"dealwith msg: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](
    (std::string *)&v110,
    (google::protobuf::Message *)msga._M_dataplus._M_p);
  v93 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v92, (const std::string *)&v110);
  v94 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v93, (const char (*)[7])" ret: ");
  v95 = common::milog::MiLogStream::operator<<<int,(int *)0>(v94, (const int *)(v2 + 48));
  v96 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v95, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((msga._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *((_DWORD *)&msga._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(msga._M_string_length
                                                                                               + 24));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v96,
    (const unsigned int *)&msga._anon_0._M_allocated_capacity + 3);
  std::string::~string(&v110);
  common::milog::MiLogStream::~MiLogStream(&v109);
  if ( *(_BYTE *)(((msga._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(msga._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v110, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x8FCu, msga);
  std::string::~string(&v110);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMuipOfflineMsgResult>();
  v98 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v99 = proto::OfflineMsgBin::ticket[abi:cxx11]((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
  proto_log::PlayerLogBodyMuipOfflineMsgResult::set_ticket(v98, v99);
  v100 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v101 = proto::OfflineMsgBin::detail_case((const proto::OfflineMsgBin *const)msga._M_dataplus._M_p);
  proto_log::PlayerLogBodyMuipOfflineMsgResult::set_msg_type(v100, v101);
  v102 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyMuipOfflineMsgResult::set_result(v102, *(_DWORD *)(v2 + 48));
  v103 = std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMuipOfflineMsgResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  google::protobuf::Message::ShortDebugString[abi:cxx11](
    (std::string *)&v110,
    (google::protobuf::Message *)msga._M_dataplus._M_p);
  proto_log::PlayerLogBodyMuipOfflineMsgResult::set_msg_str(v103, (std::string *)&v110);
  std::string::~string(&v110);
  if ( *(_BYTE *)(((msga._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v104 = *(Player **)(msga._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMuipOfflineMsgResult,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMuipOfflineMsgResult> *)(v2 + 64));
  Player::printStatLog(v104, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  LODWORD(v104) = *(_DWORD *)(v2 + 48);
  std::shared_ptr<proto_log::PlayerLogBodyMuipOfflineMsgResult>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMuipOfflineMsgResult> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = (int)v104;
  if ( v111 == (char *)v2 )
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

// Line 534: range 0000000013DB2364-0000000013DB26D3
void __fastcall PlayerOfflineMsgComp::addNextOfflineMsg(
        PlayerOfflineMsgComp *const this,
        const proto::OfflineMsgBin *msg,
        uint32_t exe_times)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  OfflineMsgExeInfo *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  google::protobuf::uint32 v12; // r13d
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+24h] [rbp-FCh] BYREF
  const proto::DelItemNegativeOp *op; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  OfflineMsgExeInfo v19; // [rsp+70h] [rbp-B0h] BYREF
  char v20[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 exe_times:533";
  *(_QWORD *)(v3 + 16) = PlayerOfflineMsgComp::addNextOfflineMsg;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = exe_times;
  proto::OfflineMsgBin::OfflineMsgBin(&v19.msg, msg);
  v19.exe_times = *(_DWORD *)(v3 + 32);
  std::vector<OfflineMsgExeInfo>::emplace_back<OfflineMsgExeInfo>(&this->next_offline_msg_vec_, &v19, v6);
  OfflineMsgExeInfo::~OfflineMsgExeInfo(&v19);
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_offline_msg_comp.cpp",
    "addNextOfflineMsg",
    543);
  v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v17, (const char (*)[23])off_2515A080);
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &msg->google::protobuf::Message);
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" exe_times: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __k = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__k);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( proto::OfflineMsgBin::detail_case(msg) == kDelItemNegativeOp )
  {
    op = proto::OfflineMsgBin::del_item_negative_op(msg);
    if ( proto::DelItemNegativeOp::remain_num(op) )
    {
      v12 = proto::DelItemNegativeOp::remain_num(op);
      __k = proto::DelItemNegativeOp::item_id(op);
      v13 = std::map<unsigned int,unsigned int>::operator[](&this->remain_del_item_map_, &__k);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *v13 += v12;
      PlayerOfflineMsgComp::tryRegisterObserve(this);
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 560: range 0000000013DB26D4-0000000013DB2E6F
int32_t __cdecl PlayerOfflineMsgComp::delItemOp(PlayerOfflineMsgComp *const this, const proto::DelItemOp *del_item_op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rbx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rbx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  unsigned int v22; // [rsp+10h] [rbp-D0h] BYREF
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 item_id:561 48 4 12 pack_num:579 64 4 11 del_num:585";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::delItemOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = proto::DelItemOp::item_id(del_item_op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                      &v5->design_config.txt_config_mgr.item_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !item_config_ptr )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&item_config_ptr->item_type);
  }
  if ( item_config_ptr->item_type == ITEM_RELIQUARY || item_config_ptr->item_type == ITEM_WEAPON )
  {
LABEL_9:
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "delItemOp",
      566);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v26,
      (const char (*)[31])"delItem not support Equipment!");
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( item_config_ptr->item_type == ITEM_RELIQUARY
      || item_config_ptr->item_type == ITEM_WEAPON
      || item_config_ptr->item_type == ITEM_VIRTUAL )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "delItemOp",
        575);
      v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v26,
             (const char (*)[63])"delItem not support weapon or reliquary or virtual item, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v2 + 48) = PlayerItemComp::getPackMaterialCount(ItemComp, *(_DWORD *)(v2 + 32));
      if ( *(_DWORD *)(v2 + 48) )
      {
        val = proto::DelItemOp::item_num(del_item_op);
        v12 = std::min<unsigned int>(&val, (const unsigned int *)(v2 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v2 + 64) = *v13;
        if ( PlayerOfflineMsgComp::internalDelItem(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "delItemOp",
            588);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v26,
                  (const char (*)[29])"internalDelItem fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/player/player_offline_msg_comp.cpp",
            "delItemOp",
            591);
          v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v26, (const char (*)[10])"subItem: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])" ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" op_num: ");
          v22 = proto::DelItemOp::item_num(del_item_op);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &v22);
          v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_offline_msg_comp.cpp",
          "delItemOp",
          582);
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v26, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v10,
                (const char (*)[18])" has no item_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = -1;
      }
    }
  }
  if ( v27 == (char *)v2 )
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

// Line 597: range 0000000013DB2E70-0000000013DB3786
int32_t __cdecl PlayerOfflineMsgComp::delItemNegativeOp(PlayerOfflineMsgComp *const this, proto::DelItemNegativeOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rbx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const unsigned int *v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  google::protobuf::uint32 v20; // edx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rbx
  unsigned int v28; // [rsp+10h] [rbp-D0h] BYREF
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v31; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 item_id:598 48 4 12 pack_num:621 64 4 11 del_num:627";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::delItemNegativeOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = proto::DelItemNegativeOp::item_id(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(
                      &v5->design_config.txt_config_mgr.item_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( !item_config_ptr )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&item_config_ptr->item_type);
  }
  if ( item_config_ptr->item_type == ITEM_RELIQUARY || item_config_ptr->item_type == ITEM_WEAPON )
  {
LABEL_9:
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "delItemNegativeOp",
      603);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v32,
      (const char (*)[39])"delItemNegative not support Equipment!");
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = -1;
  }
  else if ( proto::DelItemNegativeOp::remain_num(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( item_config_ptr->item_type == ITEM_RELIQUARY
      || item_config_ptr->item_type == ITEM_WEAPON
      || item_config_ptr->item_type == ITEM_VIRTUAL )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "delItemNegativeOp",
        617);
      v8 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v32,
             (const char (*)[63])"delItem not support weapon or reliquary or virtual item, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v2 + 48) = PlayerItemComp::getPackMaterialCount(ItemComp, *(_DWORD *)(v2 + 32));
      if ( *(_DWORD *)(v2 + 48) )
      {
        val = proto::DelItemNegativeOp::remain_num(op);
        v13 = std::min<unsigned int>(&val, (const unsigned int *)(v2 + 48));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v2 + 64) = *v14;
        if ( PlayerOfflineMsgComp::internalDelItem(this, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "delItemNegativeOp",
            630);
          v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v32,
                  (const char (*)[17])"internalDelItem ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])":");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])" fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
          *(_DWORD *)(v2 + 64) = 0;
        }
        if ( *(_DWORD *)(v2 + 64) )
        {
          v20 = proto::DelItemNegativeOp::remain_num(op) - *(_DWORD *)(v2 + 64);
          proto::DelItemNegativeOp::set_remain_num(op, v20);
        }
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/player_offline_msg_comp.cpp",
          "delItemNegativeOp",
          637);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v32, (const char (*)[10])"item_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 32));
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v22,
                (const char (*)[16])" real del_num: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 64));
        v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" remain_num: ");
        v28 = proto::DelItemNegativeOp::remain_num(op);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &v28);
        v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = proto::DelItemNegativeOp::remain_num(op) != 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_offline_msg_comp.cpp",
          "delItemNegativeOp",
          624);
        v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v32, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v11,
                (const char (*)[17])" has no item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "delItemNegativeOp",
      608);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v32,
           (const char (*)[28])"op.remain_num() is 0, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    result = 0;
  }
  if ( v33 == (char *)v2 )
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

// Line 647: range 0000000013DB3788-0000000013DB3BAE
__int64 __fastcall PlayerOfflineMsgComp::internalDelItem(
        PlayerOfflineMsgComp *const this,
        uint32_t item_id,
        uint32_t item_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  __int64 result; // rax
  PlayerItemComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 11 item_id:646 48 4 12 item_num:646 64 8 10 reason:654 96 16 9 param:648";
  *(_QWORD *)(v3 + 16) = PlayerOfflineMsgComp::internalDelItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = item_id;
  *(_DWORD *)(v3 + 48) = item_num;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v3 + 100) = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "internalDelItem",
      651);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v20, (const char (*)[14])"checkSubItem ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v8, (const char (*)[2])":");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
    goto LABEL_17;
  }
  SubItemReason::SubItemReason((SubItemReason *const)(v3 + 64), ACTION_REASON_OFFLINE_MSG);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = Player::getItemComp(this->player_);
  if ( PlayerItemComp::subItem(v13, (const ItemParam *)(v3 + 96), (const SubItemReason *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "internalDelItem",
      657);
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v20, (const char (*)[9])"subItem ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  result = 0LL;
LABEL_17:
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 664: range 0000000013DB3BB0-0000000013DB4E2D
int32_t __cdecl PlayerOfflineMsgComp::addItemOp(PlayerOfflineMsgComp *const this, const proto::AddItemOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // r14
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  int32_t v10; // r14d
  PlayerItemComp *ItemComp; // r14
  google::protobuf::uint32 v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  google::protobuf::uint32 v16; // eax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint64_t Guid; // rax
  int v19; // eax
  proto::MaterialBin *v20; // r14
  google::protobuf::uint32 v21; // eax
  const proto::ReliquaryBin *v22; // r14
  proto::EquipBin *v23; // rax
  proto::ReliquaryBin *v24; // rax
  const proto::WeaponBin *v25; // r14
  proto::EquipBin *v26; // rax
  proto::WeaponBin *v27; // rax
  proto::FurnitureBin *v28; // r14
  google::protobuf::uint32 v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  unsigned __int64 v34; // rdx
  common::milog::MiLogStream *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned int (__fastcall *v44)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, _QWORD); // r8
  common::milog::MiLogStream *v45; // r14
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rcx
  PlayerItemComp *v50; // r14
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  PlayerItemComp *v57; // r14
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // r14
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1ACh] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-1A8h]
  std::shared_ptr<Config> v72; // [rsp+20h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v73; // [rsp+30h] [rbp-190h] BYREF
  common::milog::MiLogStream v74; // [rsp+50h] [rbp-170h] BYREF
  std::string output; // [rsp+70h] [rbp-150h] BYREF
  char v76[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 item_type:671 64 4 7 ret:708 80 16 12 item_ptr:672 112 24 17 action_reason:720 176 48 12 item_bin:679";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::addItemOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v72);
  p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v72)->design_config.txt_config_mgr.item_config_mgr;
  v6 = proto::AddItemOp::item_id(op);
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, v6);
  std::shared_ptr<Config>::~shared_ptr(&v72);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    *(_DWORD *)(v2 + 48) = item_config_ptr->item_type;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    v12 = proto::AddItemOp::item_id(op);
    PlayerItemComp::createItem((PlayerItemComp *const)(v2 + 80), (__int64)ItemComp, *(_DWORD *)(v2 + 48), v12, 0LL);
    if ( std::operator==<Item>(0LL, (const std::shared_ptr<Item> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "addItemOp",
        675);
      v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v74,
              (const char (*)[24])"createItem failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &output);
      std::string::~string(&output);
      common::milog::MiLogStream::~MiLogStream(&v74);
      v10 = -1;
      goto LABEL_65;
    }
    proto::ItemBin::ItemBin((proto::ItemBin *const)(v2 + 176));
    proto::ItemBin::set_item_type((proto::ItemBin *const)(v2 + 176), *(_DWORD *)(v2 + 48));
    v16 = proto::AddItemOp::item_id(op);
    proto::ItemBin::set_item_id((proto::ItemBin *const)(v2 + 176), v16);
    v17 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Guid = Item::getGuid(v17);
    proto::ItemBin::set_guid((proto::ItemBin *const)(v2 + 176), Guid);
    v19 = *(_DWORD *)(v2 + 48);
    if ( v19 == 6 )
    {
      v28 = proto::ItemBin::mutable_furniture((proto::ItemBin *const)(v2 + 176));
      v29 = proto::AddItemOp::item_count(op);
      proto::FurnitureBin::set_count(v28, v29);
    }
    else
    {
      if ( v19 > 6 )
        goto LABEL_30;
      if ( v19 == 4 )
      {
        if ( proto::AddItemOp::has_weapon(op) )
        {
          v25 = proto::AddItemOp::weapon(op);
          v26 = proto::ItemBin::mutable_equip((proto::ItemBin *const)(v2 + 176));
          v27 = proto::EquipBin::mutable_weapon(v26);
          proto::WeaponBin::operator=(v27, v25);
        }
        goto LABEL_31;
      }
      if ( v19 > 4 )
      {
LABEL_30:
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_offline_msg_comp.cpp",
          "addItemOp",
          705);
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v74, (const char (*)[11])"item_type:");
        v31 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
                v30,
                (const data::ItemType *)(v2 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v31, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &output);
        std::string::~string(&output);
        common::milog::MiLogStream::~MiLogStream(&v74);
        v10 = -1;
        goto LABEL_64;
      }
      if ( v19 > 2 )
      {
        if ( proto::AddItemOp::has_reliquary(op) )
        {
          v22 = proto::AddItemOp::reliquary(op);
          v23 = proto::ItemBin::mutable_equip((proto::ItemBin *const)(v2 + 176));
          v24 = proto::EquipBin::mutable_reliquary(v23);
          proto::ReliquaryBin::operator=(v24, v22);
        }
      }
      else
      {
        if ( v19 <= 0 )
          goto LABEL_30;
        v20 = proto::ItemBin::mutable_material((proto::ItemBin *const)(v2 + 176));
        v21 = proto::AddItemOp::item_count(op);
        proto::MaterialBin::set_count(v20, v21);
      }
    }
LABEL_31:
    v33 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v34 = (unsigned __int64)(v33->_vptr_Item + 2);
    if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 64) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, unsigned __int64))v34)(
                             v33,
                             v2 + 176);
    if ( *(_DWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "addItemOp",
        711);
      v35 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v73,
              (const char (*)[24])"fromBin fail, item_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v74,
        (google::protobuf::Message *)(v2 + 176));
      v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, (const std::string *)&v74);
      v37 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v36, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
      v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &output);
      v39 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])" ret: ");
      v40 = common::milog::MiLogStream::operator<<<int,(int *)0>(v39, (const int *)(v2 + 64));
      v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v40, (const char (*)[14])" player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v42 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v43 = (unsigned __int64)(v42->_vptr_Item + 6);
      if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v44 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, _QWORD))v43;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( v44(v42, this->player_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_offline_msg_comp.cpp",
          "addItemOp",
          716);
        v45 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v73,
                (const char (*)[26])"item init fail, item_bin:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v74,
          (google::protobuf::Message *)(v2 + 176));
        v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, (const std::string *)&v74);
        v47 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v46, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
        v48 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v47, &output);
        v49 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v48, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v49, this->player_);
        std::string::~string(&output);
        std::string::~string(&v74);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v10 = -1;
        goto LABEL_64;
      }
      ActionReason::ActionReason((ActionReason *const)(v2 + 112), ACTION_REASON_OFFLINE_MSG, ITEM_LIMIT_UNLIMITED);
      *(_BYTE *)(v2 + 126) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v50 = Player::getItemComp(this->player_);
      std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)&v72, (const std::shared_ptr<Item> *)(v2 + 80));
      *(_DWORD *)(v2 + 64) = PlayerItemComp::checkAddItem(v50, (ItemPtr *)&v72, (const ActionReason *)(v2 + 112));
      std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)&v72);
      if ( *(_DWORD *)(v2 + 64) )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "addItemOp",
          725);
        v51 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v73,
                (const char (*)[31])"checkAddItem failed, item_bin:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v74,
          (google::protobuf::Message *)(v2 + 176));
        v52 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, (const std::string *)&v74);
        v53 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v52, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
        v54 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, &output);
        v55 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v54, (const char (*)[7])" ret: ");
        v56 = common::milog::MiLogStream::operator<<<int,(int *)0>(v55, (const int *)(v2 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v56, (const char (*)[14])" player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v57 = Player::getItemComp(this->player_);
        std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)&v72, (const std::shared_ptr<Item> *)(v2 + 80));
        *(_DWORD *)(v2 + 64) = PlayerItemComp::addItem(v57, (ItemPtr *)&v72, (const ActionReason *)(v2 + 112), 0LL);
        std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)&v72);
        if ( !*(_DWORD *)(v2 + 64) )
        {
          common::milog::MiLogStream::create(
            &v73,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_offline_msg_comp.cpp",
            "addItemOp",
            734);
          v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v73, (const char (*)[10])"item_bin:");
          google::protobuf::Message::ShortDebugString[abi:cxx11](
            (std::string *)&v74,
            (google::protobuf::Message *)(v2 + 176));
          v65 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, (const std::string *)&v74);
          v66 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v65, (const char (*)[5])" op:");
          google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
          v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v66, &output);
          v68 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v67, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v68, this->player_);
          std::string::~string(&output);
          std::string::~string(&v74);
          common::milog::MiLogStream::~MiLogStream(&v73);
          v10 = 0;
          goto LABEL_64;
        }
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "addItemOp",
          731);
        v58 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v73,
                (const char (*)[26])"addItem failed, item_bin:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v74,
          (google::protobuf::Message *)(v2 + 176));
        v59 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, (const std::string *)&v74);
        v60 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v59, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
        v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, &output);
        v62 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v61, (const char (*)[7])" ret: ");
        v63 = common::milog::MiLogStream::operator<<<int,(int *)0>(v62, (const int *)(v2 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v63, (const char (*)[14])" player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
    std::string::~string(&output);
    std::string::~string(&v74);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v10 = -1;
LABEL_64:
    proto::ItemBin::~ItemBin((proto::ItemBin *const)(v2 + 176));
LABEL_65:
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v2 + 80));
    goto LABEL_66;
  }
  common::milog::MiLogStream::create(
    &v74,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/player_offline_msg_comp.cpp",
    "addItemOp",
    668);
  v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v74,
         (const char (*)[28])"findItemConfig failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])" op:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &op->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
  std::string::~string(&output);
  common::milog::MiLogStream::~MiLogStream(&v74);
  v10 = -1;
LABEL_66:
  result = v10;
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 739: range 0000000013DB4E2E-0000000013DB5394
int32_t __cdecl PlayerOfflineMsgComp::modifyBornPosOp(
        PlayerOfflineMsgComp *const this,
        const proto::ModifyBornPosOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  const proto::VectorBin *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t SceneComp; // eax
  std::shared_ptr<Scene> *v15; // rsi
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // ecx
  char v21; // al
  const SceneScriptConfig *script_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Scene> v23; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 uid:740 48 4 12 scene_id:741 64 12 7 pos:749";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::modifyBornPosOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  *(_DWORD *)(v2 + 48) = proto::ModifyBornPosOp::scene_id(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  script_config_ptr = LuaConfigMgr::findSceneScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
  if ( script_config_ptr )
  {
    v10 = proto::ModifyBornPosOp::pos(op);
    Vector3::Vector3((Vector3 *const)(v2 + 64), v10);
    if ( !SceneScriptConfig::isPosValid(script_config_ptr, (const Vector3 *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "modifyBornPosOp",
        752);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v24, (const char (*)[6])"pos: ");
      v12 = operator<<(v11, (const Vector3 *)(v2 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" invalud, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)&v23, SceneComp);
      v15 = &v23;
      v16 = std::operator==<Scene>(0LL, &v23);
      std::shared_ptr<Scene>::~shared_ptr(&v23);
      if ( v16 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "modifyBornPosOp",
          759);
        v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v24, (const char (*)[10])"scene_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" invalid, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v24);
        result = -1;
      }
      else
      {
        v20 = *(_DWORD *)(v2 + 48);
        v21 = *(_BYTE *)(((unsigned __int64)&this->born_scene_id_ >> 3) + 0x7FFF8000);
        if ( v21 != 0 && v21 <= 3 )
        {
          LOBYTE(v15) = v21 != 0;
          __asan_report_store4(&this->born_scene_id_, v15, &this->born_scene_id_);
        }
        this->born_scene_id_ = v20;
        if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->born_pos_ >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos_.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->born_pos_, 12LL);
        }
        this->born_pos_ = *(Vector3 *)(v2 + 64);
        result = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "modifyBornPosOp",
      745);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v24,
           (const char (*)[39])"findSceneScriptConfig fails, scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
  }
  if ( v25 == (char *)v2 )
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

// Line 770: range 0000000013DB5396-0000000013DB5883
int32_t __cdecl PlayerOfflineMsgComp::subCoinNegativeOp(
        PlayerOfflineMsgComp *const this,
        const proto::SubCoinNegativeOp *op)
{
  PlayerItemComp *ItemComp; // rbx
  __int32 v3; // eax
  common::milog::MiLogStream *v4; // rbx
  PlayerItemComp *v5; // rbx
  __int32 v6; // eax
  PlayerItemComp *v7; // rbx
  __int32 v8; // r12d
  __int32 v9; // eax
  PlayerItemComp *v10; // rbx
  __int32 v11; // eax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( proto::SubCoinNegativeOp::hcoin(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    v3 = proto::SubCoinNegativeOp::hcoin(op);
    if ( (unsigned int)PlayerItemComp::subHcoinNegative(ItemComp, v3) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "subCoinNegativeOp",
        776);
      v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"subHcoinNegative fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_28:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
  }
  if ( proto::SubCoinNegativeOp::scoin(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getItemComp(this->player_);
    v6 = proto::SubCoinNegativeOp::scoin(op);
    if ( (unsigned int)PlayerItemComp::subScoinNegative(v5, v6) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "subCoinNegativeOp",
        784);
      v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v14,
             (const char (*)[30])"subScoinNegative fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_28;
    }
  }
  if ( proto::SubCoinNegativeOp::mcoin(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getItemComp(this->player_);
    v8 = proto::SubCoinNegativeOp::platform_type(op);
    v9 = proto::SubCoinNegativeOp::mcoin(op);
    if ( (unsigned int)PlayerItemComp::subMcoinNegative(v7, v9, v8) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "subCoinNegativeOp",
        792);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v14,
             (const char (*)[29])"subMcoinNegative fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_28;
    }
  }
  if ( proto::SubCoinNegativeOp::home_coin(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getItemComp(this->player_);
    v11 = proto::SubCoinNegativeOp::home_coin(op);
    if ( (unsigned int)PlayerItemComp::subHomeCoinNegative(v10, v11) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "subCoinNegativeOp",
        800);
      v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"subHomeCoinNegative fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_28;
    }
  }
  return 0;
};

// Line 808: range 0000000013DB5884-0000000013DB5BEB
void __cdecl PlayerOfflineMsgComp::tryRegisterObserve(PlayerOfflineMsgComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  std::weak_ptr<PlayerOfflineMsgComp> *p_this_wtr; // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::weak_ptr<PlayerOfflineMsgComp> v7; // [rsp+30h] [rbp-B0h] BYREF
  std::weak_ptr<Observer> __r; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+50h] [rbp-90h] BYREF
  char v10[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 this_ptr:813";
  *(_QWORD *)(v1 + 16) = PlayerOfflineMsgComp::tryRegisterObserve;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->observer_) )
  {
    toThisPtr<PlayerOfflineMsgComp>((PlayerOfflineMsgComp *)(v1 + 32));
    if ( std::operator==<PlayerOfflineMsgComp>(0LL, (const std::shared_ptr<PlayerOfflineMsgComp> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "tryRegisterObserve",
        816);
      v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v9,
             (const char (*)[45])"toThisPtr<PlayerOfflineMsgComp> fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_offline_msg_comp.cpp",
        "tryRegisterObserve",
        819);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v9,
        (const char (*)[25])"tryRegisterObserve OK...");
      common::milog::MiLogStream::~MiLogStream(&v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<PlayerOfflineMsgComp> *)Player::getEventComp(this->player_);
      std::weak_ptr<PlayerOfflineMsgComp>::weak_ptr<PlayerOfflineMsgComp,void>(
        &v7,
        (const std::shared_ptr<PlayerOfflineMsgComp> *)(v1 + 32));
      PlayerEventComp::registerObserver<PlayerOfflineMsgComp,ObtainItemEvent>(
        (PlayerEventComp *const)&__r,
        p_this_wtr,
        (void (*)(PlayerOfflineMsgComp *, const ObtainItemEvent *))&v7);
      std::weak_ptr<Observer>::operator=(&this->observer_, &__r);
      std::weak_ptr<Observer>::~weak_ptr(&__r);
      std::weak_ptr<PlayerOfflineMsgComp>::~weak_ptr(&v7);
    }
    std::shared_ptr<PlayerOfflineMsgComp>::~shared_ptr((std::shared_ptr<PlayerOfflineMsgComp> *const)(v1 + 32));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 824: range 0000000013DB5BEC-0000000013DB5D75
void __cdecl PlayerOfflineMsgComp::onAddItem(PlayerOfflineMsgComp *const this, const ObtainItemEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  char v7; // al
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 item_id:825";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::onAddItem;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->item_id);
  }
  *(_DWORD *)(v2 + 32) = event->item_id;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
          &this->remain_del_item_map_,
          (const unsigned int *)(v2 + 32)) )
    goto LABEL_10;
  v5 = std::map<unsigned int,unsigned int>::operator[](
         &this->remain_del_item_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  if ( *v6 )
    v7 = 0;
  else
LABEL_10:
    v7 = 1;
  if ( !v7 )
    PlayerOfflineMsgComp::exeNextOfflineMsgVec(this);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 834: range 0000000013DB5D76-0000000013DB6773
int32_t __cdecl PlayerOfflineMsgComp::delEquipOp(PlayerOfflineMsgComp *const this, const proto::DelEquipOp *op)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r15
  common::milog::MiLogStream *v15; // r14
  int v16; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  EquipComp *EquipComp; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerItemComp *v21; // r14
  PlayerItemComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  PlayerItemComp *v26; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-170h] BYREF
  data::EquipType equip_type; // [rsp+24h] [rbp-16Ch]
  SubItemReason reason; // [rsp+28h] [rbp-168h] BYREF
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-150h] BYREF
  char v33[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 8 8 guid:835 80 16 12 item_ptr:836 112 16 13 equip_ptr:842 144 16 14 avatar_ptr:849 176 48 "
                        "20 fight_prop_guard:852";
  *(_QWORD *)(v3 + 16) = PlayerOfflineMsgComp::delEquipOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  *(_QWORD *)(v3 + 48) = proto::DelEquipOp::guid(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  PlayerItemComp::findItemInPack((PlayerItemComp *const)(v3 + 80), (uint64_t)ItemComp);
  if ( !std::operator==<Item>(0LL, (const std::shared_ptr<Item> *)(v3 + 80)) )
  {
    std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(v3 + 112));
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "delEquipOp",
        845);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v32,
              (const char (*)[41])"dynamic_pointer_cast<Equip> fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v2 = -1;
      goto LABEL_44;
    }
    v11 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (unsigned __int64)(v11->_vptr_Item + 12);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    equip_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
    std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    Equip::getOwner((const Equip *const)(v3 + 144));
    if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 144), 0LL) )
      goto LABEL_30;
    FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 176));
    v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    FightPropGuard::addCreature((FightPropGuard *const)(v3 + 176), v13, 0);
    if ( equip_type == EQUIP_WEAPON )
    {
      std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v3 + 144));
      v14 = PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(this, &p_avatar_ptr) != 0;
      std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "delEquipOp",
          858);
        v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v32,
                (const char (*)[62])"replaceWithInitialOrSuitableOrAddedInitialWeapon fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v2 = 1;
        v16 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      EquipComp = Avatar::getEquipComp(v17);
      if ( EquipComp::takeOffEquipKeepHpRate(EquipComp, equip_type, 1) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "delEquipOp",
          867);
        v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v32,
                (const char (*)[36])"takeOffEquipKeepHpRate fails, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v2 = 1;
        v16 = 0;
LABEL_29:
        FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 176));
        if ( v16 != 1 )
        {
LABEL_43:
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 144));
LABEL_44:
          std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 112));
          goto LABEL_45;
        }
LABEL_30:
        v20 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( Equip::getIsLocked(v20) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = Player::getItemComp(this->player_);
          std::shared_ptr<Equip>::shared_ptr(
            (std::shared_ptr<Equip> *const)&p_avatar_ptr,
            (const std::shared_ptr<Equip> *)(v3 + 112));
          PlayerItemComp::setEquipLockState(v21, (EquipPtr *)&p_avatar_ptr, 0);
          std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)&p_avatar_ptr);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v22 = Player::getItemComp(this->player_);
        if ( PlayerItemComp::checkSubItem(v22, *(_QWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "delEquipOp",
            880);
          v23 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v32,
                  (const char (*)[27])"checkSubItem fails, guid: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v23,
                  (const unsigned __int64 *)(v3 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
          common::milog::MiLogStream::~MiLogStream(&v32);
          v2 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v26 = Player::getItemComp(this->player_);
          SubItemReason::SubItemReason(&reason, ACTION_REASON_OFFLINE_MSG);
          PlayerItemComp::subItem(v26, *(_QWORD *)(v3 + 48), &reason);
          v2 = 0;
        }
        goto LABEL_43;
      }
    }
    v16 = 1;
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/player_offline_msg_comp.cpp",
    "delEquipOp",
    839);
  v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v32, (const char (*)[21])"findItemInPack guid:");
  v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" fails, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v32);
  v2 = -1;
LABEL_45:
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 80));
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 889: range 0000000013DB6774-0000000013DB73D2
int32_t __cdecl PlayerOfflineMsgComp::gotoOp(PlayerOfflineMsgComp *const this, const proto::PlayerGotoOp *goto_op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  const proto::VectorBin *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  const Vector3 *Rotation; // r15
  Scene *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int32_t result; // eax
  const SceneScriptConfig *script_config_ptr; // [rsp+20h] [rbp-170h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+28h] [rbp-168h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-160h] BYREF
  common::milog::MiLogStream v47; // [rsp+40h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+60h] [rbp-130h] BYREF
  char v49[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 uid:890 48 4 12 scene_id:891 64 12 7 pos:900 96 16 13 world_ptr:908 128 16 13 scene_ptr"
                        ":920 160 16 14 avatar_ptr:941";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::gotoOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  *(_DWORD *)(v2 + 48) = proto::PlayerGotoOp::scene_id(goto_op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  script_config_ptr = LuaConfigMgr::findSceneScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  if ( !script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "gotoOp",
      895);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v47,
           (const char (*)[39])"findSceneScriptConfig fails, scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v47);
    v9 = -1;
    goto LABEL_41;
  }
  v10 = proto::PlayerGotoOp::pos(goto_op);
  Vector3::Vector3((Vector3 *const)(v2 + 64), v10);
  if ( !SceneScriptConfig::isPosValid(script_config_ptr, (const Vector3 *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "gotoOp",
      903);
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"pos: ");
    v12 = operator<<(v11, (const Vector3 *)(v2 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" invalud, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v47);
    v9 = -1;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator==<World>((const std::shared_ptr<World> *)(v2 + 96), 0LL) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 160));
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(
                         &v15->design_config.txt_config_mgr.scene_config_mgr,
                         *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
    if ( !scene_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "gotoOp",
        917);
      v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v47,
              (const char (*)[39])"findSceneExcelConfig fails, scene_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v47);
      v9 = -1;
      goto LABEL_40;
    }
    *(_QWORD *)(v2 + 128) = 0LL;
    *(_QWORD *)(v2 + 136) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config_ptr->type);
    }
    if ( scene_config_ptr->type == SCENE_DUNGEON )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 160));
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v2 + 128), (std::shared_ptr<Scene> *)(v2 + 160));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128))
        || (v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128)),
            Scene::getSceneId(v19) != *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "gotoOp",
          927);
        v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v47,
                (const char (*)[26])"getCurScene != scene_id: ");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v9 = -1;
LABEL_39:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
        goto LABEL_40;
      }
    }
    else
    {
      v24 = (unsigned int)std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      World::findScene((World *const)&__r, v24);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v2 + 128), &__r);
      std::shared_ptr<Scene>::~shared_ptr(&__r);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "gotoOp",
          936);
        v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v47,
                (const char (*)[28])"findScene fails, scene_id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v2 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v9 = -1;
        goto LABEL_39;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 160));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "gotoOp",
        944);
      v28 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v47,
              (const char (*)[26])"getCurAvatar fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v47);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_MUIP);
      v30 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      Rotation = Entity::getRotation((const Entity *const)v30);
      v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      LOBYTE(SceneComp) = PlayerSceneComp::jumpToScene(
                            SceneComp,
                            v32,
                            (const Vector3 *)(v2 + 64),
                            Rotation,
                            0,
                            &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( (_BYTE)SceneComp )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "gotoOp",
          951);
        v33 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v47,
                (const char (*)[30])"jumpToScene fails, scene_id: ");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v2 + 48));
        v35 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])" pos: ");
        v36 = operator<<(v35, (const Vector3 *)(v2 + 64));
        v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v9 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/player_offline_msg_comp.cpp",
          "gotoOp",
          955);
        v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v47,
                (const char (*)[18])"gotoOp scene_id: ");
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v2 + 48));
        v40 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])" pos: ");
        v41 = operator<<(v40, (const Vector3 *)(v2 + 64));
        v42 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])" uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v9 = 0;
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 160));
    goto LABEL_39;
  }
  common::milog::MiLogStream::create(
    &v47,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/player_offline_msg_comp.cpp",
    "gotoOp",
    911);
  v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v47,
          (const char (*)[25])"getCurWorld fails, uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v47);
  v9 = -1;
LABEL_40:
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 96));
LABEL_41:
  result = v9;
  if ( v49 == (char *)v2 )
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

// Line 961: range 0000000013DB73D4-0000000013DB76C5
__int64 __fastcall PlayerOfflineMsgComp::resetParentQuestOp(PlayerOfflineMsgComp *const this, uint32_t parent_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 parent_quest_id:960";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::resetParentQuestOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  if ( PlayerQuestComp::tryResetParentQuest(QuestComp, *(_DWORD *)(v2 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "resetParentQuestOp",
      964);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v14,
           (const char (*)[37])"resetParentQuestOp parent_quest_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "resetParentQuestOp",
      967);
    v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v14,
            (const char (*)[37])"resetParentQuestOp parent_quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  if ( v15 == (char *)v2 )
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

// Line 972: range 0000000013DB76C6-0000000013DB7EC8
int32_t __cdecl PlayerOfflineMsgComp::refreshGroupOp(PlayerOfflineMsgComp *const this, const proto::RefreshGroupOp *op)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // eax
  uint32_t SceneComp; // eax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  _BOOL4 v12; // r15d
  Group *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // r15d
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+30h] [rbp-220h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-210h] BYREF
  char v31[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 7 uid:973 64 4 12 group_id:974 80 4 12 suite_id:975 96 16 13 scene_ptr:977 128 16 13 grou"
                        "p_ptr:988 160 28 15 log_context:994 224 160 18 script_context:995";
  *(_QWORD *)(v3 + 16) = PlayerOfflineMsgComp::refreshGroupOp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = 0x4000000;
  v5[536862726] = -218959118;
  v5[536862732] = -202116109;
  v5[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
  *(_DWORD *)(v3 + 64) = proto::RefreshGroupOp::group_id(op);
  *(_DWORD *)(v3 + 80) = proto::RefreshGroupOp::suite_id(op);
  v6 = proto::RefreshGroupOp::scene_id(op);
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  if ( v6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findWorldOrPersistentDungeonScenePtr((const PlayerSceneComp *const)(v3 + 128), SceneComp);
    std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)(v3 + 96), (std::shared_ptr<Scene> *)(v3 + 128));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::operator=<PlayerWorldScene>((std::shared_ptr<Scene> *const)(v3 + 96), &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  }
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
  {
    v8 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    Scene::findGroup((Scene *const)(v3 + 128), v8);
    if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "refreshGroupOp",
        991);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v30, (const char (*)[11])"findGroup ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v2 = -1;
      v12 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 160) = 6;
      *(_DWORD *)(v3 + 164) = 0;
      *(_DWORD *)(v3 + 168) = 0;
      *(_DWORD *)(v3 + 172) = 0;
      *(_DWORD *)(v3 + 176) = 0;
      *(_DWORD *)(v3 + 180) = 0;
      *(_DWORD *)(v3 + 184) = 0;
      ScriptContext::ScriptContext((ScriptContext *const)(v3 + 224));
      v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Group::refresh(
             v13,
             (const ScriptContext *)(v3 + 224),
             *(SuiteLogContext *)(v3 + 160),
             *(_DWORD *)(v3 + 80),
             0) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "refreshGroupOp",
          998);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v30, (const char (*)[9])"refresh ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 80));
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" fails, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      ScriptContext::~ScriptContext((ScriptContext *const)(v3 + 224));
      v12 = v19 == 1;
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 128));
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/player_offline_msg_comp.cpp",
        "refreshGroupOp",
        1008);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v30, (const char (*)[16])"refreshGroupOp ");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
      v25 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v24, (const char (*)[2])":");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 80));
      v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v2 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "refreshGroupOp",
      1004);
    v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v30,
            (const char (*)[49])"cant refresh group when not in scene, group id: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v2 = -1;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1014: range 0000000013DB7ECA-0000000013DB8229
int32_t __cdecl PlayerOfflineMsgComp::setScenePointLockStatusOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetScenePointLockStatusOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // r14
  uint32_t v6; // eax
  PlayerSceneComp *v7; // r14
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  bool is_locked; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 ret:1016 64 24 17 point_id_vec:1015";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setScenePointLockStatusOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  *(_DWORD *)(v2 + 48) = 0;
  __x = proto::SetScenePointLockStatusOp::point_id(op);
  std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), &__x);
  if ( proto::SetScenePointLockStatusOp::is_locked(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    v6 = proto::SetScenePointLockStatusOp::scene_id(op);
    *(_DWORD *)(v2 + 48) = PlayerSceneComp::lockPoint(SceneComp, v6, (const std::vector<unsigned int> *)(v2 + 64), 1);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getSceneComp(this->player_);
    v8 = proto::SetScenePointLockStatusOp::scene_id(op);
    *(_DWORD *)(v2 + 48) = PlayerSceneComp::forceUnlockPoint(v7, v8, (const std::vector<unsigned int> *)(v2 + 64));
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_offline_msg_comp.cpp",
    "setScenePointLockStatusOp",
    1027);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v17, (const char (*)[16])"op.is_locked() ");
  is_locked = proto::SetScenePointLockStatusOp::is_locked(op);
  v11 = common::milog::MiLogStream::operator<<(v9, is_locked);
  v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" ret: ");
  v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &__x);
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = 0;
  if ( v18 == (char *)v2 )
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

// Line 1032: range 0000000013DB822A-0000000013DB8488
int32_t __cdecl PlayerOfflineMsgComp::setNickNameOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetPlayerNickNameOp *op)
{
  PlayerBasicComp *BasicComp; // rbx
  const std::string *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  PlayerBasicComp *v6; // rbx
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v3 = proto::SetPlayerNickNameOp::nick_name[abi:cxx11](op);
  if ( PlayerBasicComp::checkNickName(BasicComp, v3) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setNickNameOp",
      1036);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v14,
           (const char (*)[27])"checkNickName failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getBasicComp(this->player_);
    v7 = proto::SetPlayerNickNameOp::nick_name[abi:cxx11](op);
    PlayerBasicComp::setNickName(v6, v7);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "setNickNameOp",
      1040);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v14, (const char (*)[13])"setNickName ");
    v9 = proto::SetPlayerNickNameOp::nick_name[abi:cxx11](op);
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
};

// Line 1047: range 0000000013DB848A-0000000013DB84E2
int32_t __cdecl PlayerOfflineMsgComp::refreshShopOp(PlayerOfflineMsgComp *const this, const proto::RefreshShopOp *op)
{
  PlayerShopComp *ShopComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ShopComp = Player::getShopComp(this->player_);
  PlayerShopComp::clearShopRecord(ShopComp, SHOP_TYPE_PAIMON);
  return 0;
};

// Line 1054: range 0000000013DB84E4-0000000013DB8942
int32_t __cdecl PlayerOfflineMsgComp::unlockTalentOp(PlayerOfflineMsgComp *const this, const proto::UnlockTalentOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t AvatarComp; // r14d
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TalentComp *TalentComp; // r14
  uint32_t v11; // r15d
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t result; // eax
  unsigned int v18; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 ret:1063 48 16 22 formal_avatar_ptr:1055 80 48 21 fight_prop_guard:1061";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::unlockTalentOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  proto::UnlockTalentOp::avatar_id(op);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 48), AvatarComp);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "unlockTalentOp",
      1058);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v20,
           (const char (*)[38])"find formal_avatar failed avatar_id: ");
    val = proto::UnlockTalentOp::avatar_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else
  {
    FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 80));
    v8 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    FightPropGuard::addCreature((FightPropGuard *const)(v2 + 80), v8, 0);
    v9 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    TalentComp = Avatar::getTalentComp(v9);
    v11 = proto::UnlockTalentOp::talent_id(op);
    v12 = proto::UnlockTalentOp::skill_depot_id(op);
    *(_DWORD *)(v2 + 32) = TalentComp::forceUnlockTalent(TalentComp, v12, v11);
    if ( *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "unlockTalentOp",
        1066);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v20,
              (const char (*)[27])"unlock talent failed ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/player_offline_msg_comp.cpp",
        "unlockTalentOp",
        1069);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v20, (const char (*)[14])"unlockTalent ");
      v18 = proto::UnlockTalentOp::talent_id(op);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v18);
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" uid: ");
      val = proto::UnlockTalentOp::talent_id(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 0;
    }
    FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 80));
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 48));
  result = v7;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1074: range 0000000013DB8944-0000000013DB9079
int32_t __cdecl PlayerOfflineMsgComp::takeoffEquipOp(PlayerOfflineMsgComp *const this, const proto::TakeOffEquipOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t v9; // r14d
  uint32_t AvatarComp; // r14d
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  EquipComp *EquipComp; // r14
  signed int v21; // eax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-108h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-104h] BYREF
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 ret:1099 48 16 22 formal_avatar_ptr:1080 80 48 21 fight_prop_guard:1086";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::takeoffEquipOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  v5 = proto::TakeOffEquipOp::equip_type(op);
  if ( !data::isValidEquipType(v5) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "takeoffEquipOp",
      1077);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v31,
           (const char (*)[27])"is not vaild equip type : ");
    val = proto::TakeOffEquipOp::equip_type(op);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    proto::TakeOffEquipOp::avatar_id(op);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 48), AvatarComp);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "takeoffEquipOp",
        1083);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v31,
              (const char (*)[39])"find formal_avatar failed player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" avatar_id: ");
      val = proto::TakeOffEquipOp::avatar_id(op);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" equip_type: ");
      Uid = proto::TakeOffEquipOp::equip_type(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v9 = -1;
    }
    else
    {
      FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 80));
      v16 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      FightPropGuard::addCreature((FightPropGuard *const)(v2 + 80), v16, 0);
      if ( proto::TakeOffEquipOp::equip_type(op) == 6 )
      {
        std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(
          &p_avatar_ptr,
          (const std::shared_ptr<FormalAvatar> *)(v2 + 48));
        v17 = PlayerOfflineMsgComp::replaceWithInitalWeapon(this, &p_avatar_ptr) != 0;
        std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
        if ( v17 )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "takeoffEquipOp",
            1092);
          v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v31,
                  (const char (*)[37])"replaceWithInitalWeapon fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Uid = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Uid);
          common::milog::MiLogStream::~MiLogStream(&v31);
          v9 = -1;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v19 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        EquipComp = Avatar::getEquipComp(v19);
        v21 = proto::TakeOffEquipOp::equip_type(op);
        *(_DWORD *)(v2 + 32) = EquipComp::takeOffEquipKeepHpRate(EquipComp, (data::EquipType)v21, 1);
        if ( *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "takeoffEquipOp",
            1102);
          v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v31,
                  (const char (*)[34])"takeoff equip failed player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v23,
                  (const char (*)[14])" equip_type: ");
          Uid = proto::TakeOffEquipOp::equip_type(op);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &Uid);
          v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" ret: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v31);
          v9 = -1;
        }
        else
        {
          v9 = 0;
        }
      }
      FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 80));
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 48));
  }
  result = v9;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1109: range 0000000013DB907A-0000000013DB9C80
int32_t __cdecl PlayerOfflineMsgComp::replaceWithInitalWeapon(
        PlayerOfflineMsgComp *const this,
        AvatarPtr *p_avatar_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 p_M_refcount; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  signed int EquipComp; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v19; // r14
  std::_Rb_tree_const_iterator<long unsigned int>::reference v20; // rax
  PlayerItemComp *v21; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int v24; // r15d
  char v25; // r15
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  unsigned __int64 v27; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  EquipComp *v29; // r15
  Equip *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int v37; // r15d
  common::milog::MiLogStream *v38; // r14
  int32_t result; // eax
  char v40; // [rsp+Fh] [rbp-141h]
  unsigned int Uid; // [rsp+20h] [rbp-130h] BYREF
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  std::set<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+38h] [rbp-118h]
  std::set<long unsigned int> *guid_set_ptr; // [rsp+40h] [rbp-110h]
  std::set<long unsigned int> *__for_range; // [rsp+48h] [rbp-108h]
  Equip v48[2]; // [rsp+50h] [rbp-100h] BYREF

  p_M_refcount = (unsigned __int64)&v48[0].player_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "4 32 8 9 guid:1137 64 16 18 cur_equip_ptr:1114 96 16 13 item_ptr:1139 128 16 14 equip_ptr:1144";
  *(_QWORD *)(p_M_refcount + 16) = PlayerOfflineMsgComp::replaceWithInitalWeapon;
  v5 = (_DWORD *)(p_M_refcount >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    v2 = -1;
    goto LABEL_69;
  }
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
  EquipComp = (unsigned int)Avatar::getEquipComp(v6);
  EquipComp::findEquip((const EquipComp *const)(p_M_refcount + 64), (data::EquipType)EquipComp);
  if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(p_M_refcount + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "replaceWithInitalWeapon",
      1117);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
           (const char (*)[39])"findEquip EQUIP_WEAPON fails, avatar: ");
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    val = Avatar::getAvatarId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount);
    v2 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v48);
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v48)->design_config.txt_config_mgr.avatar_config_mgr;
    v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    AvatarId = Avatar::getAvatarId(v11);
    avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, AvatarId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v48);
    if ( avatar_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_config_ptr->initial_weapon);
      }
      if ( avatar_config_ptr->initial_weapon )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)avatar_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&avatar_config_ptr->initial_weapon);
        }
        guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, avatar_config_ptr->initial_weapon);
        if ( !guid_set_ptr || std::set<unsigned long>::empty(guid_set_ptr) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "replaceWithInitalWeapon",
            1134);
          v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
                  (const char (*)[34])"getItmeGuidSetInPack fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount);
          v2 = -1;
        }
        else
        {
          __for_range = guid_set_ptr;
          __for_begin._M_node = std::set<unsigned long>::begin(guid_set_ptr)._M_node;
          __for_end._M_node = std::set<unsigned long>::end(guid_set_ptr)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v20 = std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_QWORD *)(p_M_refcount + 32) = *v20;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v21 = Player::getItemComp(this->player_);
            PlayerItemComp::findItemInPack((PlayerItemComp *const)(p_M_refcount + 96), (uint64_t)v21);
            if ( std::operator==<Item>(0LL, (const std::shared_ptr<Item> *)(p_M_refcount + 96))
              || (v22 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 64)),
                  Item::getGuid(v22) == *(_QWORD *)(p_M_refcount + 32)) )
            {
              v24 = 0;
            }
            else
            {
              std::dynamic_pointer_cast<Equip,Item>((const std::shared_ptr<Item> *)(p_M_refcount + 128));
              v25 = 0;
              if ( !std::operator!=<Equip>((const std::shared_ptr<Equip> *)(p_M_refcount + 128), 0LL) )
                goto LABEL_50;
              std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
              Equip::getOwner(v48);
              v25 = 1;
              if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)v48, 0LL) )
                goto LABEL_50;
              v26 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128));
              if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v27 = (unsigned __int64)(v26->_vptr_Item + 12);
              if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v27)(v26) == 6 )
                v40 = 1;
              else
LABEL_50:
                v40 = 0;
              if ( v25 )
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)v48);
              if ( !v40
                || (v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr),
                    v29 = Avatar::getEquipComp(v28),
                    v30 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 128)),
                    EquipComp::wearEquipKeepHpRate(v29, v30, 1)) )
              {
                v37 = 1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
                  &common::milog::MiLogDefault::default_log_obj_,
                  2u,
                  "./src/player/player_offline_msg_comp.cpp",
                  "replaceWithInitalWeapon",
                  1149);
                v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
                        (const char (*)[40])"player replace weapon succ player_uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Uid = Player::getUid(this->player_);
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &Uid);
                v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v32,
                        (const char (*)[14])" avatar_uid: ");
                v34 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
                val = Avatar::getAvatarId(v34);
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
                v36 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v35,
                        (const char (*)[19])" new_weapon_guid: ");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v36,
                  (const unsigned __int64 *)(p_M_refcount + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount);
                v2 = 0;
                v37 = 0;
              }
              std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(p_M_refcount + 128));
              if ( v37 == 1 )
                v24 = 2;
              else
                v24 = 1;
            }
            std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(p_M_refcount + 96));
            if ( v24 && v24 != 2 )
              goto LABEL_68;
            std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "replaceWithInitalWeapon",
            1154);
          v38 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
                  (const char (*)[40])off_2515BF40);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount);
          v2 = -1;
        }
        goto LABEL_68;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "replaceWithInitalWeapon",
        1128);
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
              (const char (*)[46])"avatar config hasnot init_waipon player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "replaceWithInitalWeapon",
        1123);
      v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount,
              (const char (*)[39])"find avatar config failed player_uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    Uid = Player::getUid(this->player_);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" avatar_id: ");
    v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    val = Avatar::getAvatarId(v16);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48[0]._M_weak_this._M_refcount);
    v2 = -1;
  }
LABEL_68:
  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(p_M_refcount + 64));
LABEL_69:
  result = v2;
  if ( &v48[0].player_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_refcount >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1159: range 0000000013DBA2B2-0000000013DBAB08
int32_t __cdecl PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(
        PlayerOfflineMsgComp *const this,
        AvatarPtr *p_avatar_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  signed int EquipComp; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rcx
  unsigned int *v19; // rax
  uint32_t *v20; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-178h] BYREF
  uint32_t weapon_id; // [rsp+1Ch] [rbp-174h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+30h] [rbp-160h]
  Avatar *avatar; // [rsp+38h] [rbp-158h]
  uint64_t cur_weapon_guid; // [rsp+40h] [rbp-150h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v36; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-130h] BYREF
  char v38[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 22 initial_weapon_id:1210 64 16 18 cur_equip_ptr:1164 96 24 45 check_and_replace_with_wea"
                        "pon_by_item_id:1178 160 24 18 action_reason:1222";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( std::operator==<Avatar>(0LL, p_avatar_ptr) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    EquipComp = (unsigned int)Avatar::getEquipComp(v6);
    EquipComp::findEquip((const EquipComp *const)(v2 + 64), (data::EquipType)EquipComp);
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "replaceWithInitialOrSuitableOrAddedInitialWeapon",
        1167);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v37,
             (const char (*)[39])"findEquip EQUIP_WEAPON fails, avatar: ");
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      *(_DWORD *)(v2 + 48) = Avatar::getAvatarId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v5 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.avatar_config_mgr;
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      AvatarId = Avatar::getAvatarId(v11);
      avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, AvatarId);
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( avatar_config_ptr )
      {
        avatar = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        v17 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        cur_weapon_guid = Item::getGuid(v17);
        *(_QWORD *)(v2 + 96) = this;
        *(_QWORD *)(v2 + 104) = avatar;
        *(_QWORD *)(v2 + 112) = cur_weapon_guid;
        if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)avatar_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->initial_weapon >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&avatar_config_ptr->initial_weapon);
        }
        *(_DWORD *)(v2 + 48) = avatar_config_ptr->initial_weapon;
        if ( PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(std::shared_ptr<Avatar>)::{lambda(unsigned int)#1}::operator()(
               (const PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon::<lambda(uint32_t)> *const)(v2 + 96),
               *(_DWORD *)(v2 + 48)) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v36);
          p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.weapon_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->weapon_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->weapon_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&avatar_config_ptr->weapon_type);
          }
          __for_range = WeaponExcelConfigMgr::getWeaponIdsByWeaponType(
                          p_weapon_config_mgr,
                          avatar_config_ptr->weapon_type);
          std::shared_ptr<Config>::~shared_ptr(&v36);
          __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v19 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            weapon_id = *v20;
            if ( !PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(std::shared_ptr<Avatar>)::{lambda(unsigned int)#1}::operator()(
                    (const PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon::<lambda(uint32_t)> *const)(v2 + 96),
                    weapon_id) )
            {
              v5 = 0;
              goto LABEL_32;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          ActionReason::ActionReason((ActionReason *const)(v2 + 160), ACTION_REASON_OFFLINE_MSG, ITEM_LIMIT_UNLIMITED);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          LODWORD(v36._M_ptr) = *(_DWORD *)(v2 + 48);
          HIDWORD(v36._M_ptr) = 1;
          v36._M_refcount._M_pi = 0LL;
          PlayerItemComp::addItem(ItemComp, (const ItemParam *)&v36, (const ActionReason *)(v2 + 160), 0LL);
          if ( PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(std::shared_ptr<Avatar>)::{lambda(unsigned int)#1}::operator()(
                 (const PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon::<lambda(uint32_t)> *const)(v2 + 96),
                 *(_DWORD *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "replaceWithInitialOrSuitableOrAddedInitialWeapon",
              1228);
            v22 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v37,
                    (const char (*)[55])"replace with initial weapon failed, initial_weapon_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v2 + 48));
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" avatar:");
            v25 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v24, avatar);
            v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v26, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v37);
            v5 = -1;
          }
          else
          {
            v5 = 0;
          }
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "replaceWithInitialOrSuitableOrAddedInitialWeapon",
          1173);
        v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v37,
                (const char (*)[39])"find avatar config failed player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" avatar_id: ");
        v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        *(_DWORD *)(v2 + 48) = Avatar::getAvatarId(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v37);
        v5 = -1;
      }
    }
LABEL_32:
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v2 + 64));
  }
  result = v5;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1178: range 0000000013DB9C82-0000000013DBA2B0
int32_t __cdecl PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(std::shared_ptr<Avatar>)::{lambda(unsigned int)#1}::operator()(
        const PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon::<lambda(uint32_t)> *const __closure,
        uint32_t weapon_id)
{
  int32_t v2; // r15d
  unsigned __int64 p_M_refcount; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerOfflineMsgComp *this; // rax
  PlayerItemComp *ItemComp; // rax
  uint64_t *v9; // rax
  PlayerOfflineMsgComp *v10; // rax
  PlayerItemComp *v11; // rax
  bool v12; // r14
  int v13; // r14d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerOfflineMsgComp *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  char v18; // al
  EquipComp *EquipComp; // r14
  Equip *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *p_player; // rdi
  PlayerOfflineMsgComp *v24; // rax
  int32_t result; // eax
  char v26; // [rsp+13h] [rbp-DDh]
  std::set<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::set<long unsigned int> *guid_set_ptr; // [rsp+30h] [rbp-C0h]
  std::set<long unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  uint64_t guid; // [rsp+40h] [rbp-B0h]
  const data::ItemConfig *item_config_ptr; // [rsp+48h] [rbp-A8h]
  Equip __a; // [rsp+50h] [rbp-A0h] BYREF

  p_M_refcount = (unsigned __int64)&__a.player_wtr_._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      p_M_refcount = v4;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 15 weapon_ptr:1191";
  *(_QWORD *)(p_M_refcount + 16) = PlayerOfflineMsgComp::replaceWithInitialOrSuitableOrAddedInitialWeapon(std::shared_ptr<Avatar>)::{lambda(unsigned int)#1}::operator();
  v5 = p_M_refcount >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, weapon_id);
  if ( !guid_set_ptr || std::set<unsigned long>::empty(guid_set_ptr) )
  {
    v2 = -1;
  }
  else
  {
    __for_range = guid_set_ptr;
    __for_begin._M_node = std::set<unsigned long>::begin(guid_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned long>::end(guid_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = (uint64_t *)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      guid = *v9;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__cur_weapon_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( guid != __closure->__cur_weapon_guid )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getItemComp(v10->player_);
        PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(p_M_refcount + 32), (uint64_t)v11, guid);
        v26 = 0;
        v12 = 1;
        if ( !std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(p_M_refcount + 32)) )
        {
          std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
          Equip::getOwner(&__a);
          v26 = 1;
          if ( !std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)&__a) )
            v12 = 0;
        }
        if ( v26 )
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&__a);
        if ( v12 )
        {
          v13 = 0;
        }
        else
        {
          v14 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
          item_config_ptr = Item::getItemConfig(v14);
          if ( !item_config_ptr )
            goto LABEL_41;
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v15 = __closure->__this;
          if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(v15->player_);
          Level = PlayerBasicComp::getLevel(BasicComp);
          if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->use_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&item_config_ptr->use_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&item_config_ptr->use_level);
          }
          if ( Level >= item_config_ptr->use_level )
            v18 = 0;
          else
LABEL_41:
            v18 = 1;
          if ( v18 )
          {
            v13 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EquipComp = Avatar::getEquipComp(__closure->__avatar);
            v20 = (Equip *)std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
            if ( EquipComp::wearEquipKeepHpRate(EquipComp, v20, 1) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&__a._M_weak_this._M_refcount,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "operator()",
                1203);
              v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      (common::milog::MiLogStream *const)&__a._M_weak_this._M_refcount,
                      (const char (*)[34])"wearEquipKeepHpRate fail, avatar:");
              if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v22 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, __closure->__avatar);
              p_player = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                           v22,
                           (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
              {
                p_player = (common::milog::MiLogStream *)__closure;
                __asan_report_load8();
              }
              v24 = __closure->__this;
              if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
              {
                p_player = (common::milog::MiLogStream *)&__closure->__this->player_;
                __asan_report_load8();
              }
              operator<<(p_player, v24->player_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__a._M_weak_this._M_refcount);
              v13 = 0;
            }
            else
            {
              v2 = 0;
              v13 = 1;
            }
          }
        }
        std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(p_M_refcount + 32));
        if ( v13 )
          goto LABEL_59;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    v2 = -1;
  }
LABEL_59:
  result = v2;
  if ( &__a.player_wtr_._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1233: range 0000000013DBAB0A-0000000013DBAB1C
int32_t __cdecl PlayerOfflineMsgComp::delMailOp(PlayerOfflineMsgComp *const this, const proto::DelMailOp *op)
{
  return 0;
};

// Line 1238: range 0000000013DBAB1E-0000000013DBAD0A
int32_t __cdecl PlayerOfflineMsgComp::unlockAreaOp(PlayerOfflineMsgComp *const this, const proto::UnlockAreaOp *op)
{
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rbx
  uint32_t v3; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v9; // eax
  unsigned int val; // [rsp+10h] [rbp-50h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-4Ch] BYREF
  uint32_t scene_id; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.world_area_config_mgr;
  v3 = proto::UnlockAreaOp::area_id(op);
  scene_id = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(p_world_area_config_mgr, v3);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( scene_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    v9 = proto::UnlockAreaOp::area_id(op);
    if ( PlayerSceneComp::unlockArea(SceneComp, scene_id, v9, 1) )
      return -1;
    else
      return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "unlockAreaOp",
      1242);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v14, (const char (*)[27])off_2515C240);
    val = proto::UnlockAreaOp::area_id(op);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 1254: range 0000000013DBAD0C-0000000013DBB231
int32_t __cdecl PlayerOfflineMsgComp::finishDailyTaskOp(
        PlayerOfflineMsgComp *const this,
        const proto::FinishDailyTaskOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  PlayerDailyTaskComp *DailyTaskComp; // r13
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  common::milog::MiLogStream *v18; // r13
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  unsigned int v21; // [rsp+14h] [rbp-CCh] BYREF
  unsigned int val; // [rsp+18h] [rbp-C8h] BYREF
  uint32_t time_offset; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 now:1255 64 4 12 op_time:1256";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::finishDailyTaskOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v2 + 64) = proto::FinishDailyTaskOp::daily_time(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( !common::tools::TimeUtils::isSameDay(*(unsigned int *)(v2 + 48), *(unsigned int *)(v2 + 64), time_offset) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "finishDailyTaskOp",
      1260);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" now: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" op_time: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" not same day!");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DailyTaskComp = Player::getDailyTaskComp(this->player_);
    v14 = proto::FinishDailyTaskOp::daily_task_id(op);
    if ( (unsigned int)PlayerDailyTaskComp::forceFinishDailyTask(DailyTaskComp, v14) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "finishDailyTaskOp",
        1265);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v25,
              (const char (*)[38])"forceFinishDailyTask fails, task_id: ");
      v21 = proto::FinishDailyTaskOp::daily_task_id(op);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v21);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/player_offline_msg_comp.cpp",
        "finishDailyTaskOp",
        1268);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v25,
              (const char (*)[26])"finishDailyTask task_id: ");
      v21 = proto::FinishDailyTaskOp::daily_task_id(op);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v21);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0;
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 1274: range 0000000013DBB232-0000000013DBB757
int32_t __cdecl PlayerOfflineMsgComp::finishDailyTaskUnloadGroupOp(
        PlayerOfflineMsgComp *const this,
        const proto::FinishDailyTaskUnloadGroupOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  PlayerDailyTaskComp *DailyTaskComp; // r13
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  common::milog::MiLogStream *v18; // r13
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  unsigned int v21; // [rsp+14h] [rbp-CCh] BYREF
  unsigned int val; // [rsp+18h] [rbp-C8h] BYREF
  uint32_t time_offset; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v24; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 now:1275 64 4 12 op_time:1276";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::finishDailyTaskUnloadGroupOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v2 + 64) = proto::FinishDailyTaskUnloadGroupOp::daily_time(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( !common::tools::TimeUtils::isSameDay(*(unsigned int *)(v2 + 48), *(unsigned int *)(v2 + 64), time_offset) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "finishDailyTaskUnloadGroupOp",
      1280);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v25, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" now: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" op_time: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" not same day!");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    DailyTaskComp = Player::getDailyTaskComp(this->player_);
    v14 = proto::FinishDailyTaskUnloadGroupOp::daily_task_id(op);
    if ( (unsigned int)PlayerDailyTaskComp::forceFinishDailyTaskUnloadGroup(DailyTaskComp, v14) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "finishDailyTaskUnloadGroupOp",
        1285);
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v25,
              (const char (*)[49])"forceFinishDailyTaskUnloadGroup fails, task_id: ");
      v21 = proto::FinishDailyTaskUnloadGroupOp::daily_task_id(op);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v21);
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/player_offline_msg_comp.cpp",
        "finishDailyTaskUnloadGroupOp",
        1288);
      v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v25,
              (const char (*)[37])"finishDailyTaskUnloadGroup task_id: ");
      v21 = proto::FinishDailyTaskUnloadGroupOp::daily_task_id(op);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &v21);
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0;
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 1293: range 0000000013DBB758-0000000013DBBF0B
int32_t __cdecl PlayerOfflineMsgComp::setQuestContentProgressOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetQuestContentProgressOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t QuestComp; // eax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v16; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v17; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v18; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v19; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v25; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v26; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v27; // rax
  Quest *v28; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v29; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v30; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v31; // rax
  Quest *v32; // rax
  PlayerQuestComp *v33; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-184h] BYREF
  std::shared_ptr<Quest> p_quest_ptr; // [rsp+20h] [rbp-180h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __last; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __first; // [rsp+50h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator v39; // [rsp+70h] [rbp-130h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator v40; // [rsp+90h] [rbp-110h] BYREF
  common::milog::MiLogStream v41; // [rsp+B0h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 quest_id:1294 48 16 14 quest_ptr:1295 80 48 13 fail_map:1319";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setQuestContentProgressOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = proto::SetQuestContentProgressOp::quest_id(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = (unsigned int)Player::getQuestComp(this->player_);
  PlayerQuestComp::findQuest((const PlayerQuestComp *const)(v2 + 48), QuestComp);
  if ( std::operator==<Quest>((const std::shared_ptr<Quest> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "setQuestContentProgressOp",
      1298);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v41, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" quest_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" not exist.");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( Quest::getState(v11) == QUEST_STATE_UNFINISHED )
    {
      v16 = proto::SetQuestContentProgressOp::finish_progress_map(op);
      if ( google::protobuf::Map<unsigned int,unsigned int>::size(v16)
        && (v17 = proto::SetQuestContentProgressOp::fail_progress_map(op),
            google::protobuf::Map<unsigned int,unsigned int>::size(v17))
        || (v18 = proto::SetQuestContentProgressOp::finish_progress_map(op),
            !google::protobuf::Map<unsigned int,unsigned int>::size(v18))
        && (v19 = proto::SetQuestContentProgressOp::fail_progress_map(op),
            !google::protobuf::Map<unsigned int,unsigned int>::size(v19)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "setQuestContentProgressOp",
          1309);
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v41, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" quest_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v24,
          (const char (*)[23])" progress is conflict.");
        common::milog::MiLogStream::~MiLogStream(&v41);
        v10 = -1;
      }
      else
      {
        v25 = proto::SetQuestContentProgressOp::finish_progress_map(op);
        if ( google::protobuf::Map<unsigned int,unsigned int>::size(v25) )
        {
          v26 = proto::SetQuestContentProgressOp::finish_progress_map(op);
          google::protobuf::Map<unsigned int,unsigned int>::end(&__last, v26);
          v27 = proto::SetQuestContentProgressOp::finish_progress_map(op);
          google::protobuf::Map<unsigned int,unsigned int>::begin(&__first, v27);
          std::map<unsigned int,unsigned int>::map<google::protobuf::Map<unsigned int,unsigned int>::const_iterator>(
            (std::map<unsigned int,unsigned int> *const)(v2 + 80),
            __first,
            __last);
          v28 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          Quest::setFinishProgress(v28, (const std::map<unsigned int,unsigned int> *)(v2 + 80), 1);
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
        }
        v29 = proto::SetQuestContentProgressOp::fail_progress_map(op);
        if ( google::protobuf::Map<unsigned int,unsigned int>::size(v29) )
        {
          v30 = proto::SetQuestContentProgressOp::fail_progress_map(op);
          google::protobuf::Map<unsigned int,unsigned int>::end(&v39, v30);
          v31 = proto::SetQuestContentProgressOp::fail_progress_map(op);
          google::protobuf::Map<unsigned int,unsigned int>::begin(&v40, v31);
          std::map<unsigned int,unsigned int>::map<google::protobuf::Map<unsigned int,unsigned int>::const_iterator>(
            (std::map<unsigned int,unsigned int> *const)(v2 + 80),
            v40,
            v39);
          v32 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          Quest::setFailProgress(v32, (const std::map<unsigned int,unsigned int> *)(v2 + 80), 1);
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 80));
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v33 = Player::getQuestComp(this->player_);
        std::shared_ptr<Quest>::shared_ptr(&p_quest_ptr, (const std::shared_ptr<Quest> *)(v2 + 48));
        PlayerQuestComp::trySettleQuestAfterUpdate(v33, &p_quest_ptr, 1);
        std::shared_ptr<Quest>::~shared_ptr(&p_quest_ptr);
        v10 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_offline_msg_comp.cpp",
        "setQuestContentProgressOp",
        1303);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v41, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" quest_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v15,
        (const char (*)[25])" not in unfinished state");
      common::milog::MiLogStream::~MiLogStream(&v41);
      v10 = -1;
    }
  }
  std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v2 + 48));
  result = v10;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1327: range 0000000013DBBF0C-0000000013DBBF76
int32_t __cdecl PlayerOfflineMsgComp::finishOrderOp(PlayerOfflineMsgComp *const this, const proto::FinishOrderOp *op)
{
  PlayerRechargeComp *RechargeComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RechargeComp = Player::getRechargeComp(this->player_);
  v3 = proto::FinishOrderOp::order_id(op);
  PlayerRechargeComp::finishOrderByOffline(RechargeComp, v3);
  return 0;
};

// Line 1333: range 0000000013DBBF78-0000000013DBC27B
int32_t __cdecl PlayerOfflineMsgComp::addOrModifyWatcherOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddOrModifyWatcherOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t WatcherComp; // eax
  PlayerWatcherComp *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  BaseWatcher *v11; // rax
  int32_t result; // eax
  google::protobuf::uint32 progress; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 watcher_id:1334 64 16 16 watcher_ptr:1336";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::addOrModifyWatcherOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::AddOrModifyWatcherOp::watcher_id(op);
  progress = proto::AddOrModifyWatcherOp::progress(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), WatcherComp);
  if ( !std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
  {
    v11 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BaseWatcher::tryCorrectProgress(v11, progress);
LABEL_14:
    v10 = 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = Player::getWatcherComp(this->player_);
  if ( PlayerWatcherComp::addWatcherByOfflineMsg(v6, *(_DWORD *)(v2 + 48), progress) )
    goto LABEL_14;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/player_offline_msg_comp.cpp",
    "addOrModifyWatcherOp",
    1341);
  v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v14,
         (const char (*)[41])"addWatcherByOfflineMsg fail, watcher_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v14);
  v10 = -1;
LABEL_15:
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  result = v10;
  if ( v15 == (char *)v2 )
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

// Line 1353: range 0000000013DBC27C-0000000013DBC47C
int32_t __cdecl PlayerOfflineMsgComp::delWatcherOp(PlayerOfflineMsgComp *const this, const proto::DelWatcherOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:1354";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::delWatcherOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::DelWatcherOp::watcher_id(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  if ( PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "delWatcherOp",
      1357);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v10,
           (const char (*)[29])"delWatcher fail, watcher_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 1364: range 0000000013DBC47E-0000000013DBC5FB
int32_t __cdecl PlayerOfflineMsgComp::setSignatureOp(PlayerOfflineMsgComp *const this, const proto::SetSignatureOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *v5; // rax
  PlayerSocialComp *SocialComp; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 14 signature:1365";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setSignatureOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = proto::SetSignatureOp::signature[abi:cxx11](op);
  std::string::basic_string(v2 + 32, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  PlayerSocialComp::setSignature(SocialComp, (const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 1371: range 0000000013DBC5FC-0000000013DBCEEB
int32_t __cdecl PlayerOfflineMsgComp::addOrSubResinOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddOrSubResinOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // rax
  _DWORD *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const unsigned int *v11; // rax
  _DWORD *v12; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  PlayerItemComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const proto::AddOrSubResinOp *opa; // [rsp+0h] [rbp-160h]
  PlayerOfflineMsgComp *thisa; // [rsp+8h] [rbp-158h]
  unsigned int *v26; // [rsp+10h] [rbp-150h] BYREF
  PlayerItemComp *item_comp; // [rsp+18h] [rbp-148h]
  common::milog::MiLogStream v28; // [rsp+20h] [rbp-140h] BYREF
  char v29[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 20 cur_resin_count:1373 64 4 21 recover_interval:1392 80 4 14 max_limit:1392 96 4 22 max_"
                        "recover_limit:1392 112 4 19 num_per_bought:1392 128 4 19 real_add_count:1398 144 4 8 ret:1407 16"
                        "0 16 10 param:1404 192 24 18 action_reason:1405";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::addOrSubResinOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  item_comp = Player::getItemComp(this->player_);
  *(_DWORD *)(v2 + 48) = PlayerItemComp::getResin(item_comp);
  if ( proto::AddOrSubResinOp::is_sub(op) )
  {
    HIDWORD(v26) = proto::AddOrSubResinOp::delta_count(op);
    v5 = std::min<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)&v26 + 1);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 144) = *v6;
    if ( !*(_DWORD *)(v2 + 144) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_offline_msg_comp.cpp",
        "addOrSubResinOp",
        1380);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v28, (const char (*)[21])"no need to sub resin");
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0;
      goto LABEL_32;
    }
    if ( (unsigned int)PlayerOfflineMsgComp::internalDelItem(this, 0x6Au, *(_DWORD *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "addOrSubResinOp",
        1386);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v28,
             (const char (*)[38])"resin internalDelItem failed, count: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 144));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = -1;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
    &v9->design_config.txt_config_mgr.const_value_config_mgr,
    CONST_VALUE_RESIN_PARAM,
    (unsigned int *)(v2 + 80),
    (unsigned int *)(v2 + 96),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 112),
    (unsigned int *)op,
    (unsigned int *)this,
    v26);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  if ( *(_DWORD *)(v2 + 48) > *(_DWORD *)(v2 + 80) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "addOrSubResinOp",
      1395);
    v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(&v28, (const char (*)[45])off_2515CAC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
    goto LABEL_32;
  }
  HIDWORD(v26) = proto::AddOrSubResinOp::delta_count(opa);
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 80) - *(_DWORD *)(v2 + 48);
  v11 = std::min<unsigned int>((const unsigned int *)(v2 + 144), (const unsigned int *)&v26 + 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  *(_DWORD *)(v2 + 128) = *v12;
  if ( !*(_DWORD *)(v2 + 128) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "addOrSubResinOp",
      1401);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v28, (const char (*)[21])"no need to add resin");
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0;
    goto LABEL_32;
  }
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 160) = 106;
  *(_DWORD *)(v2 + 164) = *(_DWORD *)(v2 + 128);
  ActionReason::ActionReason((ActionReason *const)(v2 + 192), ACTION_REASON_OFFLINE_MSG, ITEM_LIMIT_UNLIMITED);
  *(_BYTE *)(v2 + 206) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(thisa->player_);
  *(_DWORD *)(v2 + 144) = PlayerItemComp::checkAddItem(
                            ItemComp,
                            (const ItemParam *)(v2 + 160),
                            (const ActionReason *)(v2 + 192));
  if ( *(_DWORD *)(v2 + 144) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "addOrSubResinOp",
      1410);
    v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v28,
            (const char (*)[40])"checkAddItem failed resin, item_count: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 128));
    v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" ret: ");
    v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 144));
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_24:
    HIDWORD(v26) = Player::getUid(thisa->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)&v26 + 1);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = Player::getItemComp(thisa->player_);
  *(_DWORD *)(v2 + 144) = PlayerItemComp::addItem(
                            v19,
                            (const ItemParam *)(v2 + 160),
                            (const ActionReason *)(v2 + 192),
                            0LL);
  if ( *(_DWORD *)(v2 + 144) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "addOrSubResinOp",
      1416);
    v20 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v28,
            (const char (*)[35])"addItem failed resin, item_count: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 128));
    v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])" ret: ");
    v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v2 + 144));
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_24;
  }
LABEL_31:
  result = 0;
LABEL_32:
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1425: range 0000000013DBCEEC-0000000013DBD0DA
int32_t __cdecl PlayerOfflineMsgComp::setQuestGlobalVarValueOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetQuestGlobalVarValueOp *op)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rbx
  uint32_t v3; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  PlayerQuestComp *QuestComp; // rbx
  int32_t v9; // r12d
  uint32_t v10; // eax
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.quest_config_mgr;
  v3 = proto::SetQuestGlobalVarValueOp::id(op);
  LOBYTE(p_quest_config_mgr) = data::QuestExcelConfigMgrBase::findQuestGlobalVarConfig(p_quest_config_mgr, v3) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( (_BYTE)p_quest_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setQuestGlobalVarValueOp",
      1428);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v14,
           (const char (*)[25])"global id not exist, id:");
    val = proto::SetQuestGlobalVarValueOp::id(op);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])" player_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    v9 = proto::SetQuestGlobalVarValueOp::value(op);
    v10 = proto::SetQuestGlobalVarValueOp::id(op);
    PlayerQuestComp::setGlobalVarValue(QuestComp, v10, v9, 1);
    return 0;
  }
};

// Line 1436: range 0000000013DBD0DC-0000000013DBD4DD
int32_t __cdecl PlayerOfflineMsgComp::addMcoinOp(PlayerOfflineMsgComp *const this, const proto::AddMcoinVipPointOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerItemComp *ItemComp; // r14
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // r14
  PlayerRechargeComp *RechargeComp; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  int32_t result; // eax
  proto::PlatformType platform_type; // [rsp+Ch] [rbp-D4h]
  unsigned int Uid; // [rsp+20h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-BCh] BYREF
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 reason:1437";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::addMcoinOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  ActionReason::ActionReason((ActionReason *const)(v2 + 32), ACTION_REASON_OFFLINE_MSG, ITEM_LIMIT_UNLIMITED);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  platform_type = proto::AddMcoinVipPointOp::platform_type(op);
  v6 = proto::AddMcoinVipPointOp::mcoin(op);
  if ( (unsigned int)PlayerItemComp::addMcoin(ItemComp, v6, (const ActionReason *)(v2 + 32), 1, platform_type) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_offline_msg_comp.cpp",
      "addMcoinOp",
      1441);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v21,
           (const char (*)[22])"addMcoin fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RechargeComp = Player::getRechargeComp(this->player_);
  v9 = proto::AddMcoinVipPointOp::vip_point(op);
  PlayerRechargeComp::addVipPoint(RechargeComp, v9, (const ActionReason *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_offline_msg_comp.cpp",
    "addMcoinOp",
    1445);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v21, (const char (*)[16])"addMcoinOp uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" mcoin:");
  v18 = proto::AddMcoinVipPointOp::mcoin(op);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v18);
  v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" vippoint:");
  val = proto::AddMcoinVipPointOp::vip_point(op);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  common::milog::MiLogStream::~MiLogStream(&v21);
  result = 0;
  if ( v22 == (char *)v2 )
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

// Line 1451: range 0000000013DBD4DE-0000000013DBD740
int32_t __cdecl PlayerOfflineMsgComp::exchangeMcoinPlatformOp(
        PlayerOfflineMsgComp *const this,
        const proto::ExchangeMcoinOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerItemComp *ItemComp; // r14
  unsigned int v6; // r15d
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r13
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 reason:1452";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::exchangeMcoinPlatformOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  ActionReason::ActionReason((ActionReason *const)(v2 + 32), ACTION_REASON_OFFLINE_MSG, ITEM_LIMIT_UNLIMITED);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  v6 = proto::ExchangeMcoinOp::exchange_type(op);
  v7 = proto::ExchangeMcoinOp::num(op);
  if ( (unsigned int)PlayerItemComp::exchangeMcoinPlatform(ItemComp, v7, v6, (const ActionReason *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "exchangeMcoinPlatformOp",
      1456);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"exchangeMcoinPlatformOp fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 1462: range 0000000013DBD742-0000000013DBD864
int32_t __cdecl PlayerOfflineMsgComp::procDelOneOffOp(PlayerOfflineMsgComp *const this, const proto::DelOneOffOp *op)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  int v3; // eax
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v5; // r12d
  uint32_t v6; // eax
  google::protobuf::uint32 scene_id; // [rsp+18h] [rbp-28h]
  proto::ProtEntityType type; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v10[2]; // [rsp+20h] [rbp-20h] BYREF

  scene_id = proto::DelOneOffOp::scene_id(op);
  if ( !scene_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v10);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
    scene_id = TxtConfigMgr::getDefaultWorldMainSceneId(&v2->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v10);
  }
  if ( proto::DelOneOffOp::is_monster(op) )
    v3 = 2;
  else
    v3 = 4;
  type = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v5 = proto::DelOneOffOp::config_id(op);
  v6 = proto::DelOneOffOp::group_id(op);
  PlayerSceneComp::delOneOffRecordByMuip(SceneComp, type, scene_id, 0, v6, v5);
  return 0;
};

// Line 1474: range 0000000013DBD866-0000000013DC1998
int32_t __cdecl PlayerOfflineMsgComp::procGroupBinOp(PlayerOfflineMsgComp *const this, const proto::GroupBinOp *op)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r12d
  uint32_t SceneComp; // eax
  char v12; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Scene *v19; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v21; // rdx
  std::pair<int,proto::GroupBin*> GroupBin; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  uint32_t v33; // edx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  Scene *v42; // rax
  SceneBlockGroupComp *v43; // rax
  unsigned __int64 v44; // rdx
  std::pair<int,proto::GroupBin*> v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  bool v56; // dl
  uint32_t v57; // ecx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  const char *v66; // rax
  _BYTE *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  Scene *v70; // rax
  SceneBlockGroupComp *v71; // rax
  unsigned __int64 v72; // rdx
  std::pair<int,proto::GroupBin*> v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  bool v84; // r8
  uint32_t v85; // ecx
  uint32_t v86; // edx
  uint32_t v87; // esi
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rcx
  Scene *v97; // rax
  std::pair<int,proto::GroupBin*> v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  uint32_t v109; // edx
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  Scene *v118; // rax
  SceneBlockGroupComp *v119; // rax
  unsigned __int64 v120; // rdx
  std::pair<int,proto::GroupBin*> v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  bool v132; // dl
  uint32_t v133; // ecx
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  Scene *v142; // rax
  SceneBlockGroupComp *v143; // rax
  unsigned __int64 v144; // rdx
  std::pair<int,proto::GroupBin*> v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  uint32_t v156; // edx
  uint32_t v157; // esi
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  Scene *v166; // rax
  SceneBlockGroupComp *v167; // rax
  unsigned __int64 v168; // rdx
  std::pair<int,proto::GroupBin*> v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  uint32_t v180; // edx
  uint32_t v181; // esi
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rax
  Scene *v190; // rax
  SceneBlockGroupComp *v191; // rax
  unsigned __int64 v192; // rdx
  std::pair<int,proto::GroupBin*> v193; // rax
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // rax
  common::milog::MiLogStream *v199; // rax
  common::milog::MiLogStream *v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // rax
  common::milog::MiLogStream *v203; // rax
  uint32_t v204; // esi
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // rax
  common::milog::MiLogStream *v207; // rax
  common::milog::MiLogStream *v208; // rax
  common::milog::MiLogStream *v209; // rax
  common::milog::MiLogStream *v210; // rax
  common::milog::MiLogStream *v211; // rax
  common::milog::MiLogStream *v212; // rax
  Scene *v213; // rax
  std::pair<int,proto::GroupBin*> v214; // rax
  common::milog::MiLogStream *v215; // rax
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // rax
  common::milog::MiLogStream *v218; // rax
  common::milog::MiLogStream *v219; // rax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rax
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // rax
  common::milog::MiLogStream *v224; // rax
  uint32_t v225; // edx
  uint32_t v226; // ecx
  common::milog::MiLogStream *v227; // rax
  common::milog::MiLogStream *v228; // rax
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // rax
  common::milog::MiLogStream *v232; // rax
  Scene *v233; // rax
  SceneBlockGroupComp *v234; // rax
  unsigned __int64 v235; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v236; // rax
  common::milog::MiLogStream *v237; // rax
  common::milog::MiLogStream *v238; // rax
  common::milog::MiLogStream *v239; // rax
  common::milog::MiLogStream *v240; // rax
  Scene *v241; // rax
  SceneBlockGroupComp *v242; // r12
  unsigned __int64 v243; // rax
  __int64 (__fastcall *v244)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // r15
  common::milog::MiLogStream *v245; // r12
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rcx
  int32_t result; // eax
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-220h]
  std::allocator<unsigned int> __a; // [rsp+3Ch] [rbp-1F4h] BYREF
  bool is_create; // [rsp+3Dh] [rbp-1F3h]
  bool is_add_0; // [rsp+3Eh] [rbp-1F2h]
  bool is_add; // [rsp+3Fh] [rbp-1F1h]
  int32_t ret_9; // [rsp+40h] [rbp-1F0h]
  int32_t variable_value; // [rsp+48h] [rbp-1E8h]
  uint32_t trigger_count; // [rsp+4Ch] [rbp-1E4h]
  BlockDataMgr *block_data_mgr; // [rsp+50h] [rbp-1E0h]
  const GroupScriptConfig *group_config_ptr; // [rsp+58h] [rbp-1D8h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+60h] [rbp-1D0h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_1; // [rsp+68h] [rbp-1C8h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_1; // [rsp+70h] [rbp-1C0h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_7; // [rsp+78h] [rbp-1B8h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_7; // [rsp+80h] [rbp-1B0h]
  const std::string *variable_name; // [rsp+88h] [rbp-1A8h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_6; // [rsp+90h] [rbp-1A0h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_6; // [rsp+98h] [rbp-198h]
  const std::string *trigger_name_0; // [rsp+A0h] [rbp-190h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_5; // [rsp+A8h] [rbp-188h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_5; // [rsp+B0h] [rbp-180h]
  const std::string *trigger_name; // [rsp+B8h] [rbp-178h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_4; // [rsp+C0h] [rbp-170h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_4; // [rsp+C8h] [rbp-168h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_3; // [rsp+D0h] [rbp-160h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_3; // [rsp+D8h] [rbp-158h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_2; // [rsp+E0h] [rbp-150h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_2; // [rsp+E8h] [rbp-148h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret_0; // [rsp+F0h] [rbp-140h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr_0; // [rsp+F8h] [rbp-138h]
  std::tuple_element<0,std::pair<int,proto::GroupBin*> >::type *ret; // [rsp+100h] [rbp-130h]
  std::tuple_element<1,std::pair<int,proto::GroupBin*> >::type *mutable_group_bin_ptr; // [rsp+108h] [rbp-128h]
  std::pair<int,proto::GroupBin*> __in; // [rsp+110h] [rbp-120h] BYREF
  std::vector<unsigned int> v283; // [rsp+120h] [rbp-110h] BYREF
  common::milog::MiLogStream v284; // [rsp+140h] [rbp-F0h] BYREF
  char v285[208]; // [rsp+160h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v285;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 scene_id:1475 64 4 13 group_id:1480 80 4 8 uid:1481 96 4 14 config_id:1574 112 4 14 co"
                        "nfig_id:1499 128 16 21 target_scene_ptr:1489";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procGroupBinOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::GroupBinOp::scene_id(op);
  if ( !*(_DWORD *)(v2 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__in);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in);
    *(_DWORD *)(v2 + 48) = TxtConfigMgr::getDefaultWorldMainSceneId(&v5->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
  }
  *(_DWORD *)(v2 + 64) = proto::GroupBinOp::group_id(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 80) = Player::getUid(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  block_data_mgr = Player::getBlockDataMgr(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__in);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in);
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v6->design_config.lua_config_mgr, *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findWorldOrPersistentDungeonScenePtr((const PlayerSceneComp *const)(v2 + 128), SceneComp);
    v12 = 0;
    v14 = 0;
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__in);
      v12 = 1;
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in);
      if ( !SceneExcelConfigMgr::isPersistentDungeonScene(
              &v13->design_config.txt_config_mgr.scene_config_mgr,
              *(_DWORD *)(v2 + 48)) )
        v14 = 1;
    }
    if ( v12 )
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v284,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procGroupBinOp",
        1492);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v284, (const char (*)[48])off_2515D080);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_268:
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v284);
      v10 = -1;
    }
    else
    {
      switch ( proto::GroupBinOp::op_type(op) )
      {
        case GROUP_OP_GADGET_MAP_DEL:
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::config_id(op);
          if ( !GroupScriptConfig::findGadgetConfig(group_config_ptr, *(_DWORD *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1502);
            v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v284,
                    (const char (*)[29])"findGadgetConfig config_id: ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v2 + 112));
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v18,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_268;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            BlockGroupComp = Scene::getBlockGroupComp(v19);
            if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v21 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 26);
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_234;
          }
          GroupBin = BlockDataMgr::findGroupBin(
                       block_data_mgr,
                       *(_DWORD *)(v2 + 48),
                       (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = GroupBin.first;
          __in.second = GroupBin.second;
          ret = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret);
          }
          if ( *ret )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1514);
            v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v284,
                    (const char (*)[32])"findGroupBin failed, scene_id: ");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v2 + 48));
            v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])"group_id: ");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 64));
            v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr )
            {
              v33 = *(_DWORD *)(v2 + 112);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::removeFromGadgetMap(*mutable_group_bin_ptr, v33) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1529);
                  v37 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v284,
                          (const char (*)[42])" save failed. group bin not found. group:");
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v37,
                          (const unsigned int *)(v2 + 64));
                  v39 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1524);
              v34 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v284,
                      (const char (*)[48])"group bin removeFromGadgetMap failed, group_id:");
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v2 + 64));
              v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1519);
              v28 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v284,
                      (const char (*)[32])"findGroupBin failed, scene_id: ");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v2 + 48));
              v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v29,
                      (const char (*)[11])"group_id: ");
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v30,
                      (const unsigned int *)(v2 + 64));
              v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_DEL_GADGET_LIST:
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::config_id(op);
          is_add = proto::GroupBinOp::is_add(op);
          if ( !GroupScriptConfig::findGadgetConfig(group_config_ptr, *(_DWORD *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1540);
            v40 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v284,
                    (const char (*)[29])"findGadgetConfig config_id: ");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v40,
                    (const unsigned int *)(v2 + 112));
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v41,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_268;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v42 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v43 = Scene::getBlockGroupComp(v42);
            if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v44 = (unsigned __int64)(v43->_vptr_SceneCompBase + 28);
            if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, _QWORD, bool))v44)(
              v43,
              *(unsigned int *)(v2 + 64),
              *(unsigned int *)(v2 + 112),
              is_add);
            goto LABEL_278;
          }
          v45 = BlockDataMgr::findGroupBin(
                  block_data_mgr,
                  *(_DWORD *)(v2 + 48),
                  (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v45.first;
          __in.second = v45.second;
          ret_0 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_0 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_0);
          }
          if ( *ret_0 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1552);
            v46 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v284,
                    (const char (*)[32])"findGroupBin failed, scene_id: ");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v46,
                    (const unsigned int *)(v2 + 48));
            v48 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v47, (const char (*)[11])"group_id: ");
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    (const unsigned int *)(v2 + 64));
            v50 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v49, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_0 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_0 )
            {
              v56 = is_add;
              v57 = *(_DWORD *)(v2 + 112);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_0 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::procDelGadgetList(*mutable_group_bin_ptr_0, v57, v56) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1567);
                  v61 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v284,
                          (const char (*)[42])" save failed. group bin not found. group:");
                  v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v61,
                          (const unsigned int *)(v2 + 64));
                  v63 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v62, (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v63,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1562);
              v58 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      &v284,
                      (const char (*)[46])"group bin procDelGadgetList failed, group_id:");
              v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v58,
                      (const unsigned int *)(v2 + 64));
              v60 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v59, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v60,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1557);
              v51 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v284,
                      (const char (*)[32])"findGroupBin failed, scene_id: ");
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v51,
                      (const unsigned int *)(v2 + 48));
              v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v52,
                      (const char (*)[11])"group_id: ");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v53,
                      (const unsigned int *)(v2 + 64));
              v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v55,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_MONSTER_MAP_DEL:
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::config_id(op);
          if ( !GroupScriptConfig::findMonsterConfig(group_config_ptr, *(_DWORD *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1621);
            v94 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v284,
                    (const char (*)[30])"findMonsterConfig config_id: ");
            v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v94,
                    (const unsigned int *)(v2 + 112));
            v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v95,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_228;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v97 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            BlockGroupComp = Scene::getBlockGroupComp(v97);
            if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v21 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 27);
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_234;
          }
          v98 = BlockDataMgr::findGroupBin(
                  block_data_mgr,
                  *(_DWORD *)(v2 + 48),
                  (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v98.first;
          __in.second = v98.second;
          ret_2 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_2 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_2 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_2 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_2);
          }
          if ( *ret_2 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1633);
            v99 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v284,
                    (const char (*)[32])"findGroupBin failed, scene_id: ");
            v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v99,
                     (const unsigned int *)(v2 + 48));
            v101 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v100,
                     (const char (*)[11])"group_id: ");
            v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v101,
                     (const unsigned int *)(v2 + 64));
            v103 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v102, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v103,
              (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_2 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_2 )
            {
              v109 = *(_DWORD *)(v2 + 112);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_2 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::removeFromMonsterMap(*mutable_group_bin_ptr_2, v109) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1648);
                  v113 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           &v284,
                           (const char (*)[42])" save failed. group bin not found. group:");
                  v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v113,
                           (const unsigned int *)(v2 + 64));
                  v115 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                           v114,
                           (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v115,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1643);
              v110 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                       &v284,
                       (const char (*)[49])"group bin removeFromMonsterMap failed, group_id:");
              v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v110,
                       (const unsigned int *)(v2 + 64));
              v112 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v111, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v112,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1638);
              v104 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v104,
                       (const unsigned int *)(v2 + 48));
              v106 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v105,
                       (const char (*)[11])"group_id: ");
              v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v106,
                       (const unsigned int *)(v2 + 64));
              v108 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v107, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v108,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_DEL_MONSTER_LIST:
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::config_id(op);
          is_add_0 = proto::GroupBinOp::is_add(op);
          if ( !GroupScriptConfig::findMonsterConfig(group_config_ptr, *(_DWORD *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1659);
            v116 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                     &v284,
                     (const char (*)[30])"findMonsterConfig config_id: ");
            v117 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v116,
                     (const unsigned int *)(v2 + 112));
            v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v117,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_228;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v118 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v119 = Scene::getBlockGroupComp(v118);
            if ( *(_BYTE *)(((unsigned __int64)v119 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v120 = (unsigned __int64)(v119->_vptr_SceneCompBase + 29);
            if ( *(_BYTE *)((v120 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, _QWORD, bool))v120)(
              v119,
              *(unsigned int *)(v2 + 64),
              *(unsigned int *)(v2 + 112),
              is_add_0);
            goto LABEL_278;
          }
          v121 = BlockDataMgr::findGroupBin(
                   block_data_mgr,
                   *(_DWORD *)(v2 + 48),
                   (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v121.first;
          __in.second = v121.second;
          ret_3 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_3 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_3 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_3);
          }
          if ( *ret_3 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1671);
            v122 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v284,
                     (const char (*)[32])"findGroupBin failed, scene_id: ");
            v123 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v122,
                     (const unsigned int *)(v2 + 48));
            v124 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v123,
                     (const char (*)[11])"group_id: ");
            v125 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v124,
                     (const unsigned int *)(v2 + 64));
            v126 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v125, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v126,
              (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_3 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_3 )
            {
              v132 = is_add_0;
              v133 = *(_DWORD *)(v2 + 112);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_3 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::procDelMonsterList(*mutable_group_bin_ptr_3, v133, v132) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1686);
                  v137 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           &v284,
                           (const char (*)[42])" save failed. group bin not found. group:");
                  v138 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v137,
                           (const unsigned int *)(v2 + 64));
                  v139 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                           v138,
                           (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v139,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1681);
              v134 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                       &v284,
                       (const char (*)[47])"group bin procDelMonsterList failed, group_id:");
              v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v134,
                       (const unsigned int *)(v2 + 64));
              v136 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v135, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v136,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1676);
              v127 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v128 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v127,
                       (const unsigned int *)(v2 + 48));
              v129 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v128,
                       (const char (*)[11])"group_id: ");
              v130 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v129,
                       (const unsigned int *)(v2 + 64));
              v131 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v130, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v131,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GORUP_OP_DEL_TRIGGER:
          trigger_name = proto::GroupBinOp::trigger_name[abi:cxx11](op);
          if ( !GroupScriptConfig::findTriggerConfig(group_config_ptr, trigger_name) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1696);
            v140 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     &v284,
                     (const char (*)[33])"findTriggerConfig trigger_name: ");
            v141 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v140, trigger_name);
            v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v141,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_228;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v142 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v143 = Scene::getBlockGroupComp(v142);
            if ( *(_BYTE *)(((unsigned __int64)v143 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v144 = (unsigned __int64)(v143->_vptr_SceneCompBase + 30);
            if ( *(_BYTE *)((v144 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, const std::string *, _QWORD, __int64))v144)(
              v143,
              *(unsigned int *)(v2 + 64),
              trigger_name,
              0LL,
              1LL);
            goto LABEL_278;
          }
          v145 = BlockDataMgr::findGroupBin(
                   block_data_mgr,
                   *(_DWORD *)(v2 + 48),
                   (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v145.first;
          __in.second = v145.second;
          ret_4 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_4 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_4 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_4 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_4);
          }
          if ( *ret_4 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1708);
            v146 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v284,
                     (const char (*)[32])"findGroupBin failed, scene_id: ");
            v147 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v146,
                     (const unsigned int *)(v2 + 48));
            v148 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v147,
                     (const char (*)[11])"group_id: ");
            v149 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v148,
                     (const unsigned int *)(v2 + 64));
            v150 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v149, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v150,
              (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_4 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_4 )
            {
              v156 = *(_DWORD *)(v2 + 80);
              v157 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_4 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::procTrigger(*mutable_group_bin_ptr_4, v157, v156, trigger_name, 0, 1) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1723);
                  v161 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           &v284,
                           (const char (*)[42])" save failed. group bin not found. group:");
                  v162 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v161,
                           (const unsigned int *)(v2 + 64));
                  v163 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                           v162,
                           (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v163,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1718);
              v158 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                       &v284,
                       (const char (*)[40])"group bin procTrigger failed, group_id:");
              v159 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v158,
                       (const unsigned int *)(v2 + 64));
              v160 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v159, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v160,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1713);
              v151 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v152 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v151,
                       (const unsigned int *)(v2 + 48));
              v153 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v152,
                       (const char (*)[11])"group_id: ");
              v154 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v153,
                       (const unsigned int *)(v2 + 64));
              v155 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v154, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v155,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_SET_TRIGGER_COUNT:
          trigger_name_0 = proto::GroupBinOp::trigger_name[abi:cxx11](op);
          trigger_count = proto::GroupBinOp::trigger_count(op);
          if ( !GroupScriptConfig::findTriggerConfig(group_config_ptr, trigger_name_0) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1734);
            v164 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                     &v284,
                     (const char (*)[33])"findTriggerConfig trigger_name: ");
            v165 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v164, trigger_name_0);
            v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v165,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_228;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v166 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v167 = Scene::getBlockGroupComp(v166);
            if ( *(_BYTE *)(((unsigned __int64)v167 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v168 = (unsigned __int64)(v167->_vptr_SceneCompBase + 30);
            if ( *(_BYTE *)((v168 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, const std::string *, _QWORD, _QWORD))v168)(
              v167,
              *(unsigned int *)(v2 + 64),
              trigger_name_0,
              trigger_count,
              0LL);
            goto LABEL_278;
          }
          v169 = BlockDataMgr::findGroupBin(
                   block_data_mgr,
                   *(_DWORD *)(v2 + 48),
                   (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v169.first;
          __in.second = v169.second;
          ret_5 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_5 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_5);
          }
          if ( *ret_5 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1746);
            v170 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v284,
                     (const char (*)[32])"findGroupBin failed, scene_id: ");
            v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v170,
                     (const unsigned int *)(v2 + 48));
            v172 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v171,
                     (const char (*)[11])"group_id: ");
            v173 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v172,
                     (const unsigned int *)(v2 + 64));
            v174 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v173, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v174,
              (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_5 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_5 )
            {
              v180 = *(_DWORD *)(v2 + 80);
              v181 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_5 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::procTrigger(
                                    *mutable_group_bin_ptr_5,
                                    v181,
                                    v180,
                                    trigger_name_0,
                                    trigger_count,
                                    0) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1761);
                  v185 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           &v284,
                           (const char (*)[42])" save failed. group bin not found. group:");
                  v186 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v185,
                           (const unsigned int *)(v2 + 64));
                  v187 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                           v186,
                           (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v187,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1756);
              v182 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                       &v284,
                       (const char (*)[40])"group bin procTrigger failed, group_id:");
              v183 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v182,
                       (const unsigned int *)(v2 + 64));
              v184 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v183, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v184,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1751);
              v175 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v176 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v175,
                       (const unsigned int *)(v2 + 48));
              v177 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v176,
                       (const char (*)[11])"group_id: ");
              v178 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v177,
                       (const unsigned int *)(v2 + 64));
              v179 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v178, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v179,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_SET_VARIABLE_VAL:
          variable_name = proto::GroupBinOp::variable_name[abi:cxx11](op);
          variable_value = proto::GroupBinOp::variable_value(op);
          if ( !std::unordered_map<std::string,VariableScriptConfig>::count(
                  &group_config_ptr->variable_map,
                  variable_name) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1772);
            v188 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     &v284,
                     (const char (*)[16])"varaible_name: ");
            v189 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v188, variable_name);
            v96 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v189,
                    (const char (*)[20])" not found, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_228;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v190 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v191 = Scene::getBlockGroupComp(v190);
            if ( *(_BYTE *)(((unsigned __int64)v191 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v192 = (unsigned __int64)(v191->_vptr_SceneCompBase + 31);
            if ( *(_BYTE *)((v192 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, const std::string *, _QWORD))v192)(
              v191,
              *(unsigned int *)(v2 + 64),
              variable_name,
              (unsigned int)variable_value);
            goto LABEL_278;
          }
          v193 = BlockDataMgr::findGroupBin(
                   block_data_mgr,
                   *(_DWORD *)(v2 + 48),
                   (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v193.first;
          __in.second = v193.second;
          ret_6 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_6 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_6);
          }
          if ( *ret_6 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1784);
            v194 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v284,
                     (const char (*)[32])"findGroupBin failed, scene_id: ");
            v195 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v194,
                     (const unsigned int *)(v2 + 48));
            v196 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v195,
                     (const char (*)[11])"group_id: ");
            v197 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v196,
                     (const unsigned int *)(v2 + 64));
            v198 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v197, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v198,
              (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_6 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_6 )
            {
              v204 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_6 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::procVariable(
                                    *mutable_group_bin_ptr_6,
                                    v204,
                                    variable_name,
                                    variable_value) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1799);
                  v208 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           &v284,
                           (const char (*)[42])" save failed. group bin not found. group:");
                  v209 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v208,
                           (const unsigned int *)(v2 + 64));
                  v210 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                           v209,
                           (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v210,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1794);
              v205 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                       &v284,
                       (const char (*)[41])"group bin procVariable failed, group_id:");
              v206 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v205,
                       (const unsigned int *)(v2 + 64));
              v207 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v206, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v207,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1789);
              v199 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v200 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v199,
                       (const unsigned int *)(v2 + 48));
              v201 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v200,
                       (const char (*)[11])"group_id: ");
              v202 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v201,
                       (const unsigned int *)(v2 + 64));
              v203 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v202, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v203,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_SET_TARGET_SUITE:
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::target_suite(op);
          if ( GroupScriptConfig::getSuiteConfig(group_config_ptr, *(_DWORD *)(v2 + 112)) )
          {
            if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
            {
              v213 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              BlockGroupComp = Scene::getBlockGroupComp(v213);
              if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v21 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 32);
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
LABEL_234:
              (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, _QWORD))v21)(
                BlockGroupComp,
                *(unsigned int *)(v2 + 64),
                *(unsigned int *)(v2 + 112));
              goto LABEL_278;
            }
            v214 = BlockDataMgr::findGroupBin(
                     block_data_mgr,
                     *(_DWORD *)(v2 + 48),
                     (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
            __in.first = v214.first;
            __in.second = v214.second;
            ret_7 = std::get<0ul,int,proto::GroupBin *>(&__in);
            mutable_group_bin_ptr_7 = std::get<1ul,int,proto::GroupBin *>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)ret_7 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret_7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_7 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(ret_7);
            }
            if ( *ret_7 )
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1821);
              v215 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                       &v284,
                       (const char (*)[32])"findGroupBin failed, scene_id: ");
              v216 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v215,
                       (const unsigned int *)(v2 + 48));
              v217 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v216,
                       (const char (*)[11])"group_id: ");
              v218 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v217,
                       (const unsigned int *)(v2 + 64));
              v219 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v218, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v219,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_7 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( *mutable_group_bin_ptr_7 )
              {
                v225 = *(_DWORD *)(v2 + 112);
                v226 = *(_DWORD *)(v2 + 64);
                if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_7 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                if ( !BlockDataMgr::setTargetSuite(*mutable_group_bin_ptr_7, v226, v225) )
                {
                  if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                  {
                    common::milog::MiLogStream::create(
                      &v284,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/player_offline_msg_comp.cpp",
                      "procGroupBinOp",
                      1836);
                    v230 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                             &v284,
                             (const char (*)[42])" save failed. group bin not found. group:");
                    v231 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v230,
                             (const unsigned int *)(v2 + 64));
                    v232 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                             v231,
                             (const char (*)[7])", uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v232,
                      (const unsigned int *)(v2 + 80));
                    common::milog::MiLogStream::~MiLogStream(&v284);
                  }
                  goto LABEL_278;
                }
                common::milog::MiLogStream::create(
                  &v284,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/player_offline_msg_comp.cpp",
                  "procGroupBinOp",
                  1831);
                v227 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                         &v284,
                         (const char (*)[43])"group bin setTargetSuite failed, group_id:");
                v228 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v227,
                         (const unsigned int *)(v2 + 64));
                v229 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v228, (const char (*)[7])", uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v229,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream(&v284);
                v10 = -1;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v284,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/player_offline_msg_comp.cpp",
                  "procGroupBinOp",
                  1826);
                v220 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                         &v284,
                         (const char (*)[32])"findGroupBin failed, scene_id: ");
                v221 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v220,
                         (const unsigned int *)(v2 + 48));
                v222 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                         v221,
                         (const char (*)[11])"group_id: ");
                v223 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v222,
                         (const unsigned int *)(v2 + 64));
                v224 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v223, (const char (*)[8])", uid: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v224,
                  (const unsigned int *)(v2 + 80));
                common::milog::MiLogStream::~MiLogStream(&v284);
                v10 = -1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1809);
            v211 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                     &v284,
                     (const char (*)[30])"getSuiteConfig target_suite: ");
            v212 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v211,
                     (const unsigned int *)(v2 + 112));
            v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v212,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
LABEL_228:
            operator<<(v96, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = 513;
          }
          break;
        case GROUP_OP_SET_GADGET_STATE:
          *(_DWORD *)(v2 + 96) = proto::GroupBinOp::config_id(op);
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::state(op);
          is_create = proto::GroupBinOp::is_create(op);
          if ( !GroupScriptConfig::findGadgetConfig(group_config_ptr, *(_DWORD *)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1579);
            v64 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v284,
                    (const char (*)[29])"findGadgetConfig config_id: ");
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v64,
                    (const unsigned int *)(v2 + 96));
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v65,
                    (const char (*)[16])" fails, player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_268;
          }
          v66 = data::enumValToStr((data::GadgetState)*(_DWORD *)(v2 + 112));
          v67 = v66;
          if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v66 & 7) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(v66);
          }
          if ( !*v67 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1584);
            v68 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v284,
                    (const char (*)[23])"invalid gadget state: ");
            v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v68,
                    (const unsigned int *)(v2 + 112));
            v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v69, (const char (*)[10])", player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            goto LABEL_268;
          }
          if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v70 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v71 = Scene::getBlockGroupComp(v70);
            if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v72 = (unsigned __int64)(v71->_vptr_SceneCompBase + 33);
            if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            (*(void (__fastcall **)(SceneBlockGroupComp *, _QWORD, _QWORD, _QWORD, bool))v72)(
              v71,
              *(unsigned int *)(v2 + 64),
              *(unsigned int *)(v2 + 96),
              *(unsigned int *)(v2 + 112),
              is_create);
            goto LABEL_278;
          }
          v73 = BlockDataMgr::findGroupBin(
                  block_data_mgr,
                  *(_DWORD *)(v2 + 48),
                  (std::_Rb_tree_color)*(_DWORD *)(v2 + 64));
          __in.first = v73.first;
          __in.second = v73.second;
          ret_1 = std::get<0ul,int,proto::GroupBin *>(&__in);
          mutable_group_bin_ptr_1 = std::get<1ul,int,proto::GroupBin *>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret_1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(ret_1);
          }
          if ( *ret_1 )
          {
            common::milog::MiLogStream::create(
              &v284,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_offline_msg_comp.cpp",
              "procGroupBinOp",
              1596);
            v74 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v284,
                    (const char (*)[32])"findGroupBin failed, scene_id: ");
            v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v74,
                    (const unsigned int *)(v2 + 48));
            v76 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v75, (const char (*)[11])"group_id: ");
            v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v76,
                    (const unsigned int *)(v2 + 64));
            v78 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v77, (const char (*)[8])", uid: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v284);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_1 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( *mutable_group_bin_ptr_1 )
            {
              v84 = is_create;
              v85 = *(_DWORD *)(v2 + 112);
              v86 = *(_DWORD *)(v2 + 96);
              v87 = *(_DWORD *)(v2 + 64);
              if ( *(_BYTE *)(((unsigned __int64)mutable_group_bin_ptr_1 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !(unsigned int)BlockDataMgr::setGadgetState(*mutable_group_bin_ptr_1, v87, v86, v85, v84) )
              {
                if ( (unsigned int)BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v284,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/player_offline_msg_comp.cpp",
                    "procGroupBinOp",
                    1611);
                  v91 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          &v284,
                          (const char (*)[42])" save failed. group bin not found. group:");
                  v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v91,
                          (const unsigned int *)(v2 + 64));
                  v93 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v92, (const char (*)[7])", uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v93,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v284);
                }
                goto LABEL_278;
              }
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1606);
              v88 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v284,
                      (const char (*)[43])"group bin setGadgetState failed, group_id:");
              v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v88,
                      (const unsigned int *)(v2 + 64));
              v90 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v89, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v90,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1601);
              v79 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v284,
                      (const char (*)[32])"findGroupBin failed, scene_id: ");
              v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v79,
                      (const unsigned int *)(v2 + 48));
              v81 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v80,
                      (const char (*)[11])"group_id: ");
              v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v81,
                      (const unsigned int *)(v2 + 64));
              v83 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v82, (const char (*)[8])", uid: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v83,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v284);
              v10 = -1;
            }
          }
          break;
        case GROUP_OP_SET_DEAD:
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v10 = -1;
          }
          else
          {
            v233 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v234 = Scene::getBlockGroupComp(v233);
            if ( *(_BYTE *)(((unsigned __int64)v234 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v235 = (unsigned __int64)(v234->_vptr_SceneCompBase + 19);
            if ( *(_BYTE *)((v235 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( !(*(unsigned int (__fastcall **)(SceneBlockGroupComp *, _QWORD))v235)(v234, *(unsigned int *)(v2 + 64)) )
              goto LABEL_278;
            v10 = -1;
          }
          break;
        case GROUP_OP_SET_UNREGISTER:
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 128)) )
          {
            v10 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&__in);
            v236 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__in);
            group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(
                                      &v236->design_config.lua_config_mgr,
                                      *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__in);
            if ( !group_info_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1863);
              v237 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                       &v284,
                       (const char (*)[31])"findGroupInfoConfig group_id: ");
              v238 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v237,
                       (const unsigned int *)(v2 + 64));
              v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v238,
                      (const char (*)[17])" fails, player: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              goto LABEL_268;
            }
            if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
            if ( !group_info_config_ptr->is_dynamic_load )
            {
              common::milog::MiLogStream::create(
                &v284,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/player_offline_msg_comp.cpp",
                "procGroupBinOp",
                1868);
              v239 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                       &v284,
                       (const char (*)[21])"unregister group_id:");
              v240 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v239,
                       (const unsigned int *)(v2 + 64));
              v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v240,
                      (const char (*)[30])off_2515D820);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              goto LABEL_268;
            }
            v241 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v242 = Scene::getBlockGroupComp(v241);
            if ( *(_BYTE *)(((unsigned __int64)v242 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v243 = (unsigned __int64)(v242->_vptr_SceneCompBase + 13);
            if ( *(_BYTE *)((v243 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v244 = *(__int64 (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v243;
            *(_DWORD *)(v2 + 112) = *(_DWORD *)(v2 + 64);
            __l._M_array = (std::initializer_list<unsigned int>::iterator)(v2 + 112);
            __l._M_len = 1LL;
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(&v283, __l, &__a);
            ret_9 = v244(v242, &v283, 1LL);
            std::vector<unsigned int>::~vector(&v283);
            std::allocator<unsigned int>::~allocator(&__a);
            if ( !ret_9 )
              goto LABEL_278;
            v10 = -1;
          }
          break;
        default:
          common::milog::MiLogStream::create(
            &v284,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_offline_msg_comp.cpp",
            "procGroupBinOp",
            1880);
          v245 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   &v284,
                   (const char (*)[27])off_2515D860);
          *(_DWORD *)(v2 + 112) = proto::GroupBinOp::op_type(op);
          v246 = common::milog::MiLogStream::operator<<<proto::GroupBinOperation,(proto::GroupBinOperation*)0>(
                   v245,
                   (const proto::GroupBinOperation *)(v2 + 112));
          v247 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v246, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v247, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v284);
LABEL_278:
          v10 = 0;
          break;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v284,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procGroupBinOp",
      1486);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v284,
           (const char (*)[33])"findGroupScriptConfig group_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" fails, player: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v284);
    v10 = -1;
  }
  result = v10;
  if ( v285 == (char *)v2 )
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

// Line 1889: range 0000000013DC199A-0000000013DC1BDF
int32_t __cdecl PlayerOfflineMsgComp::finishRoutineOp(
        PlayerOfflineMsgComp *const this,
        const proto::FinishRoutineOp *op)
{
  PlayerRoutineComp *RoutineComp; // rbx
  uint32_t v3; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RoutineComp = Player::getRoutineComp(this->player_);
  v3 = proto::FinishRoutineOp::routine_id(op);
  if ( PlayerRoutineComp::forceFinishRoutine(RoutineComp, v3) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "finishRoutineOp",
      1892);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v13,
           (const char (*)[31])"forceFinishRoutine fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])" routine_id:");
    Uid = proto::FinishRoutineOp::routine_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "finishRoutineOp",
      1895);
    v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v13,
           (const char (*)[27])"finishRoutine routine_id: ");
    val = proto::FinishRoutineOp::routine_id(op);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
};

// Line 1900: range 0000000013DC1BE0-0000000013DC1F19
int32_t __cdecl PlayerOfflineMsgComp::blessingGivePicOp(
        PlayerOfflineMsgComp *const this,
        const proto::BlessingActivityGivePicOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  BlessingActivity *v10; // r14
  uint32_t v11; // r15d
  uint32_t v12; // eax
  int32_t result; // eax
  unsigned int v14; // [rsp+28h] [rbp-98h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1901";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::blessingGivePicOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<BlessingActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<BlessingActivity>(0LL, (const std::shared_ptr<BlessingActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "blessingGivePicOp",
      1904);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v16,
           (const char (*)[42])"[BLESSING] activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "blessingGivePicOp",
      1907);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v16,
           (const char (*)[38])"[BLESSING] blessingGivePicOp pic_id: ");
    v14 = proto::BlessingActivityGivePicOp::pic_id(op);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v14);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" source_uid: ");
    val = proto::BlessingActivityGivePicOp::source_uid(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = std::__shared_ptr_access<BlessingActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlessingActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v11 = proto::BlessingActivityGivePicOp::source_uid(op);
    v12 = proto::BlessingActivityGivePicOp::pic_id(op);
    BlessingActivity::onRecvFriendPic(v10, v12, v11);
    v6 = 0;
  }
  std::shared_ptr<BlessingActivity>::~shared_ptr((std::shared_ptr<BlessingActivity> *const)(v2 + 32));
  result = v6;
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

// Line 1913: range 0000000013DC1F1A-0000000013DC2237
int32_t __cdecl PlayerOfflineMsgComp::expeditionAssistOp(
        PlayerOfflineMsgComp *const this,
        const proto::ExpeditionActivityAssistOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int32_t v6; // r14d
  ExpeditionActivity *v7; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:1914";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::expeditionAssistOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<ExpeditionActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<ExpeditionActivity>(0LL, (const std::shared_ptr<ExpeditionActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "expeditionAssistOp",
      1917);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"[EXPEDITION] activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
    goto LABEL_15;
  }
  v7 = std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( ExpeditionActivity::onExpeditionAssist(v7, op) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "expeditionAssistOp",
      1923);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v10,
           (const char (*)[46])"[EXPEDITION] onExpeditionAssist failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  v6 = 0;
LABEL_15:
  std::shared_ptr<ExpeditionActivity>::~shared_ptr((std::shared_ptr<ExpeditionActivity> *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 1931: range 0000000013DC2238-0000000013DC2493
int32_t __cdecl PlayerOfflineMsgComp::refreshBlossomCircleCampOp(
        PlayerOfflineMsgComp *const this,
        const proto::RefreshBlossomCircleCampOp *op)
{
  PlayerBlossomComp *BlossomComp; // rbx
  uint32_t v3; // r12d
  uint32_t refreshed; // eax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BlossomComp = Player::getBlossomComp(this->player_);
  v3 = proto::RefreshBlossomCircleCampOp::circle_camp_id(op);
  refreshed = proto::RefreshBlossomCircleCampOp::refresh_id(op);
  if ( (unsigned int)PlayerBlossomComp::refreshCircleCampByOfflineMsg(BlossomComp, refreshed, v3) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "refreshBlossomCircleCampOp",
      1934);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v14,
           (const char (*)[42])"refreshCircleCampByOfflineMsg fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" refresh_id:");
    Uid = proto::RefreshBlossomCircleCampOp::refresh_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "refreshBlossomCircleCampOp",
      1937);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v14,
           (const char (*)[40])"refreshBlossomCircleCampOp refresh_id: ");
    val = proto::RefreshBlossomCircleCampOp::refresh_id(op);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
};

// Line 1942: range 0000000013DC2494-0000000013DC285A
int32_t __cdecl PlayerOfflineMsgComp::recoverWorldLevelOp(
        PlayerOfflineMsgComp *const this,
        const proto::RecoverWorldLevelOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerWorld *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 22 world_level_limit:1949 64 16 14 world_ptr:1943";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::recoverWorldLevelOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 64));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "recoverWorldLevelOp",
      1946);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" getMyWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    *(_DWORD *)(v2 + 48) = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
    v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( PlayerWorld::recoverLevelByMuip(v9, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "recoverWorldLevelOp",
        1952);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" recoverLevelByMuip ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  result = v7;
  if ( v17 == (char *)v2 )
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

// Line 1959: range 0000000013DC285C-0000000013DC293B
int32_t __cdecl PlayerOfflineMsgComp::addRegionSearchProgressOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddRegionSearchProgressOp *op)
{
  PlayerRegionSearchComp *RegionSearchComp; // rax
  PlayerRegionSearchComp *v3; // rax
  google::protobuf::uint32 region_id; // [rsp+14h] [rbp-Ch]
  google::protobuf::uint32 add_recycle; // [rsp+18h] [rbp-8h]
  google::protobuf::uint32 add_progress; // [rsp+1Ch] [rbp-4h]

  region_id = proto::AddRegionSearchProgressOp::region_id(op);
  add_recycle = proto::AddRegionSearchProgressOp::add_recycle(op);
  add_progress = proto::AddRegionSearchProgressOp::add_progress(op);
  if ( add_recycle )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    RegionSearchComp = Player::getRegionSearchComp(this->player_);
    PlayerRegionSearchComp::addRecycleProgress(RegionSearchComp, region_id, add_recycle);
  }
  if ( add_progress )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getRegionSearchComp(this->player_);
    PlayerRegionSearchComp::addSearchProgress(v3, region_id, add_progress);
  }
  return 0;
};

// Line 1975: range 0000000013DC293C-0000000013DC29B8
int32_t __cdecl PlayerOfflineMsgComp::setMatchPunishTimesOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetMatchPunishTimesOp *op)
{
  PlayerMatchComp *MatchComp; // rax
  google::protobuf::uint32 match_id; // [rsp+18h] [rbp-8h]
  google::protobuf::uint32 punish_times; // [rsp+1Ch] [rbp-4h]

  match_id = proto::SetMatchPunishTimesOp::match_id(op);
  punish_times = proto::SetMatchPunishTimesOp::punish_times(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MatchComp = Player::getMatchComp(this->player_);
  PlayerMatchComp::setPunishTimesByGm(MatchComp, match_id, punish_times);
  return 0;
};

// Line 1983: range 0000000013DC29BA-0000000013DC2CB5
int32_t __cdecl PlayerOfflineMsgComp::forceAcceptQuestOp(
        PlayerOfflineMsgComp *const this,
        const proto::ForceAcceptQuestOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1984";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::forceAcceptQuestOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::ForceAcceptQuestOp::quest_id(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  if ( PlayerQuestComp::forceAcceptQuestByMUIP(QuestComp, *(_DWORD *)(v2 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "forceAcceptQuestOp",
      1987);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"forceAcceptQuestOp quest_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "forceAcceptQuestOp",
      1990);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v14,
            (const char (*)[30])"forceAcceptQuestOp quest_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0;
  }
  if ( v15 == (char *)v2 )
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

// Line 1995: range 0000000013DC2CB6-0000000013DC2F43
int32_t __cdecl PlayerOfflineMsgComp::setMainCoopConfidenceOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetMainCoopConfidenceOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerCoopComp *CoopComp; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 confidence:1996";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setMainCoopConfidenceOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::SetMainCoopConfidenceOp::confidence(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  if ( (unsigned int)PlayerCoopComp::setMainCoopConfidenceByMUIP(CoopComp, *(unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setMainCoopConfidenceOp",
      1999);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v12,
           (const char (*)[44])"setMainCoopConfidenceOp failed, confidence:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "setMainCoopConfidenceOp",
      2002);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"setMainCoopConfidenceOp, confidence:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0;
  }
  if ( v13 == (char *)v2 )
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

// Line 2007: range 0000000013DC2F44-0000000013DC32BB
int32_t __cdecl PlayerOfflineMsgComp::addCoopPointSavePointListOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddCoopPointSavePointListOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  PlayerCoopComp *CoopComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 coop_point_id:2008 64 24 23 add_save_point_vec:2009";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::addCoopPointSavePointListOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = proto::AddCoopPointSavePointListOp::coop_point_id(op);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  v5 = proto::AddCoopPointSavePointListOp::save_point_list(op);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, (std::vector<unsigned int> *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CoopComp = Player::getCoopComp(this->player_);
  if ( (unsigned int)PlayerCoopComp::addSavePointListToCoopPointByMUIP(
                       CoopComp,
                       *(_DWORD *)(v2 + 48),
                       (const std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "addCoopPointSavePointListOp",
      2013);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"addCoopPointSavePointListOp failed, coop_point_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v8,
           (const char (*)[22])", add_save_point_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::vector<unsigned int> *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/player_offline_msg_comp.cpp",
      "addCoopPointSavePointListOp",
      2016);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v18,
            (const char (*)[44])"addCoopPointSavePointListOp, coop_point_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v12,
            (const char (*)[22])", add_save_point_vec:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v2 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v10 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v10;
  if ( v19 == (char *)v2 )
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

// Line 2022: range 0000000013DC32BC-0000000013DC36FF
int32_t __cdecl PlayerOfflineMsgComp::resetChannellerSlabCampGroupOp(
        PlayerOfflineMsgComp *const this,
        const proto::ResetChannellerSlabCampGroupOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  ChannellerSlabActivity *v6; // r14
  uint32_t v7; // r15d
  uint32_t v8; // eax
  std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  int32_t result; // eax
  unsigned int v20; // [rsp+24h] [rbp-9Ch] BYREF
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  unsigned int Uid; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 activity_ptr:2023";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::resetChannellerSlabCampGroupOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v2 + 32));
  if ( std::operator==<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "resetChannellerSlabCampGroupOp",
      2026);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])" activity not open");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = proto::ResetChannellerSlabCampGroupOp::round_id(op);
    v8 = proto::ResetChannellerSlabCampGroupOp::stage_id(op);
    if ( ChannellerSlabActivity::resetChannellerSlabCampGroupByMuip(v6, v8, v7) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "resetChannellerSlabCampGroupOp",
        2031);
      v9 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<ChannellerSlabActivity,(ChannellerSlabActivity*)0>(&v23, v9);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v10,
              (const char (*)[50])"resetChannellerSlabCampGroupByMuip failed, stage:");
      val = proto::ResetChannellerSlabCampGroupOp::stage_id(op);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", round:");
      Uid = proto::ResetChannellerSlabCampGroupOp::round_id(op);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/player_offline_msg_comp.cpp",
        "resetChannellerSlabCampGroupOp",
        2034);
      v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v23,
              (const char (*)[43])"resetChannellerSlabCampGroupByMuip, stage:");
      v20 = proto::ResetChannellerSlabCampGroupOp::stage_id(op);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v20);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", round:");
      val = proto::ResetChannellerSlabCampGroupOp::round_id(op);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = 0;
    }
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v2 + 32));
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 2040: range 0000000013DC3700-0000000013DC3B1A
int32_t __cdecl PlayerOfflineMsgComp::setClimateAreaType(
        PlayerOfflineMsgComp *const this,
        const proto::SetClimateAreaTypeOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t SceneComp; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  Scene *v10; // r14
  uint32_t v11; // r15d
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:2041";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setClimateAreaType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  proto::SetClimateAreaTypeOp::scene_id(op);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 32), SceneComp);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setClimateAreaType",
      2044);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v17,
           (const char (*)[20])"findScene fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = -1;
    goto LABEL_15;
  }
  v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v11 = proto::SetClimateAreaTypeOp::climate_type(op);
  v12 = proto::SetClimateAreaTypeOp::climate_area_id(op);
  if ( Scene::modifyClimateAreaType(v10, v12, v11, 0.0) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setClimateAreaType",
      2049);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v17,
            (const char (*)[32])"modifyClimateAreaType fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  v9 = 0;
LABEL_15:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v9;
  if ( v19 == (char *)v2 )
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

// Line 2056: range 0000000013DC3B1C-0000000013DC3FA3
int32_t __cdecl PlayerOfflineMsgComp::procSceneTagOp(PlayerOfflineMsgComp *const this, const proto::ProcSceneTagOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  PlayerSceneComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 scene_id:2057 48 4 17 scene_tag_id:2058 64 4 12 op_type:2059";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procSceneTagOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = proto::ProcSceneTagOp::scene_id(op);
  *(_DWORD *)(v2 + 48) = proto::ProcSceneTagOp::scene_tag_id(op);
  *(_DWORD *)(v2 + 64) = proto::ProcSceneTagOp::op_type(op);
  if ( *(_DWORD *)(v2 + 64) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::addSceneTag(SceneComp, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procSceneTagOp",
        2065);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v22,
             (const char (*)[31])"addSceneTag failed, scene_id: ");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" ,scene_tag_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
      goto LABEL_17;
    }
  }
  else if ( *(_DWORD *)(v2 + 64) == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::delSceneTag(v10, *(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procSceneTagOp",
        2073);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v22,
              (const char (*)[31])"delSceneTag failed, scene_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" ,scene_tag_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
      goto LABEL_17;
    }
  }
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_offline_msg_comp.cpp",
    "procSceneTagOp",
    2078);
  v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v22,
          (const char (*)[22])"procSceneTagOp, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" ,scene_id: ");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
  v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" ,scene_tag_id: ");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
  v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])",op_type: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v22);
  result = 0;
LABEL_17:
  if ( v23 == (char *)v2 )
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

// Line 2085: range 0000000013DC3FA4-0000000013DC4242
int32_t __cdecl PlayerOfflineMsgComp::setFinishedParentQuestChildStateOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetFinishedParentQuestChildStateOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 quest_id:2086 48 4 10 state:2087 64 4 8 ret:2088";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setFinishedParentQuestChildStateOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = proto::SetFinishedParentQuestChildStateOp::quest_id(op);
  *(_DWORD *)(v2 + 48) = proto::SetFinishedParentQuestChildStateOp::state(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  *(_DWORD *)(v2 + 64) = PlayerQuestComp::setFinishParentQuestChildStateByMUIP(
                           QuestComp,
                           *(_DWORD *)(v2 + 32),
                           *(_DWORD *)(v2 + 48),
                           1);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_msg_comp.cpp",
    "setFinishedParentQuestChildStateOp",
    2089);
  v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v15,
         (const char (*)[40])"setFinishedParentQuestChildStateOp ret:");
  v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v2 + 64));
  v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", quest_id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])", state:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  result = *(_DWORD *)(v2 + 64);
  if ( v16 == (char *)v2 )
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

// Line 2094: range 0000000013DC4244-0000000013DC42BE
int32_t __cdecl PlayerOfflineMsgComp::changeMapAreaInfoOp(
        PlayerOfflineMsgComp *const this,
        const proto::ChangeMapAreaInfoOp *op)
{
  PlayerSceneComp *SceneComp; // r12
  bool is_open; // bl
  uint32_t v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  is_open = proto::ChangeMapAreaInfoOp::is_open(op);
  v4 = proto::ChangeMapAreaInfoOp::map_area_id(op);
  return PlayerSceneComp::changeMapAreaInfo(SceneComp, v4, is_open);
};

// Line 2100: range 0000000013DC42C0-0000000013DC48BE
int32_t __cdecl PlayerOfflineMsgComp::setLevel1AreaExplorePoint(
        PlayerOfflineMsgComp *const this,
        const proto::SetLevel1AreaExplorePointOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  uint32_t v15; // r14d
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  Area *v19; // r14
  uint32_t v20; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t scene_id; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 scene_ptr:2107 64 16 13 area_ptr:2113";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::setLevel1AreaExplorePoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.world_area_config_mgr;
  v6 = proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
  scene_id = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(p_world_area_config_mgr, v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( scene_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 32), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "setLevel1AreaExplorePoint",
        2110);
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v24,
              (const char (*)[27])"getPersonalScene fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v25, &op->google::protobuf::Message);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v25);
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->player_);
      std::string::~string(&v25);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v10 = -1;
    }
    else
    {
      v15 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
      Scene::getArea((Scene *const)(v2 + 64), v15);
      if ( std::operator==<Area>(0LL, (const std::shared_ptr<Area> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "setLevel1AreaExplorePoint",
          2116);
        v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v24,
                (const char (*)[27])"getPersonalScene fail, op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v25, &op->google::protobuf::Message);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)&v25);
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v18, this->player_);
        std::string::~string(&v25);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v10 = -1;
      }
      else
      {
        v19 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v20 = proto::SetLevel1AreaExplorePointOp::explore_point(op);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Area::setExplorePointByMuip(v19, this->player_, v20);
        v10 = 0;
      }
      std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v2 + 64));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "setLevel1AreaExplorePoint",
      2104);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v25,
           (const char (*)[41])"findSceneIdByLevel1AreaId fail, area_id:");
    val = proto::SetLevel1AreaExplorePointOp::level1_area_id(op);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v10 = -1;
  }
  result = v10;
  if ( v26 == (char *)v2 )
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

// Line 2124: range 0000000013DC48C0-0000000013DC49CC
int32_t __cdecl PlayerOfflineMsgComp::setCodexOpenOrClose(
        PlayerOfflineMsgComp *const this,
        const proto::SetCodexOpenOrCloseOp *op)
{
  PlayerCodexComp *CodexComp; // rbx
  uint32_t v3; // r12d
  uint32_t v4; // eax
  PlayerCodexComp *v5; // rbx
  uint32_t v6; // r12d
  uint32_t v7; // eax
  int32_t ret; // [rsp+1Ch] [rbp-14h]

  if ( proto::SetCodexOpenOrCloseOp::is_open(op) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    CodexComp = Player::getCodexComp(this->player_);
    v3 = proto::SetCodexOpenOrCloseOp::codex_id(op);
    v4 = proto::SetCodexOpenOrCloseOp::codex_type(op);
    ret = PlayerCodexComp::openCodexByMuip(CodexComp, v4, v3);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getCodexComp(this->player_);
    v6 = proto::SetCodexOpenOrCloseOp::codex_id(op);
    v7 = proto::SetCodexOpenOrCloseOp::codex_type(op);
    ret = PlayerCodexComp::closeCodexByMuip(v5, v7, v6);
  }
  if ( ret )
    return -1;
  else
    return 0;
};

// Line 2142: range 0000000013DC49CE-0000000013DC4C20
int32_t __cdecl PlayerOfflineMsgComp::procGroupLinkOp(PlayerOfflineMsgComp *const this, const proto::GroupLinkOp *op)
{
  proto::GroupLinkOpType v2; // eax
  PlayerGroupLinkComp *v3; // rbx
  uint32_t v4; // r12d
  uint32_t v5; // eax
  PlayerGroupLinkComp *v6; // rbx
  uint32_t v7; // eax
  PlayerGroupLinkComp *GroupLinkComp; // rbx
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rcx
  int32_t ret; // [rsp+1Ch] [rbp-54h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  ret = 0;
  v2 = proto::GroupLinkOp::op_type(op);
  if ( v2 == GROUP_LINK_OP_BUNDLE_UNREGISTER )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    v9 = proto::GroupLinkOp::group_bundle_id(op);
    return PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, v9, 0);
  }
  else
  {
    if ( v2 > GROUP_LINK_OP_BUNDLE_UNREGISTER )
    {
LABEL_15:
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_offline_msg_comp.cpp",
        "procGroupLinkOp",
        2163);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"error op_type: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->player_);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return ret;
    }
    if ( v2 == GROUP_LINK_OP_BUNDLE_REGISTER )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = Player::getGroupLinkComp(this->player_);
      v4 = proto::GroupLinkOp::activity_id(op);
      v5 = proto::GroupLinkOp::group_bundle_id(op);
      return PlayerGroupLinkComp::registerGroupBundle(v3, v5, v4);
    }
    else
    {
      if ( v2 != GROUP_LINK_OP_BUNDLE_FINISH )
        goto LABEL_15;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = Player::getGroupLinkComp(this->player_);
      v7 = proto::GroupLinkOp::group_bundle_id(op);
      return PlayerGroupLinkComp::finishGroupBundle(v6, v7);
    }
  }
};

// Line 2171: range 0000000013DC4C22-0000000013DC4D2A
int32_t __cdecl PlayerOfflineMsgComp::setWatcherCompRecordValueOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetWatcherCompRecordValueOp *op)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  PlayerWatcherComp *watcher_comp; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  watcher_comp = Player::getWatcherComp(this->player_);
  if ( proto::SetWatcherCompRecordValueOp::optional_max_critical_damage_case(op) )
  {
    v2 = proto::SetWatcherCompRecordValueOp::max_critical_damage(op);
    PlayerWatcherComp::setMaxCriticalDamageByMuip(watcher_comp, v2);
  }
  if ( proto::SetWatcherCompRecordValueOp::optional_max_fly_map_distance_case(op) )
  {
    v3 = proto::SetWatcherCompRecordValueOp::max_fly_map_distance(op);
    PlayerWatcherComp::setMaxFlyMapDistanceByMuip(watcher_comp, v3);
  }
  if ( proto::SetWatcherCompRecordValueOp::optional_max_fly_time_case(op) )
  {
    v4 = proto::SetWatcherCompRecordValueOp::max_fly_time(op);
    PlayerWatcherComp::setMaxFlyTimeByMuip(watcher_comp, v4);
  }
  if ( proto::SetWatcherCompRecordValueOp::optional_max_dash_time_case(op) )
  {
    v5 = proto::SetWatcherCompRecordValueOp::max_dash_time(op);
    PlayerWatcherComp::setMaxDashTimeByMuip(watcher_comp, v5);
  }
  return 0;
};

// Line 2194: range 0000000013DC4D2C-0000000013DC4D91
int32_t __cdecl PlayerOfflineMsgComp::procAddFriendOp(PlayerOfflineMsgComp *const this, const proto::AddFriendOp *op)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::AddFriendOp::target_uid(op);
  return PlayerSocialComp::addFriendByMuip(SocialComp, v3);
};

// Line 2199: range 0000000013DC4D92-0000000013DC4DF7
int32_t __cdecl PlayerOfflineMsgComp::procDelFriendOp(PlayerOfflineMsgComp *const this, const proto::DelFriendOp *op)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::DelFriendOp::target_uid(op);
  return PlayerSocialComp::delFriendByMuip(SocialComp, v3);
};

// Line 2204: range 0000000013DC4DF8-0000000013DC4E5D
int32_t __cdecl PlayerOfflineMsgComp::procAddFriendAskOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddFriendAskOp *op)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::AddFriendAskOp::target_uid(op);
  return PlayerSocialComp::addFriendAskByMuip(SocialComp, v3);
};

// Line 2209: range 0000000013DC4E5E-0000000013DC4EC3
int32_t __cdecl PlayerOfflineMsgComp::procDelFriendAskOp(
        PlayerOfflineMsgComp *const this,
        const proto::DelFriendAskOp *op)
{
  PlayerSocialComp *SocialComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  v3 = proto::DelFriendAskOp::target_uid(op);
  return PlayerSocialComp::delFriendAskByMuip(SocialComp, v3);
};

// Line 2214: range 0000000013DC4EC4-0000000013DC4F29
int32_t __cdecl PlayerOfflineMsgComp::procBanCustomDungeonOp(
        PlayerOfflineMsgComp *const this,
        const proto::BanCustomDungeonOp *op)
{
  PlayerCustomDungeonComp *CustomDungeonComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
  v3 = proto::BanCustomDungeonOp::ban_expire_time(op);
  return PlayerCustomDungeonComp::banCustomDungeon(CustomDungeonComp, v3);
};

// Line 2219: range 0000000013DC4F2A-0000000013DC5367
int32_t __cdecl PlayerOfflineMsgComp::procRemoveInvalidMapMarksOp(
        PlayerOfflineMsgComp *const this,
        const proto::RemoveInvalidMapMarksOp *op)
{
  __m128i v2; // xmm0
  std::unordered_set<proto::MapMarkPoint>::iterator *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerSceneComp *SceneComp; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r12
  int32_t result; // eax
  const proto::FloatPairBin *v10; // rax
  const proto::FloatPairBin *v11; // rax
  const proto::FloatPairBin *v12; // rax
  const proto::FloatPairBin *v13; // rax
  const proto::MapMarkPoint *v14; // rax
  const proto::Vector *v15; // rax
  const proto::MapMarkPoint *v16; // rax
  const proto::Vector *v17; // rax
  common::milog::MiLogStream *v18; // r14
  proto::MapMarkPoint *v19; // rax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  float min_x; // [rsp+18h] [rbp-D8h]
  float max_x; // [rsp+1Ch] [rbp-D4h]
  float min_z; // [rsp+20h] [rbp-D0h]
  float max_z; // [rsp+24h] [rbp-CCh]
  float x; // [rsp+28h] [rbp-C8h]
  float z; // [rsp+2Ch] [rbp-C4h]
  std::__detail::_Node_iterator_base<proto::MapMarkPoint,true> __y; // [rsp+30h] [rbp-C0h] BYREF
  std::unordered_set<proto::MapMarkPoint> *map_mark_point_set_ptr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-90h] BYREF
  char v31[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (std::unordered_set<proto::MapMarkPoint>::iterator *)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::unordered_set<proto::MapMarkPoint>::iterator *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<proto::MapMarkPoint,true>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<proto::MapMarkPoint,true>::__node_type *)"1 32 8 9 iter:2230";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<proto::MapMarkPoint,true>::__node_type *)PlayerOfflineMsgComp::procRemoveInvalidMapMarksOp;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    *(double *)v2.m128i_i64 = __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v7 = proto::RemoveInvalidMapMarksOp::scene_id(op);
  map_mark_point_set_ptr = PlayerSceneComp::getMarkPointSet(SceneComp, v7);
  if ( map_mark_point_set_ptr )
  {
    v10 = proto::RemoveInvalidMapMarksOp::x_range(op);
    *(float *)v2.m128i_i32 = proto::FloatPairBin::first(v10);
    min_x = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v11 = proto::RemoveInvalidMapMarksOp::x_range(op);
    *(float *)v2.m128i_i32 = proto::FloatPairBin::second(v11);
    max_x = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v12 = proto::RemoveInvalidMapMarksOp::z_range(op);
    *(float *)v2.m128i_i32 = proto::FloatPairBin::first(v12);
    min_z = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v13 = proto::RemoveInvalidMapMarksOp::z_range(op);
    *(float *)v2.m128i_i32 = proto::FloatPairBin::second(v13);
    max_z = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v3[4]._M_cur = std::unordered_set<proto::MapMarkPoint>::begin(map_mark_point_set_ptr)._M_cur;
    while ( 1 )
    {
      __y._M_cur = std::unordered_set<proto::MapMarkPoint>::end(map_mark_point_set_ptr)._M_cur;
      if ( !std::__detail::operator!=<proto::MapMarkPoint,true>(v3 + 4, &__y) )
        break;
      v14 = std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>::operator->(v3 + 4);
      v15 = proto::MapMarkPoint::pos(v14);
      *(float *)v2.m128i_i32 = proto::Vector::x(v15);
      x = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
      v16 = std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>::operator->(v3 + 4);
      v17 = proto::MapMarkPoint::pos(v16);
      *(float *)v2.m128i_i32 = proto::Vector::z(v17);
      z = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
      v2 = (__m128i)LODWORD(min_x);
      if ( min_x <= x
        && (v2 = (__m128i)LODWORD(x), x <= max_x)
        && (v2 = (__m128i)LODWORD(min_z), min_z <= z)
        && (v2 = (__m128i)LODWORD(z), z <= max_z) )
      {
        std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>::operator++(v3 + 4);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/player_offline_msg_comp.cpp",
          "procRemoveInvalidMapMarksOp",
          2236);
        v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v29,
                (const char (*)[17])"remove map mark:");
        v19 = (proto::MapMarkPoint *)std::__detail::_Node_iterator<proto::MapMarkPoint,true,true>::operator->(v3 + 4);
        google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v30, v19);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v30);
        std::string::~string(&v30);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v3[4]._M_cur = std::unordered_set<proto::MapMarkPoint>::erase(map_mark_point_set_ptr, v3[4])._M_cur;
      }
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procRemoveInvalidMapMarksOp",
      2223);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v30,
           (const char (*)[32])"getMarkPointSet fail, scene_id:");
    val = proto::RemoveInvalidMapMarksOp::scene_id(op);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<proto::MapMarkPoint,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2248: range 0000000013DC5368-0000000013DC5A23
int32_t __cdecl PlayerOfflineMsgComp::procRecalculateAreaExplorePointOp(
        PlayerOfflineMsgComp *const this,
        proto::RecalculateAreaExplorePointOp *op)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  Scene *v13; // rax
  uint32_t AreaComp; // r14d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Area *v20; // rax
  std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t ExplorePoint; // edx
  int32_t result; // eax
  google::protobuf::uint32 recalc_exp; // [rsp+18h] [rbp-158h]
  google::protobuf::uint32 old_exp; // [rsp+1Ch] [rbp-154h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-150h] BYREF
  std::string val; // [rsp+40h] [rbp-130h] BYREF
  char v28[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 scene_id:2249 64 16 14 scene_ptr:2255 96 16 13 area_ptr:2261 128 56 21 area_explore_log:2267";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procRecalculateAreaExplorePointOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.world_area_config_mgr;
  v6 = proto::RecalculateAreaExplorePointOp::area_id(op);
  *(_DWORD *)(v2 + 48) = WorldAreaExcelConfigMgr::findSceneIdByLevel1AreaId(p_world_area_config_mgr, v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procRecalculateAreaExplorePointOp",
        2258);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v26,
              (const char (*)[26])"findScene fail, scene_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v11, (const char (*)[5])" op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, op);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v8 = -1;
    }
    else
    {
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AreaComp = (unsigned int)Scene::getAreaComp(v13);
      proto::RecalculateAreaExplorePointOp::area_id(op);
      SceneAreaComp::findArea((SceneAreaComp *const)(v2 + 96), AreaComp);
      if ( std::operator==<Area>(0LL, (const std::shared_ptr<Area> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_offline_msg_comp.cpp",
          "procRecalculateAreaExplorePointOp",
          2264);
        v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v26,
                (const char (*)[25])"findArea fail, scene_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])" op:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&val, op);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v8 = -1;
      }
      else
      {
        proto_log::AreaExploreLog::AreaExploreLog((proto_log::AreaExploreLog *const)(v2 + 128));
        v18 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Area::calcTotalExplorePoint(v18, this->player_, (proto_log::AreaExploreLog *)(v2 + 128));
        recalc_exp = proto_log::AreaExploreLog::total_exp((const proto_log::AreaExploreLog *const)(v2 + 128));
        v19 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        old_exp = Area::getExplorePoint(v19);
        if ( recalc_exp > old_exp )
        {
          v20 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          Area::setExplorePointByMuip(v20, recalc_exp);
        }
        proto::RecalculateAreaExplorePointOp::set_old_exp(op, old_exp);
        proto::RecalculateAreaExplorePointOp::set_recalc_exp(op, recalc_exp);
        v21 = std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Area,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ExplorePoint = Area::getExplorePoint(v21);
        proto::RecalculateAreaExplorePointOp::set_new_exp(op, ExplorePoint);
        v8 = 0;
        proto_log::AreaExploreLog::~AreaExploreLog((proto_log::AreaExploreLog *const)(v2 + 128));
      }
      std::shared_ptr<Area>::~shared_ptr((std::shared_ptr<Area> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procRecalculateAreaExplorePointOp",
      2252);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v26,
           (const char (*)[36])"findSceneIdByLevel1AreaId fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, op);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v8 = -1;
  }
  result = v8;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2282: range 0000000013DC5A24-0000000013DC5AA4
int32_t __cdecl PlayerOfflineMsgComp::procNicknameAuditResultOp(
        PlayerOfflineMsgComp *const this,
        const proto::NicknameAuditResultOp *op)
{
  PlayerBasicComp *BasicComp; // r12
  bool is_ok; // bl
  const std::string *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  is_ok = proto::NicknameAuditResultOp::is_ok(op);
  v4 = proto::NicknameAuditResultOp::nickname[abi:cxx11](op);
  PlayerBasicComp::onNicknameAuditResult(BasicComp, v4, is_ok);
  return 0;
};

// Line 2288: range 0000000013DC5AA6-0000000013DC5B26
int32_t __cdecl PlayerOfflineMsgComp::procSignatureAuditResultOp(
        PlayerOfflineMsgComp *const this,
        const proto::SignatureAuditResultOp *op)
{
  PlayerSocialComp *SocialComp; // r12
  bool is_ok; // bl
  const std::string *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SocialComp = Player::getSocialComp(this->player_);
  is_ok = proto::SignatureAuditResultOp::is_ok(op);
  v4 = proto::SignatureAuditResultOp::signature[abi:cxx11](op);
  PlayerSocialComp::onSignatureAuditResult(SocialComp, v4, is_ok);
  return 0;
};

// Line 2294: range 0000000013DC5B28-0000000013DC5BCA
int32_t __cdecl PlayerOfflineMsgComp::procPassHomeSceneArrangementAuditOp(
        PlayerOfflineMsgComp *const this,
        const proto::PassHomeSceneArrangementAuditOp *op)
{
  PlayerHomeComp *HomeComp; // rbx
  uint32_t v3; // r13d
  uint32_t v4; // r12d
  uint32_t v5; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  v3 = proto::PassHomeSceneArrangementAuditOp::version(op);
  v4 = proto::PassHomeSceneArrangementAuditOp::scene_id(op);
  v5 = proto::PassHomeSceneArrangementAuditOp::module_id(op);
  PlayerHomeComp::procHomeSceneArrangementAuditByMuip(HomeComp, v5, v4, v3, 1, 1);
  return 0;
};

// Line 2300: range 0000000013DC5BCC-0000000013DC5C6E
int32_t __cdecl PlayerOfflineMsgComp::procFailHomeSceneArrangementAuditOp(
        PlayerOfflineMsgComp *const this,
        const proto::FailHomeSceneArrangementAuditOp *op)
{
  PlayerHomeComp *HomeComp; // rbx
  uint32_t v3; // r13d
  uint32_t v4; // r12d
  uint32_t v5; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  v3 = proto::FailHomeSceneArrangementAuditOp::version(op);
  v4 = proto::FailHomeSceneArrangementAuditOp::scene_id(op);
  v5 = proto::FailHomeSceneArrangementAuditOp::module_id(op);
  PlayerHomeComp::procHomeSceneArrangementAuditByMuip(HomeComp, v5, v4, v3, 0, 1);
  return 0;
};

// Line 2306: range 0000000013DC5C70-0000000013DC5E42
int32_t __cdecl PlayerOfflineMsgComp::procFailHomeModulesArrangementAuditOp(
        PlayerOfflineMsgComp *const this,
        const proto::FailHomeModulesArrangementAuditOp *op)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  PlayerHomeComp *HomeComp; // r14
  uint32_t v7; // r15d
  bool is_all_module; // al
  int32_t result; // eax
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 18 module_id_set:2307";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerOfflineMsgComp::procFailHomeModulesArrangementAuditOp;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set(v2 + 1);
  v5 = proto::FailHomeModulesArrangementAuditOp::module_id_list(op);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(v2 + 1, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  v7 = proto::FailHomeModulesArrangementAuditOp::version(op);
  is_all_module = proto::FailHomeModulesArrangementAuditOp::is_all_module(op);
  PlayerHomeComp::failHomeModulesArrangementAuditByMuip(HomeComp, is_all_module, v2 + 1, v7);
  std::set<unsigned int>::~set(v2 + 1);
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2314: range 0000000013DC5E44-0000000013DC5EAE
int32_t __cdecl PlayerOfflineMsgComp::procBanUgcPublishOp(
        PlayerOfflineMsgComp *const this,
        const proto::BanUgcPublishOp *op)
{
  PlayerUgcComp *UgcComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  UgcComp = Player::getUgcComp(this->player_);
  v3 = proto::BanUgcPublishOp::ban_publish_expire_time(op);
  PlayerUgcComp::banUgcPublish(UgcComp, v3);
  return 0;
};

// Line 2320: range 0000000013DC5EB0-0000000013DC5F1A
int32_t __cdecl PlayerOfflineMsgComp::procResetPlayerPersistentDungeonOp(
        PlayerOfflineMsgComp *const this,
        const proto::ResetPlayerPersistentDungeonOp *op)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v3 = proto::ResetPlayerPersistentDungeonOp::scene_id(op);
  PlayerSceneComp::resetPlayerPersistentDungeonByMuip(SceneComp, v3);
  return 0;
};

// Line 2326: range 0000000013DC5F1C-0000000013DC5F86
int32_t __cdecl PlayerOfflineMsgComp::procResetPlayerPosInPersistentDungeonOp(
        PlayerOfflineMsgComp *const this,
        const proto::ResetPlayerPosInPersistentDungeonOp *op)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v3 = proto::ResetPlayerPosInPersistentDungeonOp::scene_id(op);
  PlayerSceneComp::resetPlayerPosInPersistentDungeonByMuip(SceneComp, v3);
  return 0;
};

// Line 2332: range 0000000013DC5F88-0000000013DC5FF7
int32_t __cdecl PlayerOfflineMsgComp::procLevelTagChangeOp(
        PlayerOfflineMsgComp *const this,
        const proto::LevelTagChangeOp *op)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v3 = proto::LevelTagChangeOp::level_tag_id(op);
  return PlayerSceneComp::changeToTargetLevelTag(SceneComp, v3, 0, 0LL);
};

// Line 2337: range 0000000013DC5FF8-0000000013DC6078
int32_t __cdecl PlayerOfflineMsgComp::procResetPlayerWayPointInPersistentDungeonOp(
        PlayerOfflineMsgComp *const this,
        const proto::ResetPlayerWayPointInPersistentDungeonOp *op)
{
  PlayerSceneComp *SceneComp; // rbx
  uint32_t v3; // r12d
  uint32_t v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  v3 = proto::ResetPlayerWayPointInPersistentDungeonOp::way_point_id(op);
  v4 = proto::ResetPlayerWayPointInPersistentDungeonOp::scene_id(op);
  PlayerSceneComp::resetPlayerWayPointInPersistentDungeonByMuip(SceneComp, v4, v3);
  return 0;
};

// Line 2343: range 0000000013DC607A-0000000013DC6358
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerOfflineMsgComp::procExhibitionSetOp(
        PlayerOfflineMsgComp *const this,
        const proto::ExhibitionSetOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerExhibitionComp *ExhibitionComp; // r14
  uint32_t v6; // eax
  std::pair<bool,unsigned int> v7; // rcx OVERLAPPED
  std::pair<bool,unsigned int> v8; // rdx OVERLAPPED
  common::milog::MiLogStream *v9; // r13
  int32_t result; // eax
  unsigned int v11; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int __y; // [rsp+1Ch] [rbp-E4h] BYREF
  std::pair<bool,unsigned int> replace_op_pair; // [rsp+20h] [rbp-E0h] BYREF
  std::pair<bool,unsigned int> accu_op_pair; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 27 is_set_accumulable_val:2344 64 1 27 is_set_replaceable_val:2345";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procExhibitionSetOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  *(_BYTE *)(v2 + 48) = proto::ExhibitionSetOp::optional_accumulable_val_case(op) != OPTIONAL_ACCUMULABLE_VAL_NOT_SET;
  *(_BYTE *)(v2 + 64) = proto::ExhibitionSetOp::optional_replaceable_val_case(op) != OPTIONAL_REPLACEABLE_VAL_NOT_SET;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ExhibitionComp = Player::getExhibitionComp(this->player_);
  __y = proto::ExhibitionSetOp::accumulable_val(op);
  std::pair<bool,unsigned int>::pair<bool &,unsigned int,true>(&accu_op_pair, (bool *)(v2 + 48), &__y);
  v11 = proto::ExhibitionSetOp::replaceable_val(op);
  std::pair<bool,unsigned int>::pair<bool &,unsigned int,true>(&replace_op_pair, (bool *)(v2 + 64), &v11);
  v6 = proto::ExhibitionSetOp::exhibition_id(op);
  v7 = accu_op_pair;
  v8 = replace_op_pair;
  if ( (unsigned int)PlayerExhibitionComp::setExhibitionValueByMuip(ExhibitionComp, v6, v8, v7) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procExhibitionSetOp",
      2348);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v15,
           (const char (*)[35])"setExhibitionValueByMuip fail, op:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v17 == (char *)v2 )
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

// Line 2355: range 0000000013DC635A-0000000013DC66D8
int32_t __cdecl PlayerOfflineMsgComp::procSetAvatarExtraPropOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetAvatarExtraPropOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t AvatarComp; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  ExtraPropComp *ExtraPropComp; // r14
  uint32_t v12; // r15d
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-90h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:2356";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procSetAvatarExtraPropOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  proto::SetAvatarExtraPropOp::avatar_id(op);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v2 + 32), AvatarComp);
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procSetAvatarExtraPropOp",
      2359);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v18,
           (const char (*)[31])"cannot find avatar, avatar_id:");
    val = proto::SetAvatarExtraPropOp::avatar_id(op);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v9 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ExtraPropComp = Avatar::getExtraPropComp(v10);
    v12 = proto::SetAvatarExtraPropOp::extra_prop_count(op);
    v13 = proto::SetAvatarExtraPropOp::extra_prop_id(op);
    if ( ExtraPropComp::setExtraProp(ExtraPropComp, v13, v12, CHANGE_AVATAR_EXTRA_PROP_REASON_MUIP) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procSetAvatarExtraPropOp",
        2364);
      v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v17,
              (const char (*)[23])"setExtraProp fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v18, &op->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v18);
      std::string::~string(&v18);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 32));
  result = v9;
  if ( v19 == (char *)v2 )
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

// Line 2371: range 0000000013DC66DA-0000000013DC6D48
int32_t __cdecl PlayerOfflineMsgComp::procAddItemWithLimitOp(
        PlayerOfflineMsgComp *const this,
        proto::AddItemWithLimitOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // r14
  uint32_t v6; // eax
  data::ItemType ItemType; // r14d
  PlayerItemComp *ItemComp; // rax
  uint32_t TotalReliquaryNum; // r13d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  int32_t result; // eax
  PlayerItemComp *v13; // rax
  uint32_t TotalWeaponNum; // r13d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerItemComp *v16; // r14
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r13
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  unsigned int v26; // [rsp+20h] [rbp-B0h] BYREF
  uint32_t max_add_item_count; // [rsp+24h] [rbp-ACh]
  proto::AddItemOp *add_item_op; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-90h] BYREF
  char v31[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 cur_item_count:2395";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procAddItemWithLimitOp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  add_item_op = proto::AddItemWithLimitOp::mutable_add_item_op(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  p_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.item_config_mgr;
  v6 = proto::AddItemOp::item_id(add_item_op);
  ItemType = ItemExcelConfigMgr::getItemType(p_item_config_mgr, v6);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( ItemType == ITEM_RELIQUARY )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    TotalReliquaryNum = PlayerItemComp::getTotalReliquaryNum(ItemComp);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    LOBYTE(TotalReliquaryNum) = TotalReliquaryNum >= ConstValueExcelConfigMgr::getReliquaryItemLimit(&v10->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !(_BYTE)TotalReliquaryNum )
      goto LABEL_27;
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "procAddItemWithLimitOp",
      2379);
    v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v30,
            (const char (*)[44])"reliquary is full, ignore add item, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_12;
  }
  if ( ItemType == ITEM_WEAPON )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getItemComp(this->player_);
    TotalWeaponNum = PlayerItemComp::getTotalWeaponNum(v13);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    LOBYTE(TotalWeaponNum) = TotalWeaponNum >= ConstValueExcelConfigMgr::getWeaponItemLimit(&v15->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !(_BYTE)TotalWeaponNum )
      goto LABEL_27;
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_offline_msg_comp.cpp",
      "procAddItemWithLimitOp",
      2388);
    v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v30,
            (const char (*)[41])"weapon is full, ignore add item, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_12:
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v16 = Player::getItemComp(this->player_);
  v17 = proto::AddItemOp::item_id(add_item_op);
  *(_DWORD *)(v2 + 32) = PlayerItemComp::getItemCount(v16, v17);
  if ( proto::AddItemWithLimitOp::max_item_count(op) > *(_DWORD *)(v2 + 32) )
  {
    max_add_item_count = proto::AddItemWithLimitOp::max_item_count(op) - *(_DWORD *)(v2 + 32);
    if ( max_add_item_count < proto::AddItemOp::item_count(add_item_op) )
      proto::AddItemOp::set_item_count(add_item_op, max_add_item_count);
LABEL_27:
    result = PlayerOfflineMsgComp::addItemOp(this, add_item_op);
    goto LABEL_28;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_msg_comp.cpp",
    "procAddItemWithLimitOp",
    2398);
  v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v30,
          (const char (*)[42])"item is enough, ignore add item, item_id:");
  val = proto::AddItemOp::item_id(add_item_op);
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
  v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])" cur_item_count:");
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
  v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])" max_item_count:");
  v26 = proto::AddItemWithLimitOp::max_item_count(op);
  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v26);
  v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v24, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v30);
  result = 0;
LABEL_28:
  if ( v31 == (char *)v2 )
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

// Line 2414: range 0000000013DC6D4A-0000000013DC70E3
int32_t __cdecl PlayerOfflineMsgComp::procSetGadgetChainLevelOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetGadgetChainLevelOp *op)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerSceneComp *SceneComp; // rax
  const data::GadgetChainExcelConfig *gadgetchain_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 gadgetchain_id:2415 64 4 22 gadgetchain_level:2416";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procSetGadgetChainLevelOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = proto::SetGadgetChainLevelOp::gadgetchain_id(op);
  *(_DWORD *)(v2 + 64) = proto::SetGadgetChainLevelOp::gadgetchain_level(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  gadgetchain_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(
                             &v5->design_config.txt_config_mgr.gadget_config_mgr,
                             *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( gadgetchain_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadgetchain_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadgetchain_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gadgetchain_config_ptr->max_level);
    }
    if ( gadgetchain_config_ptr->max_level >= *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      PlayerSceneComp::setGadgetChainLevel(SceneComp, *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64), 1);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procSetGadgetChainLevelOp",
        2425);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v16, (const char (*)[17])"gadgetchain id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" level: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" invalid");
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procSetGadgetChainLevelOp",
      2420);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v16, (const char (*)[17])"gadgetchain id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" does not exist");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  if ( v17 == (char *)v2 )
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

// Line 2433: range 0000000013DC70E4-0000000013DC717F
int32_t __cdecl PlayerOfflineMsgComp::procSetDailyTaskVarOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetDailyTaskVarOp *op)
{
  PlayerDailyTaskComp *DailyTaskComp; // rax
  int task_id; // [rsp+14h] [rbp-Ch]
  int index; // [rsp+18h] [rbp-8h]
  google::protobuf::int32 value; // [rsp+1Ch] [rbp-4h]

  task_id = proto::SetDailyTaskVarOp::task_id(op);
  index = proto::SetDailyTaskVarOp::index(op);
  value = proto::SetDailyTaskVarOp::value(op);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  DailyTaskComp = Player::getDailyTaskComp(this->player_);
  if ( (unsigned int)PlayerDailyTaskComp::setDailyTaskVar(DailyTaskComp, task_id, index, value) )
    return -1;
  else
    return 0;
};

// Line 2443: range 0000000013DC7180-0000000013DC7468
int32_t __cdecl PlayerOfflineMsgComp::procAvatarRenameAuditResultOp(
        PlayerOfflineMsgComp *const this,
        const proto::AvatarRenameAuditResultOp *op)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  PlayerAvatarComp *AvatarComp; // r12
  uint32_t v6; // r13d
  bool is_succ; // bl
  const std::string *v8; // rsi
  common::milog::MiLogStream *v9; // rbx
  google::protobuf::uint32 rename_id; // [rsp+14h] [rbp-7Ch]
  const data::AvatarRenameExcelConfig *rename_config_ptr; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-70h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-60h] BYREF
  std::string val; // [rsp+50h] [rbp-40h] BYREF

  rename_id = proto::AvatarRenameAuditResultOp::rename_id(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  rename_config_ptr = data::RenameExcelConfigMgrBase::findAvatarRenameExcelConfig(
                        &v2->design_config.txt_config_mgr.rename_config_mgr,
                        rename_id);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( rename_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    v6 = proto::AvatarRenameAuditResultOp::source_type(op);
    is_succ = proto::AvatarRenameAuditResultOp::is_succ(op);
    v8 = proto::AvatarRenameAuditResultOp::target_name[abi:cxx11](op);
    if ( *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rename_config_ptr->related_avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rename_config_ptr->related_avatar_id);
    }
    if ( (unsigned int)PlayerAvatarComp::handleAvatarRenameAuditResult(
                         AvatarComp,
                         rename_config_ptr->related_avatar_id,
                         v8,
                         is_succ,
                         v6) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procAvatarRenameAuditResultOp",
        2453);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v14,
             (const char (*)[40])"handleAvatarRenameAuditResult fail, op:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v14);
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
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procAvatarRenameAuditResultOp",
      2448);
    v3 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v14,
           (const char (*)[32])"cannot find rename config, op: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &op->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 2460: range 0000000013DC746A-0000000013DC74EA
int32_t __cdecl PlayerOfflineMsgComp::procResetAvatarRenameOp(
        PlayerOfflineMsgComp *const this,
        const proto::ResetAvatarRenameOp *op)
{
  PlayerAvatarComp *AvatarComp; // rbx
  __int32 v3; // r12d
  __int32 v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  v3 = proto::ResetAvatarRenameOp::reason(op);
  v4 = proto::ResetAvatarRenameOp::avatar_id(op);
  PlayerAvatarComp::resetAvatarRename(AvatarComp, v4, v3);
  return 0;
};

// Line 2466: range 0000000013DC74EC-0000000013DC7566
int32_t __cdecl PlayerOfflineMsgComp::procAddFinishedTalkOp(
        PlayerOfflineMsgComp *const this,
        const proto::AddFinishedTalkOp *op)
{
  PlayerTalkComp *TalkComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TalkComp = Player::getTalkComp(this->player_);
  v3 = proto::AddFinishedTalkOp::talk_id(op);
  if ( PlayerTalkComp::addFinishedTalkByMuip(TalkComp, v3) )
    return -1;
  else
    return 0;
};

// Line 2475: range 0000000013DC7568-0000000013DC75E2
int32_t __cdecl PlayerOfflineMsgComp::procDelFinishedTalkOp(
        PlayerOfflineMsgComp *const this,
        const proto::DelFinishedTalkOp *op)
{
  PlayerTalkComp *TalkComp; // rbx
  uint32_t v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  TalkComp = Player::getTalkComp(this->player_);
  v3 = proto::DelFinishedTalkOp::talk_id(op);
  if ( PlayerTalkComp::delFinishedTalkByMuip(TalkComp, v3) )
    return -1;
  else
    return 0;
};

// Line 2484: range 0000000013DC75E4-0000000013DC7674
int32_t __cdecl PlayerOfflineMsgComp::procSetPushTipsStateOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetPushTipsStateOp *op)
{
  PlayerWatcherComp *WatcherComp; // rbx
  uint32_t v3; // r12d
  uint32_t v4; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = Player::getWatcherComp(this->player_);
  v3 = proto::SetPushTipsStateOp::push_tips_state(op);
  v4 = proto::SetPushTipsStateOp::push_tips_id(op);
  if ( PlayerWatcherComp::setPushTipsStateByMuip(WatcherComp, v4, v3) )
    return -1;
  else
    return 0;
};

// Line 2493: range 0000000013DC7676-0000000013DC7CBA
int32_t __cdecl PlayerOfflineMsgComp::procSetPlayerGCGMatchScoreOp(
        PlayerOfflineMsgComp *const this,
        const proto::SetPlayerGCGMatchScoreOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-120h]
  PlayerOfflineMsgComp *thisa; // [rsp+8h] [rbp-118h]
  google::protobuf::uint32 old_score; // [rsp+14h] [rbp-10Ch]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+20h] [rbp-100h]
  GCGBasic *gcg_basic; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v27; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+70h] [rbp-B0h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 holder:2513 64 4 13 match_id:2494 80 4 10 score:2495 96 16 12 log_ptr:2514";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procSetPlayerGCGMatchScoreOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 64) = proto::SetPlayerGCGMatchScoreOp::match_id(op);
  *(_DWORD *)(v2 + 80) = proto::SetPlayerGCGMatchScoreOp::score(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(
                 *((const data::GCGPlayingExcelConfigMgrBase *const *)&opa._anon_0._M_allocated_capacity + 1),
                 *(_DWORD *)(v2 + 64));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->min_score);
    }
    if ( config_ptr->min_score > *(_DWORD *)(v2 + 80) )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->max_score);
    }
    if ( config_ptr->max_score >= *(_DWORD *)(v2 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      gcg_basic = PlayerGCGComp::getBasic(GCGComp);
      HIDWORD(opa._anon_0._M_allocated_capacity) = GCGBasic::getMatchScore(gcg_basic, *(_DWORD *)(v2 + 64));
      GCGBasic::setMatchScore(gcg_basic, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEC2u, opa);
      std::string::~string(&v28);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgSetMatchScore>();
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGcgSetMatchScore::set_match_id(v16, *(_DWORD *)(v2 + 64));
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGcgSetMatchScore::set_old_score(v17, old_score);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgSetMatchScore,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyGcgSetMatchScore::set_new_score(v18, *(_DWORD *)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v27, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgSetMatchScore,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgSetMatchScore> *)(v2 + 96));
      Player::printStatLog(player, &p_body_ptr, &v27, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v27);
      v6 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyGcgSetMatchScore>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgSetMatchScore> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    else
    {
LABEL_12:
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procSetPlayerGCGMatchScoreOp",
        2505);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v28,
             (const char (*)[26])"invalid score. match_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" score:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" min_score:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config_ptr->min_score);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" max_score:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config_ptr->max_score);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procSetPlayerGCGMatchScoreOp",
      2500);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v28,
           (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v6 = -1;
  }
  result = v6;
  if ( v29 == (char *)v2 )
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

// Line 2524: range 0000000013DC7CBC-0000000013DC81FC
int32_t __cdecl PlayerOfflineMsgComp::procDeletePlayerGCGCardOp(
        PlayerOfflineMsgComp *const this,
        const proto::DeletePlayerGCGCardOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-120h]
  PlayerOfflineMsgComp *thisa; // [rsp+8h] [rbp-118h]
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 holder:2546 64 4 12 card_id:2525 80 4 12 del_num:2526 96 16 12 log_ptr:2547";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procDeletePlayerGCGCardOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 64) = proto::DeletePlayerGCGCardOp::card_id(op);
  *(_DWORD *)(v2 + 80) = proto::DeletePlayerGCGCardOp::del_num(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
         *((const data::GCGDeckExcelConfigMgrBase *const *)&opa._anon_0._M_allocated_capacity + 1),
         *(_DWORD *)(v2 + 64)) )
  {
    if ( *(_DWORD *)(v2 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
      if ( (unsigned int)GCGDeckSystem::deleteCardByMuip(deck_system, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 80)) )
      {
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEBCu, opa);
        std::string::~string(&v21);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgDeleteCard>();
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto_log::PlayerLogBodyGcgDeleteCard::set_card_id(v12, *(_DWORD *)(v2 + 64));
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        proto_log::PlayerLogBodyGcgDeleteCard::set_del_num(v13, *(_DWORD *)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v20, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCard,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCard> *)(v2 + 96));
        Player::printStatLog(player, &p_body_ptr, &v20, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
        v6 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCard>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCard> *const)(v2 + 96));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procDeletePlayerGCGCardOp",
        2536);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"invalid del_num:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" card_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procDeletePlayerGCGCardOp",
      2531);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v21,
           (const char (*)[43])"findGCGDeckCardExcelConfig fail. card_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  result = v6;
  if ( v22 == (char *)v2 )
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

// Line 2556: range 0000000013DC81FE-0000000013DC8790
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerOfflineMsgComp::procDeletePlayerGCGCardFaceOp(
        PlayerOfflineMsgComp *const this,
        const proto::DeletePlayerGCGCardFaceOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  const data::GCGCardFaceExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v19; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2577 48 4 17 card_face_id:2557 64 16 12 log_ptr:2578";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procDeletePlayerGCGCardFaceOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::DeletePlayerGCGCardFaceOp::card_face_id((const proto::DeletePlayerGCGCardFaceOp *const)opa._M_dataplus._M_p);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGCardFaceExcelConfig(
                 *((const data::GCGDeckExcelConfigMgrBase *const *)&opa._anon_0._M_allocated_capacity + 1),
                 *(_DWORD *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->card_face_type);
    }
    if ( config_ptr->card_face_type )
    {
      if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(*(Player *const *)(opa._M_string_length + 24));
      deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
      if ( (unsigned int)GCGDeckSystem::deleteCardFaceByMuip(deck_system, *(_DWORD *)(v2 + 48)) )
      {
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(opa._M_string_length + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEBDu, opa);
        std::string::~string(&v20);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgDeleteCardFace>();
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardFace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardFace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyGcgDeleteCardFace::set_card_face_id(v12, *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = *(Player **)(opa._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v19, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardFace,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardFace> *)(v2 + 64));
        Player::printStatLog(v13, &p_body_ptr, &v19, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v19);
        v6 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardFace>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardFace> *const)(v2 + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procDeletePlayerGCGCardFaceOp",
        2567);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"invalid card_face_type. card_face_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" card_face_type:");
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->card_face_type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->card_face_type);
      }
      HIDWORD(opa._anon_0._M_allocated_capacity) = config_ptr->card_face_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)&opa._anon_0._M_allocated_capacity + 1);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procDeletePlayerGCGCardFaceOp",
      2562);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"findGCGCardFaceExcelConfig fail. card_face_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  result = v6;
  if ( v21 == (char *)v2 )
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

// Line 2586: range 0000000013DC8792-0000000013DC8CA5
int32_t __cdecl PlayerOfflineMsgComp::procDeletePlayerGCGCardBackOp(
        PlayerOfflineMsgComp *const this,
        const proto::DeletePlayerGCGCardBackOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-100h]
  PlayerOfflineMsgComp *thisa; // [rsp+8h] [rbp-F8h]
  const data::GCGDeckBackExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v18; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2607 48 4 17 card_back_id:2587 64 16 12 log_ptr:2608";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procDeletePlayerGCGCardBackOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::DeletePlayerGCGCardBackOp::card_back_id(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v18);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckBackExcelConfig(
                 *((const data::GCGDeckExcelConfigMgrBase *const *)&opa._anon_0._M_allocated_capacity + 1),
                 *(_DWORD *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->id);
    }
    if ( config_ptr->id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
      if ( (unsigned int)GCGDeckSystem::deleteCardBackByMuip(deck_system, *(_DWORD *)(v2 + 48)) )
      {
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEBEu, opa);
        std::string::~string(&v19);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgDeleteCardBack>();
        v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardBack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteCardBack,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyGcgDeleteCardBack::set_card_back_id(v10, *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v18, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardBack,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardBack> *)(v2 + 64));
        Player::printStatLog(player, &p_body_ptr, &v18, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v18);
        v6 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardBack>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteCardBack> *const)(v2 + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procDeletePlayerGCGCardBackOp",
        2597);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v19,
             (const char (*)[23])"invalid card_back_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procDeletePlayerGCGCardBackOp",
      2592);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v19,
           (const char (*)[48])"findGCGCardBackExcelConfig fail. card_back_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 2616: range 0000000013DC8CA6-0000000013DC91B9
int32_t __cdecl PlayerOfflineMsgComp::procDeletePlayerGCGDeckFieldOp(
        PlayerOfflineMsgComp *const this,
        const proto::DeletePlayerGCGDeckFieldOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteDeckField,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-100h]
  PlayerOfflineMsgComp *thisa; // [rsp+8h] [rbp-F8h]
  const data::GCGDeckFieldExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  GCGDeckSystem *deck_system; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v18; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2637 48 4 18 deck_field_id:2617 64 16 12 log_ptr:2638";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procDeletePlayerGCGDeckFieldOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::DeletePlayerGCGDeckFieldOp::deck_field_id(op);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.gcg_deck_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v18);
  config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckFieldExcelConfig(
                 *((const data::GCGDeckExcelConfigMgrBase *const *)&opa._anon_0._M_allocated_capacity + 1),
                 *(_DWORD *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->id);
    }
    if ( config_ptr->id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GCGComp = Player::getGCGComp(this->player_);
      deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
      if ( (unsigned int)GCGDeckSystem::deleteDeckFieldByMuip(deck_system, *(_DWORD *)(v2 + 48)) )
      {
        v6 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v19, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEBFu, opa);
        std::string::~string(&v19);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgDeleteDeckField>();
        v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteDeckField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgDeleteDeckField,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyGcgDeleteDeckField::set_deck_field_id(v10, *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v18, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgDeleteDeckField,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteDeckField> *)(v2 + 64));
        Player::printStatLog(player, &p_body_ptr, &v18, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v18);
        v6 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteDeckField>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgDeleteDeckField> *const)(v2 + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_offline_msg_comp.cpp",
        "procDeletePlayerGCGDeckFieldOp",
        2627);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v19,
             (const char (*)[24])"invalid deck_field_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_offline_msg_comp.cpp",
      "procDeletePlayerGCGDeckFieldOp",
      2622);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v19,
           (const char (*)[50])"findGCGDeckFieldExcelConfig fail. deck_field_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 2646: range 0000000013DC91BA-0000000013DC95E2
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerOfflineMsgComp::procBanPlayerGCGMatchOp(
        PlayerOfflineMsgComp *const this,
        const proto::BanPlayerGCGMatchOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGBasic *Basic; // rax
  GCGBasic *v6; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  Player *v15; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2652 48 4 20 old_expire_time:2648 64 16 12 log_ptr:2653";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procBanPlayerGCGMatchOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Player::getGCGComp(*(Player *const *)(opa._M_string_length + 24));
  Basic = PlayerGCGComp::getBasic(*((PlayerGCGComp *const *)&opa._anon_0._M_allocated_capacity + 1));
  *(_DWORD *)(v2 + 48) = GCGBasic::getBanMatchExpireTime(Basic);
  v6 = PlayerGCGComp::getBasic(*((PlayerGCGComp *const *)&opa._anon_0._M_allocated_capacity + 1));
  v7 = proto::BanPlayerGCGMatchOp::expire_time((const proto::BanPlayerGCGMatchOp *const)opa._M_dataplus._M_p);
  GCGBasic::setBanMatchExpireTime(v6, v7);
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_msg_comp.cpp",
    "procBanPlayerGCGMatchOp",
    2650);
  v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v20, (const char (*)[36])off_2515FB60);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])" to:");
  HIDWORD(opa._anon_0._M_allocated_capacity) = proto::BanPlayerGCGMatchOp::expire_time((const proto::BanPlayerGCGMatchOp *const)opa._M_dataplus._M_p);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v10,
    (const unsigned int *)&opa._anon_0._M_allocated_capacity + 1);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(opa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEC0u, opa);
  std::string::~string(&v20);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgBanMatch>();
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyGcgBanMatch::set_old_expire_time(v12, *(_DWORD *)(v2 + 48));
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanMatch,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v14 = proto::BanPlayerGCGMatchOp::expire_time((const proto::BanPlayerGCGMatchOp *const)opa._M_dataplus._M_p);
  proto_log::PlayerLogBodyGcgBanMatch::set_new_expire_time(v13, v14);
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = *(Player **)(opa._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgBanMatch,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGcgBanMatch> *)(v2 + 64));
  Player::printStatLog(v15, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGcgBanMatch>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgBanMatch> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = 0;
  if ( v21 == (char *)v2 )
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

// Line 2661: range 0000000013DC95E4-0000000013DC9A0C
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerOfflineMsgComp::procBanPlayerGCGPVPOp(
        PlayerOfflineMsgComp *const this,
        const proto::BanPlayerGCGPVPOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGBasic *Basic; // rax
  GCGBasic *v6; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  google::protobuf::uint32 v14; // eax
  Player *v15; // r14
  int32_t result; // eax
  std::string opa; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  opa._M_string_length = (std::string::size_type)this;
  opa._M_dataplus._M_p = (std::string::pointer)op;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2667 48 4 20 old_expire_time:2663 64 16 12 log_ptr:2668";
  *(_QWORD *)(v2 + 16) = PlayerOfflineMsgComp::procBanPlayerGCGPVPOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(&opa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Player::getGCGComp(*(Player *const *)(opa._M_string_length + 24));
  Basic = PlayerGCGComp::getBasic(*((PlayerGCGComp *const *)&opa._anon_0._M_allocated_capacity + 1));
  *(_DWORD *)(v2 + 48) = GCGBasic::getBanInviteExpireTime(Basic);
  v6 = PlayerGCGComp::getBasic(*((PlayerGCGComp *const *)&opa._anon_0._M_allocated_capacity + 1));
  v7 = proto::BanPlayerGCGPVPOp::expire_time((const proto::BanPlayerGCGPVPOp *const)opa._M_dataplus._M_p);
  GCGBasic::setBanInviteExpireTime(v6, v7);
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_offline_msg_comp.cpp",
    "procBanPlayerGCGPVPOp",
    2665);
  v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(&v20, (const char (*)[34])off_2515FCA0);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])" to:");
  HIDWORD(opa._anon_0._M_allocated_capacity) = proto::BanPlayerGCGPVPOp::expire_time((const proto::BanPlayerGCGPVPOp *const)opa._M_dataplus._M_p);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v10,
    (const unsigned int *)&opa._anon_0._M_allocated_capacity + 1);
  common::milog::MiLogStream::~MiLogStream(&v20);
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(opa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xEC1u, opa);
  std::string::~string(&v20);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgBanPvp>();
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyGcgBanPvp::set_old_expire_time(v12, *(_DWORD *)(v2 + 48));
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgBanPvp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v14 = proto::BanPlayerGCGPVPOp::expire_time((const proto::BanPlayerGCGPVPOp *const)opa._M_dataplus._M_p);
  proto_log::PlayerLogBodyGcgBanPvp::set_new_expire_time(v13, v14);
  if ( *(_BYTE *)(((opa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = *(Player **)(opa._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgBanPvp,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyGcgBanPvp> *)(v2 + 64));
  Player::printStatLog(v15, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyGcgBanPvp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgBanPvp> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = 0;
  if ( v21 == (char *)v2 )
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
