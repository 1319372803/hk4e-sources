// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/mirror_avatar.cpp

// Line 22: range 00000000161F5B44-00000000161F5B52
proto::AvatarType __cdecl MirrorAvatar::getAvatarType(const MirrorAvatar *const this)
{
  return 3;
};

// Line 27: range 00000000161F5B54-00000000161F5BD5
int32_t __cdecl MirrorAvatar::fromBin(MirrorAvatar *const this, const proto::AvatarBin *avatar_bin)
{
  __int64 v2; // rsi
  proto::AvatarSnapshotType *p_avatar_snapshot_type; // rdx
  const proto::MirrorAvatarBin *mirror_avatar_bin; // [rsp+18h] [rbp-8h]

  mirror_avatar_bin = proto::AvatarBin::mirror_avatar(avatar_bin);
  v2 = proto::MirrorAvatarBin::avatar_snapshot_type(mirror_avatar_bin);
  p_avatar_snapshot_type = &this->avatar_snapshot_type_;
  if ( *(_BYTE *)(((unsigned __int64)p_avatar_snapshot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_avatar_snapshot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_snapshot_type_, v2, p_avatar_snapshot_type);
  }
  this->avatar_snapshot_type_ = v2;
  return Avatar::fromBin(this, avatar_bin);
};

// Line 34: range 00000000161F5BD6-00000000161F5C59
int32_t __cdecl MirrorAvatar::toBin(MirrorAvatar *const this, proto::AvatarBin *avatar_bin)
{
  proto::MirrorAvatarBin *mirror_avatar_bin; // [rsp+18h] [rbp-8h]

  mirror_avatar_bin = proto::AvatarBin::mutable_mirror_avatar(avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_snapshot_type_);
  }
  proto::MirrorAvatarBin::set_avatar_snapshot_type(mirror_avatar_bin, this->avatar_snapshot_type_);
  return Avatar::toBin(this, avatar_bin);
};

// Line 42: range 00000000161F5C5A-00000000161F68F0
int32_t __cdecl MirrorAvatar::initByAvatar(
        MirrorAvatar *const this,
        Avatar *avatar,
        proto::AvatarSnapshotType avatar_snapshot_type)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  proto::AvatarSkillDepotBin *v13; // rax
  proto::AvatarSkillDepotBin *v14; // rax
  EquipComp *EquipComp; // rax
  Player *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // r14
  unsigned __int64 v24; // rax
  common::milog::MiLogStream *v25; // rdx
  __int64 v26; // rdx
  int32_t result; // eax
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::key_type key; // [rsp+20h] [rbp-420h] BYREF
  float max_energy; // [rsp+24h] [rbp-41Ch]
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin_0; // [rsp+28h] [rbp-418h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end_0; // [rsp+30h] [rbp-410h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *proto_skill_depot_map; // [rsp+38h] [rbp-408h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin> *__for_range; // [rsp+40h] [rbp-400h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range_0; // [rsp+48h] [rbp-3F8h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v36; // [rsp+50h] [rbp-3F0h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+58h] [rbp-3E8h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+60h] [rbp-3E0h]
  uint64_t new_guid; // [rsp+68h] [rbp-3D8h]
  proto::ItemBin *item_bin; // [rsp+70h] [rbp-3D0h]
  const unsigned int *p__; // [rsp+78h] [rbp-3C8h]
  std::shared_ptr<Player> p_player_ptr; // [rsp+80h] [rbp-3C0h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::iterator __for_begin; // [rsp+90h] [rbp-3B0h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::iterator __for_end; // [rsp+B0h] [rbp-390h] BYREF
  common::milog::MiLogStream v45; // [rsp+D0h] [rbp-370h] BYREF
  common::milog::MiLogStream v46; // [rsp+F0h] [rbp-350h] BYREF
  char v47[816]; // [rsp+110h] [rbp-330h] BYREF

  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(768LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 13 player_ptr:43 80 144 20 proto_skill_depot:59 288 408 13 avatar_bin:49";
  *(_QWORD *)(v4 + 16) = MirrorAvatar::initByAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862727] = -218959118;
  v6[536862728] = -218959118;
  v6[536862741] = -218103808;
  v6[536862742] = -202116109;
  v6[536862743] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8(avatar);
  v7 = *(_QWORD *)avatar->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)avatar->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v7)(v4 + 48, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/mirror_avatar.cpp",
      "initByAvatar",
      46);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v46,
           (const char (*)[24])"getPlayer fail, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, avatar);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v9 = -1;
  }
  else
  {
    proto::AvatarBin::AvatarBin((proto::AvatarBin *const)(v4 + 288));
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      __asan_report_load8(avatar);
    v10 = *(_QWORD *)avatar->baseclass_0 + 448LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(*(_QWORD *)avatar->baseclass_0 + 448LL);
    if ( (*(unsigned int (__fastcall **)(Avatar *, unsigned __int64))v10)(avatar, v4 + 288) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/mirror_avatar.cpp",
        "initByAvatar",
        52);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v46,
              (const char (*)[20])"toBin fail, avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, avatar);
      common::milog::MiLogStream::~MiLogStream(&v46);
      v9 = -1;
    }
    else
    {
      v12 = *(unsigned __int8 *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 != 0 && (char)v12 <= 3 )
        __asan_report_load4(&this->avatar_id_);
      proto::AvatarBin::set_avatar_id((proto::AvatarBin *const)(v4 + 288), this->avatar_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->guid_);
      proto::AvatarBin::set_guid((proto::AvatarBin *const)(v4 + 288), this->guid_);
      proto_skill_depot_map = proto::AvatarBin::mutable_depot_map((proto::AvatarBin *const)(v4 + 288));
      proto::AvatarSkillDepotBin::AvatarSkillDepotBin((proto::AvatarSkillDepotBin *const)(v4 + 80));
      if ( proto::AvatarBin::skill_depot_id((const proto::AvatarBin *const)(v4 + 288)) )
      {
        key = proto::AvatarBin::skill_depot_id((const proto::AvatarBin *const)(v4 + 288));
        v13 = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](proto_skill_depot_map, &key);
        proto::AvatarSkillDepotBin::Swap((proto::AvatarSkillDepotBin *const)(v4 + 80), v13);
      }
      google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::clear(proto_skill_depot_map);
      key = proto::AvatarBin::skill_depot_id((const proto::AvatarBin *const)(v4 + 288));
      v14 = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](proto_skill_depot_map, &key);
      proto::AvatarSkillDepotBin::Swap(v14, (proto::AvatarSkillDepotBin *)(v4 + 80));
      __for_range = proto::AvatarBin::mutable_skill_map((proto::AvatarBin *const)(v4 + 288));
      google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::begin(&__for_begin, __for_range);
      google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::end(&__for_end, __for_range);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p__ = (const unsigned int *)google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::iterator::operator*(&__for_begin);
        proto::AvatarSkillBin::clear_pass_cd_time((proto::AvatarSkillBin *const)(p__ + 2));
        proto::AvatarSkillBin::clear_full_cd_time_list((proto::AvatarSkillBin *const)(p__ + 2));
        google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::iterator::operator++(&__for_begin);
      }
      proto::AvatarBin::clear_equip_list((proto::AvatarBin *const)(v4 + 288));
      EquipComp = Avatar::getEquipComp(avatar);
      __for_range_0 = EquipComp::getEquipMap(EquipComp);
      __for_begin_0._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(__for_range_0)._M_node;
      __for_end_0._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v36 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin_0);
        equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v36);
        equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v36);
        if ( !std::operator==<Equip>(0LL, equip_ptr) )
        {
          v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
          BasicComp = Player::getBasicComp(v16);
          new_guid = PlayerBasicComp::genGuid(BasicComp, GUID_ITEM);
          if ( new_guid )
          {
            item_bin = proto::AvatarBin::add_equip_list((proto::AvatarBin *const)(v4 + 288));
            v18 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load8(v18);
            v19 = *(_QWORD *)v18 + 24LL;
            if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
              v18 = __asan_report_load8(*(_QWORD *)v18 + 24LL);
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::ItemBin *))v19)(v18, item_bin) )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/avatar/mirror_avatar.cpp",
                "initByAvatar",
                90);
              v20 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v46,
                      (const char (*)[30])"equip toBin fail, equip_type:");
              v21 = common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v20, equip_type);
              v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" avatar:");
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v22, avatar);
              common::milog::MiLogStream::~MiLogStream(&v46);
            }
            else
            {
              proto::ItemBin::set_guid(item_bin, new_guid);
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/avatar/mirror_avatar.cpp",
                "initByAvatar",
                94);
              v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      &v45,
                      (const char (*)[10])"item_bin:");
              google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v46, item_bin);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v46);
              std::string::~string(&v46);
              common::milog::MiLogStream::~MiLogStream(&v45);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/mirror_avatar.cpp",
              "initByAvatar",
              84);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v46, (const char (*)[14])"new_guid is 0");
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
        }
        std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin_0);
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v24 = *(_QWORD *)this->baseclass_0 + 440LL;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        v24 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 440LL);
      if ( (*(unsigned int (__fastcall **)(MirrorAvatar *const, unsigned __int64))v24)(this, v4 + 288) )
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/mirror_avatar.cpp",
          "initByAvatar",
          99);
        v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v46,
                (const char (*)[22])"fromBin fail, avatar:");
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v25, avatar);
        common::milog::MiLogStream::~MiLogStream(&v46);
        v9 = -1;
      }
      else
      {
        v26 = (*(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v26 )
          __asan_report_store4(&this->life_state_, (((_BYTE)this - 4) & 7u) + 3, v26);
        this->life_state_ = LIFE_ALIVE;
        std::shared_ptr<Player>::shared_ptr(&p_player_ptr, (const std::shared_ptr<Player> *)(v4 + 48));
        Avatar::setPlayer(this, &p_player_ptr);
        std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
        Avatar::init(this, 0);
        Creature::setCurHpFull(this, 1);
        *(float *)v3.m128i_i32 = FightPropComp::getMaxEnergy(&this->fight_prop_comp_);
        LODWORD(max_energy) = _mm_cvtsi128_si32(v3);
        std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_player_ptr, 0LL);
        FightPropComp::setCurEnergy(&this->fight_prop_comp_, max_energy, 0, (FightPropNtfParamPtr *)&p_player_ptr);
        std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_player_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->avatar_snapshot_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->avatar_snapshot_type_, 0LL, &this->avatar_snapshot_type_);
        }
        this->avatar_snapshot_type_ = avatar_snapshot_type;
        v9 = 0;
      }
      proto::AvatarSkillDepotBin::~AvatarSkillDepotBin((proto::AvatarSkillDepotBin *const)(v4 + 80));
    }
    proto::AvatarBin::~AvatarBin((proto::AvatarBin *const)(v4 + 288));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 48));
  result = v9;
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 00000000161F68F2-00000000161F6C09
int32_t __cdecl MirrorAvatar::toClient(const MirrorAvatar *const this, proto::AvatarInfo *avatar_info)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  EquipComp *EquipComp; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  unsigned int val; // [rsp+14h] [rbp-7Ch] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::TrialAvatarInfo *proto_trial_avatar; // [rsp+28h] [rbp-68h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *equip_map; // [rsp+30h] [rbp-60h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v18; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+50h] [rbp-40h]
  proto::Item *proto_item; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-30h] BYREF

  if ( Avatar::toClient(this, avatar_info) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/mirror_avatar.cpp",
      "toClient",
      117);
    v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v22,
           (const char (*)[30])"avatar toClient failed, guid:");
    v3 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v2, &this->guid_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    val = Avatar::getUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
  else
  {
    proto_trial_avatar = proto::AvatarInfo::mutable_trial_avatar_info(avatar_info);
    EquipComp = Avatar::getEquipComp(this);
    equip_map = EquipComp::getEquipMap(EquipComp);
    __for_range = equip_map;
    __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(equip_map)._M_node;
    __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(equip_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
      equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v18);
      equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v18);
      if ( !std::operator==<Equip>(equip_ptr, 0LL) )
      {
        proto_item = proto::TrialAvatarInfo::add_trial_equip_list(proto_trial_avatar);
        v7 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 32LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 32LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::Item *))v8)(v7, proto_item) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/mirror_avatar.cpp",
            "toClient",
            131);
          v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                 &v22,
                 (const char (*)[33])"equip_ptr toClient failed, guid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &this->guid_);
          v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
          val = Avatar::getUid(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
          return -1;
        }
      }
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 139: range 00000000161F6C0A-00000000161F6D9D
float __fastcall MirrorAvatar::getMirrorAvatarCurProp(
        const MirrorAvatar *const this,
        const std::map<data::FightPropType,float> *prop_map,
        data::FightPropType prop_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::pointer v7; // rdx
  float *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 prop_type:138 64 8 8 iter:140";
  *(_QWORD *)(v3 + 16) = MirrorAvatar::getMirrorAvatarCurProp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = prop_type;
  *(std::map<data::FightPropType,float>::const_iterator *)(v3 + 64) = std::map<data::FightPropType,float>::find(
                                                                        prop_map,
                                                                        (const std::map<data::FightPropType,float>::key_type *)(v3 + 48));
  __y._M_node = std::map<data::FightPropType,float>::end(prop_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0.0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)(v3 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v7->second;
  }
  if ( v11 == (char *)v3 )
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
