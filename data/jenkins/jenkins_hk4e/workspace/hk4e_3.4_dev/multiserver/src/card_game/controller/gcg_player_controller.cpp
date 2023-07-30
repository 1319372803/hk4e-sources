// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_player_controller.cpp

// Line 28: range 000000000DEE6270-000000000DEE65CA
int32_t __cdecl GCGPlayerController::init(GCGPlayerController *const this, const GCGControllerParam *param)
{
  std::shared_ptr<GCGChallenge> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  int v6; // eax
  uint32_t uid; // ecx
  uint32_t Now; // esi
  const std::shared_ptr<GCGChallenge> *v9; // rax
  std::vector<std::shared_ptr<GCGChallenge>>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const std::vector<std::shared_ptr<GCGChallenge>> *__for_range; // [rsp+28h] [rbp-98h]
  std::shared_ptr<GCGChallenge> p_challenge_ptr; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (std::shared_ptr<GCGChallenge> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<GCGChallenge> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 16 challenge_ptr:36";
  v2[1]._M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGPlayerController::init;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( GCGControllerBase::init((GCGControllerBase *const)this, param) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_player_controller.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v15,
      (const char (*)[30])"GCGControllerBase::init fail.");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((unsigned __int64)&param->uid >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_load4(&param->uid);
    uid = param->uid;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->player_uid_);
    }
    this->player_uid_ = uid;
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_recv_time_);
    }
    this->last_recv_time_ = Now;
    __for_range = &param->challenge_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<GCGChallenge>>::begin(&param->challenge_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GCGChallenge>>::end(&param->challenge_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>(
              &__for_begin,
              &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>::operator*(&__for_begin);
      std::shared_ptr<GCGChallenge>::shared_ptr(v2 + 2, v9);
      std::shared_ptr<GCGChallenge>::shared_ptr(&p_challenge_ptr, v2 + 2);
      GCGPlayerController::attachChallenge(this, &p_challenge_ptr);
      std::shared_ptr<GCGChallenge>::~shared_ptr(&p_challenge_ptr);
      std::shared_ptr<GCGChallenge>::~shared_ptr(v2 + 2);
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::operator=(&this->forbid_finish_challenge_vec_, &param->forbid_finish_challenge_vec);
    result = 0;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 45: range 000000000DEE65CC-000000000DEE699E
void __cdecl GCGPlayerController::onGameStart(GCGPlayerController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::shared_ptr<GCGChallenge> *v4; // rax
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, GCGGameMode *, _QWORD, unsigned __int64); // r15
  GCGControllerValue ControllerId; // esi
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::iterator __for_begin_0; // [rsp+28h] [rbp-128h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::iterator __for_end_0; // [rsp+30h] [rbp-120h] BYREF
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>> *__for_range; // [rsp+38h] [rbp-118h]
  std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > *__in; // [rsp+40h] [rbp-110h]
  std::tuple_element<0,std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *_; // [rsp+48h] [rbp-108h]
  std::tuple_element<1,std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *challenge_vec; // [rsp+50h] [rbp-100h]
  std::vector<std::shared_ptr<GCGChallenge>> *__for_range_0; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+80h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 16 challenge_ptr:50 64 64 8 param:54";
  *(_QWORD *)(v1 + 16) = GCGPlayerController::onGameStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862724] = -202116109;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_player_controller.cpp",
    "onGameStart",
    46);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v19, (const char (*)[23])"[[Player]] onGameStart");
  common::milog::MiLogStream::~MiLogStream(&v19);
  __for_range = &this->challenge_type_2_challenge_map_;
  __for_begin._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::begin(&this->challenge_type_2_challenge_map_)._M_node;
  __for_end._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::end(&this->challenge_type_2_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator*(&__for_begin);
    _ = std::get<0ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(__in);
    challenge_vec = std::get<1ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(__in);
    __for_range_0 = challenge_vec;
    __for_begin_0._M_current = std::vector<std::shared_ptr<GCGChallenge>>::begin(challenge_vec)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<GCGChallenge>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v4 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>::operator*(&__for_begin_0);
      std::shared_ptr<GCGChallenge>::shared_ptr((std::shared_ptr<GCGChallenge> *const)(v1 + 32), v4);
      if ( std::operator!=<GCGChallenge>(0LL, (const std::shared_ptr<GCGChallenge> *)(v1 + 32)) )
      {
        GCGChallengeUpdateParam::GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 64));
        v5 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v6 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v5);
        v7 = (unsigned __int64)(v6->_vptr_GCGChallenge + 1);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v6->_vptr_GCGChallenge + 1);
        v8 = *(void (__fastcall **)(std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, GCGGameMode *, _QWORD, unsigned __int64))v7;
        ControllerId = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        v8(v6, this->game_mode_, (unsigned int)ControllerId, v1 + 64);
        GCGChallengeUpdateParam::~GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 64));
      }
      std::shared_ptr<GCGChallenge>::~shared_ptr((std::shared_ptr<GCGChallenge> *const)(v1 + 32));
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 62: range 000000000DEE69A0-000000000DEE6F71
int32_t __cdecl GCGPlayerController::sendProto(GCGPlayerController *const this, const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  void (__fastcall **v7)(common::milog::MiLogStream *, const google::protobuf::Message *); // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  void (__fastcall **v11)(common::milog::MiLogStream *, const google::protobuf::Message *); // rax
  common::minet::Packet *v12; // rcx
  NetworkMgrBase *v13; // r14
  uint32_t v14; // r8d
  int32_t result; // eax
  uint32_t cmd_id; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 packet_ptr:75";
  *(_QWORD *)(v2 + 16) = GCGPlayerController::sendProto;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_uid_);
  }
  if ( this->player_uid_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
      __asan_report_load8(proto);
    v7 = (void (__fastcall **)(common::milog::MiLogStream *, const google::protobuf::Message *))(proto->_vptr_MessageLite
                                                                                               + 2);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(proto->_vptr_MessageLite + 2);
    (*v7)(&v19, proto);
    cmd_id = ProtoUtils::getCmdId((const std::string *)&v19);
    std::string::~string(&v19);
    if ( cmd_id )
    {
      common::minet::PacketUtils::createPacket(cmd_id, proto);
      if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/controller/gcg_player_controller.cpp",
          "sendProto",
          78);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v19, (const char (*)[19])"createPacket fails");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v6 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->player_uid_);
        }
        common::minet::Packet::setUserId(v12, this->player_uid_);
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
        LOBYTE(v13) = NetworkMgrBase::sendPacketToTargetService(
                        v13,
                        (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr),
                        0,
                        v14) != 0;
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
        if ( (_BYTE)v13 )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/card_game/controller/gcg_player_controller.cpp",
            "sendProto",
            84);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v19,
            (const char (*)[33])"sendPacketToTargetService failed");
          common::milog::MiLogStream::~MiLogStream(&v19);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/controller/gcg_player_controller.cpp",
        "sendProto",
        71);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v18,
             (const char (*)[22])"getCmdId failed, uid:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->player_uid_);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" cmd_name:");
      if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
        __asan_report_load8(proto);
      v11 = (void (__fastcall **)(common::milog::MiLogStream *, const google::protobuf::Message *))(proto->_vptr_MessageLite
                                                                                                  + 2);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(proto->_vptr_MessageLite + 2);
      (*v11)(&v19, proto);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)&v19);
      std::string::~string(&v19);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/controller/gcg_player_controller.cpp",
      "sendProto",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"player uid is 0. controller_id: ");
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 91: range 000000000DEE6F72-000000000DEE6FE3
const GCGCostReviseInfo *__cdecl GCGPlayerController::getCostRevise(const GCGPlayerController *const this)
{
  GCGDuel *Duel; // rbx
  GCGControllerValue ControllerId; // eax
  GCGField *field; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  ControllerId = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
  field = GCGDuel::getField(Duel, ControllerId);
  return GCGField::getCostRevise(field);
};

// Line 97: range 000000000DEE6FE4-000000000DEE71CA
void __cdecl GCGPlayerController::notifyCostRevise(GCGPlayerController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const GCGCostReviseInfo *CostRevise; // r14
  std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 message_ptr:98";
  *(_QWORD *)(v1 + 16) = GCGPlayerController::notifyCostRevise;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<GCGMsgCostRevise>();
  ControllerId = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
  v5 = std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v5 = (std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v5->controller_id);
  }
  v5->controller_id = ControllerId;
  CostRevise = GCGPlayerController::getCostRevise(this);
  v7 = std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgCostRevise,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  GCGCostReviseInfo::operator=(&v7->cost_revise, CostRevise);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgCostRevise,void>(
    &p_msg,
    (const std::shared_ptr<GCGMsgCostRevise> *)(v1 + 32));
  GCGGameMode::sendMessage(game_mode, &p_msg);
  std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  std::shared_ptr<GCGMsgCostRevise>::~shared_ptr((std::shared_ptr<GCGMsgCostRevise> *const)(v1 + 32));
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

// Line 105: range 000000000DEE7382-000000000DEE7AD8
void __cdecl GCGPlayerController::notifyGameInfo(GCGPlayerController *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  MultiserverApp *v4; // rax
  uint32_t AppId; // eax
  unsigned __int64 v6; // rax
  google::protobuf::uint32 *v7; // rdx
  uint32_t Time; // eax
  uint32_t v9; // eax
  uint32_t GameId; // eax
  uint32_t GameUid; // eax
  uint32_t VerifyCode; // eax
  GCGGameBusinessType BusinessType; // eax
  std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto::ProfilePicture *v15; // rax
  GCGDuel *Duel; // rcx
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t PlayerUid; // eax
  GCGCharacterZone *CharacterZone; // [rsp+10h] [rbp-160h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  proto::GCGGameBriefData *brief_data; // [rsp+30h] [rbp-140h]
  GCGCardMgr *card_mgr; // [rsp+38h] [rbp-138h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range; // [rsp+40h] [rbp-130h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+58h] [rbp-118h]
  const GCGControllerShowData *show_data; // [rsp+60h] [rbp-110h]
  proto::GCGPlayerBriefData *proto_player_data; // [rsp+68h] [rbp-108h]
  GCGField *field; // [rsp+70h] [rbp-100h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_card_face_map; // [rsp+78h] [rbp-F8h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+80h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 25 player_controller_ptr:139 80 48 10 notify:106";
  *(_QWORD *)(v1 + 16) = GCGPlayerController::notifyGameInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  proto::ServerGCGNewGameInfoNotify::ServerGCGNewGameInfoNotify((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80));
  v4 = Singleton<MultiserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v4);
  proto::ServerGCGNewGameInfoNotify::set_app_id((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80), AppId);
  v6 = ZTWN11ThreadLocal17work_thread_indexE();
  v7 = (google::protobuf::uint32 *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v6);
  proto::ServerGCGNewGameInfoNotify::set_thread_index((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80), *v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Time = GCGGameMode::getCreateTime(this->game_mode_);
  proto::ServerGCGNewGameInfoNotify::set_create_time((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80), Time);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v9 = GCGGameMode::getTryCreateTime(this->game_mode_);
  proto::ServerGCGNewGameInfoNotify::set_try_create_time((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80), v9);
  brief_data = proto::ServerGCGNewGameInfoNotify::mutable_game_brief_data((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GameId = GCGGameMode::getGameId(this->game_mode_);
  proto::GCGGameBriefData::set_game_id(brief_data, GameId);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GameUid = GCGGameMode::getGameUid(this->game_mode_);
  proto::GCGGameBriefData::set_game_uid(brief_data, GameUid);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  VerifyCode = GCGGameMode::getVerifyCode(this->game_mode_);
  proto::GCGGameBriefData::set_verify_code(brief_data, VerifyCode);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  BusinessType = GCGGameMode::getBusinessType(this->game_mode_);
  proto::GCGGameBriefData::set_business_type(brief_data, BusinessType);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  card_mgr = GCGGameMode::getCardMgr(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  __for_range = GCGGameMode::getControllerMap(this->game_mode_);
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*(&__for_begin);
    controller_id = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v14 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      show_data = GCGControllerBase::getShowData(v14);
      proto_player_data = proto::GCGGameBriefData::add_player_brief_list(brief_data);
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      proto::GCGPlayerBriefData::set_controller_id(proto_player_data, *controller_id);
      proto::GCGPlayerBriefData::set_nick_name(proto_player_data, &show_data->nick_name);
      v15 = proto::GCGPlayerBriefData::mutable_profile_picture(proto_player_data);
      proto::ProfilePicture::CopyFrom(v15, &show_data->profile_picture);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Duel = GCGGameMode::getDuel(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      field = GCGDuel::getField(Duel, *controller_id);
      proto_card_face_map = proto::GCGPlayerBriefData::mutable_card_face_map(proto_player_data);
      CharacterZone = GCGField::getCharacterZone(field);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGPlayerController::notifyGameInfo(void)::{lambda(GCGCard &)#1},void,void>(
        &p_func,
        (GCGPlayerController::notifyGameInfo::<lambda(GCGCard&)>)__PAIR128__(
                                                                   (unsigned __int64)proto_card_face_map,
                                                                   (unsigned __int64)proto_player_data));
      GCGCardZone::foreachCard(CharacterZone, &p_func);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
      std::dynamic_pointer_cast<GCGPlayerController,GCGControllerBase>((const std::shared_ptr<GCGControllerBase> *)(v1 + 48));
      if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 48), 0LL) )
      {
        v17 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        PlayerUid = GCGPlayerController::getPlayerUid(v17);
        proto::GCGPlayerBriefData::set_uid(proto_player_data, PlayerUid);
      }
      std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 48));
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++(&__for_begin);
  }
  GCGPlayerController::sendProto(this, (const google::protobuf::Message *)(v1 + 80));
  proto::ServerGCGNewGameInfoNotify::~ServerGCGNewGameInfoNotify((proto::ServerGCGNewGameInfoNotify *const)(v1 + 80));
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 128: range 000000000DEE71CC-000000000DEE7380
ForeachPolicy __cdecl GCGPlayerController::notifyGameInfo(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGPlayerController::notifyGameInfo::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int *v5; // rax
  data::GCGCardFaceType *v6; // rdx
  ForeachPolicy result; // eax
  data::GCGCardFaceType card_face; // [rsp+1Ch] [rbp-74h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 card_id:130";
  *(_QWORD *)(v2 + 16) = GCGPlayerController::notifyGameInfo(void)::{lambda(GCGCard &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  proto::GCGPlayerBriefData::add_card_id_list(__closure->__proto_player_data, *(_DWORD *)(v2 + 32));
  card_face = GCGCard::getFaceType(card);
  if ( card_face )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__proto_card_face_map >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__proto_card_face_map);
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
           __closure->__proto_card_face_map,
           (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (data::GCGCardFaceType *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = card_face;
  }
  result = FOREACH_CONTINUE;
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

// Line 150: range 000000000DEE7BCA-000000000DEE87A5
void __cdecl GCGPlayerController::fillDuelInfo(GCGPlayerController *const this, proto::GCGDuel *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  GCGGameMode *GameMode; // rax
  GCGGameMode *v6; // rax
  uint32_t Round; // edx
  GCGControllerValue CurControllerId; // edx
  proto::GCGPlayerField *v9; // rax
  proto::GCGPlayerField *v10; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  proto::GCGPhaseType v13; // eax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *v15; // rax
  unsigned int *v16; // rax
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *v17; // rdx
  google::protobuf::RepeatedField<unsigned int> *v18; // r12
  std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  void (__fastcall **vptr_GCGControllerBase)(std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GCGDuel *); // rdx
  const GCGCostReviseInfo *CostRevise; // r12
  proto::GCGCostReviseInfo *v22; // rax
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r12
  int (**vptr_GCGMsgPack)(...); // rax
  int (*v26)(...); // r13
  proto::GCGMessagePack *v27; // rax
  const GCGCardDetailInfo *v28; // rax
  int (**vptr_GCGCardDetailInfo)(...); // rax
  int (*v30)(...); // r12
  proto::GCGCard *v31; // rax
  google::protobuf::RepeatedField<unsigned int> *v32; // rax
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type v33; // [rsp+8h] [rbp-178h]
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+20h] [rbp-160h] BYREF
  GCGControllerValue cur_look_controller_id; // [rsp+24h] [rbp-15Ch]
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::map<proto::GCGControllerValue,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  GCGDuel *duel_0; // [rsp+38h] [rbp-148h]
  GCGDuel *duel; // [rsp+40h] [rbp-140h]
  proto::GCGPhase *proto_phase; // [rsp+48h] [rbp-138h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+50h] [rbp-130h]
  const std::map<proto::GCGControllerValue,unsigned int> *__for_range; // [rsp+58h] [rbp-128h]
  const std::pair<const proto::GCGControllerValue,unsigned int> *v44; // [rsp+60h] [rbp-120h]
  std::tuple_element<0,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *controller_id; // [rsp+68h] [rbp-118h]
  std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *count; // [rsp+70h] [rbp-110h]
  const GCGCardMgr *card_mgr; // [rsp+78h] [rbp-108h]
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>> *__for_range_0; // [rsp+80h] [rbp-100h]
  const std::vector<std::shared_ptr<GCGMsgPack>> *__for_range_1; // [rsp+88h] [rbp-F8h]
  const std::vector<GCGCardDetailInfo> *__for_range_2; // [rsp+90h] [rbp-F0h]
  const GCGCardDetailInfo *card_info; // [rsp+98h] [rbp-E8h]
  const std::shared_ptr<GCGMsgPack> *msg_pack_ptr; // [rsp+A0h] [rbp-E0h]
  std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > *__in; // [rsp+A8h] [rbp-D8h]
  std::tuple_element<0,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_id_0; // [rsp+B0h] [rbp-D0h]
  std::tuple_element<1,std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::type *controller_ptr; // [rsp+B8h] [rbp-C8h]
  std::function<ForeachPolicy(const GCGCard&)> p_func; // [rsp+C0h] [rbp-C0h] BYREF
  std::set<unsigned int> set; // [rsp+E0h] [rbp-A0h] BYREF
  char v58[112]; // [rsp+110h] [rbp-70h] BYREF
  GCGPlayerController::fillDuelInfo::<lambda(const GCGCard&)> v59; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 cur_phase_ptr:170";
  *(_QWORD *)(v2 + 16) = GCGPlayerController::fillDuelInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  cur_look_controller_id = this->controller_id_;
  GameMode = GCGControllerBase::getGameMode((GCGControllerBase *const)this);
  if ( GCGGameMode::isNeedLookOpponent(GameMode) )
  {
    v6 = GCGControllerBase::getGameMode((GCGControllerBase *const)this);
    duel_0 = GCGGameMode::getDuel(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->controller_id_);
    }
    cur_look_controller_id = GCGDuel::getOtherControllerId(duel_0, this->controller_id_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  proto::GCGDuel::set_controller_id(proto, cur_look_controller_id);
  Round = GCGDuel::getRound(duel);
  proto::GCGDuel::set_round(proto, Round);
  CurControllerId = GCGDuel::getCurControllerId(duel);
  proto::GCGDuel::set_cur_controller_id(proto, CurControllerId);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_seq_);
  }
  proto::GCGDuel::set_server_seq(proto, this->server_seq_);
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->operation_seq_);
  }
  proto::GCGDuel::set_operation_seq(proto, this->operation_seq_);
  v9 = proto::GCGDuel::add_field_list(proto);
  GCGField::toClient(&duel->field_1, cur_look_controller_id, v9);
  v10 = proto::GCGDuel::add_field_list(proto);
  GCGField::toClient(&duel->field_2, cur_look_controller_id, v10);
  proto_phase = proto::GCGDuel::mutable_phase(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 32));
  if ( std::operator!=<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 32), 0LL) )
  {
    v11 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v12 = (unsigned __int64)(v11->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11->_vptr_GCGPhaseBase + 3);
    v13 = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
    proto::GCGPhase::set_phase_type(proto_phase, v13);
    proto_map = proto::GCGPhase::mutable_allow_controller_map(proto_phase);
    v14 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    __for_range = GCGPhaseBase::getAllowControllerMap(v14);
    __for_begin._M_node = std::map<proto::GCGControllerValue,unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<proto::GCGControllerValue,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v44 = std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator*(&__for_begin);
      controller_id = std::get<0ul,proto::GCGControllerValue const,unsigned int>(v44);
      v15 = (std::tuple_element<1,const std::pair<const proto::GCGControllerValue,unsigned int> >::type *)std::get<1ul,proto::GCGControllerValue const,unsigned int>(v44);
      count = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v33 = *count;
      if ( *(_BYTE *)(((unsigned __int64)controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)controller_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(controller_id);
      }
      key = *controller_id;
      v16 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, &key);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v33;
      std::_Rb_tree_const_iterator<std::pair<proto::GCGControllerValue const,unsigned int>>::operator++(&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  card_mgr = GCGGameMode::getCardMgr(this->game_mode_);
  v59.__proto = proto;
  v59.__controller_id = cur_look_controller_id;
  std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGPlayerController::fillDuelInfo(proto::GCGDuel &)::{lambda(GCGCard const&)#1},void,void>(
    &p_func,
    v59);
  GCGCardMgr::foreachCard(card_mgr, &p_func);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&p_func);
  v18 = proto::GCGDuel::mutable_card_id_list(proto);
  GCGCardMgr::getAllCardIdSet(&set, card_mgr);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&set, v18);
  std::set<unsigned int>::~set(&set);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  __for_range_0 = GCGGameMode::getControllerMap(this->game_mode_);
  __for_begin._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::begin(__for_range_0)._M_node;
  __for_end._M_node = std::map<proto::GCGControllerValue,std::shared_ptr<GCGControllerBase>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > >::_Self *)&__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
    controller_id_0 = std::get<0ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    controller_ptr = std::get<1ul,proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>(__in);
    if ( std::operator!=<GCGControllerBase>(controller_ptr, 0LL) )
    {
      v19 = std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)controller_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19);
      vptr_GCGControllerBase = (void (__fastcall **)(std::__shared_ptr_access<GCGControllerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::GCGDuel *))v19->_vptr_GCGControllerBase;
      if ( *(_BYTE *)(((unsigned __int64)v19->_vptr_GCGControllerBase >> 3) + 0x7FFF8000) )
        __asan_report_load8(v19->_vptr_GCGControllerBase);
      (*vptr_GCGControllerBase)(v19, proto);
    }
    std::_Rb_tree_iterator<std::pair<proto::GCGControllerValue const,std::shared_ptr<GCGControllerBase>>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::GCGControllerValue,std::shared_ptr<GCGControllerBase> > > *const)&__for_begin);
  }
  std::function<ForeachPolicy ()(GCGChallenge const&)>::function<GCGPlayerController::fillDuelInfo(proto::GCGDuel &)::{lambda(GCGChallenge const&)#2},void,void>(
    (std::function<ForeachPolicy(const GCGChallenge&)> *const)&p_func,
    (GCGPlayerController::fillDuelInfo::<lambda(const GCGChallenge&)>)proto);
  GCGPlayerController::foreachChallenge(this, (std::function<ForeachPolicy(const GCGChallenge&)> *)&p_func);
  std::function<ForeachPolicy ()(GCGChallenge const&)>::~function((std::function<ForeachPolicy(const GCGChallenge&)> *const)&p_func);
  CostRevise = GCGPlayerController::getCostRevise(this);
  v22 = proto::GCGDuel::mutable_cost_revise(proto);
  GCGCostReviseInfo::toClient(CostRevise, v22);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  __for_range_1 = GCGGameMode::getHistoryMsg(this->game_mode_);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Base_ptr)std::vector<std::shared_ptr<GCGMsgPack>>::begin(__for_range_1)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Base_ptr)std::vector<std::shared_ptr<GCGMsgPack>>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *)&__for_end) )
  {
    msg_pack_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *const)&__for_begin);
    if ( std::operator!=<GCGMsgPack>(msg_pack_ptr, 0LL) )
    {
      v23 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)msg_pack_ptr);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v23);
      vptr_GCGMsgPack = v24->_vptr_GCGMsgPack;
      if ( *(_BYTE *)(((unsigned __int64)v24->_vptr_GCGMsgPack >> 3) + 0x7FFF8000) )
        __asan_report_load8(v24->_vptr_GCGMsgPack);
      v26 = *vptr_GCGMsgPack;
      v27 = proto::GCGDuel::add_history_msg_pack_list(proto);
      v26(v24, (unsigned int)cur_look_controller_id, v27);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMsgPack>*,std::vector<std::shared_ptr<GCGMsgPack>> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  __for_range_2 = GCGGameMode::getHistroyCard(this->game_mode_);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Base_ptr)std::vector<GCGCardDetailInfo>::begin(__for_range_2)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<const proto::GCGControllerValue,unsigned int> >::_Base_ptr)std::vector<GCGCardDetailInfo>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<GCGCardDetailInfo const*,std::vector<GCGCardDetailInfo>>(
            (const __gnu_cxx::__normal_iterator<const GCGCardDetailInfo*,std::vector<GCGCardDetailInfo> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const GCGCardDetailInfo*,std::vector<GCGCardDetailInfo> > *)&__for_end) )
  {
    v28 = __gnu_cxx::__normal_iterator<GCGCardDetailInfo const*,std::vector<GCGCardDetailInfo>>::operator*((const __gnu_cxx::__normal_iterator<const GCGCardDetailInfo*,std::vector<GCGCardDetailInfo> > *const)&__for_begin);
    card_info = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v28);
    vptr_GCGCardDetailInfo = card_info->_vptr_GCGCardDetailInfo;
    if ( *(_BYTE *)(((unsigned __int64)card_info->_vptr_GCGCardDetailInfo >> 3) + 0x7FFF8000) )
      __asan_report_load8(card_info->_vptr_GCGCardDetailInfo);
    v30 = *vptr_GCGCardDetailInfo;
    v31 = proto::GCGDuel::add_history_card_list(proto);
    v30(card_info, (unsigned int)cur_look_controller_id, v31);
    __gnu_cxx::__normal_iterator<GCGCardDetailInfo const*,std::vector<GCGCardDetailInfo>>::operator++((__gnu_cxx::__normal_iterator<const GCGCardDetailInfo*,std::vector<GCGCardDetailInfo> > *const)&__for_begin);
  }
  v32 = proto::GCGDuel::mutable_forbid_finish_challenge_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->forbid_finish_challenge_vec_, v32);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 32));
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 181: range 000000000DEE7ADA-000000000DEE7B6E
ForeachPolicy __cdecl GCGPlayerController::fillDuelInfo(proto::GCGDuel &)::{lambda(GCGCard const&)#1}::operator()(
        const GCGPlayerController::fillDuelInfo::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  proto::GCGCard *v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__proto >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__proto);
  v2 = proto::GCGDuel::add_card_list(__closure->__proto);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  GCGCard::toClient(card, __closure->__controller_id, v2);
  return 0;
};

// Line 194: range 000000000DEE7B70-000000000DEE7BC8
ForeachPolicy __cdecl GCGPlayerController::fillDuelInfo(proto::GCGDuel &)::{lambda(GCGChallenge const&)#2}::operator()(
        const GCGPlayerController::fillDuelInfo::<lambda(const GCGChallenge&)> *const __closure,
        const GCGChallenge *challenge)
{
  proto::GCGDuelChallenge *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v2 = proto::GCGDuel::add_challenge_list(__closure->__proto);
  GCGChallenge::toClient(challenge, v2);
  return 0;
};

// Line 215: range 000000000DEE87A6-000000000DEE88AE
void __cdecl GCGPlayerController::fillVerify(GCGPlayerController *const this, proto::ServerGCGVerify *verify)
{
  uint32_t GameUid; // edx
  uint32_t VerifyCode; // edx
  MultiserverApp *v4; // rax
  uint32_t AppId; // edx
  unsigned __int64 v6; // rax
  google::protobuf::uint32 *v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GameUid = GCGGameMode::getGameUid(this->game_mode_);
  proto::ServerGCGVerify::set_game_uid(verify, GameUid);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  VerifyCode = GCGGameMode::getVerifyCode(this->game_mode_);
  proto::ServerGCGVerify::set_verify_code(verify, VerifyCode);
  v4 = Singleton<MultiserverApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v4);
  proto::ServerGCGVerify::set_app_id(verify, AppId);
  v6 = ZTWN11ThreadLocal17work_thread_indexE();
  v7 = (google::protobuf::uint32 *)v6;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v6);
  proto::ServerGCGVerify::set_thread_index(verify, *v7);
};

// Line 223: range 000000000DEE88B0-000000000DEE8BA7
void __cdecl GCGPlayerController::sendMsgPack(
        GCGPlayerController *const this,
        const std::vector<std::shared_ptr<GCGMsgPack>> *msg_pack_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::ServerGCGVerify *v5; // rdx
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  int (**vptr_GCGMsgPack)(...); // rax
  int (*v9)(...); // r15
  proto::GCGMessagePack *v10; // rcx
  uint32_t v11; // eax
  std::vector<std::shared_ptr<GCGMsgPack>>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<std::shared_ptr<GCGMsgPack>>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const std::vector<std::shared_ptr<GCGMsgPack>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::shared_ptr<GCGMsgPack> *msg_pack_ptr; // [rsp+38h] [rbp-B8h]
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 10 notify:228";
  *(_QWORD *)(v2 + 16) = GCGPlayerController::sendMsgPack;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !std::vector<std::shared_ptr<GCGMsgPack>>::empty(msg_pack_vec) )
  {
    proto::ServerGCGMessagePackNotify::ServerGCGMessagePackNotify((proto::ServerGCGMessagePackNotify *const)(v2 + 32));
    v5 = proto::ServerGCGMessagePackNotify::mutable_verify((proto::ServerGCGMessagePackNotify *const)(v2 + 32));
    GCGPlayerController::fillVerify(this, v5);
    __for_range = msg_pack_vec;
    __for_begin._M_current = std::vector<std::shared_ptr<GCGMsgPack>>::begin(msg_pack_vec)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GCGMsgPack>>::end(msg_pack_vec)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>(
              &__for_begin,
              &__for_end) )
    {
      msg_pack_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>::operator*(&__for_begin);
      if ( std::operator!=<GCGMsgPack>(msg_pack_ptr, 0LL) )
      {
        v6 = std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPack,(__gnu_cxx::_Lock_policy)2,false,false> *const)msg_pack_ptr);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v6);
        vptr_GCGMsgPack = v7->_vptr_GCGMsgPack;
        if ( *(_BYTE *)(((unsigned __int64)v7->_vptr_GCGMsgPack >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7->_vptr_GCGMsgPack);
        v9 = *vptr_GCGMsgPack;
        v10 = proto::ServerGCGMessagePackNotify::add_msg_pack_list((proto::ServerGCGMessagePackNotify *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->controller_id_);
        }
        v9(v7, (unsigned int)this->controller_id_, v10);
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMsgPack> const*,std::vector<std::shared_ptr<GCGMsgPack>>>::operator++(&__for_begin);
    }
    v11 = GCGPlayerController::genServerSeq(this);
    proto::ServerGCGMessagePackNotify::set_server_seq((proto::ServerGCGMessagePackNotify *const)(v2 + 32), v11);
    GCGPlayerController::sendProto(this, (const google::protobuf::Message *)(v2 + 32));
    proto::ServerGCGMessagePackNotify::~ServerGCGMessagePackNotify((proto::ServerGCGMessagePackNotify *const)(v2 + 32));
  }
  if ( v16 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 242: range 000000000DEE8BA8-000000000DEE8F64
__int64 __fastcall GCGPlayerController::onTick(GCGPlayerController *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  GCGDuel *Duel; // r13
  GCGControllerValue ControllerId; // eax
  GCGControllerValue OtherControllerId; // eax
  __int64 result; // rax
  proto::GCGControllerValue val; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-A4h]
  GCGGameMode *game_mode; // [rsp+20h] [rbp-A0h]
  const GCGRule *rule; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-90h] BYREF
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 10 now_ms:241";
  *(_QWORD *)(v2 + 16) = GCGPlayerController::onTick;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = now_ms;
  game_mode = GCGControllerBase::getGameMode((GCGControllerBase *const)this);
  rule = GCGGameMode::rule(game_mode);
  now = *(_QWORD *)(v2 + 32) / 0x3E8uLL;
  if ( *(_BYTE *)(((unsigned __int64)&rule->disconnect_time_out >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule->disconnect_time_out >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rule->disconnect_time_out);
  }
  if ( rule->disconnect_time_out )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_recv_time_);
    }
    if ( now > this->last_recv_time_ + rule->disconnect_time_out )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/controller/gcg_player_controller.cpp",
        "onTick",
        249);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v22,
             (const char (*)[27])"disconnect too long. uid: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->player_uid_);
      v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v6, (const char (*)[5])off_1BB59E60);
      val = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
      v8 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" now_ms: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v9,
              (const unsigned __int64 *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])" last_recv_time_: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->last_recv_time_);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" time_out: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &rule->disconnect_time_out);
      common::milog::MiLogStream::~MiLogStream(&v22);
      Duel = GCGGameMode::getDuel(game_mode);
      ControllerId = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
      OtherControllerId = GCGDuel::getOtherControllerId(Duel, ControllerId);
      GCGGameMode::toFinPhase(game_mode, OtherControllerId, GCG_END_REASON_DISCONNECTED);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_heart_beat_tick_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_heart_beat_tick_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_heart_beat_tick_);
  }
  if ( now > this->last_heart_beat_tick_ + 10 )
  {
    this->last_heart_beat_tick_ = now;
    GCGPlayerController::onHeartBeat(this);
  }
  result = 0LL;
  if ( v23 == (char *)v2 )
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

// Line 261: range 000000000DEE8F66-000000000DEE8FEA
void __cdecl GCGPlayerController::updateRecvTime(GCGPlayerController *const this)
{
  uint32_t Now; // esi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_recv_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_recv_time_);
  }
  this->last_recv_time_ = Now;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::updateRecvTime(this->game_mode_);
};

// Line 267: range 000000000DEE8FEC-000000000DEE904E
void __cdecl GCGPlayerController::updateOperationSeq(GCGPlayerController *const this, uint32_t seq)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->operation_seq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->operation_seq_);
  }
  if ( seq > this->operation_seq_ )
    this->operation_seq_ = seq;
};

// Line 275: range 000000000DEE9050-000000000DEE906A
void __cdecl GCGPlayerController::onGameSettle(GCGPlayerController *const this)
{
  GCGPlayerController::updateAllChallenge(this);
};

// Line 280: range 000000000DEE906C-000000000DEE92A2
void __cdecl GCGPlayerController::onHeartBeat(GCGPlayerController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  proto::ServerGCGVerify *v7; // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:282";
  *(_QWORD *)(v1 + 16) = GCGPlayerController::onHeartBeat;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v1 + 32),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/controller/gcg_player_controller.cpp",
    "onHeartBeat",
    281);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
         (common::milog::MiLogStream *const)(v1 + 32),
         (const char (*)[14])"onHeartBeat: ");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->server_seq_);
  v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])" ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->player_uid_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
  proto::ServerGCGHeartBeatNotify::ServerGCGHeartBeatNotify((proto::ServerGCGHeartBeatNotify *const)(v1 + 32));
  v7 = proto::ServerGCGHeartBeatNotify::mutable_verify((proto::ServerGCGHeartBeatNotify *const)(v1 + 32));
  GCGPlayerController::fillVerify(this, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_seq_);
  }
  proto::ServerGCGHeartBeatNotify::set_server_seq((proto::ServerGCGHeartBeatNotify *const)(v1 + 32), this->server_seq_);
  GCGPlayerController::sendProto(this, (const google::protobuf::Message *)(v1 + 32));
  proto::ServerGCGHeartBeatNotify::~ServerGCGHeartBeatNotify((proto::ServerGCGHeartBeatNotify *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 290: range 000000000DEE92A4-000000000DEE96F5
void __fastcall GCGPlayerController::updateChallengeByType(
        GCGPlayerController *const this,
        data::GCGChallengeType challenge_type,
        const GCGChallengeUpdateParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::shared_ptr<GCGChallenge> *v6; // rax
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, GCGGameMode *, _QWORD, const GCGChallengeUpdateParam *); // r15
  GCGControllerValue ControllerId; // esi
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v16; // [rsp+24h] [rbp-10Ch] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>> *__for_range; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 18 challenge_type:289 64 8 8 iter:291 96 16 17 challenge_ptr:296";
  *(_QWORD *)(v3 + 16) = GCGPlayerController::updateChallengeByType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = challenge_type;
  *(std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::iterator *)(v3 + 64) = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::find(&this->challenge_type_2_challenge_map_, (const std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::key_type *)(v3 + 48));
  __for_end._M_current = (std::shared_ptr<GCGChallenge> *)std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::end(&this->challenge_type_2_challenge_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::_Self *)(v3 + 64),
          (const std::_Rb_tree_iterator<std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::_Self *)&__for_end) )
  {
    __for_range = &std::_Rb_tree_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > > *const)(v3 + 64))->second;
    __for_begin._M_current = std::vector<std::shared_ptr<GCGChallenge>>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GCGChallenge>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>(
              &__for_begin,
              &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>::operator*(&__for_begin);
      std::shared_ptr<GCGChallenge>::shared_ptr((std::shared_ptr<GCGChallenge> *const)(v3 + 96), v6);
      if ( std::operator!=<GCGChallenge>(0LL, (const std::shared_ptr<GCGChallenge> *)(v3 + 96)) )
      {
        v7 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v7);
        v9 = (unsigned __int64)(v8->_vptr_GCGChallenge + 1);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v8->_vptr_GCGChallenge + 1);
        v10 = *(void (__fastcall **)(std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, GCGGameMode *, _QWORD, const GCGChallengeUpdateParam *))v9;
        ControllerId = GCGControllerBase::getControllerId((const GCGControllerBase *const)this);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        v10(v8, this->game_mode_, (unsigned int)ControllerId, param);
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/controller/gcg_player_controller.cpp",
          "updateChallengeByType",
          301);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v20,
                (const char (*)[16])"updateProgress:");
        v13 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        GCGChallenge::getDesc[abi:cxx11](&val, v13);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      std::shared_ptr<GCGChallenge>::~shared_ptr((std::shared_ptr<GCGChallenge> *const)(v3 + 96));
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> *,std::vector<std::shared_ptr<GCGChallenge>>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_player_controller.cpp",
      "updateChallengeByType",
      304);
    v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[39])"updateChallengeByType, challenge_type:");
    v16 = *(_DWORD *)(v3 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v16);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  }
  if ( v22 == (char *)v3 )
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
};

// Line 308: range 000000000DEE96F6-000000000DEE991A
void __cdecl GCGPlayerController::updateAllChallenge(GCGPlayerController *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *challenge_type; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *_; // [rsp+38h] [rbp-A8h]
  char v10[160]; // [rsp+40h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 64 9 param:309";
  *(_QWORD *)(v1 + 16) = GCGPlayerController::updateAllChallenge;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  GCGChallengeUpdateParam::GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 32));
  __for_range = &this->challenge_type_2_challenge_map_;
  __for_begin._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::begin(&this->challenge_type_2_challenge_map_)._M_node;
  __for_end._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::end(&this->challenge_type_2_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator*(&__for_begin);
    challenge_type = std::get<0ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(__in);
    _ = std::get<1ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)challenge_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)challenge_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)challenge_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(challenge_type);
    }
    GCGPlayerController::updateChallengeByType(this, *challenge_type, (const GCGChallengeUpdateParam *)(v1 + 32));
    std::_Rb_tree_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator++(&__for_begin);
  }
  GCGChallengeUpdateParam::~GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 317: range 000000000DEE991C-000000000DEE9AAA
void __cdecl GCGPlayerController::attachChallenge(GCGPlayerController *const this, GCGChallengePtr *p_challenge_ptr)
{
  GCGChallenge *v2; // rax
  std::vector<std::shared_ptr<GCGChallenge>> *v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::key_type __k; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<GCGChallenge>(0LL, p_challenge_ptr) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/controller/gcg_player_controller.cpp",
      "attachChallenge",
      320);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v8, (const char (*)[25])"challenge_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v2 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_challenge_ptr);
    __k = GCGChallenge::getChallengeType(v2);
    v3 = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::operator[](
           &this->challenge_type_2_challenge_map_,
           &__k);
    std::vector<std::shared_ptr<GCGChallenge>>::emplace_back<std::shared_ptr<GCGChallenge>&>(
      v3,
      p_challenge_ptr,
      (std::shared_ptr<GCGChallenge> *)v3);
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/controller/gcg_player_controller.cpp",
      "attachChallenge",
      324);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"attach challenge:");
    v5 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_challenge_ptr);
    GCGChallenge::getDesc[abi:cxx11]((std::string *)&v8, v5);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, (const std::string *)&v8);
    std::string::~string(&v8);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 328: range 000000000DEE9AAC-000000000DEE9D4C
void __cdecl GCGPlayerController::foreachChallenge(
        const GCGPlayerController *const this,
        std::function<ForeachPolicy(const GCGChallenge&)> *p_func)
{
  std::shared_ptr<GCGChallenge> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<GCGChallenge> *v5; // rax
  std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  int v8; // r14d
  bool is_break; // [rsp+17h] [rbp-B9h]
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::const_iterator __for_begin_0; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<GCGChallenge>>::const_iterator __for_end_0; // [rsp+30h] [rbp-A0h] BYREF
  const std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>> *__for_range; // [rsp+38h] [rbp-98h]
  const std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > *v15; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,const std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *_; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,const std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *challenge_vec; // [rsp+50h] [rbp-80h]
  const std::vector<std::shared_ptr<GCGChallenge>> *__for_range_0; // [rsp+58h] [rbp-78h]
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<GCGChallenge> *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<GCGChallenge> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 17 challenge_ptr:332";
  v2[1]._M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGPlayerController::foreachChallenge;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  is_break = 0;
  __for_range = &this->challenge_type_2_challenge_map_;
  __for_begin._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::begin(&this->challenge_type_2_challenge_map_)._M_node;
  __for_end._M_node = std::map<data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>>>::end(&this->challenge_type_2_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator*(&__for_begin);
    _ = std::get<0ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(v15);
    challenge_vec = (std::tuple_element<1,const std::pair<const data::GCGChallengeType,std::vector<std::shared_ptr<GCGChallenge>> > >::type *)std::get<1ul,data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>(v15);
    __for_range_0 = challenge_vec;
    __for_begin_0._M_current = std::vector<std::shared_ptr<GCGChallenge>>::begin(challenge_vec)._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<GCGChallenge>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>::operator*(&__for_begin_0);
      std::shared_ptr<GCGChallenge>::shared_ptr(v2 + 2, v5);
      if ( std::operator!=<GCGChallenge>(0LL, v2 + 2)
        && (v6 = std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGChallenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]),
            std::function<ForeachPolicy ()(GCGChallenge const&)>::operator()(p_func, v6) == FOREACH_BREAK) )
      {
        is_break = 1;
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
      std::shared_ptr<GCGChallenge>::~shared_ptr(v2 + 2);
      if ( v8 != 1 )
        break;
      __gnu_cxx::__normal_iterator<std::shared_ptr<GCGChallenge> const*,std::vector<std::shared_ptr<GCGChallenge>>>::operator++(&__for_begin_0);
    }
    if ( is_break )
      break;
    std::_Rb_tree_const_iterator<std::pair<data::GCGChallengeType const,std::vector<std::shared_ptr<GCGChallenge>>>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<GCGChallenge,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 348: range 000000000DEE9E00-000000000DEE9E88
std::map<unsigned int,unsigned int> *__cdecl GCGPlayerController::getChallengeProgressMap(
        std::map<unsigned int,unsigned int> *retstr,
        const GCGPlayerController *const this)
{
  std::function<ForeachPolicy(const GCGChallenge&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::map<unsigned int,unsigned int>::map(retstr);
  std::function<ForeachPolicy ()(GCGChallenge const&)>::function<GCGPlayerController::getChallengeProgressMap(void)::{lambda(GCGChallenge const&)#1},void,void>(
    &p_func,
    (GCGPlayerController::getChallengeProgressMap::<lambda(const GCGChallenge&)>)retstr);
  GCGPlayerController::foreachChallenge(this, &p_func);
  std::function<ForeachPolicy ()(GCGChallenge const&)>::~function(&p_func);
  return retstr;
};

// Line 350: range 000000000DEE9D4E-000000000DEE9DFE
ForeachPolicy __cdecl GCGPlayerController::getChallengeProgressMap(void)const::{lambda(GCGChallenge const&)#1}::operator()(
        const GCGPlayerController::getChallengeProgressMap::<lambda(const GCGChallenge&)> *const __closure,
        const GCGChallenge *challenge)
{
  uint32_t Progress; // ebx
  std::map<unsigned int,unsigned int> *progress_map; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  uint32_t *v5; // rdx
  std::map<unsigned int,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  Progress = GCGChallenge::getProgress(challenge);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  progress_map = __closure->__progress_map;
  __k[0] = GCGChallenge::getChallengeId(challenge);
  v4 = std::map<unsigned int,unsigned int>::operator[](progress_map, __k);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = Progress;
  return 0;
};
