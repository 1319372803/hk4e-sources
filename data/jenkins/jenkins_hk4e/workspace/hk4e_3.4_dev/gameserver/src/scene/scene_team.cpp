// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_team.cpp

// Line 37: range 0000000015CEF4D0-0000000015CEF7E2
std::string *__cdecl SceneTeamAvatar::getDesc[abi:cxx11](std::string *retstr, const SceneTeamAvatar *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int PlayerUid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  unsigned __int64 AvatarGuid; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // r14
  unsigned __int64 v11; // rax
  void (__fastcall **v12)(std::string *, unsigned __int64); // rdx
  std::string v; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 oss:38 64 16 13 avatar_ptr:40";
  *(_QWORD *)(v2 + 16) = SceneTeamAvatar::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[uid:");
  PlayerUid = SceneTeamAvatar::getPlayerUid(this);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, PlayerUid);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",guid:");
  AvatarGuid = SceneTeamAvatar::getAvatarGuid(this);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, AvatarGuid);
  SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 64));
  if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
  {
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            ",avatar:");
    v11 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(void (__fastcall ***)(std::string *, unsigned __int64))v11;
    if ( *(_BYTE *)((*(_QWORD *)v11 >> 3) + 0x7FFF8000LL) )
      v11 = __asan_report_load8();
    (*v12)(&v, v11);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, &v);
    std::string::~string(&v);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
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
  return retstr;
};

// Line 50: range 0000000015CEF7E4-0000000015CF0482
int32_t __cdecl SceneTeamAvatar::toClient(
        const SceneTeamAvatar *const this,
        proto::SceneTeamAvatar *proto,
        bool is_mp_mode)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint64_t Guid; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool v16; // dl
  uint32_t PlayerUid; // edx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint64_t v19; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t SceneId; // edx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t EntityId; // edx
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  Player *v26; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // edx
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  unsigned __int64 v32; // rax
  proto::SceneEntityInfo *v33; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  AbilityComp *AbilityComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  BuffComp *BuffComp; // rax
  common::milog::MiLogStream *v38; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  int v42; // r14d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint64_t v44; // rdx
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t v46; // edx
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  AbilityComp *v48; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  unsigned __int64 v50; // rax
  void (__fastcall *v51)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::AvatarInfo *); // r15
  proto::AvatarInfo *v52; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r14
  unsigned __int64 v54; // rax
  void (__fastcall *v55)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneAvatarInfo *); // r15
  proto::SceneAvatarInfo *v56; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  AbilityComp *v58; // r14
  proto::AbilityControlBlock *v59; // rax
  Player *v60; // rax
  PlayerAvatarComp *AvatarComp; // rax
  bool IsReconnectFlag; // dl
  int32_t result; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // [rsp+8h] [rbp-178h]
  void (__fastcall *v65)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // [rsp+10h] [rbp-170h]
  unsigned __int64 val; // [rsp+30h] [rbp-150h] BYREF
  proto::AbilitySyncStateInfo *avatar_ability_info; // [rsp+38h] [rbp-148h]
  google::protobuf::RepeatedPtrField<proto::ServerBuff> *server_buff_list; // [rsp+40h] [rbp-140h]
  proto::AbilitySyncStateInfo *weapon_ability_info; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v72; // [rsp+50h] [rbp-130h] BYREF
  char v73[272]; // [rsp+70h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 16 13 avatar_ptr:51 64 16 13 player_ptr:56 96 16 17 cur_avatar_ptr:62 128 16 12 scene_ptr:7"
                        "1 160 16 21 weapon_gadget_ptr:105 192 16 14 weapon_ptr:108";
  *(_QWORD *)(v4 + 16) = SceneTeamAvatar::toClient;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -202178560;
  SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v4 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 32), 0LL) )
  {
    v3 = -1;
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v4 + 64, v7);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_team.cpp",
        "toClient",
        59);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v72,
             (const char (*)[24])"getPlayer fail, avatar:");
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v3 = -1;
    }
    else
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Player::getCurAvatar((Player *const)(v4 + 96));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 96), 0LL) )
      {
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        Guid = Avatar::getGuid(v11);
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( Guid == Avatar::getGuid(v13) )
          proto::SceneTeamAvatar::set_is_player_cur_avatar(proto, 1);
      }
      v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v16 = Entity::isOnScene((const Entity *const)v15);
      proto::SceneTeamAvatar::set_is_on_scene(proto, v16);
      PlayerUid = SceneTeamAvatar::getPlayerUid(this);
      proto::SceneTeamAvatar::set_player_uid(proto, PlayerUid);
      v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v19 = Avatar::getGuid(v18);
      proto::SceneTeamAvatar::set_avatar_guid(proto, v19);
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      Entity::getScene((const Entity *const)(v4 + 128));
      if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
      {
        v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        SceneId = Scene::getSceneId(v20);
        proto::SceneTeamAvatar::set_scene_id(proto, SceneId);
        v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        EntityId = Entity::getEntityId((const Entity *const)v22);
        proto::SceneTeamAvatar::set_entity_id(proto, EntityId);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_team.cpp",
          "toClient",
          79);
        v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v72,
                (const char (*)[45])"SceneTeamAvatar scene_ptr is nullptr, guid: ");
        v25 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        val = Avatar::getGuid(v25);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, &val);
        common::milog::MiLogStream::~MiLogStream(&v72);
        v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Player::getSceneComp(v26);
        PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v4 + 192));
        if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 192), 0LL) )
        {
          v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          v28 = Scene::getSceneId(v27);
          proto::SceneTeamAvatar::set_scene_id(proto, v28);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_team.cpp",
            "toClient",
            87);
          v29 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v72,
                  (const char (*)[55])"SceneTeamAvatar dest_scene_ptr is also nullptr, guid: ");
          v30 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          val = Avatar::getGuid(v30);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v29, &val);
          common::milog::MiLogStream::~MiLogStream(&v72);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 192));
      }
      v31 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = *(_QWORD *)v31->baseclass_0 + 40LL;
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v32 = __asan_report_load8();
      v65 = *(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v32;
      v64 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v33 = proto::SceneTeamAvatar::mutable_scene_entity_info(proto);
      v65(v31, v33, v64);
      avatar_ability_info = proto::SceneTeamAvatar::mutable_avatar_ability_info(proto);
      v34 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      AbilityComp = Creature::getAbilityComp(v34);
      if ( AbilityComp::toClient(AbilityComp, avatar_ability_info) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_team.cpp",
          "toClient",
          96);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v72,
          (const char (*)[23])"ability toClient fails");
        common::milog::MiLogStream::~MiLogStream(&v72);
        v3 = -1;
      }
      else
      {
        server_buff_list = proto::SceneTeamAvatar::mutable_server_buff_list(proto);
        v36 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        BuffComp = Avatar::getBuffComp(v36);
        if ( BuffComp::toClient(BuffComp, server_buff_list) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_team.cpp",
            "toClient",
            102);
          v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v72,
                  (const char (*)[20])"buff toClient fails");
          common::milog::MiLogStream::operator<<<SceneTeamAvatar,(SceneTeamAvatar*)0>(v38, this);
          common::milog::MiLogStream::~MiLogStream(&v72);
          v3 = -1;
        }
        else
        {
          v39 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          Avatar::getEquipComp(v39);
          EquipComp::getWeaponGadget((const EquipComp *const)(v4 + 160));
          if ( !std::operator!=<AvatarWeaponGadget>((const std::shared_ptr<AvatarWeaponGadget> *)(v4 + 160), 0LL) )
            goto LABEL_39;
          std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          AvatarWeaponGadget::getWeaponItem((const AvatarWeaponGadget *const)(v4 + 192));
          if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v4 + 192), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_team.cpp",
              "toClient",
              111);
            v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v72,
                    (const char (*)[19])"weapon_ptr is null");
            v41 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            common::milog::MiLogStream::operator<<<AvatarWeaponGadget,(AvatarWeaponGadget*)0>(v40, v41);
            common::milog::MiLogStream::~MiLogStream(&v72);
            v3 = -1;
            v42 = 0;
          }
          else
          {
            v43 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            v44 = Item::getGuid(v43);
            proto::SceneTeamAvatar::set_weapon_guid(proto, v44);
            v45 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            v46 = Entity::getEntityId((const Entity *const)v45);
            proto::SceneTeamAvatar::set_weapon_entity_id(proto, v46);
            weapon_ability_info = proto::SceneTeamAvatar::mutable_weapon_ability_info(proto);
            v47 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            v48 = Creature::getAbilityComp(v47);
            if ( AbilityComp::toClient(v48, weapon_ability_info) )
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_team.cpp",
                "toClient",
                119);
              common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v72,
                (const char (*)[15])"toClient fails");
              common::milog::MiLogStream::~MiLogStream(&v72);
              v3 = -1;
              v42 = 0;
            }
            else
            {
              v42 = 1;
            }
          }
          std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v4 + 192));
          if ( v42 == 1 )
          {
LABEL_39:
            if ( is_mp_mode )
            {
              v49 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v50 = *(_QWORD *)v49->baseclass_0 + 472LL;
              if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                v50 = __asan_report_load8();
              v51 = *(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::AvatarInfo *))v50;
              v52 = proto::SceneTeamAvatar::mutable_avatar_info(proto);
              v51(v49, v52);
              v53 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
              if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v54 = *(_QWORD *)v53->baseclass_0 + 456LL;
              if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                v54 = __asan_report_load8();
              v55 = *(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::SceneAvatarInfo *))v54;
              v56 = proto::SceneTeamAvatar::mutable_scene_avatar_info(proto);
              v55(v53, v56);
            }
            v57 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
            v58 = Creature::getAbilityComp(v57);
            v59 = proto::SceneTeamAvatar::mutable_ability_control_block(proto);
            AbilityComp::getProtoAbilityControlBlock(v58, v59);
            v60 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            AvatarComp = Player::getAvatarComp(v60);
            IsReconnectFlag = PlayerAvatarComp::getIsReconnectFlag(AvatarComp);
            proto::SceneTeamAvatar::set_is_reconnect(proto, IsReconnectFlag);
            v3 = 0;
          }
          std::shared_ptr<AvatarWeaponGadget>::~shared_ptr((std::shared_ptr<AvatarWeaponGadget> *const)(v4 + 160));
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  result = v3;
  if ( v73 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 140: range 0000000015CF0484-0000000015CF055A
void __cdecl SceneTeam::init(SceneTeam *const this, PlayerPtr *p_host_player_ptr, uint32_t host_uid, uint32_t scene_id)
{
  __int64 v4; // rsi
  bool v5; // dl
  std::shared_ptr<Player> *v6; // r8

  v4 = (((_BYTE)this - 100) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->host_uid_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->host_uid_, v4, v5);
  this->host_uid_ = host_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_, v4, (_BYTE)this - 96);
  }
  this->scene_id_ = scene_id;
  if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool(p_host_player_ptr) )
    std::unordered_map<unsigned int,std::weak_ptr<Player>>::emplace<unsigned int &,std::shared_ptr<Player> &>(
      &this->player_wtr_map_,
      &this->host_uid_,
      p_host_player_ptr,
      (unsigned int *)&this->player_wtr_map_,
      v6);
};

// Line 150: range 0000000015CF055C-0000000015CF05BD
uint32_t __cdecl SceneTeam::getAllowAvatarNum(uint32_t team_size, bool is_host)
{
  if ( team_size == 4 )
    return 1;
  if ( team_size > 4 )
    return 0;
  if ( team_size != 3 )
  {
    if ( team_size == 1 )
      return 10;
    if ( team_size == 2 )
      return 2;
    return 0;
  }
  if ( is_host )
    return 2;
  else
    return 1;
};

// Line 173: range 0000000015CF05BE-0000000015CF0945
void __cdecl SceneTeam::onPlayerEnter(SceneTeam *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::pair<unsigned int,std::vector<SceneTeamAvatar> > *v8; // rdx
  std::shared_ptr<Player> *v9; // r8
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+10h] [rbp-D0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __position; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Player> v12; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<SceneTeamAvatar> __y; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:174";
  *(_QWORD *)(v2 + 16) = SceneTeam::onPlayerEnter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>,unsigned int>(
          &this->team_avatar_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    if ( SceneTeam::getHostUid(this) == *(_DWORD *)(v2 + 32) )
    {
      if ( std::vector<unsigned int>::size(&this->player_uid_vec_) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_team.cpp",
          "onPlayerEnter",
          186);
        v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               &v14,
               (const char (*)[59])"[SCENE_TEAM] host enter scene team after other, host_uid: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
        v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" player_uid_vec:");
        common::milog::MiLogStream::operator<<<unsigned int>(v7, &this->player_uid_vec_);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      __i._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__position,
        &__i);
      std::vector<unsigned int>::insert(
        &this->player_uid_vec_,
        __position,
        (const std::vector<unsigned int>::value_type *)(v2 + 32));
    }
    else
    {
      std::vector<unsigned int>::push_back(
        &this->player_uid_vec_,
        (const std::vector<unsigned int>::value_type *)(v2 + 32));
    }
    memset(&__y, 0, sizeof(__y));
    std::vector<SceneTeamAvatar>::vector(&__y);
    std::make_pair<unsigned int &,std::vector<SceneTeamAvatar>>(
      (std::pair<unsigned int,std::vector<SceneTeamAvatar> > *)&v14,
      (unsigned int *)(v2 + 32),
      &__y);
    std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::emplace<std::pair<unsigned int,std::vector<SceneTeamAvatar>>>(
      &this->team_avatar_map_,
      (std::pair<unsigned int,std::vector<SceneTeamAvatar> > *)&v14,
      v8);
    std::pair<unsigned int,std::vector<SceneTeamAvatar>>::~pair((std::pair<unsigned int,std::vector<SceneTeamAvatar> > *const)&v14);
    std::vector<SceneTeamAvatar>::~vector(&__y);
    toThisPtr<Player>((Player *)&v12);
    std::unordered_map<unsigned int,std::weak_ptr<Player>>::emplace<unsigned int &,std::shared_ptr<Player>>(
      &this->player_wtr_map_,
      (unsigned int *)(v2 + 32),
      &v12,
      (unsigned int *)(v2 + 32),
      v9);
    std::shared_ptr<Player>::~shared_ptr(&v12);
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
};

// Line 201: range 0000000015CF0946-0000000015CF0C77
void __fastcall SceneTeam::onPlayerLeave(SceneTeam *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v6; // rax
  Player *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v8; // [rsp+20h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+28h] [rbp-E8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+30h] [rbp-E0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+38h] [rbp-D8h] BYREF
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:200 64 16 14 player_ptr:202 96 24 18 old_avatar_vec:212";
  *(_QWORD *)(v2 + 16) = SceneTeam::onPlayerLeave;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = uid;
  SceneTeam::findPlayer((const SceneTeam *const)(v2 + 64), (uint32_t)this);
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64))
    && common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>,unsigned int>(
         &this->team_avatar_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    SceneTeam::getAllSceneTeamAvatarVec((std::vector<SceneTeamAvatar> *)(v2 + 96), this);
    __i._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      &__last,
      &__i);
    M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
    v6._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
    v8._M_current = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                      v6,
                      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                      (const unsigned int *)(v2 + 48))._M_current;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      &__first,
      &v8);
    std::vector<unsigned int>::erase(&this->player_uid_vec_, __first, __last);
    std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::erase(
      &this->team_avatar_map_,
      (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v2 + 48));
    std::unordered_map<unsigned int,std::weak_ptr<Player>>::erase(
      &this->player_wtr_map_,
      (const std::unordered_map<unsigned int,std::weak_ptr<Player>>::key_type *)(v2 + 48));
    SceneTeam::onSceneTeamChange(this, (const std::vector<SceneTeamAvatar> *)(v2 + 96));
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    SceneTeam::logChangeSceneTeam(
      this,
      v7,
      (const std::vector<SceneTeamAvatar> *)(v2 + 96),
      CHANGE_SCENE_TEAM_REASON_MP_PLAYER_LEAVE);
    SceneTeam::notifySceneTeamUpdate(this);
    std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v12 == (char *)v2 )
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

// Line 226: range 0000000015CF0C78-0000000015CF0E22
bool __cdecl SceneTeam::isPlayerSceneTeamIdenticalToThis(SceneTeam *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  Player *v6; // rax
  bool result; // al
  std::shared_ptr<SceneTeam> __a; // [rsp+10h] [rbp-90h] BYREF
  std::enable_shared_from_this<SceneTeam> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:227";
  *(_QWORD *)(v2 + 16) = SceneTeam::isPlayerSceneTeamIdenticalToThis;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  SceneTeam::findPlayer((const SceneTeam *const)(v2 + 32), (uint32_t)this);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    std::enable_shared_from_this<SceneTeam>::shared_from_this(&v9);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::getAvatarComp(v6);
    PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)&__a);
    v5 = std::operator==<SceneTeam,SceneTeam>(&__a, (const std::shared_ptr<SceneTeam> *)&v9);
    std::shared_ptr<SceneTeam>::~shared_ptr(&__a);
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)&v9);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 237: range 0000000015CF0E24-0000000015CF0E41
uint32_t __cdecl SceneTeam::getTeamPlayerNum(const SceneTeam *const this)
{
  return std::unordered_map<unsigned int,std::weak_ptr<Player>>::size(&this->player_wtr_map_);
};

// Line 242: range 0000000015CF0E42-0000000015CF18BB
void __cdecl SceneTeam::resizeAvatarTeam(SceneTeam *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  Player *v5; // rax
  uint64_t AvatarGuid; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t v13; // edx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Scene *v17; // r14
  Avatar *v18; // rax
  uint32_t allow_size; // [rsp+14h] [rbp-1FCh]
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator __for_begin; // [rsp+18h] [rbp-1F8h] BYREF
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator __for_end; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_begin_0; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_1; // [rsp+30h] [rbp-1E0h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_0; // [rsp+38h] [rbp-1D8h] BYREF
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>> *__for_range; // [rsp+40h] [rbp-1D0h]
  std::pair<unsigned int const,std::vector<SceneTeamAvatar> > *__in; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<SceneTeamAvatar> > >::type *uid; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<SceneTeamAvatar> > >::type *scene_avatar_vec; // [rsp+58h] [rbp-1B8h]
  std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+60h] [rbp-1B0h]
  std::vector<SceneTeamAvatar> *__for_range_1; // [rsp+68h] [rbp-1A8h]
  SceneTeamAvatar *scene_avatar_0; // [rsp+70h] [rbp-1A0h]
  std::vector<SceneTeamAvatar> *__for_range_2; // [rsp+78h] [rbp-198h]
  std::vector<SceneTeamAvatar> *__for_range_3; // [rsp+80h] [rbp-190h]
  const SceneTeamAvatar *scene_team_avatar_0; // [rsp+88h] [rbp-188h]
  const SceneTeamAvatar *scene_team_avatar; // [rsp+90h] [rbp-180h]
  SceneTeamAvatar *scene_avatar; // [rsp+98h] [rbp-178h]
  common::milog::MiLogStream v37; // [rsp+A0h] [rbp-170h] BYREF
  char v38[336]; // [rsp+C0h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 16 14 player_ptr:251 64 16 18 cur_avatar_ptr:260 96 16 14 avatar_ptr:296 128 16 13 scene_pt"
                        "r:302 160 24 24 old_scene_avatar_vec:258 224 24 25 scene_avatar_guid_vec:285";
  *(_QWORD *)(v1 + 16) = SceneTeam::resizeAvatarTeam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  __for_range = &this->team_avatar_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::begin(&this->team_avatar_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::vector<SceneTeamAvatar>>(__in);
    scene_avatar_vec = std::get<1ul,unsigned int const,std::vector<SceneTeamAvatar>>(__in);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    allow_size = SceneTeam::getAllowAvatarNum(this, *uid);
    if ( std::vector<SceneTeamAvatar>::size(scene_avatar_vec) > allow_size )
    {
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      SceneTeam::findPlayer((const SceneTeam *const)(v1 + 32), (uint32_t)this);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_team.cpp",
          "resizeAvatarTeam",
          254);
        v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v37,
               (const char (*)[27])"PlayerPtr is nullptr, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, uid);
        common::milog::MiLogStream::~MiLogStream(&v37);
        std::vector<SceneTeamAvatar>::resize(scene_avatar_vec, allow_size);
      }
      else
      {
        std::vector<SceneTeamAvatar>::vector((std::vector<SceneTeamAvatar> *const)(v1 + 160), scene_avatar_vec);
        std::vector<SceneTeamAvatar>::clear(scene_avatar_vec);
        v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Player::getAvatarComp(v5);
        PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 64));
        __for_range_0 = (std::vector<SceneTeamAvatar> *)(v1 + 160);
        __for_end_1._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v1 + 160))._M_current;
        __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_end_1, &__for_end_0) )
        {
          scene_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_end_1);
          if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL) )
          {
            AvatarGuid = SceneTeamAvatar::getAvatarGuid(scene_avatar);
            v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( AvatarGuid == Avatar::getGuid(v7) )
              std::vector<SceneTeamAvatar>::emplace_back<SceneTeamAvatar&>(scene_avatar_vec, scene_avatar, scene_avatar);
          }
          __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_end_1);
        }
        __for_range_1 = (std::vector<SceneTeamAvatar> *)(v1 + 160);
        __for_end_1._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v1 + 160))._M_current;
        __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_end_1, &__for_end_0) )
        {
          scene_avatar_0 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_end_1);
          if ( !std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL)
            || (v9 = SceneTeamAvatar::getAvatarGuid(scene_avatar_0),
                v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64)),
                v9 != Avatar::getGuid(v10)) )
          {
            if ( std::vector<SceneTeamAvatar>::size(scene_avatar_vec) >= allow_size )
              break;
            std::vector<SceneTeamAvatar>::emplace_back<SceneTeamAvatar&>(
              scene_avatar_vec,
              scene_avatar_0,
              scene_avatar_0);
          }
          __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_end_1);
        }
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v13 = Player::getUid(v12);
        if ( SceneTeam::isPlayerSceneTeamIdenticalToThis(this, v13) )
        {
          std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 224));
          __for_range_2 = scene_avatar_vec;
          __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin(scene_avatar_vec)._M_current;
          __for_end_1._M_current = std::vector<SceneTeamAvatar>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_1) )
          {
            scene_team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
            __for_end_0._M_current = (SceneTeamAvatar *)SceneTeamAvatar::getAvatarGuid(scene_team_avatar);
            std::vector<unsigned long>::push_back(
              (std::vector<long unsigned int> *const)(v1 + 224),
              (std::vector<long unsigned int>::value_type *)&__for_end_0);
            __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
          }
          __for_range_3 = (std::vector<SceneTeamAvatar> *)(v1 + 160);
          __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v1 + 160))._M_current;
          __for_end_1._M_current = std::vector<SceneTeamAvatar>::end(__for_range_3)._M_current;
          while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_1) )
          {
            scene_team_avatar_0 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
            __for_end_0._M_current = (SceneTeamAvatar *)SceneTeamAvatar::getAvatarGuid(scene_team_avatar_0);
            if ( !common::tools::MiscUtils::isContains<unsigned long>(
                    (std::vector<long unsigned int> *)(v1 + 224),
                    (const unsigned __int64 *)&__for_end_0) )
            {
              SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v1 + 96));
              if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 96), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v37,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_team.cpp",
                  "resizeAvatarTeam",
                  299);
                v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        &v37,
                        (const char (*)[25])"avatar_ptr is null, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, uid);
                common::milog::MiLogStream::~MiLogStream(&v37);
              }
              else
              {
                std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                Entity::getScene((const Entity *const)(v1 + 128));
                if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 128), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_team.cpp",
                    "resizeAvatarTeam",
                    305);
                  v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          &v37,
                          (const char (*)[23])"getScene fail, avatar:");
                  v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, v16);
                  common::milog::MiLogStream::~MiLogStream(&v37);
                }
                else
                {
                  v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                  v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
                  Scene::delAvatarAndWeaponEntity(v17, v18);
                }
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 128));
              }
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 96));
            }
            __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
          }
          std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 224));
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 64));
        std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v1 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator++(&__for_begin);
  }
  if ( v38 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 316: range 0000000015CF18BC-0000000015CF1A1D
uint32_t __fastcall SceneTeam::getAllowAvatarNum(const SceneTeam *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  bool v6; // r13
  uint32_t TeamPlayerNum; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:315";
  *(_QWORD *)(v2 + 16) = SceneTeam::getAllowAvatarNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>> const,unsigned int>(
          &this->team_avatar_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_singe_avatar_mode_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_singe_avatar_mode_);
    }
    if ( this->is_in_singe_avatar_mode_ )
    {
      result = 1;
    }
    else
    {
      v6 = SceneTeam::getHostUid(this) == *(_DWORD *)(v2 + 32);
      TeamPlayerNum = SceneTeam::getTeamPlayerNum(this);
      result = SceneTeam::getAllowAvatarNum(TeamPlayerNum, v6);
    }
  }
  if ( v8 == (char *)v2 )
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

// Line 331: range 0000000015CF1A1E-0000000015CF259D
__int64 __fastcall SceneTeam::setPlayerAvatarTeam(
        SceneTeam *const this,
        uint32_t uid,
        const std::vector<long unsigned int> *guid_vec,
        uint64_t appear_avatar_guid,
        proto_log::ChangeSceneTeamReason reason,
        bool is_notify)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<long unsigned int>::size_type AllowAvatarNum; // r15
  common::milog::MiLogStream *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r15
  uint32_t v16; // eax
  unsigned __int64 *M_current; // r15
  std::vector<long unsigned int>::iterator v18; // rax
  unsigned __int64 v19; // rax
  Player *v20; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  std::pair<std::_Rb_tree_const_iterator<long unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  unsigned int *v34; // r8
  unsigned __int64 *v35; // r9
  Player *v36; // rax
  __int64 result; // rax
  std::shared_ptr<Avatar> *v38; // [rsp+0h] [rbp-290h]
  unsigned int val; // [rsp+34h] [rbp-25Ch] BYREF
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-258h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+40h] [rbp-250h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> __y; // [rsp+48h] [rbp-248h] BYREF
  std::vector<SceneTeamAvatar> *old_avatar_vec; // [rsp+50h] [rbp-240h]
  std::vector<long unsigned int> *__for_range; // [rsp+58h] [rbp-238h]
  common::milog::MiLogStream v49; // [rsp+60h] [rbp-230h] BYREF
  char v50[528]; // [rsp+80h] [rbp-210h] BYREF

  v7 = (unsigned __int64)v50;
  v38 = (std::shared_ptr<Avatar> *)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(480LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "10 32 4 7 uid:330 48 8 8 iter:332 80 8 8 guid:363 112 8 22 appear_avatar_guid:330 144 16 14 play"
                        "er_ptr:338 176 16 14 avatar_ptr:365 208 24 17 real_guid_vec:344 272 24 22 all_old_avatar_vec:359"
                        " 336 24 14 avatar_vec:361 400 48 12 guid_set:362";
  *(_QWORD *)(v7 + 16) = SceneTeam::setPlayerAvatarTeam;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61956;
  v9[536862721] = -234881024;
  v9[536862722] = 62194;
  v9[536862722] = -234881024;
  v9[536862723] = 62194;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862725] = 62194;
  v9[536862726] = 62194;
  v9[536862727] = -218959360;
  v9[536862728] = 62194;
  v9[536862729] = -218959360;
  v9[536862730] = 62194;
  v9[536862731] = -218959360;
  v9[536862732] = 62194;
  v9[536862734] = -202116109;
  *(_DWORD *)(v7 + 32) = uid;
  *(_QWORD *)(v7 + 112) = appear_avatar_guid;
  *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator *)(v7 + 48) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                            &this->team_avatar_map_,
                                                                                            (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v7 + 32));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v7 + 48),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_team.cpp",
      "setPlayerAvatarTeam",
      335);
    v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v49, (const char (*)[41])off_259E0C40);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v7 + 32));
    common::milog::MiLogStream::~MiLogStream(&v49);
    v6 = -1;
  }
  else
  {
    SceneTeam::findPlayer((const SceneTeam *const)(v7 + 144), (uint32_t)this);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v7 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_team.cpp",
        "setPlayerAvatarTeam",
        341);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(&v49, (const char (*)[47])off_259E0CA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v7 + 32));
      common::milog::MiLogStream::~MiLogStream(&v49);
      v6 = -1;
    }
    else
    {
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v7 + 208), guid_vec);
      AllowAvatarNum = SceneTeam::getAllowAvatarNum(this, *(_DWORD *)(v7 + 32));
      if ( AllowAvatarNum < std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v7 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_team.cpp",
          "setPlayerAvatarTeam",
          347);
        v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v49, (const char (*)[40])off_259E0D00);
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false>::__node_type *)std::vector<unsigned long>::size(guid_vec);
        v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v13,
                (const unsigned __int64 *)&__y);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])", allow:");
        val = SceneTeam::getAllowAvatarNum(this, *(_DWORD *)(v7 + 32));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v16 = SceneTeam::getAllowAvatarNum(this, *(_DWORD *)(v7 + 32));
        std::vector<unsigned long>::resize((std::vector<long unsigned int> *const)(v7 + 208), v16);
      }
      if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v7 + 208)) )
      {
        std::vector<unsigned long>::emplace_back<unsigned long &>(
          (std::vector<long unsigned int> *const)(v7 + 208),
          (unsigned __int64 *)(v7 + 112),
          (unsigned __int64 *)(v7 + 112));
      }
      else
      {
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false>::__node_type *)std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v7 + 208))._M_current;
        M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v7 + 208))._M_current;
        v18._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v7 + 208))._M_current;
        __for_end._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(
                                 v18,
                                 (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current,
                                 (const unsigned __int64 *)(v7 + 112))._M_current;
        if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
               &__for_end,
               (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__y) )
        {
          std::vector<unsigned long>::pop_back((std::vector<long unsigned int> *const)(v7 + 208));
          std::vector<unsigned long>::emplace_back<unsigned long &>(
            (std::vector<long unsigned int> *const)(v7 + 208),
            (unsigned __int64 *)(v7 + 112),
            (unsigned __int64 *)(v7 + 112));
        }
      }
      SceneTeam::getAllSceneTeamAvatarVec((std::vector<SceneTeamAvatar> *)(v7 + 272), this);
      old_avatar_vec = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v7 + 48))->second;
      std::vector<SceneTeamAvatar>::vector((std::vector<SceneTeamAvatar> *const)(v7 + 336));
      std::set<unsigned long>::set((std::set<long unsigned int> *const)(v7 + 400));
      __for_range = (std::vector<long unsigned int> *)(v7 + 208);
      __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v7 + 208))._M_current;
      __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
      {
        v19 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        *(_QWORD *)(v7 + 80) = *(_QWORD *)v19;
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
        AvatarComp = Player::getAvatarComp(v20);
        PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v7 + 176), (uint64_t)AvatarComp);
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v7 + 176), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_team.cpp",
            "setPlayerAvatarTeam",
            368);
          v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v49, (const char (*)[40])off_259E0DA0);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v22,
            (const unsigned __int64 *)(v7 + 80));
          common::milog::MiLogStream::~MiLogStream(&v49);
          v6 = -1;
          v23 = 0;
        }
        else
        {
          v24 = std::set<unsigned long>::insert(
                  (std::set<long unsigned int> *const)(v7 + 400),
                  (const std::set<long unsigned int>::value_type *)(v7 + 80));
          if ( !v24.second )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/scene/scene_team.cpp",
              "setPlayerAvatarTeam",
              373);
            v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v49,
                    (const char (*)[34])"duplicate guid in guid_vec, guid:");
            v26 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v25,
                    (const unsigned __int64 *)(v7 + 80));
            v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v26,
                    (const char (*)[12])", guid_vec:");
            common::milog::MiLogStream::operator<<<unsigned long>(
              v27,
              (const std::vector<long unsigned int> *)(v7 + 208));
            common::milog::MiLogStream::~MiLogStream(&v49);
            v6 = -1;
            v23 = 0;
          }
          else
          {
            if ( *(_QWORD *)(v7 + 112) == *(_QWORD *)(v7 + 80) )
            {
              v28 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 176));
              if ( Creature::getLifeState(v28) == LIFE_DEAD )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/scene/scene_team.cpp",
                  "setPlayerAvatarTeam",
                  379);
                v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v49,
                        (const char (*)[19])"avatar dead, guid:");
                v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v30,
                        (const unsigned __int64 *)(v7 + 80));
                v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v31,
                        (const char (*)[12])", guid_vec:");
                common::milog::MiLogStream::operator<<<unsigned long>(
                  v32,
                  (const std::vector<long unsigned int> *)(v7 + 208));
                common::milog::MiLogStream::~MiLogStream(&v49);
              }
            }
            v33 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 176));
            __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false>::__node_type *)Avatar::getGuid(v33);
            std::vector<SceneTeamAvatar>::emplace_back<unsigned int &,unsigned long,std::shared_ptr<Avatar> &>(
              (std::vector<SceneTeamAvatar> *const)(v7 + 336),
              (unsigned int *)(v7 + 32),
              (unsigned __int64 *)&__y,
              (std::shared_ptr<Avatar> *)(v7 + 176),
              v34,
              v35,
              v38);
            v23 = 1;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 176));
        if ( v23 != 1 )
          goto LABEL_34;
        __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
      }
      std::vector<SceneTeamAvatar>::operator=(old_avatar_vec, (const std::vector<SceneTeamAvatar> *)(v7 + 336));
      SceneTeam::resizeAvatarTeam(this);
      SceneTeam::onSceneTeamChange(this, (const std::vector<SceneTeamAvatar> *)(v7 + 272));
      v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
      SceneTeam::logChangeSceneTeam(this, v36, (const std::vector<SceneTeamAvatar> *)(v7 + 272), reason);
      if ( is_notify )
        SceneTeam::notifySceneTeamUpdate(this);
      v6 = 0;
LABEL_34:
      std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v7 + 400));
      std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v7 + 336));
      std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v7 + 272));
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v7 + 208));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 144));
  }
  result = v6;
  if ( v38 == (std::shared_ptr<Avatar> *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 399: range 0000000015CF259E-0000000015CF2E4C
void __cdecl SceneTeam::logChangeSceneTeam(
        SceneTeam *const this,
        Player *player,
        const std::vector<SceneTeamAvatar> *old_avatar_vec,
        proto_log::ChangeSceneTeamReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  SceneTeamAvatar *M_current; // r14
  std::vector<SceneTeamAvatar>::iterator v9; // rax
  Avatar *v10; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto_log::TeamAvatarLog *v12; // rax
  const SceneTeamAvatar *v13; // r14
  std::vector<SceneTeamAvatar>::const_iterator v14; // rax
  Avatar *v15; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  proto_log::TeamAvatarLog *v17; // rax
  Avatar *v18; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  proto_log::TeamAvatarLog *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t Level1AreaId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  PlayerSceneComp *v25; // rax
  uint32_t Level2AreaId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  bool v28; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::string v30; // [rsp+0h] [rbp-1C0h]
  google::protobuf::uint32 reasona; // [rsp+4h] [rbp-1BCh]
  const std::vector<SceneTeamAvatar> *old_avatar_veca; // [rsp+8h] [rbp-1B8h]
  Player *playera; // [rsp+10h] [rbp-1B0h]
  const SceneTeam *thisa; // [rsp+18h] [rbp-1A8h]
  uint32_t player_uid_0; // [rsp+28h] [rbp-198h]
  uint32_t player_uid; // [rsp+2Ch] [rbp-194h]
  std::vector<SceneTeamAvatar>::const_iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_0; // [rsp+38h] [rbp-188h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_begin_0; // [rsp+40h] [rbp-180h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  const std::vector<SceneTeamAvatar> *__for_range; // [rsp+50h] [rbp-170h]
  std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+58h] [rbp-168h]
  std::vector<SceneTeamAvatar> *__for_range_1; // [rsp+60h] [rbp-160h]
  const SceneTeamAvatar *team_avatar_1; // [rsp+68h] [rbp-158h]
  const SceneTeamAvatar *team_avatar_0; // [rsp+70h] [rbp-150h]
  uint64_t avatar_guid_0; // [rsp+78h] [rbp-148h]
  const SceneTeamAvatar *team_avatar; // [rsp+80h] [rbp-140h]
  uint64_t avatar_guid; // [rsp+88h] [rbp-138h]
  std::string v49; // [rsp+90h] [rbp-130h] BYREF
  char v50[272]; // [rsp+B0h] [rbp-110h] BYREF
  SceneTeam::logChangeSceneTeam::<lambda(const auto:28&)> v51; // 0:edx.4,8:rcx.8
  SceneTeam::logChangeSceneTeam::<lambda(const auto:29&)> v52; // 0:edx.4,8:rcx.8

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v30._M_string_length = (std::string::size_type)old_avatar_vec;
  HIDWORD(v30._M_dataplus._M_p) = reason;
  v4 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:400 64 16 11 log_ptr:401 96 16 13 find_pred:412 128 16 14 avatar_ptr:420 160 24"
                        " 18 cur_avatar_vec:407";
  *(_QWORD *)(v4 + 16) = SceneTeam::logChangeSceneTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v49, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x451u, v30);
  std::string::~string(&v49);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyChangeSceneTeam>();
  if ( std::operator==<proto_log::PlayerLogBodyChangeSceneTeam>(
         (const std::shared_ptr<proto_log::PlayerLogBodyChangeSceneTeam> *)(v4 + 64),
         0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_team.cpp",
      "logChangeSceneTeam",
      404);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&v49,
      (const char (*)[19])off_259E0FA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v49);
  }
  else
  {
    SceneTeam::getAllSceneTeamAvatarVec((std::vector<SceneTeamAvatar> *)(v4 + 160), thisa);
    __for_range = old_avatar_veca;
    __for_begin._M_current = std::vector<SceneTeamAvatar>::begin(old_avatar_veca)._M_current;
    __for_begin_0._M_current = (SceneTeamAvatar *)std::vector<SceneTeamAvatar>::end(old_avatar_veca)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin_0) )
    {
      team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*(&__for_begin);
      player_uid = SceneTeamAvatar::getPlayerUid(team_avatar);
      avatar_guid = SceneTeamAvatar::getAvatarGuid(team_avatar);
      *(_DWORD *)(v4 + 96) = player_uid;
      *(_QWORD *)(v4 + 104) = avatar_guid;
      __for_end._M_current = std::vector<SceneTeamAvatar>::end((std::vector<SceneTeamAvatar> *const)(v4 + 160))._M_current;
      M_current = std::vector<SceneTeamAvatar>::end((std::vector<SceneTeamAvatar> *const)(v4 + 160))._M_current;
      v9._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v4 + 160))._M_current;
      v51.__player_uid = *(_DWORD *)(v4 + 96);
      v51.__avatar_guid = *(_QWORD *)(v4 + 104);
      __for_end_0._M_current = std::find_if<__gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>,SceneTeam::logChangeSceneTeam(Player &,std::vector<SceneTeamAvatar> const&,proto_log::ChangeSceneTeamReason)::{lambda(__gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>> const&)#1}>(
                                 v9,
                                 (__gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> >)M_current,
                                 v51)._M_current;
      if ( !__gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_end_0, &__for_end) )
      {
        SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v4 + 128));
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 128), 0LL) )
        {
          v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v12 = proto_log::PlayerLogBodyChangeSceneTeam::add_removed_avatar_list(v11);
          Avatar::getTeamAvatarLog(v10, v12);
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 128));
      }
      __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::vector<SceneTeamAvatar> *)(v4 + 160);
    __for_begin._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v4 + 160))._M_current;
    __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(
              (const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
              &__for_end_0) )
    {
      team_avatar_0 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
      player_uid_0 = SceneTeamAvatar::getPlayerUid(team_avatar_0);
      avatar_guid_0 = SceneTeamAvatar::getAvatarGuid(team_avatar_0);
      *(_DWORD *)(v4 + 96) = player_uid_0;
      *(_QWORD *)(v4 + 104) = avatar_guid_0;
      __for_end._M_current = (SceneTeamAvatar *)std::vector<SceneTeamAvatar>::end(old_avatar_veca)._M_current;
      v13 = std::vector<SceneTeamAvatar>::end(old_avatar_veca)._M_current;
      v14._M_current = std::vector<SceneTeamAvatar>::begin(old_avatar_veca)._M_current;
      v52.__player_uid = *(_DWORD *)(v4 + 96);
      v52.__avatar_guid = *(_QWORD *)(v4 + 104);
      __for_begin_0._M_current = (SceneTeamAvatar *)std::find_if<__gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>,SceneTeam::logChangeSceneTeam(Player &,std::vector<SceneTeamAvatar> const&,proto_log::ChangeSceneTeamReason)::{lambda(__gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>> const&)#2}>(
                                                      v14,
                                                      (__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> >)v13,
                                                      v52)._M_current;
      if ( !__gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
              (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin_0,
              (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
      {
        SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v4 + 128));
        if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 128), 0LL) )
        {
          v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v17 = proto_log::PlayerLogBodyChangeSceneTeam::add_added_avatar_list(v16);
          Avatar::getTeamAvatarLog(v15, v17);
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 128));
      }
      __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
    }
    __for_range_1 = (std::vector<SceneTeamAvatar> *)(v4 + 160);
    __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v4 + 160))._M_current;
    __for_end._M_current = std::vector<SceneTeamAvatar>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end) )
    {
      team_avatar_1 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
      SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v4 + 128));
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 128), 0LL) )
      {
        v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v20 = proto_log::PlayerLogBodyChangeSceneTeam::add_cur_avatar_list(v19);
        Avatar::getTeamAvatarLog(v18, v20);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 128));
      __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
    }
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    SceneComp = Player::getSceneComp(playera);
    Level1AreaId = PlayerSceneComp::getLevel1AreaId(SceneComp);
    proto_log::PlayerLogBodyChangeSceneTeam::set_level1_area_id(v21, Level1AreaId);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v25 = Player::getSceneComp(playera);
    Level2AreaId = PlayerSceneComp::getLevel2AreaId(v25);
    proto_log::PlayerLogBodyChangeSceneTeam::set_level2_area_id(v24, Level2AreaId);
    v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v28 = SceneTeam::isInMpMode(thisa);
    proto_log::PlayerLogBodyChangeSceneTeam::set_is_in_mp(v27, v28);
    v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChangeSceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyChangeSceneTeam::set_change_reason(v29, reasona);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 128),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChangeSceneTeam,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 96),
      (const std::shared_ptr<proto_log::PlayerLogBodyChangeSceneTeam> *)(v4 + 64));
    Player::printStatLog(playera, (MessagePtr *)(v4 + 96), (MessagePtr *)(v4 + 128), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 96));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 128));
    std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v4 + 160));
  }
  std::shared_ptr<proto_log::PlayerLogBodyChangeSceneTeam>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChangeSceneTeam> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v50 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 412: range 0000000015D2046C-0000000015D20512
bool __cdecl SceneTeam::logChangeSceneTeam::_lambda_const_auto_28___::operator()_SceneTeamAvatar_(
        const SceneTeam::logChangeSceneTeam::<lambda(const auto:28&)> *const __closure,
        const SceneTeamAvatar *team_avatar)
{
  uint32_t PlayerUid; // ecx
  uint64_t AvatarGuid; // rdx

  PlayerUid = SceneTeamAvatar::getPlayerUid(team_avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( PlayerUid != __closure->__player_uid )
    return 0;
  AvatarGuid = SceneTeamAvatar::getAvatarGuid(team_avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return AvatarGuid == __closure->__avatar_guid;
};

// Line 430: range 0000000015D205EC-0000000015D20692
bool __cdecl SceneTeam::logChangeSceneTeam::_lambda_const_auto_29___::operator()_SceneTeamAvatar_(
        const SceneTeam::logChangeSceneTeam::<lambda(const auto:29&)> *const __closure,
        const SceneTeamAvatar *team_avatar)
{
  uint32_t PlayerUid; // ecx
  uint64_t AvatarGuid; // rdx

  PlayerUid = SceneTeamAvatar::getPlayerUid(team_avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( PlayerUid != __closure->__player_uid )
    return 0;
  AvatarGuid = SceneTeamAvatar::getAvatarGuid(team_avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return AvatarGuid == __closure->__avatar_guid;
};

// Line 460: range 0000000015CF2F32-0000000015CF33A2
__int64 __fastcall SceneTeam::setPlayerAvatarTeamAndAddToScene(
        SceneTeam *const this,
        uint32_t uid,
        const std::vector<long unsigned int> *avatar_guid_vec,
        uint64_t appear_avatar_guid,
        Scene *scene,
        proto_log::ChangeSceneTeamReason reason,
        bool is_notify)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int v13; // r14d
  GameserverService *v14; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  int32_t ret; // [rsp+3Ch] [rbp-E4h]
  std::shared_ptr<SetAvatarTeamToSceneEvent> __r; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 4 7 uid:459 64 16 14 player_ptr:482 96 16 13 event_ptr:488";
  *(_QWORD *)(v7 + 16) = SceneTeam::setPlayerAvatarTeamAndAddToScene;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -219021312;
  v9[536862723] = -202178560;
  *(_DWORD *)(v7 + 48) = uid;
  if ( (unsigned int)SceneTeam::setPlayerAvatarTeam(
                       this,
                       *(_DWORD *)(v7 + 48),
                       avatar_guid_vec,
                       appear_avatar_guid,
                       reason,
                       0) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_team.cpp",
      "setPlayerAvatarTeamAndAddToScene",
      463);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v26,
            (const char (*)[33])"setPlayerAvatarTeam failed, uid:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v7 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", avatar_vec:");
    common::milog::MiLogStream::operator<<<unsigned long>(v12, avatar_guid_vec);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v13 = -1;
  }
  else
  {
    std::function<ForeachPolicy ()(Avatar &)>::function<SceneTeam::setPlayerAvatarTeamAndAddToScene(unsigned int,std::vector<unsigned long> const&,unsigned long,Scene &,proto_log::ChangeSceneTeamReason,bool)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v26,
      (SceneTeam::setPlayerAvatarTeamAndAddToScene::<lambda(Avatar&)>)scene);
    ret = SceneTeam::foreachAvatar(this, *(_DWORD *)(v7 + 48), (std::function<ForeachPolicy(Avatar&)> *)&v26);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v26);
    if ( ret )
    {
      v13 = ret;
    }
    else
    {
      v14 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v14);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v7 + 64), GameThreadLocal + 16);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_team.cpp",
          "setPlayerAvatarTeamAndAddToScene",
          485);
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v26,
                (const char (*)[30])"findOnlinePlayer failed, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v13 = -1;
      }
      else
      {
        common::tools::perf::make_shared<SetAvatarTeamToSceneEvent,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v7 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<SetAvatarTeamToSceneEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v7 + 96),
          &__r);
        std::shared_ptr<SetAvatarTeamToSceneEvent>::~shared_ptr(&__r);
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        EventComp = Player::getEventComp(v17);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&__r,
          (const std::shared_ptr<BaseEvent> *)(v7 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
        if ( is_notify )
          SceneTeam::notifySceneTeamUpdate(this);
        v13 = 0;
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v7 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 64));
    }
  }
  result = v13;
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 467: range 0000000015CF2E4E-0000000015CF2F31
ForeachPolicy __cdecl SceneTeam::setPlayerAvatarTeamAndAddToScene(unsigned int,std::vector<unsigned long> const&,unsigned long,Scene &,proto_log::ChangeSceneTeamReason,bool)::{lambda(Avatar &)#1}::operator()(
        const SceneTeam::setPlayerAvatarTeamAndAddToScene::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Scene::addAvatarAndWeaponEntity(__closure->__scene, avatar, 1) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/scene/scene_team.cpp",
    "operator()",
    471);
  v2 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v4,
         (const char (*)[31])"addAvatarAndWeaponEntity fails");
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v2, avatar);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return 1;
};

// Line 499: range 0000000015CF33A4-0000000015CF35A7
__int64 __fastcall SceneTeam::isAvatarInTeam(SceneTeam *const this, uint32_t uid, uint64_t guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::vector<SceneTeamAvatar>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<SceneTeamAvatar> *__for_range; // [rsp+30h] [rbp-90h]
  const SceneTeamAvatar *team_avatar; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:498 64 8 8 iter:500";
  *(_QWORD *)(v3 + 16) = SceneTeam::isAvatarInTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                            &this->team_avatar_map_,
                                                                                            (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v3 + 48));
  __for_end._M_current = (SceneTeamAvatar *)std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)&__for_end) )
  {
    result = 0LL;
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v3 + 64))->second;
    __for_begin._M_current = std::vector<SceneTeamAvatar>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<SceneTeamAvatar>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin, &__for_end) )
    {
      team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin);
      if ( guid == SceneTeamAvatar::getAvatarGuid(team_avatar) )
      {
        result = 1LL;
        goto LABEL_12;
      }
      __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_12:
  if ( v12 == (char *)v3 )
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

// Line 517: range 0000000015CF35A8-0000000015CF391C
int32_t __cdecl SceneTeam::foreachAvatar(SceneTeam *const this, std::function<ForeachPolicy(Avatar&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  int v6; // r14d
  Avatar *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-ECh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+40h] [rbp-C0h]
  const SceneTeamAvatar *team_avatar; // [rsp+48h] [rbp-B8h]
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:519 64 8 8 iter:521 96 16 14 avatar_ptr:528";
  *(_QWORD *)(v2 + 16) = SceneTeam::foreachAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  ret = 0;
  __for_range = &this->player_uid_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                              &this->team_avatar_map_,
                                                                                              (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v2 + 48));
    __for_end_0._M_current = (SceneTeamAvatar *)std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)&__for_end_0) )
    {
      __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v2 + 64))->second;
      __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin(__for_range_0)._M_current;
      __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_0) )
      {
        team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
        SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 96));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 96)) )
        {
          v6 = 0;
        }
        else
        {
          v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( std::function<ForeachPolicy ()(Avatar &)>::operator()(p_func, v7) )
          {
            ret = 1;
            v6 = 1;
          }
          else
          {
            v6 = 2;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
        if ( v6 )
        {
          if ( v6 != 2 )
            break;
        }
        __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
      }
      if ( ret )
        break;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = ret;
  if ( v17 == (char *)v2 )
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

// Line 548: range 0000000015CF391E-0000000015CF3C40
std::vector<long unsigned int> *__fastcall SceneTeam::getAvatarGuidVec(
        std::vector<long unsigned int> *retstr,
        const SceneTeam *const this,
        uint32_t uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::vector<SceneTeamAvatar>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<SceneTeamAvatar>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> __y; // [rsp+38h] [rbp-D8h] BYREF
  const std::vector<SceneTeamAvatar> *__for_range; // [rsp+40h] [rbp-D0h]
  const SceneTeamAvatar *team_avatar; // [rsp+48h] [rbp-C8h]
  char v13[192]; // [rsp+50h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:547 64 8 8 iter:549 96 24 14 result_vec:554";
  *(_QWORD *)(v3 + 16) = SceneTeam::getAvatarGuidVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                                  &this->team_avatar_map_,
                                                                                                  (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v3 + 64),
         &__y) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned long>::vector(retstr);
  }
  else
  {
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 96));
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v3 + 64))->second;
    __for_begin._M_current = std::vector<SceneTeamAvatar>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<SceneTeamAvatar>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(&__for_begin, &__for_end) )
    {
      team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*(&__for_begin);
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false>::__node_type *)SceneTeamAvatar::getAvatarGuid(team_avatar);
      std::vector<unsigned long>::emplace_back<unsigned long>(
        (std::vector<long unsigned int> *const)(v3 + 96),
        (unsigned __int64 *)&__y,
        (unsigned __int64 *)&__y);
      __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++(&__for_begin);
    }
    std::vector<unsigned long>::vector(retstr, (std::vector<long unsigned int> *)(v3 + 96));
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 96));
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 563: range 0000000015CF3C42-0000000015CF3D9D
std::vector<SceneTeamAvatar>::size_type __fastcall SceneTeam::getAvatarGuidVecSize(
        const SceneTeam *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<SceneTeamAvatar>::size_type result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:562 64 8 8 iter:564";
  *(_QWORD *)(v2 + 16) = SceneTeam::getAvatarGuidVecSize;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                                  &this->team_avatar_map_,
                                                                                                  (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v2 + 64));
    result = std::vector<SceneTeamAvatar>::size(&v6->second);
  }
  if ( v8 == (char *)v2 )
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

// Line 573: range 0000000015CF3D9E-0000000015CF4063
std::vector<SceneTeamAvatar> *__cdecl SceneTeam::getAllSceneTeamAvatarVec(
        std::vector<SceneTeamAvatar> *retstr,
        const SceneTeam *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false>::pointer v6; // rax
  const SceneTeamAvatar *M_current; // r15
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false>::pointer v8; // rax
  const SceneTeamAvatar *v9; // r14
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > __i; // [rsp+38h] [rbp-A8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> __y; // [rsp+40h] [rbp-A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-98h]
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:575 64 8 8 iter:577";
  *(_QWORD *)(v2 + 16) = SceneTeam::getAllSceneTeamAvatarVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  std::vector<SceneTeamAvatar>::vector(retstr);
  __for_range = &this->player_uid_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                                    &this->team_avatar_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v2 + 64),
           &__y) )
    {
      v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v2 + 64));
      M_current = std::vector<SceneTeamAvatar>::end(&v6->second)._M_current;
      v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v2 + 64));
      v9 = std::vector<SceneTeamAvatar>::begin(&v8->second)._M_current;
      __i._M_current = std::vector<SceneTeamAvatar>::end(retstr)._M_current;
      __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::__normal_iterator<SceneTeamAvatar*>(
        (__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__y,
        &__i);
      std::vector<SceneTeamAvatar>::insert<__gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>,void>(
        retstr,
        (std::vector<SceneTeamAvatar>::const_iterator)__y._M_cur,
        (__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> >)v9,
        (__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> >)M_current);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
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
  return retstr;
};

// Line 587: range 0000000015CF4064-0000000015CF41C2
std::unordered_map<unsigned int,std::vector<long unsigned int>> *__cdecl SceneTeam::getPlayerAvatarGuidMap(
        std::unordered_map<unsigned int,std::vector<long unsigned int>> *retstr,
        const SceneTeam *const this)
{
  std::vector<long unsigned int> *v2; // rbx
  unsigned __int64 *v3; // rdx
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  std::vector<SceneTeamAvatar>::const_iterator __for_begin_0; // [rsp+28h] [rbp-58h] BYREF
  std::vector<SceneTeamAvatar>::const_iterator __for_end_0; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 AvatarGuid; // [rsp+38h] [rbp-48h] BYREF
  const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>> *__for_range; // [rsp+40h] [rbp-40h]
  const std::pair<unsigned int const,std::vector<SceneTeamAvatar> > *v11; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<SceneTeamAvatar> > >::type *uid; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<SceneTeamAvatar> > >::type *scene_team_avatar_vec; // [rsp+58h] [rbp-28h]
  const std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+60h] [rbp-20h]
  const SceneTeamAvatar *scene_team_avatar; // [rsp+68h] [rbp-18h]

  std::unordered_map<unsigned int,std::vector<unsigned long>>::unordered_map(retstr);
  __for_range = &this->team_avatar_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::begin(&this->team_avatar_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::vector<SceneTeamAvatar>>(v11);
    scene_team_avatar_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<SceneTeamAvatar> > >::type *)std::get<1ul,unsigned int const,std::vector<SceneTeamAvatar>>(v11);
    __for_range_0 = scene_team_avatar_vec;
    __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin(scene_team_avatar_vec)._M_current;
    __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_0) )
    {
      scene_team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
      v2 = std::unordered_map<unsigned int,std::vector<unsigned long>>::operator[](retstr, uid);
      AvatarGuid = SceneTeamAvatar::getAvatarGuid(scene_team_avatar);
      std::vector<unsigned long>::emplace_back<unsigned long>(v2, &AvatarGuid, v3);
      __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 600: range 0000000015CF41C4-0000000015CF4510
__int64 __fastcall SceneTeam::foreachAvatar(
        SceneTeam *const this,
        uint32_t uid,
        std::function<ForeachPolicy(Avatar&)> *p_func)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r14d
  Avatar *v10; // rax
  __int64 result; // rax
  std::vector<SceneTeamAvatar>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<SceneTeamAvatar> *__for_range; // [rsp+30h] [rbp-E0h]
  const SceneTeamAvatar *team_avatar; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 uid:599 64 8 8 iter:601 96 16 14 avatar_ptr:609";
  *(_QWORD *)(v4 + 16) = SceneTeam::foreachAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = uid;
  *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                            &this->team_avatar_map_,
                                                                                            (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v4 + 48));
  __for_end._M_current = (SceneTeamAvatar *)std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_team.cpp",
      "foreachAvatar",
      604);
    v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v8,
      (const char (*)[37])" cannot be found in team_avatar_map_");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v3 = -1;
  }
  else
  {
    __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v4 + 64))->second;
    __for_begin._M_current = std::vector<SceneTeamAvatar>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<SceneTeamAvatar>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin, &__for_end) )
    {
      team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin);
      SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v4 + 96));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( std::function<ForeachPolicy ()(Avatar &)>::operator()(p_func, v10) )
        {
          v3 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
      if ( v9 && v9 != 2 )
        goto LABEL_17;
      __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin);
    }
    v3 = 0;
  }
LABEL_17:
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 623: range 0000000015CF4512-0000000015CF460C
bool __cdecl SceneTeam::isInMpMode(const SceneTeam *const this)
{
  bool v1; // r12
  std::shared_ptr<Player> __a; // [rsp+10h] [rbp-20h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_in_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_mp_mode_);
  if ( this->is_in_mp_mode_ )
    return 1;
  SceneTeam::getHostUid(this);
  SceneTeam::findPlayer((const SceneTeam *const)&__a, (uint32_t)this);
  v1 = std::operator==<Player>(&__a, 0LL) || SceneTeam::getTeamPlayerNum(this) > 1;
  std::shared_ptr<Player>::~shared_ptr(&__a);
  return v1;
};

// Line 633: range 0000000015CF460E-0000000015CF48EC
void __cdecl SceneTeam::sendProto(SceneTeam *const this, const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  Player *v7; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:634 64 16 14 player_ptr:642";
  *(_QWORD *)(v2 + 16) = SceneTeam::sendProto;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  __for_range = &this->player_uid_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    if ( *(_DWORD *)(v2 + 48) && SceneTeam::isPlayerSceneTeamIdenticalToThis(this, *(_DWORD *)(v2 + 48)) )
    {
      SceneTeam::findPlayer((const SceneTeam *const)(v2 + 64), (uint32_t)this);
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_team.cpp",
          "sendProto",
          645);
        v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v11,
               (const char (*)[26])"cannot find player, uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
      else
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Player::sendProto(v7, proto);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v12 == (char *)v2 )
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

// Line 655: range 0000000015CF48EE-0000000015CF4F20
void __cdecl SceneTeam::notifySceneTeamUpdate(SceneTeam *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  bool v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  bool v9; // r14
  proto::SceneTeamAvatar *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerAvatarComp *AvatarComp; // rax
  unsigned int val; // [rsp+1Ch] [rbp-174h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_begin_0; // [rsp+30h] [rbp-160h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_0; // [rsp+38h] [rbp-158h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> __y; // [rsp+40h] [rbp-150h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+50h] [rbp-140h]
  const SceneTeamAvatar *team_avatar; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-130h] BYREF
  char v25[272]; // [rsp+80h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 7 uid:657 48 8 8 iter:659 80 16 14 avatar_ptr:672 112 16 14 player_ptr:679 144 48 10 notify:656";
  *(_QWORD *)(v1 + 16) = SceneTeam::notifySceneTeamUpdate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  proto::SceneTeamUpdateNotify::SceneTeamUpdateNotify((proto::SceneTeamUpdateNotify *const)(v1 + 144));
  __for_range = &this->player_uid_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    *(std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::iterator *)(v1 + 48) = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::find(
                                                                                              &this->team_avatar_map_,
                                                                                              (const std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::key_type *)(v1 + 32));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<SceneTeamAvatar>>::end(&this->team_avatar_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false> *)(v1 + 48),
           &__y) )
    {
      __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false,false> *const)(v1 + 48))->second;
      __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin(__for_range_0)._M_current;
      __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_0) )
      {
        team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
        SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v1 + 112));
        v5 = std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 112), 0LL);
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 112));
        if ( v5 )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/scene_team.cpp",
            "notifySceneTeamUpdate",
            667);
          v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v24,
                 (const char (*)[26])"team_avatar is null, uid:");
          val = SceneTeamAvatar::getPlayerUid(team_avatar);
          v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
          v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])"guid: ");
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<SceneTeamAvatar> >,false>::__node_type *)SceneTeamAvatar::getAvatarGuid(team_avatar);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)&__y);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        v9 = SceneTeam::isInMpMode(this);
        v10 = proto::SceneTeamUpdateNotify::add_scene_team_avatar_list((proto::SceneTeamUpdateNotify *const)(v1 + 144));
        SceneTeamAvatar::toClient(team_avatar, v10, v9);
        SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v1 + 80));
        if ( std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2> *const)(v1 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_team.cpp",
            "notifySceneTeamUpdate",
            675);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v24,
                  (const char (*)[16])"notify avatar: ");
          v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          val = Avatar::getAvatarId(v12);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 80));
        __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
      }
    }
    SceneTeam::findPlayer((const SceneTeam *const)(v1 + 112), (uint32_t)this);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 112)) )
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      AvatarComp = Player::getAvatarComp(v13);
      PlayerAvatarComp::setIsReconnectFlag(AvatarComp, 0);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 112));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( SceneTeam::isInMpMode(this) )
    proto::SceneTeamUpdateNotify::set_is_in_mp((proto::SceneTeamUpdateNotify *const)(v1 + 144), 1);
  SceneTeam::sendProto(this, (const google::protobuf::Message *)(v1 + 144));
  proto::SceneTeamUpdateNotify::~SceneTeamUpdateNotify((proto::SceneTeamUpdateNotify *const)(v1 + 144));
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 693: range 0000000015CF4F22-0000000015CF50CF
const SceneTeam *__fastcall SceneTeam::findPlayer(const SceneTeam *const this, __int64 uid, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:692 64 8 8 iter:694";
  *(_QWORD *)(v3 + 16) = SceneTeam::findPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::weak_ptr<Player>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::weak_ptr<Player>>::find(
                                                                                           (const std::unordered_map<unsigned int,std::weak_ptr<Player>> *const)(uid + 40),
                                                                                           (const std::unordered_map<unsigned int,std::weak_ptr<Player>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Player>>::end((const std::unordered_map<unsigned int,std::weak_ptr<Player>> *const)(uid + 40))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::weak_ptr<Player>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Player> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::weak_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::weak_ptr<Player> >,false,false> *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, &__y);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  }
  if ( v9 == (char *)v3 )
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
  return this;
};

// Line 704: range 0000000015CF5236-0000000015CF5E02
void __cdecl SceneTeam::onSceneTeamChange(SceneTeam *const this, const std::vector<SceneTeamAvatar> *old_avatar_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  const std::weak_ptr<Avatar> *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  TalentComp *TalentComp; // rax
  uint64_t AvatarGuid; // r14
  uint32_t PlayerUid; // ecx
  const SceneTeamAvatar *M_current; // r14
  std::vector<SceneTeamAvatar>::const_iterator v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Avatar *v20; // rax
  Avatar *v21; // rax
  unsigned int val; // [rsp+14h] [rbp-30Ch] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_begin_0; // [rsp+18h] [rbp-308h] BYREF
  std::vector<SceneTeamAvatar>::iterator __for_end_0; // [rsp+20h] [rbp-300h] BYREF
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > >::iterator __for_begin; // [rsp+28h] [rbp-2F8h] BYREF
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > >::iterator __for_end; // [rsp+30h] [rbp-2F0h] BYREF
  const std::vector<SceneTeamAvatar> *__for_range; // [rsp+38h] [rbp-2E8h]
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *__for_range_0; // [rsp+40h] [rbp-2E0h]
  const std::vector<SceneTeamAvatar> *__for_range_1; // [rsp+48h] [rbp-2D8h]
  std::vector<SceneTeamAvatar> *__for_range_2; // [rsp+50h] [rbp-2D0h]
  std::vector<SceneTeamAvatar> *__for_range_3; // [rsp+58h] [rbp-2C8h]
  std::vector<SceneTeamAvatar> *__for_range_4; // [rsp+60h] [rbp-2C0h]
  const SceneTeamAvatar *scene_team_avatar_3; // [rsp+68h] [rbp-2B8h]
  const SceneTeamAvatar *scene_team_avatar_2; // [rsp+70h] [rbp-2B0h]
  const SceneTeamAvatar *scene_team_avatar_1; // [rsp+78h] [rbp-2A8h]
  const SceneTeamAvatar *scene_team_avatar_0; // [rsp+80h] [rbp-2A0h]
  const SceneTeamAvatar *scene_team_avatar; // [rsp+88h] [rbp-298h]
  common::milog::MiLogStream v38; // [rsp+90h] [rbp-290h] BYREF
  char v39[624]; // [rsp+B0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 8 13 find_func:751 80 16 14 avatar_wtr:727 112 16 14 avatar_ptr:776 144 24 18 new_avatar_ve"
                        "c:739 208 24 26 diff_remove_avatar_vec:740 272 24 23 diff_add_avatar_vec:741 336 48 20 fight_pro"
                        "p_guard:705 416 48 25 refresh_ability_guard:706 496 48 20 union_avatar_set:709";
  *(_QWORD *)(v2 + 16) = SceneTeam::onSceneTeamChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862732] = -218959118;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -202116109;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 336));
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 416));
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::set((std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *const)(v2 + 496));
  __for_range = old_avatar_vec;
  *(std::vector<SceneTeamAvatar>::const_iterator *)(v2 + 48) = std::vector<SceneTeamAvatar>::begin(old_avatar_vec);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)(v2 + 48),
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin) )
  {
    scene_team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)(v2 + 48));
    SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 80));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_team.cpp",
        "onSceneTeamChange",
        715);
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v38,
             (const char (*)[21])"getAvatar fail. uid:");
      val = SceneTeamAvatar::getPlayerUid(scene_team_avatar);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" avatar_guid:");
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)SceneTeamAvatar::getAvatarGuid(scene_team_avatar);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    else
    {
      std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(
        (std::weak_ptr<Avatar> *const)(v2 + 112),
        (const std::shared_ptr<Avatar> *)(v2 + 80));
      std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::insert(
        (std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *const)(v2 + 496),
        (std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > >::value_type *)(v2 + 112));
      std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)(v2 + 112));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
    __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)(v2 + 48));
  }
  std::function<ForeachPolicy ()(Avatar &)>::function<SceneTeam::onSceneTeamChange(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#1},void,void>(
    (std::function<ForeachPolicy(Avatar&)> *const)&v38,
    (SceneTeam::onSceneTeamChange::<lambda(Avatar&)>)(v2 + 496));
  SceneTeam::foreachAvatar(this, (std::function<ForeachPolicy(Avatar&)> *)&v38);
  std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v38);
  __for_range_0 = (std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *)(v2 + 496);
  __for_begin._M_node = std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::begin((const std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *const)(v2 + 496))._M_node;
  __for_end._M_node = std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::weak_ptr<Avatar>>::operator*(&__for_begin);
    std::weak_ptr<Avatar>::weak_ptr((std::weak_ptr<Avatar> *const)(v2 + 80), v8);
    std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v2 + 112));
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 112)) )
    {
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      FightPropGuard::addCreature((FightPropGuard *const)(v2 + 336), v9, 0);
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v2 + 416), v10);
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      TalentComp = Avatar::getTalentComp(v11);
      TalentComp::onSceneTeamChange(TalentComp);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 112));
    std::weak_ptr<Avatar>::~weak_ptr((std::weak_ptr<Avatar> *const)(v2 + 80));
    std::_Rb_tree_const_iterator<std::weak_ptr<Avatar>>::operator++(&__for_begin);
  }
  SceneTeam::getAllSceneTeamAvatarVec((std::vector<SceneTeamAvatar> *)(v2 + 144), this);
  std::vector<SceneTeamAvatar>::vector((std::vector<SceneTeamAvatar> *const)(v2 + 208));
  std::vector<SceneTeamAvatar>::vector((std::vector<SceneTeamAvatar> *const)(v2 + 272));
  __for_range_1 = old_avatar_vec;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::begin(old_avatar_vec)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
  {
    scene_team_avatar_0 = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
    AvatarGuid = SceneTeamAvatar::getAvatarGuid(scene_team_avatar_0);
    PlayerUid = SceneTeamAvatar::getPlayerUid(scene_team_avatar_0);
    if ( (unsigned __int8)SceneTeam::isAvatarInTeam(this, PlayerUid, AvatarGuid) != 1 )
      std::vector<SceneTeamAvatar>::emplace_back<SceneTeamAvatar const&>(
        (std::vector<SceneTeamAvatar> *const)(v2 + 208),
        scene_team_avatar_0,
        scene_team_avatar_0);
    __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
  }
  __for_range_2 = (std::vector<SceneTeamAvatar> *)(v2 + 144);
  __for_begin_0._M_current = std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v2 + 144))._M_current;
  __for_end_0._M_current = std::vector<SceneTeamAvatar>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(&__for_begin_0, &__for_end_0) )
  {
    scene_team_avatar_1 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*(&__for_begin_0);
    *(_QWORD *)(v2 + 48) = scene_team_avatar_1;
    M_current = std::vector<SceneTeamAvatar>::end(old_avatar_vec)._M_current;
    v16._M_current = std::vector<SceneTeamAvatar>::begin(old_avatar_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::find_if<__gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>,SceneTeam::onSceneTeamChange(std::vector<SceneTeamAvatar> const&)::{lambda(SceneTeamAvatar const&)#2}>(
                                                                                           v16,
                                                                                           (__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> >)M_current,
                                                                                           *(SceneTeam::onSceneTeamChange::<lambda(const SceneTeamAvatar&)> *)(v2 + 48))._M_current;
    __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::end(old_avatar_vec)._M_current;
    if ( __gnu_cxx::operator==<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
           (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
           (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
    {
      std::vector<SceneTeamAvatar>::emplace_back<SceneTeamAvatar const&>(
        (std::vector<SceneTeamAvatar> *const)(v2 + 272),
        scene_team_avatar_1,
        scene_team_avatar_1);
    }
    __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v38,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_team.cpp",
    "onSceneTeamChange",
    762);
  v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v38,
          (const char (*)[43])"[SCENE_TEAM_CHANGE]diff_remove_avatar_vec:");
  v18 = common::milog::MiLogStream::operator<<<SceneTeamAvatar>(v17, (const std::vector<SceneTeamAvatar> *)(v2 + 208));
  v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v18,
          (const char (*)[22])" diff_add_avatar_vec:");
  common::milog::MiLogStream::operator<<<SceneTeamAvatar>(v19, (const std::vector<SceneTeamAvatar> *)(v2 + 272));
  common::milog::MiLogStream::~MiLogStream(&v38);
  __for_range_3 = (std::vector<SceneTeamAvatar> *)(v2 + 208);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v2 + 208))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::end(__for_range_3)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(
            (const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
  {
    scene_team_avatar_2 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
    SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 112));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 112), 0LL) )
    {
      v20 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      Avatar::onRemoveFromSceneTeam(v20);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 112));
    __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
  }
  __for_range_4 = (std::vector<SceneTeamAvatar> *)(v2 + 272);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::begin((std::vector<SceneTeamAvatar> *const)(v2 + 272))._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::weak_ptr<Avatar> >::_Base_ptr)std::vector<SceneTeamAvatar>::end(__for_range_4)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>(
            (const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
  {
    scene_team_avatar_3 = __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
    SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 112));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 112), 0LL) )
    {
      v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      Avatar::onAddToSceneTeam(v21);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 112));
    __gnu_cxx::__normal_iterator<SceneTeamAvatar *,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
  }
  SceneTeam::refreshTeamResonances(this, (const std::vector<SceneTeamAvatar> *)(v2 + 208));
  std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v2 + 272));
  std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v2 + 208));
  std::vector<SceneTeamAvatar>::~vector((std::vector<SceneTeamAvatar> *const)(v2 + 144));
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::~set((std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *const)(v2 + 496));
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 416));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 336));
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 721: range 0000000015CF50D0-0000000015CF518B
ForeachPolicy __cdecl SceneTeam::onSceneTeamChange(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#1}::operator()(
        const SceneTeam::onSceneTeamChange::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar> >,std::allocator<std::weak_ptr<Avatar> > > *union_avatar_set; // rbx
  std::shared_ptr<Avatar> __r; // [rsp+10h] [rbp-30h] BYREF
  std::weak_ptr<Avatar> __x; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  union_avatar_set = __closure->__union_avatar_set;
  toThisPtr<Avatar>((Avatar *)&__r);
  std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(&__x, &__r);
  std::set<std::weak_ptr<Avatar>,std::owner_less<std::weak_ptr<Avatar>>,std::allocator<std::weak_ptr<Avatar>>>::insert(
    union_avatar_set,
    &__x);
  std::weak_ptr<Avatar>::~weak_ptr(&__x);
  std::shared_ptr<Avatar>::~shared_ptr(&__r);
  return 0;
};

// Line 751: range 0000000015CF518C-0000000015CF5235
bool __cdecl SceneTeam::onSceneTeamChange(std::vector<SceneTeamAvatar> const&)::{lambda(SceneTeamAvatar const&)#2}::operator()(
        const SceneTeam::onSceneTeamChange::<lambda(const SceneTeamAvatar&)> *const __closure,
        const SceneTeamAvatar *avatar)
{
  uint32_t PlayerUid; // ebx
  uint64_t AvatarGuid; // rbx

  PlayerUid = SceneTeamAvatar::getPlayerUid(avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( PlayerUid != SceneTeamAvatar::getPlayerUid(__closure->__scene_team_avatar) )
    return 0;
  AvatarGuid = SceneTeamAvatar::getAvatarGuid(avatar);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return AvatarGuid == SceneTeamAvatar::getAvatarGuid(__closure->__scene_team_avatar);
};

// Line 789: range 0000000015CF614A-0000000015CF68FF
void __cdecl SceneTeam::refreshTeamResonances(
        SceneTeam *const this,
        const std::vector<SceneTeamAvatar> *diff_remove_avatar_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  Player *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  TalentComp *TalentComp; // rax
  const google::protobuf::RepeatedPtrField<proto::AvatarTeamResonanceInfo> *v10; // rax
  SceneTeam::refreshTeamResonances::<lambda(Avatar&)> v11; // [rsp-20h] [rbp-2C0h]
  uint32_t uid; // [rsp+24h] [rbp-27Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-278h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-270h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-268h]
  const std::vector<SceneTeamAvatar> *__for_range_0; // [rsp+40h] [rbp-260h]
  const SceneTeamAvatar *scene_team_avatar; // [rsp+48h] [rbp-258h]
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+50h] [rbp-250h] BYREF
  SceneTeam::refreshTeamResonances::<lambda(Avatar&)> __f; // [rsp+70h] [rbp-230h]
  char v20[528]; // [rsp+90h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 23 total_promote_level:795 48 16 14 player_ptr:804 80 16 14 avatar_ptr:834 112 24 12 elem"
                        "_vec:794 176 24 25 team_resonance_id_vec:828 240 48 25 refresh_ability_guard:790 320 48 20 fight"
                        "_prop_guard:791 400 48 10 notify:831";
  *(_QWORD *)(v2 + 16) = SceneTeam::refreshTeamResonances;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -218959118;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862734] = -202116109;
  RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 240));
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v2 + 320));
  std::vector<data::ElementType>::vector((std::vector<data::ElementType> *const)(v2 + 112));
  *(_DWORD *)(v2 + 32) = 0;
  __for_range = &this->player_uid_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->player_uid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->player_uid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    uid = *v5;
    if ( SceneTeam::isPlayerSceneTeamIdenticalToThis(this, *v5) )
    {
      SceneTeam::findPlayer((const SceneTeam *const)(v2 + 48), (__int64)this, uid);
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 48)) )
      {
        v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Player::getSceneComp(v6);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 80));
        if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 80)) )
        {
          __f.__elem_vec = (std::vector<data::ElementType> *)(v2 + 112);
          __f.__total_promote_level = (uint32_t *)(v2 + 32);
          __f.__refresh_ability_guard = (RefreshAbilityGuard *)(v2 + 240);
          __f.__fight_prop_guard = (FightPropGuard *)(v2 + 320);
          v11.__fight_prop_guard = (FightPropGuard *)(v2 + 320);
          v11.__refresh_ability_guard = (RefreshAbilityGuard *)(v2 + 240);
          v11.__total_promote_level = (uint32_t *)(v2 + 32);
          v11.__elem_vec = (std::vector<data::ElementType> *)(v2 + 112);
          std::function<ForeachPolicy ()(Avatar &)>::function<SceneTeam::refreshTeamResonances(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#1},void,void>(
            &p_func,
            v11);
          SceneTeam::foreachAvatar(this, uid, &p_func);
          std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  TeamResonanceExcelConfigMgr::getSatisfiedTeamResonances(
    (std::vector<unsigned int> *)(v2 + 176),
    &v7->design_config.txt_config_mgr.team_resonance_config_mgr,
    (const std::vector<data::ElementType> *)(v2 + 112),
    *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  proto::TeamResonanceChangeNotify::TeamResonanceChangeNotify((proto::TeamResonanceChangeNotify *const)(v2 + 400));
  __for_range_0 = diff_remove_avatar_vec;
  __for_begin._M_current = (unsigned int *)std::vector<SceneTeamAvatar>::begin(diff_remove_avatar_vec)._M_current;
  __for_end._M_current = (unsigned int *)std::vector<SceneTeamAvatar>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>(
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *)&__for_end) )
  {
    scene_team_avatar = __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
    SceneTeamAvatar::getAvatar((const SceneTeamAvatar *const)(v2 + 80));
    if ( !std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
    {
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      TalentComp = Avatar::getTalentComp(v8);
      TalentComp::clearTeamResonanceTalents(TalentComp, (proto::TeamResonanceChangeNotify *)(v2 + 400));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
    __gnu_cxx::__normal_iterator<SceneTeamAvatar const*,std::vector<SceneTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<const SceneTeamAvatar*,std::vector<SceneTeamAvatar> > *const)&__for_begin);
  }
  std::function<ForeachPolicy ()(Avatar &)>::function<SceneTeam::refreshTeamResonances(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#2},void,void>(
    &p_func,
    (SceneTeam::refreshTeamResonances::<lambda(Avatar&)>_0)__PAIR128__(v2 + 400, v2 + 176));
  SceneTeam::foreachAvatar(this, &p_func);
  std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
  v10 = proto::TeamResonanceChangeNotify::info_list((const proto::TeamResonanceChangeNotify *const)(v2 + 400));
  if ( !google::protobuf::RepeatedPtrField<proto::AvatarTeamResonanceInfo>::empty(v10) )
    SceneTeam::sendProto(this, (const google::protobuf::Message *)(v2 + 400));
  proto::TeamResonanceChangeNotify::~TeamResonanceChangeNotify((proto::TeamResonanceChangeNotify *const)(v2 + 400));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
  std::vector<data::ElementType>::~vector((std::vector<data::ElementType> *const)(v2 + 112));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v2 + 320));
  RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v2 + 240));
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 814: range 0000000015CF5E04-0000000015CF605A
ForeachPolicy __cdecl SceneTeam::refreshTeamResonances(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#1}::operator()(
        const SceneTeam::refreshTeamResonances::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  unsigned __int64 v2; // rax
  std::vector<data::ElementType> *elem_vec; // rbx
  unsigned __int64 v5; // rax
  uint32_t PromoteLevel; // esi
  uint32_t *total_promote_level; // rdx
  int v8; // ecx
  uint32_t *v9; // rdx
  __int64 v10; // rsi
  std::vector<data::ElementType>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)avatar->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Avatar *))v2)(avatar) == 2 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elem_vec = __closure->__elem_vec;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)avatar->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  __x[0] = (*(unsigned __int64 (__fastcall **)(Avatar *))v5)(avatar);
  std::vector<data::ElementType>::push_back(elem_vec, __x);
  PromoteLevel = Avatar::getPromoteLevel(avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__total_promote_level >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  total_promote_level = __closure->__total_promote_level;
  if ( *(_BYTE *)(((unsigned __int64)total_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)total_promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_promote_level >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = *total_promote_level;
  v9 = __closure->__total_promote_level;
  v10 = v8 + PromoteLevel;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__total_promote_level, v10, (_BYTE)v9);
  }
  *v9 = v10;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__fight_prop_guard >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FightPropGuard::addCreature(__closure->__fight_prop_guard, avatar, 0);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__refresh_ability_guard >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  RefreshAbilityGuard::addCreature(__closure->__refresh_ability_guard, avatar);
  return 0;
};

// Line 843: range 0000000015CF605C-0000000015CF6149
ForeachPolicy __cdecl SceneTeam::refreshTeamResonances(std::vector<SceneTeamAvatar> const&)::{lambda(Avatar &)#2}::operator()(
        const SceneTeam::refreshTeamResonances::<lambda(Avatar&)>_0 *const __closure,
        Avatar *avatar)
{
  unsigned __int64 v2; // rax
  TalentComp *TalentComp; // rdi
  proto::TeamResonanceChangeNotify *notify; // rdx

  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)avatar->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Avatar *))v2)(avatar) == 2 )
    return 0;
  TalentComp = Avatar::getTalentComp(avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify >> 3) + 0x7FFF8000) )
  {
    TalentComp = (TalentComp *)&__closure->__notify;
    __asan_report_load8();
  }
  notify = __closure->__notify;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    TalentComp = (TalentComp *)__closure;
    __asan_report_load8();
  }
  TalentComp::refreshTeamResonanceTalents(TalentComp, __closure->__team_resonance_id_vec, notify);
  return 0;
};

// Line 862: range 0000000015CF6900-0000000015CF6974
void __cdecl SceneTeam::refreshCurTeamResonances(SceneTeam *const this)
{
  std::vector<SceneTeamAvatar> diff_remove_avatar_vec; // [rsp+10h] [rbp-30h] BYREF

  memset(&diff_remove_avatar_vec, 0, sizeof(diff_remove_avatar_vec));
  std::vector<SceneTeamAvatar>::vector(&diff_remove_avatar_vec);
  SceneTeam::refreshTeamResonances(this, &diff_remove_avatar_vec);
  std::vector<SceneTeamAvatar>::~vector(&diff_remove_avatar_vec);
};
