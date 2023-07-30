// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/fashion/fashion_comp.cpp

// Line 30: range 00000000150A89A4-00000000150A8AE9
int32_t __cdecl FashionComp::fromBin(FashionComp *const this, const proto::AvatarBin *bin)
{
  Avatar *avatar; // rdx
  Avatar *v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v3 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v3 = (Avatar *)__asan_report_load8(this->avatar_);
  v4 = *(_QWORD *)v3->baseclass_0 + 400LL;
  v5 = *(unsigned __int8 *)((v4 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v5 )
    v4 = __asan_report_load8(v4);
  v6 = (*(__int64 (__fastcall **)(Avatar *))v4)(avatar);
  if ( v6 == 1 || v6 == 3 )
  {
    v7 = proto::AvatarBin::flycloak_id(bin);
    v8 = *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(&this->cur_wearing_flycloak_id_, v5, v7);
    }
    this->cur_wearing_flycloak_id_ = v7;
  }
  v9 = proto::AvatarBin::costume_id(bin);
  v10 = *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->cur_wearing_costume_id_, v5, v11);
  this->cur_wearing_costume_id_ = v9;
  return 0;
};

// Line 50: range 00000000150A8AEA-00000000150A8C2D
int32_t __cdecl FashionComp::toBin(const FashionComp *const this, proto::AvatarBin *bin)
{
  Avatar *avatar; // rdx
  Avatar *v3; // rax
  unsigned __int64 v4; // rax
  int v5; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v3 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v3 = (Avatar *)__asan_report_load8(this->avatar_);
  v4 = *(_QWORD *)v3->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = (*(__int64 (__fastcall **)(Avatar *))v4)(avatar);
  if ( v5 == 1 || v5 == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_wearing_flycloak_id_);
    }
    proto::AvatarBin::set_flycloak_id(bin, this->cur_wearing_flycloak_id_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_wearing_costume_id_);
  }
  proto::AvatarBin::set_costume_id(bin, this->cur_wearing_costume_id_);
  return 0;
};

// Line 68: range 00000000150A8C2E-00000000150A8CEC
int32_t __cdecl FashionComp::toSnapshot(const FashionComp *const this, proto::AvatarSnapshotBin *snapshot_bin)
{
  proto::AvatarBin *bin; // [rsp+18h] [rbp-8h]

  bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_wearing_flycloak_id_);
  }
  proto::AvatarBin::set_flycloak_id(bin, this->cur_wearing_flycloak_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_wearing_costume_id_);
  }
  proto::AvatarBin::set_costume_id(bin, this->cur_wearing_costume_id_);
  return 0;
};

// Line 77: range 00000000150A8CEE-00000000150A8DC2
int32_t __cdecl FashionComp::init(FashionComp *const this)
{
  GameserverService *v1; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  __int64 DefaultFlycloakId; // rdx
  char v4; // al
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_wearing_flycloak_id_);
  }
  if ( !this->cur_wearing_flycloak_id_ )
  {
    v1 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
    DefaultFlycloakId = ConstValueExcelConfigMgr::getDefaultFlycloakId(&v2->design_config.txt_config_mgr.const_value_config_mgr);
    v4 = *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000);
    if ( v4 != 0 && v4 <= 3 )
    {
      LOBYTE(v1) = v4 != 0;
      __asan_report_store4(&this->cur_wearing_flycloak_id_, v1, DefaultFlycloakId);
    }
    this->cur_wearing_flycloak_id_ = DefaultFlycloakId;
    std::shared_ptr<Config>::~shared_ptr(&v6);
  }
  return 0;
};

// Line 90: range 00000000150A8DC4-00000000150A91E3
int32_t __cdecl FashionComp::onLogin(FashionComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Avatar *avatar; // rdx
  Avatar *v5; // rax
  unsigned __int64 v6; // rax
  Avatar *v7; // rdx
  Avatar *v8; // rax
  unsigned __int64 v9; // rax
  ExclusiveRuleExcelConfigMgr *p_exclusive_rule_config_mgr; // r15
  uint32_t cur_wearing_flycloak_id; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t PlatformType; // eax
  GameserverService *v14; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __int64 DefaultFlycloakId; // rdx
  char v17; // al
  int32_t result; // eax
  std::shared_ptr<Config> v19; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-90h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 player_ptr:96";
  *(_QWORD *)(v1 + 16) = FashionComp::onLogin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v5 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v5 = (Avatar *)__asan_report_load8(this->avatar_);
  v6 = *(_QWORD *)v5->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  if ( (*(unsigned int (__fastcall **)(Avatar *))v6)(avatar) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    v7 = this->avatar_;
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      v8 = (Avatar *)__asan_report_load8(this->avatar_);
    v9 = *(_QWORD *)v8->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9);
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v9)(v1 + 32, v7);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fashion/fashion_comp.cpp",
        "onLogin",
        99);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      p_exclusive_rule_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.exclusive_rule_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_wearing_flycloak_id_);
      }
      cur_wearing_flycloak_id = this->cur_wearing_flycloak_id_;
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      PlatformType = Player::getPlatformType(v12);
      LOBYTE(cur_wearing_flycloak_id) = !ExclusiveRuleExcelConfigMgr::isExclusiveObjectCanUse(
                                           p_exclusive_rule_config_mgr,
                                           PlatformType,
                                           EXCLUSIVE_RULE_FLYCLOAK,
                                           cur_wearing_flycloak_id);
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( (_BYTE)cur_wearing_flycloak_id )
      {
        v14 = ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v19);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
        DefaultFlycloakId = ConstValueExcelConfigMgr::getDefaultFlycloakId(&v15->design_config.txt_config_mgr.const_value_config_mgr);
        v17 = *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(&this->cur_wearing_flycloak_id_, v14, DefaultFlycloakId);
        }
        this->cur_wearing_flycloak_id_ = DefaultFlycloakId;
        std::shared_ptr<Config>::~shared_ptr(&v19);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  }
  result = 0;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 00000000150A91E4-00000000150A9292
int32_t __cdecl FashionComp::toClient(const FashionComp *const this, proto::SceneAvatarInfo *avatar_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_wearing_flycloak_id_);
  }
  proto::SceneAvatarInfo::set_wearing_flycloak_id(avatar_info, this->cur_wearing_flycloak_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_wearing_costume_id_);
  }
  proto::SceneAvatarInfo::set_costume_id(avatar_info, this->cur_wearing_costume_id_);
  return 0;
};

// Line 122: range 00000000150A9294-00000000150A9342
int32_t __cdecl FashionComp::toClient(const FashionComp *const this, proto::AvatarInfo *avatar_info)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_wearing_flycloak_id_);
  }
  proto::AvatarInfo::set_wearing_flycloak_id(avatar_info, this->cur_wearing_flycloak_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_wearing_costume_id_);
  }
  proto::AvatarInfo::set_costume_id(avatar_info, this->cur_wearing_costume_id_);
  return 0;
};

// Line 129: range 00000000150A9344-00000000150A98BE
__int64 __fastcall FashionComp::wearFlycloak(FashionComp *const this, uint32_t flycloak_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Avatar *avatar; // rdx
  Avatar *v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  Avatar *v9; // rdx
  Avatar *v10; // rax
  unsigned __int64 v11; // rax
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v14; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v16; // rax
  ExclusiveRuleExcelConfigMgr *p_exclusive_rule_config_mgr; // r15
  uint32_t v18; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t PlatformType; // eax
  __int64 result; // rax
  uint32_t old_flycloak_id; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 flycloak_id:128 64 16 14 player_ptr:136";
  *(_QWORD *)(v2 + 16) = FashionComp::wearFlycloak;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = flycloak_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v6 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v6 = (Avatar *)__asan_report_load8(this->avatar_);
  v7 = *(_QWORD *)v6->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  if ( (*(unsigned int (__fastcall **)(Avatar *))v7)(avatar) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    v9 = this->avatar_;
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      v10 = (Avatar *)__asan_report_load8(this->avatar_);
    v11 = *(_QWORD *)v10->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v11)(v2 + 64, v9);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fashion/fashion_comp.cpp",
        "wearFlycloak",
        139);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = -1;
    }
    else
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v12);
      if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x36u) )
      {
        v8 = 141;
      }
      else
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        AvatarComp = Player::getAvatarComp(v14);
        if ( !PlayerAvatarComp::hasFlycloak(AvatarComp, *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fashion/fashion_comp.cpp",
            "wearFlycloak",
            150);
          v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v24,
                  (const char (*)[44])"player dosen't have flycloak, flycloak_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          v8 = 162;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v23);
          p_exclusive_rule_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.exclusive_rule_config_mgr;
          v18 = *(_DWORD *)(v2 + 48);
          v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          PlatformType = Player::getPlatformType(v19);
          LOBYTE(v18) = !ExclusiveRuleExcelConfigMgr::isExclusiveObjectCanUse(
                           p_exclusive_rule_config_mgr,
                           PlatformType,
                           EXCLUSIVE_RULE_FLYCLOAK,
                           v18);
          std::shared_ptr<Config>::~shared_ptr(&v23);
          if ( (_BYTE)v18 )
          {
            v8 = 169;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->cur_wearing_flycloak_id_);
            }
            old_flycloak_id = this->cur_wearing_flycloak_id_;
            this->cur_wearing_flycloak_id_ = *(_DWORD *)(v2 + 48);
            if ( old_flycloak_id != this->cur_wearing_flycloak_id_ )
            {
              FashionComp::wearFlycloakNotify(this, this->cur_wearing_flycloak_id_);
              FashionComp::logChangeFlycloak(this);
            }
            v8 = 0;
          }
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fashion/fashion_comp.cpp",
      "wearFlycloak",
      132);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v24,
      (const char (*)[39])"only formal avatar can change flycloak");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  result = v8;
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

// Line 172: range 00000000150A98C0-00000000150A9A6E
void __cdecl FashionComp::wearFlycloakNotify(FashionComp *const this, uint32_t flycloak_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint64_t Guid; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:173";
  *(_QWORD *)(v2 + 16) = FashionComp::wearFlycloakNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::AvatarFlycloakChangeNotify::AvatarFlycloakChangeNotify((proto::AvatarFlycloakChangeNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Guid = Avatar::getGuid(this->avatar_);
  proto::AvatarFlycloakChangeNotify::set_avatar_guid((proto::AvatarFlycloakChangeNotify *const)(v2 + 32), Guid);
  proto::AvatarFlycloakChangeNotify::set_flycloak_id((proto::AvatarFlycloakChangeNotify *const)(v2 + 32), flycloak_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(v2 + 32));
  proto::AvatarFlycloakChangeNotify::~AvatarFlycloakChangeNotify((proto::AvatarFlycloakChangeNotify *const)(v2 + 32));
  if ( v6 == (char *)v2 )
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
};

// Line 181: range 00000000150A9A70-00000000150AA22A
// local variable allocation has failed, the output may be wrong!
void __cdecl FashionComp::logChangeFlycloak(FashionComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // r14
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  Player *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  Player *v18; // r14
  std::string v19; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  const data::AvatarFlycloakExcelConfig *flycloak_config_ptr; // [rsp+20h] [rbp-100h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v23; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+70h] [rbp-B0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 22 log_context_holder:196 64 16 14 player_ptr:182 96 16 11 log_ptr:197";
  *(_QWORD *)(v1 + 16) = FashionComp::logChangeFlycloak;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((v19._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v19._M_string_length + 8);
  v4 = *(_QWORD *)(v19._M_string_length + 8);
  v5 = (_QWORD *)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v5 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v19._M_string_length + 8));
  v6 = *v5 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v6)(v1 + 64, v4);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fashion/fashion_comp.cpp",
      "logChangeFlycloak",
      185);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v24,
           (const char (*)[37])" get player_ptr failed avatar_guid: ");
    if ( *(_BYTE *)(((v19._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v19._M_string_length + 8);
    *(&v19._anon_0._M_allocated_capacity + 1) = Avatar::getGuid(*(const Avatar *const *)(v19._M_string_length + 8));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v7,
      (const unsigned __int64 *)&v19._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_avatar_fashion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.avatar_fashion_config_mgr;
    if ( *(_BYTE *)(((v19._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v19._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v19._M_string_length + 16);
    }
    flycloak_config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarFlycloakExcelConfig(
                            p_avatar_fashion_config_mgr,
                            *(_DWORD *)(v19._M_string_length + 16));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
    if ( flycloak_config_ptr )
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BasicComp = Player::getBasicComp(v10);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v24, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x652u, v19);
      std::string::~string(&v24);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarChangeFlycloak>();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&flycloak_config_ptr->material_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)flycloak_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&flycloak_config_ptr->material_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&flycloak_config_ptr->material_id);
      }
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                              p_material_config_mgr,
                              flycloak_config_ptr->material_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
      if ( material_config_ptr )
      {
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((v19._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v19._M_string_length + 8);
        AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(v19._M_string_length + 8));
        proto_log::PlayerLogBodyAvatarChangeFlycloak::set_avatar_id(v14, AvatarId);
        v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((v19._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((v19._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(v19._M_string_length + 16);
        }
        proto_log::PlayerLogBodyAvatarChangeFlycloak::set_flycloak_id(v16, *(_DWORD *)(v19._M_string_length + 16));
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeFlycloak,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&material_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&material_config_ptr->rank_level);
        }
        proto_log::PlayerLogBodyAvatarChangeFlycloak::set_rank_level(v17, material_config_ptr->rank_level);
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v23, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarChangeFlycloak,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeFlycloak> *)(v1 + 96));
        Player::printStatLog(v18, &p_body_ptr, &v23, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v23);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fashion/fashion_comp.cpp",
          "logChangeFlycloak",
          202);
        v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v24,
                (const char (*)[54])"cannot find material corresponding matrerial config: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &flycloak_config_ptr->material_id);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeFlycloak>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeFlycloak> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fashion/fashion_comp.cpp",
        "logChangeFlycloak",
        192);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v24,
             (const char (*)[30])"cannot find flycloak config: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)(v19._M_string_length + 16));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 215: range 00000000150AA22C-00000000150AACA5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FashionComp::wearCostume(FashionComp *const this, uint32_t costume_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  __int64 v14; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // ecx
  char v26; // dl
  __int64 v27; // rdx
  Player *v28; // rax
  PlayerBasicComp *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  Player *v34; // r14
  __int64 result; // rax
  std::string v36; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v38; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+60h] [rbp-D0h] BYREF

  v36._M_string_length = (std::string::size_type)this;
  HIDWORD(v36._M_dataplus._M_p) = costume_id;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 10 holder:264 64 4 21 costume_avatar_id:252 80 4 14 costume_id:214 96 16 14 player_ptr:22"
                        "2 128 16 11 log_ptr:265";
  *(_QWORD *)(v2 + 16) = FashionComp::wearCostume;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 80) = HIDWORD(v36._M_dataplus._M_p);
  if ( *(_BYTE *)(((v36._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v36._M_string_length + 8);
  v5 = *(_QWORD *)(v36._M_string_length + 8);
  v6 = (_QWORD *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v36._M_string_length + 8));
  v7 = *v6 + 400LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v5) != 1 )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fashion/fashion_comp.cpp",
      "wearCostume",
      219);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v39,
      (const char (*)[39])"only formal avatar can change flycloak");
    common::milog::MiLogStream::~MiLogStream(&v39);
    v8 = -1;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((v36._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v36._M_string_length + 8);
  v9 = *(_QWORD *)(v36._M_string_length + 8);
  v10 = (_QWORD *)v9;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v10 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v36._M_string_length + 8));
  v11 = *v10 + 152LL;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8(v11);
  (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v11)(v2 + 96, v9);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fashion/fashion_comp.cpp",
      "wearCostume",
      225);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v39, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v39);
    v8 = -1;
  }
  else
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Player::getBasicComp(v12);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x36u) )
    {
      v8 = 141;
    }
    else
    {
      v14 = ((LOBYTE(v36._M_string_length) + 20) & 7u) + 3;
      if ( *(_BYTE *)(((v36._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v36._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v36._M_string_length + 20) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(v36._M_string_length + 20);
      }
      if ( *(_DWORD *)(v36._M_string_length + 20) != *(_DWORD *)(v2 + 80) )
      {
        HIDWORD(v36._anon_0._M_allocated_capacity) = 0;
        if ( *(_DWORD *)(v2 + 80) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v38);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
          *(&v36._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
                                                                                &v15->design_config.txt_config_mgr.avatar_fashion_config_mgr,
                                                                                *(_DWORD *)(v2 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v38);
          if ( !*(&v36._anon_0._M_allocated_capacity + 1) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/fashion/fashion_comp.cpp",
              "wearCostume",
              244);
            v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v39,
                    (const char (*)[32])"costume not found, costume_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v8 = 5;
            goto LABEL_47;
          }
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          AvatarComp = Player::getAvatarComp(v17);
          if ( !PlayerAvatarComp::isHasCostumeId(AvatarComp, *(_DWORD *)(v2 + 80)) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/fashion/fashion_comp.cpp",
              "wearCostume",
              249);
            v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v39,
                    (const char (*)[42])"player dosen't have costume, costume_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v8 = 167;
            goto LABEL_47;
          }
          v14 = ((v36._anon_0._M_local_buf[8] + 20) & 7u) + 3;
          if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((v36._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity
                                                                                    + 1)
                                                                                  + 20) >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 20);
          }
          *(_DWORD *)(v2 + 64) = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 20);
          if ( *(_BYTE *)(((v36._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v36._M_string_length + 8);
          if ( Avatar::getAvatarId(*(const Avatar *const *)(v36._M_string_length + 8)) != *(_DWORD *)(v2 + 64) )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/fashion/fashion_comp.cpp",
              "wearCostume",
              255);
            v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    &v39,
                    (const char (*)[29])"avatar id error. avatar id: ");
            if ( *(_BYTE *)(((v36._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v36._M_string_length + 8);
            *(_DWORD *)v36._anon_0._M_local_buf = Avatar::getAvatarId(*(const Avatar *const *)(v36._M_string_length + 8));
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)&v36._anon_0);
            v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v21,
                    (const char (*)[14])" costume_id: ");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v2 + 80));
            v24 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v23,
                    (const char (*)[21])" costume avatar id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 64));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v8 = 168;
            goto LABEL_47;
          }
          if ( *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 304) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((*(&v36._anon_0._M_allocated_capacity + 1) + 304) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(*(&v36._anon_0._M_allocated_capacity + 1) + 304);
          }
          HIDWORD(v36._anon_0._M_allocated_capacity) = *(_DWORD *)(*(&v36._anon_0._M_allocated_capacity + 1) + 304);
        }
        v25 = *(_DWORD *)(v2 + 80);
        v26 = *(_BYTE *)(((v36._M_string_length + 20) >> 3) + 0x7FFF8000);
        LOBYTE(v14) = v26 != 0;
        v27 = (v26 != 0) & (unsigned __int8)((char)(((LOBYTE(v36._M_string_length) + 20) & 7) + 3) >= v26);
        if ( (_BYTE)v27 )
          __asan_report_store4(v36._M_string_length + 20, v14, v27);
        *(_DWORD *)(v36._M_string_length + 20) = v25;
        FashionComp::notifyCostumeChange((FashionComp *const)v36._M_string_length);
        v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v29 = Player::getBasicComp(v28);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v39, v29);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x656u, v36);
        std::string::~string(&v39);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarChangeCostume>();
        v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_log::PlayerLogBodyAvatarChangeCostume::set_fashion_id(v30, *(_DWORD *)(v2 + 80));
        v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((v36._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v36._M_string_length + 8);
        AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(v36._M_string_length + 8));
        proto_log::PlayerLogBodyAvatarChangeCostume::set_avatar_id(v31, AvatarId);
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarChangeCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        proto_log::PlayerLogBodyAvatarChangeCostume::set_quality(v33, HIDWORD(v36._anon_0._M_allocated_capacity));
        v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v38, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarChangeCostume,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeCostume> *)(v2 + 128));
        Player::printStatLog(v34, &p_body_ptr, &v38, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v38);
        std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeCostume>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarChangeCostume> *const)(v2 + 128));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
        v8 = 0;
        goto LABEL_47;
      }
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/fashion/fashion_comp.cpp",
        "wearCostume",
        235);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v39, (const char (*)[21])"costume already wore");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v8 = 0;
    }
  }
LABEL_47:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
LABEL_48:
  result = v8;
  if ( v40 == (char *)v2 )
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

// Line 276: range 00000000150AACA6-00000000150AB171
void __cdecl FashionComp::notifyCostumeChange(FashionComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Avatar *avatar; // rdx
  Avatar *v5; // rax
  unsigned __int64 v6; // rax
  Avatar *v7; // r14
  Avatar *v8; // rax
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(Avatar *, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r15
  proto::SceneEntityInfo *v11; // rax
  Player *v12; // rax
  World *v13; // rax
  unsigned int *v14; // r8
  int *v15; // r9
  Player *v16; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // [rsp+10h] [rbp-120h]
  int AvatarId; // [rsp+20h] [rbp-110h] BYREF
  char __args_0[12]; // [rsp+24h] [rbp-10Ch] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-100h] BYREF
  char v22[240]; // [rsp+40h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 14 player_ptr:277 64 16 13 world_ptr:285 96 16 13 event_ptr:291 128 32 10 notify:283";
  *(_QWORD *)(v1 + 16) = FashionComp::notifyCostumeChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v5 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v5 = (Avatar *)__asan_report_load8(this->avatar_);
  v6 = *(_QWORD *)v5->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6);
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v6)(v1 + 32, avatar);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    proto::AvatarChangeCostumeNotify::AvatarChangeCostumeNotify((proto::AvatarChangeCostumeNotify *const)(v1 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    v7 = this->avatar_;
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      v8 = (Avatar *)__asan_report_load8(this->avatar_);
    v9 = *(_QWORD *)v8->baseclass_0 + 40LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9);
    v10 = *(void (__fastcall **)(Avatar *, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9;
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v11 = proto::AvatarChangeCostumeNotify::mutable_entity_info((proto::AvatarChangeCostumeNotify *const)(v1 + 128));
    v10(v7, v11, v18);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::getSceneComp(v12);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v1 + 64));
    if ( std::operator!=<World>((const std::shared_ptr<World> *)(v1 + 64), 0LL) )
    {
      v13 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      World::notifyAllPlayer<proto::AvatarChangeCostumeNotify>(
        v13,
        (const proto::AvatarChangeCostumeNotify *)(v1 + 128),
        0);
    }
    *(_DWORD *)__args_0 = FashionComp::getCostumeId(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    AvatarId = Avatar::getAvatarId(this->avatar_);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    *(_QWORD *)&__args_0[4] = Avatar::getGuid(this->avatar_);
    common::tools::perf::make_shared<AvatarCosumeChangeEvent,unsigned long,unsigned int,int>(
      (unsigned __int64 *)(v1 + 96),
      (unsigned int *)&__args_0[4],
      &AvatarId,
      (unsigned __int64 *)__args_0,
      v14,
      v15);
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EventComp = Player::getEventComp(v16);
    std::shared_ptr<BaseEvent>::shared_ptr<AvatarCosumeChangeEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<AvatarCosumeChangeEvent> *)(v1 + 96));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<AvatarCosumeChangeEvent>::~shared_ptr((std::shared_ptr<AvatarCosumeChangeEvent> *const)(v1 + 96));
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 64));
    proto::AvatarChangeCostumeNotify::~AvatarChangeCostumeNotify((proto::AvatarChangeCostumeNotify *const)(v1 + 128));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 296: range 00000000150AB172-00000000150AB77E
int32_t __cdecl FashionComp::initDefaultWearCostume(FashionComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // r14
  uint32_t AvatarId; // eax
  Avatar *avatar; // rdx
  Avatar *v10; // rax
  unsigned __int64 v11; // rax
  Player *v12; // rax
  PlayerAvatarComp *AvatarComp; // rax
  __int64 v14; // rdx
  Player *v15; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  uint32_t v19; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // r14
  int32_t result; // eax
  std::string v23; // [rsp+0h] [rbp-110h]
  FashionComp *thisa; // [rsp+8h] [rbp-108h]
  google::protobuf::uint32 costume_id; // [rsp+1Ch] [rbp-F4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v27; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+60h] [rbp-B0h] BYREF

  v23._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:320 64 16 14 player_ptr:306 96 16 11 log_ptr:321";
  *(_QWORD *)(v1 + 16) = FashionComp::initDefaultWearCostume;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  if ( !Avatar::isFormal(this->avatar_) )
  {
    v4 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
    v6 = !Config::isInternalServer(v5);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
    if ( v6 )
    {
      v4 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_avatar_fashion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.avatar_fashion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      AvatarId = Avatar::getAvatarId(this->avatar_);
      *((_DWORD *)&v23._anon_0._M_allocated_capacity + 3) = AvatarFashionExcelConfigMgr::getAvatarDefaultWearCostumeId(
                                                              p_avatar_fashion_config_mgr,
                                                              AvatarId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
      if ( *((_DWORD *)&v23._anon_0._M_allocated_capacity + 3) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->avatar_);
        avatar = this->avatar_;
        v10 = avatar;
        if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
          v10 = (Avatar *)__asan_report_load8(this->avatar_);
        v11 = *(_QWORD *)v10->baseclass_0 + 152LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11);
        (*(void (__fastcall **)(unsigned __int64, Avatar *))v11)(v1 + 64, avatar);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fashion/fashion_comp.cpp",
            "initDefaultWearCostume",
            309);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v28,
            (const char (*)[19])"player_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v28);
          v4 = -1;
        }
        else
        {
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          AvatarComp = Player::getAvatarComp(v12);
          if ( !PlayerAvatarComp::isHasCostumeId(AvatarComp, *((uint32_t *)&v23._anon_0._M_allocated_capacity + 3)) )
          {
            v4 = 0;
          }
          else
          {
            v14 = (*(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000));
            if ( (_BYTE)v14 )
              __asan_report_store4(&this->cur_wearing_costume_id_, (((_BYTE)this + 20) & 7u) + 3, v14);
            this->cur_wearing_costume_id_ = *((_DWORD *)&v23._anon_0._M_allocated_capacity + 3);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            BasicComp = Player::getBasicComp(v15);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x657u, v23);
            std::string::~string(&v28);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume>();
            v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_costume_id(v17, costume_id);
            v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->avatar_);
            v19 = Avatar::getAvatarId(thisa->avatar_);
            proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_avatar_id(v18, v19);
            v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_is_trial_avatar(v20, 0);
            v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v27, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume> *)(v1 + 96));
            Player::printStatLog(v21, &p_body_ptr, &v27, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v27);
            std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume> *const)(v1 + 96));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
            v4 = 0;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
      }
      else
      {
        v4 = 0;
      }
    }
  }
  result = v4;
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 331: range 00000000150AB780-00000000150AC1E0
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FashionComp::initTrialAvatarDefaultWearCostume(FashionComp *const this, uint32_t trial_avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t avatar_id; // r14d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  uint32_t specified_costume_id; // ecx
  char v20; // dl
  __int64 v21; // rdx
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // r14
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v24; // r14
  __int64 v25; // rsi
  uint32_t replace_costume_id; // ecx
  char v27; // dl
  __int64 v28; // rdx
  Player *v29; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  uint32_t v33; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  Player *v35; // r14
  __int64 result; // rax
  std::string v37; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+20h] [rbp-100h]
  const data::AvatarReplaceCostumeExcelConfig *avatar_replace_costume_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v41; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-D0h] BYREF
  char v43[176]; // [rsp+70h] [rbp-B0h] BYREF

  v37._M_string_length = (std::string::size_type)this;
  HIDWORD(v37._M_dataplus._M_p) = trial_avatar_id;
  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:378 48 4 19 trial_avatar_id:330 64 16 14 player_ptr:350 96 16 11 log_ptr:379";
  *(_QWORD *)(v2 + 16) = FashionComp::initTrialAvatarDefaultWearCostume;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = HIDWORD(v37._M_dataplus._M_p);
  if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v37._M_string_length + 8);
  v5 = *(_QWORD *)(v37._M_string_length + 8);
  v6 = (_QWORD *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v6 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v37._M_string_length + 8));
  v7 = *v6 + 400LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(v7);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v5) == 2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
    trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                &v9->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
    if ( trial_avatar_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
      }
      avatar_id = trial_avatar_config_ptr->avatar.avatar_id;
      if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v37._M_string_length + 8);
      if ( avatar_id == Avatar::getAvatarId(*(const Avatar *const *)(v37._M_string_length + 8)) )
      {
        if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v37._M_string_length + 8);
        v15 = *(_QWORD *)(v37._M_string_length + 8);
        v16 = (_QWORD *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v16 = (_QWORD *)__asan_report_load8(*(_QWORD *)(v37._M_string_length + 8));
        v17 = *v16 + 152LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(v17);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v17)(v2 + 64, v15);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fashion/fashion_comp.cpp",
            "initTrialAvatarDefaultWearCostume",
            353);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v42,
            (const char (*)[19])"player_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v42);
          v8 = -1;
        }
        else
        {
          v18 = (((_BYTE)trial_avatar_config_ptr + 100) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->specified_costume_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)trial_avatar_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->specified_costume_id >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&trial_avatar_config_ptr->specified_costume_id);
          }
          if ( trial_avatar_config_ptr->specified_costume_id )
          {
            specified_costume_id = trial_avatar_config_ptr->specified_costume_id;
            v20 = *(_BYTE *)(((v37._M_string_length + 20) >> 3) + 0x7FFF8000);
            LOBYTE(v18) = v20 != 0;
            v21 = (v20 != 0) & (unsigned __int8)((char)(((LOBYTE(v37._M_string_length) + 20) & 7) + 3) >= v20);
            if ( (_BYTE)v21 )
              __asan_report_store4(v37._M_string_length + 20, v18, v21);
            *(_DWORD *)(v37._M_string_length + 20) = specified_costume_id;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v41);
            p_avatar_fashion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.avatar_fashion_config_mgr;
            if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v37._M_string_length + 8);
            AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(v37._M_string_length + 8));
            avatar_replace_costume_config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarReplaceCostumeExcelConfig(
                                                  p_avatar_fashion_config_mgr,
                                                  AvatarId);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
            if ( avatar_replace_costume_config_ptr )
            {
              v25 = (((_BYTE)avatar_replace_costume_config_ptr + 12) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&avatar_replace_costume_config_ptr->replace_costume_id >> 3)
                            + 0x7FFF8000) != 0
                && (char)((((_BYTE)avatar_replace_costume_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_replace_costume_config_ptr->replace_costume_id >> 3)
                                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&avatar_replace_costume_config_ptr->replace_costume_id);
              }
              replace_costume_id = avatar_replace_costume_config_ptr->replace_costume_id;
              v27 = *(_BYTE *)(((v37._M_string_length + 20) >> 3) + 0x7FFF8000);
              LOBYTE(v25) = v27 != 0;
              v28 = (v27 != 0) & (unsigned __int8)((char)(((LOBYTE(v37._M_string_length) + 20) & 7) + 3) >= v27);
              if ( (_BYTE)v28 )
                __asan_report_store4(v37._M_string_length + 20, v25, v28);
              *(_DWORD *)(v37._M_string_length + 20) = replace_costume_id;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/avatar/fashion/fashion_comp.cpp",
                "initTrialAvatarDefaultWearCostume",
                368);
              v24 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                      &v42,
                      (const char (*)[75])"findAvatarReplaceCostumeExcelConfig fails, use default costume, avatar_id:");
              if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v37._M_string_length + 8);
              *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3) = Avatar::getAvatarId(*(const Avatar *const *)(v37._M_string_length + 8));
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)&v37._anon_0._M_allocated_capacity + 3);
              common::milog::MiLogStream::~MiLogStream(&v42);
            }
          }
          v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          BasicComp = Player::getBasicComp(v29);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v42, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x657u, v37);
          std::string::~string(&v42);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume>();
          v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((v37._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(v37._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v37._M_string_length + 20) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(v37._M_string_length + 20);
          }
          proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_costume_id(
            v31,
            *(_DWORD *)(v37._M_string_length + 20));
          v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v37._M_string_length + 8);
          v33 = Avatar::getAvatarId(*(const Avatar *const *)(v37._M_string_length + 8));
          proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_avatar_id(v32, v33);
          v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume::set_is_trial_avatar(v34, 1);
          v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v41, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume> *)(v2 + 96));
          Player::printStatLog(v35, &p_body_ptr, &v41, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v41);
          std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarAutoWearDefaultCostume> *const)(v2 + 96));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
          v8 = 0;
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fashion/fashion_comp.cpp",
          "initTrialAvatarDefaultWearCostume",
          345);
        v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v42,
                (const char (*)[58])"trial_avatar_id and avatar_id not match! trial_avatar_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])", avatar_id:");
        if ( *(_BYTE *)(((v37._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v37._M_string_length + 8);
        *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3) = Avatar::getAvatarId(*(const Avatar *const *)(v37._M_string_length + 8));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v14,
          (const unsigned int *)&v37._anon_0._M_allocated_capacity + 3);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v8 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fashion/fashion_comp.cpp",
        "initTrialAvatarDefaultWearCostume",
        340);
      v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v42,
              (const char (*)[52])"findTrialAvatarExcelConfig failed, trial_avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v8 = -1;
    }
  }
  else
  {
    v8 = 0;
  }
  result = v8;
  if ( v43 == (char *)v2 )
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
