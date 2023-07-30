// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/vehicle/player_vehicle_comp.cpp

// Line 23: range 00000000179825B8-00000000179825CA
int32_t __cdecl PlayerVehicleComp::fromBin(PlayerVehicleComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 28: range 00000000179825CC-00000000179825DE
int32_t __cdecl PlayerVehicleComp::toBin(PlayerVehicleComp *const this, proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 33: range 00000000179825E0-00000000179825F3
int32_t __cdecl PlayerVehicleComp::onLogin(PlayerVehicleComp *const this, bool is_new_player)
{
  return 0;
};

// Line 38: range 00000000179825F4-0000000017982ACB
void __cdecl PlayerVehicleComp::onPlayerEnterVehicle(PlayerVehicleComp *const this, GadgetPtr *p_gadget_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t Uid; // eax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // [rsp+8h] [rbp-F8h]
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 server_buff_id:57 64 16 20 gadget_config_ptr:45 96 16 12 scene_ptr:51";
  *(_QWORD *)(v2 + 16) = PlayerVehicleComp::onPlayerEnterVehicle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !std::operator==<Gadget>(0LL, p_gadget_ptr) )
  {
    std::weak_ptr<Gadget>::operator=<Gadget>(&this->cur_vehicle_wtr_, p_gadget_ptr);
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    Gadget::getJsonConfig((const Gadget *const)(v2 + 64));
    if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
      {
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        Scene::getPlayerLocation(v13, Uid, &this->before_valid_pos_, &this->before_valid_rot_);
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/vehicle/player_vehicle_comp.cpp",
          "onPlayerEnterVehicle",
          55);
        v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v15,
               (const char (*)[38])"AVATAR_MOTION enter before_valid_pos:");
        operator<<(v6, &this->before_valid_pos_);
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->vehicle.server_buff_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->vehicle.server_buff_id >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&v7->vehicle.server_buff_id);
      }
      *(_DWORD *)(v2 + 48) = v7->vehicle.server_buff_id;
      if ( !*(_DWORD *)(v2 + 48) )
        goto LABEL_19;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( PlayerAvatarComp::addTeamBuff(AvatarComp, *(_DWORD *)(v2 + 48), 0) )
        v9 = 1;
      else
LABEL_19:
        v9 = 0;
      if ( v9 )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/vehicle/player_vehicle_comp.cpp",
          "onPlayerEnterVehicle",
          60);
        v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v15, (const char (*)[13])off_26256920);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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

// Line 65: range 0000000017982ACC-000000001798307B
void __cdecl PlayerVehicleComp::onPlayerExitVehicle(PlayerVehicleComp *const this, GadgetPtr *p_gadget_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // eax
  Avatar *v6; // rax
  Avatar *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+8h] [rbp-118h]
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-F0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 17 server_buff_id:90 64 16 20 gadget_config_ptr:72 96 16 12 scene_ptr:78 128 16 13 avatar_ptr:82";
  *(_QWORD *)(v2 + 16) = PlayerVehicleComp::onPlayerExitVehicle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  std::__weak_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_vehicle_wtr_);
  if ( !std::operator==<Gadget>(0LL, p_gadget_ptr) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    Gadget::getJsonConfig((const Gadget *const)(v2 + 64));
    if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
      {
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        Scene::setPlayerLastValidLocation(v15, Uid, &this->before_valid_pos_, &this->before_valid_rot_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getCurAvatar((Player *const)(v2 + 128));
        if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
        {
          v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Avatar::setLastValidPos(v6, &this->before_valid_pos_);
          v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Avatar::setLastValidRot(v7, &this->before_valid_rot_);
        }
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/vehicle/player_vehicle_comp.cpp",
          "onPlayerExitVehicle",
          88);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v17,
               (const char (*)[37])"AVATAR_MOTION exit before_valid_pos:");
        operator<<(v8, &this->before_valid_pos_);
        common::milog::MiLogStream::~MiLogStream(&v17);
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
      }
      v9 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->vehicle.server_buff_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->vehicle.server_buff_id >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&v9->vehicle.server_buff_id);
      }
      *(_DWORD *)(v2 + 48) = v9->vehicle.server_buff_id;
      if ( !*(_DWORD *)(v2 + 48) )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( PlayerAvatarComp::delTeamBuff(AvatarComp, *(_DWORD *)(v2 + 48)) )
        v11 = 1;
      else
LABEL_23:
        v11 = 0;
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/vehicle/player_vehicle_comp.cpp",
          "onPlayerExitVehicle",
          93);
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])off_26256A80);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  }
  if ( v18 == (char *)v2 )
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
};

// Line 98: range 000000001798307C-0000000017983426
void __cdecl PlayerVehicleComp::fillVehicleInfo(PlayerVehicleComp *const this, proto::SceneAvatarInfo *avatar_proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  GadgetVehicleComp *v9; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t EntityId; // eax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  unsigned int Uid; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t slot; // [rsp+24h] [rbp-CCh]
  proto::CurVehicleInfo *vehicle_proto; // [rsp+28h] [rbp-C8h]
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 gadget_ptr:99 64 16 20 vehicle_comp_ptr:104";
  *(_QWORD *)(v2 + 16) = PlayerVehicleComp::fillVehicleInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v2 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/vehicle/player_vehicle_comp.cpp",
        "fillVehicleInfo",
        107);
      v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"gadget_id:");
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      val = Entity::getEntityId((const Entity *const)v6);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v7, (const char (*)[22])off_26256B80);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v9 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      toPtr<Player,Player>((Player *)&p_player_ptr);
      slot = GadgetVehicleComp::getPlayerSlot(v9, &p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
      vehicle_proto = proto::SceneAvatarInfo::mutable_cur_vehicle_info(avatar_proto);
      v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EntityId = Entity::getEntityId((const Entity *const)v10);
      proto::CurVehicleInfo::set_entity_id(vehicle_proto, EntityId);
      proto::CurVehicleInfo::set_pos(vehicle_proto, slot);
    }
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v18 == (char *)v2 )
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

// Line 117: range 0000000017983428-000000001798366E
void __cdecl PlayerVehicleComp::onLeaveScene(PlayerVehicleComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  GadgetVehicleComp *v4; // r14
  PlayerPtr p_player_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 gadget_ptr:118 64 16 20 vehicle_comp_ptr:123";
  *(_QWORD *)(v1 + 16) = PlayerVehicleComp::onLeaveScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v1 + 32));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 32)) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 64));
    if ( !std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v1 + 64)) )
    {
      v4 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      toPtr<Player,Player>((Player *)&p_player_ptr);
      GadgetVehicleComp::exitVehicle(v4, &p_player_ptr);
      std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
    }
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v1 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
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

// Line 132: range 0000000017983670-0000000017983B17
void __cdecl PlayerVehicleComp::onDisappearInCurScene(PlayerVehicleComp *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v6; // rax
  unsigned __int64 DestPos; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 Position; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GadgetVehicleComp *v11; // r14
  std::shared_ptr<Player> v12; // [rsp+20h] [rbp-E0h] BYREF
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 12 dest_pos:143 64 12 15 vehicle_pos:144 96 16 15 vehicle_ptr:137 128 16 20 vehicle_comp_ptr:150";
  *(_QWORD *)(v2 + 16) = PlayerVehicleComp::onDisappearInCurScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::getIsClientRelogin(SceneComp) )
  {
    PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v2 + 96));
    if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 96)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v6 = Player::getSceneComp(this->player_);
      DestPos = (unsigned __int64)PlayerSceneComp::getDestPos(v6);
      if ( (char)(DestPos & 7) >= *(_BYTE *)((DestPos >> 3) + 0x7FFF8000)
        && *(_BYTE *)((DestPos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((DestPos + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((DestPos + 11) & 7) >= *(_BYTE *)(((DestPos + 11) >> 3) + 0x7FFF8000) )
      {
        DestPos = __asan_report_load_n(DestPos, 12LL);
      }
      *(_QWORD *)(v2 + 32) = *(_QWORD *)DestPos;
      *(_DWORD *)(v2 + 40) = *(_DWORD *)(DestPos + 8);
      v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)v8);
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      *(_QWORD *)(v2 + 64) = *(_QWORD *)Position;
      *(_DWORD *)(v2 + 72) = *(_DWORD *)(Position + 8);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
      *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getVehicleTransferMaxDistance(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v12);
      if ( COERCE_FLOAT(_mm_cvtsi128_si32(v1)) < getDistance((const Vector3 *)(v2 + 32), (const Vector3 *)(v2 + 64)) )
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 128));
        if ( !std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v2 + 128)) )
        {
          v11 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          toPtr<Player,Player>((Player *)&v12);
          GadgetVehicleComp::exitVehicle(v11, &v12);
          std::shared_ptr<Player>::~shared_ptr(&v12);
        }
        std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 128));
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
  }
  if ( v13 == (char *)v2 )
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
};

// Line 159: range 0000000017983B18-0000000017983DAF
uint32_t __cdecl PlayerVehicleComp::getCurVehicleType(PlayerVehicleComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t vehicle_type; // r14d
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 gadget_ptr:160 64 16 21 config_gadget_ptr:165";
  *(_QWORD *)(v1 + 16) = PlayerVehicleComp::getCurVehicleType;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v1 + 32));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 32)) )
  {
    vehicle_type = 0;
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Gadget::getJsonConfig((const Gadget *const)(v1 + 64));
    if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/vehicle/player_vehicle_comp.cpp",
        "getCurVehicleType",
        168);
      v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v11,
             (const char (*)[19])"vehicle_entity_id:");
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      val = Entity::getEntityId((const Entity *const)v6);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v7,
        (const char (*)[25])" script config not found");
      common::milog::MiLogStream::~MiLogStream(&v11);
      vehicle_type = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->vehicle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->vehicle >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v8->vehicle);
      }
      vehicle_type = v8->vehicle.vehicle_type;
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v1 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 32));
  result = vehicle_type;
  if ( v12 == (char *)v1 )
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
  return result;
};

// Line 175: range 0000000017983DB0-00000000179841AF
bool __cdecl PlayerVehicleComp::getCurVehicleHpPercent(const PlayerVehicleComp *const this, float *value)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float v9; // xmm0_4
  bool v10; // dl
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  bool result; // al
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 10 cur_hp:182 48 4 10 max_hp:183 64 16 14 gadget_ptr:176";
  *(_QWORD *)(v3 + 16) = PlayerVehicleComp::getCurVehicleHpPercent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v3 + 64));
  if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 64)) )
  {
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(float *)v2.m128i_i32 = Creature::getCurHp(v7);
    *(_DWORD *)(v3 + 32) = _mm_cvtsi128_si32(v2);
    v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(float *)v2.m128i_i32 = Creature::getMaxHp(v8);
    *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
    if ( *(float *)(v3 + 48) <= 0.0 )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/vehicle/player_vehicle_comp.cpp",
        "getCurVehicleHpPercent",
        190);
      v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v24, v11);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v12,
              (const char (*)[22])" max hp lower than 0.");
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v9 = *(float *)(v3 + 32) / *(float *)(v3 + 48);
      v10 = *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000);
      if ( v10 )
        __asan_report_store4(value, ((unsigned __int8)value & 7u) + 3, v10);
      *value = v9;
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/vehicle/player_vehicle_comp.cpp",
      "getCurVehicleHpPercent",
      192);
    v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v24, (const char (*)[9])" cur hp:");
    v16 = common::milog::MiLogStream::operator<<<float,(float *)0>(v15, (const float *)(v3 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" max_hp:");
    v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v3 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" result:");
    v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, value);
    v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v6 = 1;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 64));
  result = v6;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 197: range 00000000179841B0-00000000179846CF
void __cdecl PlayerVehicleComp::checkVehicleDistance(PlayerVehicleComp *const this, const Vector3 *cur_pos)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *Position; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float VehicleMaxDistance; // xmm0_4
  float v10; // xmm1_4
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  GadgetVehicleComp *v21; // r14
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<Player> v24; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 distance:203 64 16 14 gadget_ptr:198 96 16 20 vehicle_comp_ptr:209";
  *(_QWORD *)(v3 + 16) = PlayerVehicleComp::checkVehicleDistance;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v3 + 64));
  if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 64)) )
  {
    v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Position = Entity::getPosition((const Entity *const)v6);
    *(float *)v2.m128i_i32 = getPlaneDistance(cur_pos, Position);
    *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    VehicleMaxDistance = ConstValueExcelConfigMgr::getVehicleMaxDistance(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    v10 = *(float *)(v3 + 48);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
    if ( VehicleMaxDistance < v10 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/vehicle/player_vehicle_comp.cpp",
        "checkVehicleDistance",
        208);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v25, (const char (*)[13])"vehicle_id: ");
      v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      val = Entity::getEntityId((const Entity *const)v12);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" distance: ");
      v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 96));
      if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/vehicle/player_vehicle_comp.cpp",
          "checkVehicleDistance",
          212);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"vehicle_id:");
        v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Entity::getEntityId((const Entity *const)v18);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])off_26256B80);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        v21 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        toThisPtr<Player>((Player *)&v24);
        GadgetVehicleComp::exitVehicle(v21, &v24);
        std::shared_ptr<Player>::~shared_ptr(&v24);
      }
      std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 96));
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 64));
  if ( v26 == (char *)v3 )
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
