// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/trial_avatar.cpp

// Line 32: range 00000000161F9858-00000000161F9866
proto::AvatarType __cdecl TrialAvatar::getAvatarType(const TrialAvatar *const this)
{
  return 2;
};

// Line 38: range 00000000161F9868-00000000161F9993
std::string *__cdecl TrialAvatar::getDesc[abi:cxx11](std::string *retstr, const TrialAvatar *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-51h] BYREF
  std::string __lhs; // [rsp+20h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-30h] BYREF

  Avatar::getDesc[abi:cxx11](&__rhs, this);
  std::allocator<char>::allocator(&__a, this);
  std::string::basic_string<std::allocator<char>>(&__lhs, "trial_avatar:", &__a);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 43: range 00000000161F9994-00000000161F9BFB
int32_t __cdecl TrialAvatar::fromBin(TrialAvatar *const this, const proto::AvatarBin *avatar_bin)
{
  __m128i v2; // xmm0
  uint64_t v3; // rax
  google::protobuf::uint32 v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // al
  bool is_inherit; // cl
  char v11; // dl
  const proto::TrialAvatarGrantRecordBin *v12; // rsi
  __int64 v13; // rdx
  const proto::AvatarBin *avatar_bina; // [rsp+0h] [rbp-40h]
  float cur_elem_engery; // [rsp+14h] [rbp-2Ch]
  const proto::TrialAvatarBin *trial_avatar_bin; // [rsp+18h] [rbp-28h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+20h] [rbp-20h] BYREF

  avatar_bina = avatar_bin;
  v3 = proto::AvatarBin::guid(avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    v3 = __asan_report_store8(&this->guid_, avatar_bin);
  this->guid_ = v3;
  v4 = proto::AvatarBin::life_state(avatar_bin);
  v5 = *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000);
  LOBYTE(avatar_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this - 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->life_state_, avatar_bin, v6);
  this->life_state_ = v4;
  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
  *(float *)v2.m128i_i32 = proto::AvatarBin::cur_hp(avatar_bina);
  v7 = 0LL;
  FightPropComp::setCurHp(&this->fight_prop_comp_, *(float *)v2.m128i_i32, 0, &p_param_ptr);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
  *(float *)v2.m128i_i32 = proto::AvatarBin::cur_elem_energy(avatar_bina);
  cur_elem_engery = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( cur_elem_engery > 0.00000011920929 )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
    v7 = 0LL;
    FightPropComp::setCurEnergy(&this->fight_prop_comp_, cur_elem_engery, 0, &p_param_ptr);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
  }
  trial_avatar_bin = proto::AvatarBin::trial_avatar(avatar_bina);
  v8 = proto::TrialAvatarBin::trial_avatar_id(trial_avatar_bin);
  v9 = *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->trial_avatar_id_, v7, v8);
  }
  this->trial_avatar_id_ = v8;
  v12 = proto::TrialAvatarBin::grant_record_bin(trial_avatar_bin);
  proto::TrialAvatarGrantRecordBin::CopyFrom(&this->grant_record_bin_, v12);
  is_inherit = proto::TrialAvatarBin::is_inherit(trial_avatar_bin);
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v11 != 0;
  v13 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v11);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_inherit_, v12, v13);
  this->is_inherit_ = is_inherit;
  return 0;
};

// Line 60: range 00000000161F9BFC-00000000161F9E1F
int32_t __cdecl TrialAvatar::toBin(TrialAvatar *const this, proto::AvatarBin *avatar_bin)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx
  float CurHp; // xmm0_4
  float CurEnergy; // xmm0_4
  proto::TrialAvatarGrantRecordBin *v6; // rax
  proto::TrialAvatarBin *trial_avatar_bin; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  v3 = (*(__int64 (__fastcall **)(TrialAvatar *const))v2)(this);
  proto::AvatarBin::set_avatar_type(avatar_bin, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::AvatarBin::set_guid(avatar_bin, this->guid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  proto::AvatarBin::set_life_state(avatar_bin, this->life_state_);
  CurHp = Creature::getCurHp(this);
  proto::AvatarBin::set_cur_hp(avatar_bin, CurHp);
  CurEnergy = FightPropComp::getCurEnergy(&this->fight_prop_comp_);
  proto::AvatarBin::set_cur_elem_energy(avatar_bin, CurEnergy);
  trial_avatar_bin = proto::AvatarBin::mutable_trial_avatar(avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_id_);
  }
  proto::TrialAvatarBin::set_trial_avatar_id(trial_avatar_bin, this->trial_avatar_id_);
  v6 = proto::TrialAvatarBin::mutable_grant_record_bin(trial_avatar_bin);
  proto::TrialAvatarGrantRecordBin::CopyFrom(v6, &this->grant_record_bin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_inherit_);
  }
  proto::TrialAvatarBin::set_is_inherit(trial_avatar_bin, this->is_inherit_);
  return 0;
};

// Line 74: range 00000000161F9E20-00000000161FA179
int32_t __cdecl TrialAvatar::toClient(const TrialAvatar *const this, proto::AvatarInfo *avatar_info)
{
  common::milog::MiLogStream *v2; // rax
  EquipComp *EquipComp; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  google::protobuf::uint32 v8; // eax
  google::protobuf::uint32 v9; // eax
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<data::EquipType,std::shared_ptr<Equip>>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  proto::TrialAvatarInfo *proto_trial_avatar; // [rsp+20h] [rbp-70h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *equip_map; // [rsp+28h] [rbp-68h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+30h] [rbp-60h]
  proto::TrialAvatarGrantRecord *proto; // [rsp+38h] [rbp-58h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v16; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+50h] [rbp-40h]
  proto::Item *proto_item; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  if ( Avatar::toClient(this, avatar_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "toClient",
      77);
    v2 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v20,
           (const char (*)[41])"avatar toClient failed, trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->trial_avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    proto_trial_avatar = proto::AvatarInfo::mutable_trial_avatar_info(avatar_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->trial_avatar_id_);
    }
    proto::TrialAvatarInfo::set_trial_avatar_id(proto_trial_avatar, this->trial_avatar_id_);
    EquipComp = Avatar::getEquipComp(this);
    equip_map = EquipComp::getEquipMap(EquipComp);
    __for_range = equip_map;
    __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(equip_map)._M_node;
    __for_end._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::end(equip_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*(&__for_begin);
      equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v16);
      equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v16);
      if ( !std::operator==<Equip>(equip_ptr, 0LL) )
      {
        proto_item = proto::TrialAvatarInfo::add_trial_equip_list(proto_trial_avatar);
        v5 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8(v5);
        v6 = *(_QWORD *)v5 + 32LL;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::Item *))v6)(v5, proto_item) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/trial_avatar.cpp",
            "toClient",
            93);
          v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                 &v20,
                 (const char (*)[44])"equip_ptr toClient failed, trial_avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->trial_avatar_id_);
          common::milog::MiLogStream::~MiLogStream(&v20);
          return -1;
        }
      }
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++(&__for_begin);
    }
    proto = proto::TrialAvatarInfo::mutable_grant_record(proto_trial_avatar);
    v8 = proto::TrialAvatarGrantRecordBin::grant_reason(&this->grant_record_bin_);
    proto::TrialAvatarGrantRecord::set_grant_reason(proto, v8);
    v9 = proto::TrialAvatarGrantRecordBin::from_parent_quest_id(&this->grant_record_bin_);
    proto::TrialAvatarGrantRecord::set_from_parent_quest_id(proto, v9);
    return 0;
  }
};

// Line 105: range 00000000161FA17A-00000000161FA233
int32_t __cdecl TrialAvatar::initByCreate(TrialAvatar *const this, bool is_inherit)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = ((_BYTE)this + 92) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_inherit_, v2, v3);
  this->is_inherit_ = is_inherit;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 408LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 408LL);
  return (*(__int64 (__fastcall **)(TrialAvatar *const, __int64))v4)(this, 1LL);
};

// Line 111: range 00000000161FA234-00000000161FA85D
int32_t __cdecl TrialAvatar::init(TrialAvatar *const this, bool is_on_create)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  EquipComp *EquipComp; // r14
  std::vector<std::shared_ptr<Equip>> *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  FashionComp *FashionComp; // rax
  int32_t result; // eax
  std::vector<std::shared_ptr<Equip>> p_equip_ptr_vec; // [rsp+10h] [rbp-F0h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-D0h] BYREF
  std::string name; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 equip_ptr_vec:122";
  *(_QWORD *)(v2 + 16) = TrialAvatar::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->trial_avatar_id_);
  std::operator+<char>(&name, "TrialAvatar_", &__rhs);
  Entity::setName((Entity *const)this, &name);
  std::string::~string(&name);
  std::string::~string(&__rhs);
  if ( Avatar::initTimer(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "init",
      118);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[35])"initTimer failed, trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->trial_avatar_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    std::vector<std::shared_ptr<Equip>>::vector((std::vector<std::shared_ptr<Equip>> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inherit_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_inherit_);
    }
    if ( TrialAvatar::initTrialConfig(this, (std::vector<std::shared_ptr<Equip>> *)(v2 + 32), this->is_inherit_) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/trial_avatar.cpp",
        "init",
        125);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[41])"initTrialConfig failed, trial_avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->trial_avatar_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      EquipComp = Avatar::getEquipComp(this);
      v9 = std::move<std::vector<std::shared_ptr<Equip>> &>((std::vector<std::shared_ptr<Equip>> *)(v2 + 32));
      std::vector<std::shared_ptr<Equip>>::vector(&p_equip_ptr_vec, v9);
      LOBYTE(EquipComp) = EquipComp::init(EquipComp, &p_equip_ptr_vec) != 0;
      std::vector<std::shared_ptr<Equip>>::~vector(&p_equip_ptr_vec);
      if ( (_BYTE)EquipComp )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/trial_avatar.cpp",
          "init",
          131);
        v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)&name,
                (const char (*)[27])"getEquipComp().init failed");
        common::milog::MiLogStream::operator<<<TrialAvatar,(TrialAvatar*)0>(v10, this);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = -1;
      }
      else if ( Avatar::enableAllTalent(this) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/trial_avatar.cpp",
          "init",
          137);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          (common::milog::MiLogStream *const)&name,
          (const char (*)[22])"enableAllTalent fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = -1;
      }
      else
      {
        FashionComp = Avatar::getFashionComp(this);
        if ( FashionComp::init(FashionComp) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&name,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/trial_avatar.cpp",
            "init",
            143);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[19])"init Fashion fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
          v6 = -1;
        }
        else
        {
          Creature::calcProp(this);
          if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_inited_, &p_equip_ptr_vec, &this->is_inited_);
          this->is_inited_ = 1;
          v6 = 0;
        }
      }
    }
    std::vector<std::shared_ptr<Equip>>::~vector((std::vector<std::shared_ptr<Equip>> *const)(v2 + 32));
  }
  result = v6;
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

// Line 153: range 00000000161FA85E-00000000161FD97B
int32_t __cdecl TrialAvatar::initTrialConfig(
        TrialAvatar *const this,
        std::vector<std::shared_ptr<Equip>> *equip_ptr_vec,
        bool is_inherit)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  TrialAvatar *v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  Player *v14; // rax
  int v15; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  TrialAvatar *v19; // rdx
  TalentComp *TalentComp; // rax
  uint32_t level; // ecx
  uint32_t DynamicLevelByWorldLevel; // ecx
  char v23; // dl
  _BOOL8 is_dynamic_level; // rsi
  __int64 v25; // rdx
  const AvatarExcelConfigMgr *p_level; // rdi
  uint32_t v27; // edx
  bool v28; // r15
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  char *v35; // rsi
  uint32_t promote_level; // ecx
  char v37; // dl
  __int64 v38; // rdx
  const AvatarExcelConfigMgr *p_promote_level; // rdi
  uint32_t v40; // edx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint32_t v47; // ecx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  char *v54; // rsi
  uint32_t unlock_max_level; // ecx
  char v56; // dl
  __int64 v57; // rdx
  TrialAvatarExcelConfigMgr *v58; // rcx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  Player *v62; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  uint32_t v70; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  bool v72; // r15
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  Weapon *v94; // rax
  Weapon *v95; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // r15
  unsigned __int64 v98; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rsi
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  std::vector<unsigned int> *p_trial_reliquary_list; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v104; // rax
  _DWORD *v105; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v106; // rax
  common::milog::MiLogStream *v107; // rax
  Player *v108; // rax
  PlayerItemComp *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  _BOOL4 v113; // r15d
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  int v117; // r15d
  Reliquary *v118; // rcx
  Reliquary *v119; // rcx
  Reliquary *v120; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v121; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v122; // r15
  unsigned __int64 v123; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v124; // rsi
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v128; // rax
  common::milog::MiLogStream *v129; // rax
  Player *v130; // rax
  uint32_t AvatarComp; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v133; // rax
  TalentComp *v134; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v135; // rax
  _DWORD *v136; // rdx
  TalentComp *v137; // rax
  common::milog::MiLogStream *v138; // rax
  std::vector<unsigned int> *p_trial_talent_list; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v140; // rax
  _DWORD *v141; // rdx
  std::vector<unsigned int>::size_type v142; // r14
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v148; // rax
  uint32_t *v149; // rdx
  TalentComp *v150; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  std::vector<unsigned int> *p_trial_inherent_proud_skill_list; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v156; // rax
  _DWORD *v157; // rdx
  std::vector<data::ProudSkillOpenConfig>::size_type v158; // r14
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // r14
  std::vector<data::ProudSkillOpenConfig>::const_reference v164; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v165; // rax
  TalentComp *v166; // r14
  Player *v167; // rax
  TalentComp *v168; // rax
  SkillComp *SkillComp; // rax
  common::milog::MiLogStream *v170; // rdx
  uint32_t trial_avatar_skill_level; // eax
  SkillComp *v172; // r14
  Player *v173; // rax
  int32_t result; // eax
  unsigned int (__fastcall *v175)(std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // [rsp+10h] [rbp-2F0h]
  unsigned int (__fastcall *v176)(std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // [rsp+10h] [rbp-2F0h]
  uint32_t world_level; // [rsp+30h] [rbp-2D0h]
  uint32_t talent_id; // [rsp+34h] [rbp-2CCh]
  uint32_t skill_level; // [rsp+38h] [rbp-2C8h]
  uint32_t proud_skill_group_id; // [rsp+3Ch] [rbp-2C4h]
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-2C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-2B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-2B0h] BYREF
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+58h] [rbp-2A8h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+60h] [rbp-2A0h]
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+68h] [rbp-298h]
  const data::TrialAvatarTemplateExcelConfig *template_config_ptr; // [rsp+70h] [rbp-290h]
  const data::WeaponPromoteExcelConfig *weapon_promote_config_ptr; // [rsp+78h] [rbp-288h]
  const std::vector<unsigned int> *__for_range; // [rsp+80h] [rbp-280h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+88h] [rbp-278h]
  const std::vector<unsigned int> *talent_vec; // [rsp+90h] [rbp-270h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+98h] [rbp-268h]
  std::vector<unsigned int> *__for_range_0; // [rsp+A0h] [rbp-260h]
  const std::vector<data::ProudSkillOpenConfig> *proud_skill_open_vec; // [rsp+A8h] [rbp-258h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+B0h] [rbp-250h]
  const data::TrialReliquaryExcelConfig *trial_reliquary_config_ptr; // [rsp+B8h] [rbp-248h]
  std::shared_ptr<Config> v200; // [rsp+C0h] [rbp-240h] BYREF
  common::milog::MiLogStream v201; // [rsp+D0h] [rbp-230h] BYREF
  char v202[528]; // [rsp+F0h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v202;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 48 4 18 skill_depot_id:176 64 4 13 weapon_id:226 80 4 16 weapon_level:243 96 4 24 weapon_prom"
                        "ote_level:244 112 4 26 core_proud_skill_level:350 128 4 21 proud_skill_index:368 144 4 18 proud_"
                        "skill_id:379 160 16 14 player_ptr:154 192 16 16 weapon_param:227 224 16 12 item_ptr:228 256 16 1"
                        "4 weapon_ptr:236 288 16 19 reliquary_param:281 320 16 12 item_ptr:282 352 16 21 formal_avatar_pt"
                        "r:317 384 16 21 player_avatar_ptr:183 416 24 19 proud_skill_vec:348";
  *(_QWORD *)(v4 + 16) = TrialAvatar::initTrialConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v8 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, TrialAvatar *))v8)(v4 + 160, v7);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      157);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v201,
           (const char (*)[33])"getPlayer fail, trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->trial_avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v201);
    v3 = -1;
    goto LABEL_199;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 384));
  p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.trial_avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_id_);
  }
  trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                              p_trial_avatar_config_mgr,
                              this->trial_avatar_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
  if ( !trial_avatar_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      164);
    v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v201,
            (const char (*)[52])"findTrialAvatarExcelConfig failed, trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->trial_avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v201);
    v3 = -1;
    goto LABEL_199;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 384));
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
  }
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
                        p_avatar_config_mgr,
                        trial_avatar_config_ptr->avatar.avatar_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
  if ( !avatar_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      171);
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v201,
            (const char (*)[35])"findAvatarConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v13,
      &trial_avatar_config_ptr->avatar.avatar_id);
    common::milog::MiLogStream::~MiLogStream(&v201);
    v3 = -1;
    goto LABEL_199;
  }
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)trial_avatar_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_skill_depot_id >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&trial_avatar_config_ptr->trial_skill_depot_id);
  }
  *(_DWORD *)(v4 + 48) = trial_avatar_config_ptr->trial_skill_depot_id;
  if ( *(_DWORD *)(v4 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
    }
    if ( trial_avatar_config_ptr->avatar.avatar_id == *(_DWORD *)(v4 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&avatar_config_ptr->avatar_identity_type);
      }
      if ( avatar_config_ptr->avatar_identity_type == AVATAR_IDENTITY_MASTER )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        Player::getAvatarComp(v14);
        PlayerAvatarComp::getPlayerAvatarPtr((PlayerAvatarComp *const)(v4 + 384));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 384)) )
        {
          common::milog::MiLogStream::create(
            &v201,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/avatar/trial_avatar.cpp",
            "initTrialConfig",
            186);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v201,
            (const char (*)[26])"getPlayerAvatarPtr failed");
          common::milog::MiLogStream::~MiLogStream(&v201);
          v3 = -1;
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
          *(_DWORD *)(v4 + 48) = Avatar::getSkillDepotId(v16);
          v15 = 1;
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 384));
        if ( v15 != 1 )
          goto LABEL_199;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->skill_depot_id);
    }
    *(_DWORD *)(v4 + 48) = avatar_config_ptr->skill_depot_id;
  }
  v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
  BasicComp = Player::getBasicComp(v17);
  world_level = PlayerBasicComp::getWorldLevel(BasicComp);
  v19 = this;
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
  }
  Avatar::setAvatarId(v19, trial_avatar_config_ptr->avatar.avatar_id);
  Avatar::setSkillDepotId(this, *(_DWORD *)(v4 + 48));
  Creature::setLifeState(this, LIFE_ALIVE);
  TalentComp = Avatar::getTalentComp(this);
  TalentComp::checkOpenSkillDepot(TalentComp);
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)trial_avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.level >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&trial_avatar_config_ptr->avatar.level);
  }
  level = trial_avatar_config_ptr->avatar.level;
  if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_dynamic_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&trial_avatar_config_ptr->is_dynamic_level);
  is_dynamic_level = trial_avatar_config_ptr->is_dynamic_level;
  DynamicLevelByWorldLevel = TrialAvatar::getDynamicLevelByWorldLevel(this, is_dynamic_level, world_level, level);
  v23 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  LOBYTE(is_dynamic_level) = v23 != 0;
  v25 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= v23);
  if ( (_BYTE)v25 )
    __asan_report_store4(&this->level_, is_dynamic_level, v25);
  this->level_ = DynamicLevelByWorldLevel;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 384));
  p_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    p_level = (const AvatarExcelConfigMgr *)&this->level_;
    __asan_report_load4(&this->level_);
  }
  v27 = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_level = (const AvatarExcelConfigMgr *)&trial_avatar_config_ptr->avatar.avatar_id;
    __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
  }
  v28 = AvatarExcelConfigMgr::findPromoteLevelByAvatarIdAndLevel(
          p_level,
          trial_avatar_config_ptr->avatar.avatar_id,
          v27,
          &this->promote_level_) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
  if ( v28 )
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      203);
    v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v201,
            (const char (*)[38])"find promote_level failed avatar_id: ");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v29,
            &trial_avatar_config_ptr->avatar.avatar_id);
    v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" level: ");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->level_);
    v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" uid: ");
    v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    *(_DWORD *)(v4 + 144) = Player::getUid(v34);
    v35 = (char *)(v4 + 144);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 144));
    common::milog::MiLogStream::~MiLogStream(&v201);
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.promote_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.promote_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config_ptr->avatar.promote_level);
    }
    promote_level = trial_avatar_config_ptr->avatar.promote_level;
    v37 = *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000);
    LOBYTE(v35) = v37 != 0;
    v38 = (v37 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v37);
    if ( (_BYTE)v38 )
      __asan_report_store4(&this->promote_level_, v35, v38);
    this->promote_level_ = promote_level;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 384));
  p_promote_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    p_promote_level = (const AvatarExcelConfigMgr *)&this->promote_level_;
    __asan_report_load4(&this->promote_level_);
  }
  v40 = this->promote_level_;
  if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_promote_level = (const AvatarExcelConfigMgr *)&trial_avatar_config_ptr->avatar.avatar_id;
    __asan_report_load4(&trial_avatar_config_ptr->avatar.avatar_id);
  }
  avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                p_promote_level,
                                trial_avatar_config_ptr->avatar.avatar_id,
                                v40);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
  if ( avatar_promote_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    v47 = this->level_;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_promote_config_ptr->unlock_max_level);
    }
    if ( v47 > avatar_promote_config_ptr->unlock_max_level )
    {
      common::milog::MiLogStream::create(
        &v201,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/trial_avatar.cpp",
        "initTrialConfig",
        213);
      v48 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v201,
              (const char (*)[47])"trial_avatar level > promote_max_level level: ");
      v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->level_);
      v50 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v49,
              (const char (*)[21])" promote_max_level: ");
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v50,
              &avatar_promote_config_ptr->unlock_max_level);
      v52 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v51, (const char (*)[7])" uid: ");
      v53 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
      *(_DWORD *)(v4 + 144) = Player::getUid(v53);
      v54 = (char *)(v4 + 144);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v4 + 144));
      common::milog::MiLogStream::~MiLogStream(&v201);
      if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&avatar_promote_config_ptr->unlock_max_level);
      }
      unlock_max_level = avatar_promote_config_ptr->unlock_max_level;
      v56 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
      LOBYTE(v54) = v56 != 0;
      v57 = (v56 != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= v56);
      if ( (_BYTE)v57 )
        __asan_report_store4(&this->level_, v54, v57);
      this->level_ = unlock_max_level;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      209);
    v41 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v201,
            (const char (*)[46])"findAvatarPromoteExcelConfig fail avatar_id: ");
    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v41,
            &trial_avatar_config_ptr->avatar.avatar_id);
    v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v42, (const char (*)[17])" promote_level: ");
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &this->promote_level_);
    v45 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v44, (const char (*)[7])" uid: ");
    v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    *(_DWORD *)(v4 + 144) = Player::getUid(v46);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v4 + 144));
    common::milog::MiLogStream::~MiLogStream(&v201);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 384));
  v58 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384))->design_config.txt_config_mgr.trial_avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  template_config_ptr = TrialAvatarExcelConfigMgr::findTrialAvatarTemplateConfig(v58, this->level_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
  if ( template_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.weapon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.weapon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config_ptr->weapon.weapon_id);
    }
    *(_DWORD *)(v4 + 64) = trial_avatar_config_ptr->weapon.weapon_id;
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
    *(_DWORD *)(v4 + 196) = 1;
    *(_DWORD *)(v4 + 192) = *(_DWORD *)(v4 + 64);
    v62 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    ItemComp = Player::getItemComp(v62);
    PlayerItemComp::createTrialEquip((PlayerItemComp *const)(v4 + 320), (const ItemParam *)ItemComp);
    std::shared_ptr<Item>::shared_ptr<Equip,void>(
      (std::shared_ptr<Item> *const)(v4 + 224),
      (std::shared_ptr<Equip> *)(v4 + 320));
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 320));
    if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v4 + 224), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v201,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/trial_avatar.cpp",
        "initTrialConfig",
        231);
      v64 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v201,
              (const char (*)[38])"createWeapon failed, trial_avatar_id:");
      v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &this->trial_avatar_id_);
      v66 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v65, (const char (*)[12])" weapon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v201);
      v3 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<Weapon,Item>((const std::shared_ptr<Item> *)(v4 + 256));
      if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v4 + 256), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v201,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/trial_avatar.cpp",
          "initTrialConfig",
          239);
        v67 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v201,
                (const char (*)[46])"dynamic_pointer_cast failed, trial_avatar_id:");
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &this->trial_avatar_id_);
        v69 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v68, (const char (*)[12])" weapon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v201);
        v3 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)trial_avatar_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.level >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&trial_avatar_config_ptr->weapon.level);
        }
        v70 = trial_avatar_config_ptr->weapon.level;
        if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_dynamic_level >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&trial_avatar_config_ptr->is_dynamic_level);
        *(_DWORD *)(v4 + 80) = TrialAvatar::getDynamicLevelByWorldLevel(
                                 this,
                                 trial_avatar_config_ptr->is_dynamic_level,
                                 world_level,
                                 v70);
        *(_DWORD *)(v4 + 96) = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 384));
        v71 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
        v72 = WeaponExcelConfigMgr::findPromoteLevelByWeaponIdAndLevel(
                &v71->design_config.txt_config_mgr.weapon_config_mgr,
                *(_DWORD *)(v4 + 64),
                *(_DWORD *)(v4 + 80),
                (uint32_t *)(v4 + 96)) != 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
        if ( v72 )
        {
          common::milog::MiLogStream::create(
            &v201,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/trial_avatar.cpp",
            "initTrialConfig",
            247);
          v73 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v201,
                  (const char (*)[52])"findPromoteLevelByWeaponIdAndLevel fail, weapon_id:");
          v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v73,
                  (const unsigned int *)(v4 + 64));
          v75 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v74,
                  (const char (*)[15])" weapon_level:");
          v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v75,
                  (const unsigned int *)(v4 + 80));
          v77 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v76, (const char (*)[6])" uid:");
          v78 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          *(_DWORD *)(v4 + 144) = Player::getUid(v78);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)(v4 + 144));
          common::milog::MiLogStream::~MiLogStream(&v201);
          if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.promote_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->weapon.promote_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&trial_avatar_config_ptr->weapon.promote_level);
          }
          *(_DWORD *)(v4 + 96) = trial_avatar_config_ptr->weapon.promote_level;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 384));
        v79 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
        weapon_promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(
                                      &v79->design_config.txt_config_mgr.weapon_config_mgr,
                                      *(_DWORD *)(v4 + 64),
                                      *(_DWORD *)(v4 + 96));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
        if ( weapon_promote_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&weapon_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&weapon_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&weapon_promote_config_ptr->unlock_max_level);
          }
          if ( weapon_promote_config_ptr->unlock_max_level < *(_DWORD *)(v4 + 80) )
          {
            common::milog::MiLogStream::create(
              &v201,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/avatar/trial_avatar.cpp",
              "initTrialConfig",
              257);
            v86 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    &v201,
                    (const char (*)[63])"trial avatar's weapon level > promote_max_level, weapon_level:");
            v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v86,
                    (const unsigned int *)(v4 + 80));
            v88 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v87,
                    (const char (*)[23])" weapon_promote_level:");
            v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v88,
                    (const unsigned int *)(v4 + 96));
            v90 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v89,
                    (const char (*)[19])" unlock_max_level:");
            v91 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v90,
                    &weapon_promote_config_ptr->unlock_max_level);
            v92 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v91, (const char (*)[6])" uid:");
            v93 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            *(_DWORD *)(v4 + 144) = Player::getUid(v93);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v92,
              (const unsigned int *)(v4 + 144));
            common::milog::MiLogStream::~MiLogStream(&v201);
            if ( *(_BYTE *)(((unsigned __int64)&weapon_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&weapon_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&weapon_promote_config_ptr->unlock_max_level);
            }
            *(_DWORD *)(v4 + 80) = weapon_promote_config_ptr->unlock_max_level;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v201,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/trial_avatar.cpp",
            "initTrialConfig",
            253);
          v80 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v201,
                  (const char (*)[46])"findWeaponPromoteExcelConfig fail, weapon_id:");
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v80,
                  (const unsigned int *)(v4 + 64));
          v82 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v81,
                  (const char (*)[23])" weapon_promote_level:");
          v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v82,
                  (const unsigned int *)(v4 + 96));
          v84 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v83, (const char (*)[6])" uid:");
          v85 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          *(_DWORD *)(v4 + 144) = Player::getUid(v85);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, (const unsigned int *)(v4 + 144));
          common::milog::MiLogStream::~MiLogStream(&v201);
        }
        v94 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        Weapon::setLevel(v94, *(_DWORD *)(v4 + 80));
        v95 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        Weapon::setPromoteLevel(v95, *(_DWORD *)(v4 + 96));
        v96 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
        v97 = v96;
        if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v96);
        v98 = (unsigned __int64)(v97->_vptr_Item + 6);
        if ( *(_BYTE *)((v98 >> 3) + 0x7FFF8000) )
          v98 = __asan_report_load8(v97->_vptr_Item + 6);
        v175 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v98;
        v99 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( v175(v97, v99, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v201,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/trial_avatar.cpp",
            "initTrialConfig",
            265);
          v100 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                   &v201,
                   (const char (*)[41])"weapon_ptr init failed, trial_avatar_id:");
          v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, &this->trial_avatar_id_);
          v102 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                   v101,
                   (const char (*)[12])" weapon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v102, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v201);
          v3 = -1;
        }
        else
        {
          std::shared_ptr<Equip>::shared_ptr<Weapon,void>(
            (std::shared_ptr<Equip> *const)(v4 + 384),
            (const std::shared_ptr<Weapon> *)(v4 + 256));
          std::vector<std::shared_ptr<Equip>>::push_back(
            equip_ptr_vec,
            (std::vector<std::shared_ptr<Equip>>::value_type *)(v4 + 384));
          std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 384));
          if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_trial_reliquary_list_use_template >> 3)
                       + 0x7FFF8000) < 0 )
            __asan_report_load1(&trial_avatar_config_ptr->is_trial_reliquary_list_use_template);
          if ( trial_avatar_config_ptr->is_trial_reliquary_list_use_template )
            p_trial_reliquary_list = &template_config_ptr->trial_reliquary_list;
          else
            p_trial_reliquary_list = &trial_avatar_config_ptr->trial_reliquary_list;
          __for_range = p_trial_reliquary_list;
          __for_end_0._M_current = std::vector<unsigned int>::begin(p_trial_reliquary_list)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_end_0, &__for_end) )
          {
            v104 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_end_0);
            v105 = v104;
            if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v104 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v104);
            }
            *(_DWORD *)(v4 + 128) = *v105;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v200);
            v106 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v200);
            trial_reliquary_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig(
                                           &v106->design_config.txt_config_mgr.trial_avatar_config_mgr,
                                           *(_DWORD *)(v4 + 128));
            std::shared_ptr<Config>::~shared_ptr(&v200);
            if ( !trial_reliquary_config_ptr )
            {
              common::milog::MiLogStream::create(
                &v201,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/avatar/trial_avatar.cpp",
                "initTrialConfig",
                276);
              v107 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                       &v201,
                       (const char (*)[58])"findTrialReliquaryExcelConfig failed, trial_reliquary_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v107,
                (const unsigned int *)(v4 + 128));
              common::milog::MiLogStream::~MiLogStream(&v201);
              v3 = -1;
              goto LABEL_197;
            }
            if ( *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->reliquary_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)trial_reliquary_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->reliquary_id >> 3)
                                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&trial_reliquary_config_ptr->reliquary_id);
            }
            *(_DWORD *)(v4 + 144) = trial_reliquary_config_ptr->reliquary_id;
            *(_QWORD *)(v4 + 288) = 0LL;
            *(_QWORD *)(v4 + 296) = 0LL;
            *(_DWORD *)(v4 + 292) = 1;
            *(_DWORD *)(v4 + 288) = *(_DWORD *)(v4 + 144);
            v108 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            v109 = Player::getItemComp(v108);
            PlayerItemComp::createTrialEquip((PlayerItemComp *const)(v4 + 384), (const ItemParam *)v109);
            std::shared_ptr<Item>::shared_ptr<Equip,void>(
              (std::shared_ptr<Item> *const)(v4 + 320),
              (std::shared_ptr<Equip> *)(v4 + 384));
            std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 384));
            if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v4 + 320), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v201,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/avatar/trial_avatar.cpp",
                "initTrialConfig",
                285);
              v110 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                       &v201,
                       (const char (*)[38])"createWeapon failed, trial_avatar_id:");
              v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v110,
                       &this->trial_avatar_id_);
              v112 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                       v111,
                       (const char (*)[15])" reliquary_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v112,
                (const unsigned int *)(v4 + 144));
              common::milog::MiLogStream::~MiLogStream(&v201);
              v3 = -1;
              v113 = 0;
            }
            else
            {
              std::dynamic_pointer_cast<Reliquary,Item>((const std::shared_ptr<Item> *)(v4 + 352));
              if ( std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(v4 + 352), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v201,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/avatar/trial_avatar.cpp",
                  "initTrialConfig",
                  292);
                v114 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                         &v201,
                         (const char (*)[46])"dynamic_pointer_cast failed, trial_avatar_id:");
                v115 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v114,
                         &this->trial_avatar_id_);
                v116 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                         v115,
                         (const char (*)[15])" reliquary_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v116,
                  (const unsigned int *)(v4 + 144));
                common::milog::MiLogStream::~MiLogStream(&v201);
                v3 = -1;
                v117 = 0;
              }
              else
              {
                v118 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                if ( *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_reliquary_config_ptr->level);
                }
                Reliquary::setLevel(v118, trial_reliquary_config_ptr->level);
                v119 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                if ( *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->main_prop_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_reliquary_config_ptr->main_prop_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_reliquary_config_ptr->main_prop_id);
                }
                Reliquary::setMainPropId(v119, trial_reliquary_config_ptr->main_prop_id);
                v120 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                Reliquary::setAppendPropVec(v120, &trial_reliquary_config_ptr->append_prop_list);
                v121 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
                v122 = v121;
                if ( *(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v121);
                v123 = (unsigned __int64)(v122->_vptr_Item + 6);
                if ( *(_BYTE *)((v123 >> 3) + 0x7FFF8000) )
                  v123 = __asan_report_load8(v122->_vptr_Item + 6);
                v176 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v123;
                v124 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                if ( v176(v122, v124, 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v201,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/avatar/trial_avatar.cpp",
                    "initTrialConfig",
                    302);
                  v125 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                           &v201,
                           (const char (*)[41])"weapon_ptr init failed, trial_avatar_id:");
                  v126 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v125,
                           &this->trial_avatar_id_);
                  v127 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                           v126,
                           (const char (*)[15])" reliquary_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v127,
                    (const unsigned int *)(v4 + 144));
                  common::milog::MiLogStream::~MiLogStream(&v201);
                  v3 = -1;
                  v117 = 0;
                }
                else
                {
                  std::shared_ptr<Equip>::shared_ptr<Reliquary,void>(
                    (std::shared_ptr<Equip> *const)(v4 + 384),
                    (const std::shared_ptr<Reliquary> *)(v4 + 352));
                  std::vector<std::shared_ptr<Equip>>::push_back(
                    equip_ptr_vec,
                    (std::vector<std::shared_ptr<Equip>>::value_type *)(v4 + 384));
                  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 384));
                  v117 = 1;
                }
              }
              std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v4 + 352));
              v113 = v117 == 1;
            }
            std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v4 + 320));
            if ( !v113 )
              goto LABEL_197;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_end_0);
          }
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 384));
          v128 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
          avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                            &v128->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                            *(_DWORD *)(v4 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
          if ( avatar_skill_depot_config_ptr )
          {
            v130 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            AvatarComp = (unsigned int)Player::getAvatarComp(v130);
            Avatar::getAvatarId(this);
            PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 352), AvatarComp);
            if ( is_inherit && std::operator!=<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v4 + 352), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v201,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/avatar/trial_avatar.cpp",
                "initTrialConfig",
                320);
              common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v201,
                (const char (*)[58])"[TRIAL_AVATAR] is_inherit && formal_avatar_ptr != nullptr");
              common::milog::MiLogStream::~MiLogStream(&v201);
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 416));
              v133 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 352));
              v134 = Avatar::getTalentComp(v133);
              TalentComp::getUnlockedTalentVec(v134, (std::vector<unsigned int> *)(v4 + 416));
              __for_range_0 = (std::vector<unsigned int> *)(v4 + 416);
              __for_end_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 416))._M_current;
              __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
              {
                v135 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_end_0);
                v136 = v135;
                if ( *(_BYTE *)(((unsigned __int64)v135 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v135 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v135 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v135);
                }
                *(_DWORD *)(v4 + 144) = *v136;
                v137 = Avatar::getTalentComp(this);
                TalentComp::forceUnlockTalent(v137, *(_DWORD *)(v4 + 144));
                common::milog::MiLogStream::create(
                  &v201,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/avatar/trial_avatar.cpp",
                  "initTrialConfig",
                  326);
                v138 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                         &v201,
                         (const char (*)[48])"[TRIAL_AVATAR] inherit formal avatar talent_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v138,
                  (const unsigned int *)(v4 + 144));
                common::milog::MiLogStream::~MiLogStream(&v201);
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_end_0);
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 416));
            }
            else
            {
              talent_vec = &avatar_skill_depot_config_ptr->talents;
              if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_trial_talent_list_use_template >> 3)
                           + 0x7FFF8000) < 0 )
                __asan_report_load1(&trial_avatar_config_ptr->is_trial_talent_list_use_template);
              if ( trial_avatar_config_ptr->is_trial_talent_list_use_template )
                p_trial_talent_list = &template_config_ptr->trial_talent_list;
              else
                p_trial_talent_list = &trial_avatar_config_ptr->trial_talent_list;
              __for_range_1 = p_trial_talent_list;
              __for_end_0._M_current = std::vector<unsigned int>::begin(p_trial_talent_list)._M_current;
              __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_end_0, &__for_end) )
              {
                v140 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_end_0);
                v141 = v140;
                if ( *(_BYTE *)(((unsigned __int64)v140 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v140 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v140 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v140);
                }
                *(_DWORD *)(v4 + 144) = *v141;
                v142 = (unsigned int)--*(_DWORD *)(v4 + 144);
                if ( v142 < std::vector<unsigned int>::size(talent_vec) )
                {
                  v148 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](talent_vec, *(unsigned int *)(v4 + 144));
                  v149 = v148;
                  if ( *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v148 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v148);
                  }
                  talent_id = *v149;
                  v150 = Avatar::getTalentComp(this);
                  TalentComp::forceUnlockTalent(v150, talent_id);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v201,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/avatar/trial_avatar.cpp",
                    "initTrialConfig",
                    338);
                  v143 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           &v201,
                           (const char (*)[16])"skill_depot_id:");
                  v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v143,
                           (const unsigned int *)(v4 + 48));
                  v145 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                           v144,
                           (const char (*)[15])" talent_index:");
                  v146 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v145,
                           (const unsigned int *)(v4 + 144));
                  v147 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                           v146,
                           (const char (*)[13])" talent_vec:");
                  common::milog::MiLogStream::operator<<<unsigned int>(v147, talent_vec);
                  common::milog::MiLogStream::~MiLogStream(&v201);
                }
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_end_0);
              }
            }
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 416));
            if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)trial_avatar_config_ptr - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_core_proud_skill_level >> 3)
                                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&trial_avatar_config_ptr->trial_core_proud_skill_level);
            }
            *(_DWORD *)(v4 + 112) = trial_avatar_config_ptr->trial_core_proud_skill_level;
            if ( *(_DWORD *)(v4 + 112) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3)
                            + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->core_proud_skill_group_id >> 3)
                            + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&avatar_skill_depot_config_ptr->core_proud_skill_group_id);
              }
              *(_DWORD *)(v4 + 128) = avatar_skill_depot_config_ptr->core_proud_skill_group_id;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)(v4 + 384));
              v151 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
              *(_DWORD *)(v4 + 144) = AvatarTalentExcelConfigMgr::findProudSkillId(
                                        &v151->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                        *(_DWORD *)(v4 + 128),
                                        *(_DWORD *)(v4 + 112));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
              if ( *(_DWORD *)(v4 + 144) )
              {
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v4 + 416),
                  (const std::vector<unsigned int>::value_type *)(v4 + 144));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v201,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/avatar/trial_avatar.cpp",
                  "initTrialConfig",
                  358);
                v152 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                         &v201,
                         (const char (*)[56])"core_proud_skill not found, core_proud_skill_group_id: ");
                v153 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v152,
                         (const unsigned int *)(v4 + 128));
                v154 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                         v153,
                         (const char (*)[25])" core_proud_skill_level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v154,
                  (const unsigned int *)(v4 + 112));
                common::milog::MiLogStream::~MiLogStream(&v201);
              }
            }
            proud_skill_open_vec = &avatar_skill_depot_config_ptr->inherent_proud_skill_opens;
            if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_trial_inherent_proud_skill_list_use_template >> 3)
                         + 0x7FFF8000) < 0 )
              __asan_report_load1(&trial_avatar_config_ptr->is_trial_inherent_proud_skill_list_use_template);
            if ( trial_avatar_config_ptr->is_trial_inherent_proud_skill_list_use_template )
              p_trial_inherent_proud_skill_list = &template_config_ptr->trial_inherent_proud_skill_list;
            else
              p_trial_inherent_proud_skill_list = &trial_avatar_config_ptr->trial_inherent_proud_skill_list;
            __for_range_2 = p_trial_inherent_proud_skill_list;
            __for_begin_0._M_current = std::vector<unsigned int>::begin(p_trial_inherent_proud_skill_list)._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v156 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v157 = v156;
              if ( *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v156 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v156);
              }
              *(_DWORD *)(v4 + 128) = *v157;
              v158 = (unsigned int)--*(_DWORD *)(v4 + 128);
              if ( v158 < std::vector<data::ProudSkillOpenConfig>::size(proud_skill_open_vec) )
              {
                v164 = std::vector<data::ProudSkillOpenConfig>::operator[](
                         proud_skill_open_vec,
                         *(unsigned int *)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v164->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v164->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  v164 = (std::vector<data::ProudSkillOpenConfig>::const_reference)__asan_report_load4(&v164->proud_skill_group_id);
                }
                proud_skill_group_id = v164->proud_skill_group_id;
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v4 + 384));
                v165 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 384));
                *(_DWORD *)(v4 + 144) = AvatarTalentExcelConfigMgr::findProudSkillId(
                                          &v165->design_config.txt_config_mgr.avatar_talent_config_mgr,
                                          proud_skill_group_id,
                                          1u);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 384));
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v4 + 416),
                  (const std::vector<unsigned int>::value_type *)(v4 + 144));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v201,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/avatar/trial_avatar.cpp",
                  "initTrialConfig",
                  374);
                v159 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         &v201,
                         (const char (*)[16])"skill_depot_id:");
                v160 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v159,
                         (const unsigned int *)(v4 + 48));
                v161 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                         v160,
                         (const char (*)[20])" proud_skill_index:");
                v162 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v161,
                         (const unsigned int *)(v4 + 128));
                v163 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                         v162,
                         (const char (*)[28])" proud_skill_open_vec.size:");
                __for_end._M_current = (const unsigned int *)std::vector<data::ProudSkillOpenConfig>::size(proud_skill_open_vec);
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v163,
                  (const unsigned __int64 *)&__for_end);
                common::milog::MiLogStream::~MiLogStream(&v201);
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            v166 = Avatar::getTalentComp(this);
            v167 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            TalentComp::forceUpgradeProudSkillVec(v166, v167, (const std::vector<unsigned int> *)(v4 + 416));
            v168 = Avatar::getTalentComp(this);
            TalentComp::checkActiveProudSkill(v168);
            SkillComp = Avatar::getSkillComp(this);
            if ( SkillComp::init(SkillComp) )
            {
              common::milog::MiLogStream::create(
                &v201,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/avatar/trial_avatar.cpp",
                "initTrialConfig",
                389);
              v170 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                       &v201,
                       (const char (*)[31])"skill comp init fails, avatar:");
              common::milog::MiLogStream::operator<<<TrialAvatar,(TrialAvatar*)0>(v170, this);
              common::milog::MiLogStream::~MiLogStream(&v201);
              v3 = -1;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&trial_avatar_config_ptr->is_trial_avatar_skill_level_use_template >> 3)
                           + 0x7FFF8000) < 0 )
                __asan_report_load1(&trial_avatar_config_ptr->is_trial_avatar_skill_level_use_template);
              if ( trial_avatar_config_ptr->is_trial_avatar_skill_level_use_template )
              {
                if ( *(_BYTE *)(((unsigned __int64)&template_config_ptr->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&template_config_ptr->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&template_config_ptr->trial_avatar_skill_level);
                }
                trial_avatar_skill_level = template_config_ptr->trial_avatar_skill_level;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_avatar_skill_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->trial_avatar_skill_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&trial_avatar_config_ptr->trial_avatar_skill_level);
                }
                trial_avatar_skill_level = trial_avatar_config_ptr->trial_avatar_skill_level;
              }
              skill_level = trial_avatar_skill_level;
              if ( trial_avatar_skill_level )
              {
                v172 = Avatar::getSkillComp(this);
                v173 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
                SkillComp::forceSetAllSkillLevel(v172, v173, skill_level);
              }
              v3 = 0;
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 416));
            std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 352));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v201,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/trial_avatar.cpp",
              "initTrialConfig",
              312);
            v129 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                     &v201,
                     (const char (*)[54])"findAvatarSkillDepotExcelConfig fail, skill_depot_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v129,
              (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v201);
            v3 = -1;
          }
        }
      }
LABEL_197:
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v4 + 256));
    }
    std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v4 + 224));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v201,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/trial_avatar.cpp",
      "initTrialConfig",
      221);
    v59 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v201,
            (const char (*)[45])"findTrialAvatarTemplateConfig fails, level_:");
    v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &this->level_);
    v61 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v60, (const char (*)[18])" trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &this->trial_avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v201);
    v3 = -1;
  }
LABEL_199:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
  result = v3;
  if ( v202 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 403: range 00000000161FD97C-00000000161FD9D6
void __cdecl TrialAvatar::setGrantRecord(TrialAvatar *const this, const proto::TrialAvatarGrantRecord *record)
{
  google::protobuf::uint32 v2; // eax
  google::protobuf::uint32 v3; // eax

  v2 = proto::TrialAvatarGrantRecord::grant_reason(record);
  proto::TrialAvatarGrantRecordBin::set_grant_reason(&this->grant_record_bin_, v2);
  v3 = proto::TrialAvatarGrantRecord::from_parent_quest_id(record);
  proto::TrialAvatarGrantRecordBin::set_from_parent_quest_id(&this->grant_record_bin_, v3);
};

// Line 410: range 00000000161FD9D8-00000000161FDA0F
uint32_t __cdecl TrialAvatar::getDynamicLevelByWorldLevel(
        TrialAvatar *const this,
        bool is_dynamic_level,
        uint32_t world_level,
        uint32_t standard_level)
{
  if ( !is_dynamic_level )
    return standard_level;
  else
    return PlayerWorld::getAdjustedLevel(world_level, standard_level);
};

// Line 420: range 00000000161FDA10-00000000161FDA76
int32_t __cdecl TrialAvatar::initDefaultWearCostume(TrialAvatar *const this)
{
  FashionComp *FashionComp; // rcx

  FashionComp = Avatar::getFashionComp(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trial_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trial_avatar_id_);
  }
  return FashionComp::initTrialAvatarDefaultWearCostume(FashionComp, this->trial_avatar_id_);
};
