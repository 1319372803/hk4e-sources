// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_team.hpp

// Line 19: range 000000000D86FEFC-000000000D870465
void __cdecl MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchConfirmNotify>(
        MatchTeam *const this,
        proto::PlayerGCGMatchConfirmNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchConfirmNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::PlayerGCGMatchConfirmNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};

// Line 19: range 000000000D86F87C-000000000D86FDE5
void __cdecl MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchDismissNotify>(
        MatchTeam *const this,
        proto::PlayerGCGMatchDismissNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchDismissNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::PlayerGCGMatchDismissNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};

// Line 19: range 000000000D8722C0-000000000D872829
void __cdecl MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchConfirmNotify>(
        MatchTeam *const this,
        proto::PlayerGeneralMatchConfirmNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchConfirmNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::PlayerGeneralMatchConfirmNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};

// Line 19: range 000000000D86F312-000000000D86F87B
void __cdecl MatchTeam::sendToAllPlayer<proto::PlayerMatchSuccNotify>(
        MatchTeam *const this,
        proto::PlayerMatchSuccNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::PlayerMatchSuccNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::PlayerMatchSuccNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};

// Line 41: range 000000000D870466-000000000D8709CF
void __cdecl MatchTeam::sendToAllPlayer<proto::ServerGCGMatchFinishNotify>(
        MatchTeam *const this,
        proto::ServerGCGMatchFinishNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::ServerGCGMatchFinishNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::ServerGCGMatchFinishNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};

// Line 656: range 000000000D872AB0-000000000D873019
void __cdecl MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchDismissNotify>(
        MatchTeam *const this,
        proto::PlayerGeneralMatchDismissNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  common::milog::MiLogStream *v7; // rax
  common::minet::Packet *v8; // rdx
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  common::minet::Packet *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  uint32_t uid; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 packet_ptr:27 64 24 10 uid_vec:21";
  *(_QWORD *)(v2 + 16) = MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchDismissNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.hpp",
      "sendToAllPlayer",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"[MATCH] match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" get all uids failed");
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.hpp",
        "sendToAllPlayer",
        30);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::PlayerGeneralMatchDismissNotify>(v8, proto);
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v11, 3u);
      __for_range = (std::vector<unsigned int> *)(v2 + 64);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        uid = *v13;
        v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        common::minet::Packet::setUserId(v14, uid);
        v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15);
        v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v16->_vptr_NetworkMgrBase + 8);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        v18(v16, &packet_ptr);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v26 == (char *)v2 )
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
};
