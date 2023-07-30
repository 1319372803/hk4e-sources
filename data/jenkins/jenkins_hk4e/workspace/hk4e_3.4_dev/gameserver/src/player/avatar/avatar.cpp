// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/avatar.cpp

// Line 65: range 0000000013791636-0000000013791655
bool __cdecl isNoHurtDie(proto::PlayerDieType die_type)
{
  return (unsigned int)(die_type - 4) <= 1;
};

// Line 80: range 0000000013791656-0000000013791A00
std::string *__cdecl Avatar::getDesc[abi:cxx11](std::string *retstr, const Avatar *const this)
{
  const char *Description; // rbx
  unsigned int uid; // [rsp+1Ch] [rbp-B4h]
  std::string v5; // [rsp+20h] [rbp-B0h] BYREF
  std::string v6; // [rsp+40h] [rbp-90h] BYREF
  std::string __rhs; // [rsp+60h] [rbp-70h] BYREF
  std::string v8; // [rsp+80h] [rbp-50h] BYREF
  std::string __lhs; // [rsp+A0h] [rbp-30h] BYREF

  Entity::getDesc[abi:cxx11](&__lhs, (const Entity *const)this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, "[");
  std::string::~string(&__lhs);
  uid = Avatar::getUid(this);
  if ( uid )
  {
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, uid);
    std::operator+<char>(&v8, "uid:", &__rhs);
    std::operator+<char>(&__lhs, &v8, ",");
    std::string::operator+=(retstr, &__lhs);
    std::string::~string(&__lhs);
    std::string::~string(&v8);
    std::string::~string(&__rhs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  Description = data::getDescription(this->life_state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&v5, this->avatar_id_);
  std::operator+<char>(&v6, "avatar_id:", &v5);
  std::operator+<char>(&__rhs, &v6, ",life_state:");
  std::operator+<char>(&v8, &__rhs, Description);
  std::operator+<char>(&__lhs, &v8, "]");
  std::string::operator+=(retstr, &__lhs);
  std::string::~string(&__lhs);
  std::string::~string(&v8);
  std::string::~string(&__rhs);
  std::string::~string(&v6);
  std::string::~string(&v5);
  return retstr;
};

// Line 90: range 0000000013791A02-00000000137921D9
int32_t __cdecl Avatar::init(Avatar *const this, bool is_on_create)
{
  __m128i v2; // xmm0
  EquipComp *EquipComp; // rbx
  common::milog::MiLogStream *v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t skill_depot_id; // ecx
  char v10; // dl
  __int64 v11; // rdx
  TalentComp *TalentComp; // rax
  SkillComp *SkillComp; // rax
  FashionComp *FashionComp; // rax
  ExtraPropComp *ExtraPropComp; // rax
  __int64 v16; // rdx
  char v17; // al
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-78h]
  std::vector<std::shared_ptr<Equip>> p_equip_ptr_vec; // [rsp+20h] [rbp-70h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-50h] BYREF
  std::string name; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, this->avatar_id_);
  std::operator+<char>(&name, "Avatar_", &__rhs);
  Entity::setName((Entity *const)this, &name);
  std::string::~string(&name);
  std::string::~string(&__rhs);
  if ( Avatar::initTimer(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "init",
      97);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[17])"initTimer failes");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
  EquipComp = Avatar::getEquipComp(this);
  memset(&p_equip_ptr_vec, 0, sizeof(p_equip_ptr_vec));
  std::vector<std::shared_ptr<Equip>>::vector(&p_equip_ptr_vec);
  LOBYTE(EquipComp) = EquipComp::init(EquipComp, &p_equip_ptr_vec) != 0;
  std::vector<std::shared_ptr<Equip>>::~vector(&p_equip_ptr_vec);
  if ( (_BYTE)EquipComp )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "init",
      103);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[27])"getEquipComp().init failed");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
  v6 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  if ( !this->skill_depot_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = *(_QWORD *)this->baseclass_0 + 312LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
    avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(Avatar *const))v7)(this);
    if ( !avatar_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "init",
        112);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[28])"getConfig fails, avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->avatar_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
    }
    v6 = (((_BYTE)avatar_config_ptr + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->skill_depot_id);
    }
    skill_depot_id = avatar_config_ptr->skill_depot_id;
    v10 = *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store4(&this->skill_depot_id_, v6, v11);
    this->skill_depot_id_ = skill_depot_id;
  }
  TalentComp = Avatar::getTalentComp(this);
  if ( TalentComp::init(TalentComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "init",
      120);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[19])"init Talent failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    return -1;
  }
  else
  {
    SkillComp = Avatar::getSkillComp(this);
    if ( SkillComp::init(SkillComp) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "init",
        126);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[17])"init Skill fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
    }
    else if ( Avatar::enableAllTalent(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "init",
        132);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[22])"enableAllTalent fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      return -1;
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
          "./src/player/avatar/avatar.cpp",
          "init",
          138);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)&name,
          (const char (*)[19])"init Fashion fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        return -1;
      }
      else
      {
        ExtraPropComp = Avatar::getExtraPropComp(this);
        if ( ExtraPropComp::init(ExtraPropComp) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&name,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "init",
            144);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[25])"init ExtraPropComp fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
          return -1;
        }
        else
        {
          Creature::calcProp(this);
          *(float *)v2.m128i_i32 = Avatar::getPlayerTime(this);
          v16 = (unsigned int)_mm_cvtsi128_si32(v2);
          v17 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000);
          LOBYTE(v6) = v17 != 0;
          if ( v17 != 0 && v17 <= 3 )
            __asan_report_store4(&this->last_refresh_satiation_player_time_, v6, v16);
          LODWORD(this->last_refresh_satiation_player_time_) = v16;
          if ( *(char *)(((unsigned __int64)&this->is_inited_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_inited_, v6, &this->is_inited_);
          this->is_inited_ = 1;
          return 0;
        }
      }
    }
  }
};

// Line 156: range 00000000137921DA-000000001379253F
int32_t __cdecl Avatar::constructComps(Avatar *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<EquipComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      159);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v2, (const char (*)[25])"addComp EquipComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<SkillComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      164);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v2, (const char (*)[25])"addComp SkillComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<BuffComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      169);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v2, (const char (*)[24])"addComp BuffComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<TalentComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      174);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v2,
      (const char (*)[26])"addComp TalentComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<FashionComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      179);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v2,
      (const char (*)[27])"addComp FashionComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Avatar,AvatarCompBase,7u>::addComp<ExtraPropComp>(&this->EcsBase<Avatar,AvatarCompBase,7>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "constructComps",
      184);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v2,
      (const char (*)[29])"addComp ExtraPropComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 192: range 0000000013792540-000000001379292B
int32_t __cdecl Avatar::onLogin(Avatar *const this)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v7; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-30h] BYREF

  *(float *)v1.m128i_i32 = FightPropComp::getCurHp(&this->fight_prop_comp_);
  v2 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v1));
  if ( !std::isfinite(*(float *)v2.m128i_i32) )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end, 0LL);
    v2 = (__m128i)0x3F800000u;
    FightPropComp::setCurHp(&this->fight_prop_comp_, 1.0, 0, (FightPropNtfParamPtr *)&__for_end);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end);
  }
  *(float *)v2.m128i_i32 = FightPropComp::getCurEnergy(&this->fight_prop_comp_);
  if ( !std::isfinite(COERCE_FLOAT(_mm_cvtsi128_si32(v2))) )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end, 0LL);
    FightPropComp::setCurEnergy(&this->fight_prop_comp_, 1.0, 0, (FightPropNtfParamPtr *)&__for_end);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end);
  }
  if ( AbilityComp::onLogin(&this->ability_comp_) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "onLogin",
      205);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v12, (const char (*)[14])"onLogin fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
    EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
    while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v7 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v7);
      avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v7);
      v4 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v4);
      v5 = *(_QWORD *)v4 + 24LL;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(*(_QWORD *)v4 + 24LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v5)(v4) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "onLogin",
          213);
        v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v12,
               (const char (*)[26])"onLogin fails comp_type: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, comp_type);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return -1;
      }
      EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
    }
    if ( std::operator==<PlayerTimer>(&this->stamina_timer_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "onLogin",
        220);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v12,
        (const char (*)[29])"stamina_timer_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 228: range 000000001379292C-0000000013792B4F
int32_t __cdecl Avatar::onDisconnect(Avatar *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rdx
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v5; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( AbilityComp::onDisconnect(&this->ability_comp_) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "onDisconnect",
      231);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"onDisconnect fails");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
    EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
    while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v5 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v5);
      avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v5);
      v2 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(v2);
      v3 = *(_QWORD *)v2 + 32LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8(*(_QWORD *)v2 + 32LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v3)(v2) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "onDisconnect",
          239);
        v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v10,
               (const char (*)[31])"onDisconnect fails comp_type: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, comp_type);
        common::milog::MiLogStream::~MiLogStream(&v10);
        return -1;
      }
      EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 249: range 0000000013792B50-0000000013793125
int32_t __cdecl Avatar::fromBin(Avatar *const this, const proto::AvatarBin *bin)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  char v4; // al
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint64_t v8; // rax
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  google::protobuf::uint32 v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  uint32_t v18; // ecx
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rdx
  char v24; // al
  float v25; // ecx
  char v26; // dl
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rdx
  const proto::AvatarBin *bina; // [rsp+0h] [rbp-90h]
  float cur_elem_engery; // [rsp+1Ch] [rbp-74h]
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v34; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-30h] BYREF

  bina = bin;
  v3 = proto::AvatarBin::avatar_id(bin);
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(bin) = v4 != 0;
    __asan_report_store4(&this->avatar_id_, bin, v3);
  }
  this->avatar_id_ = v3;
  v5 = proto::AvatarBin::born_time(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->born_time_, bin, v7);
  this->born_time_ = v5;
  v8 = proto::AvatarBin::guid(bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8(&this->guid_, bin);
  this->guid_ = v8;
  v9 = proto::AvatarBin::level(bina);
  v10 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->level_, bin, v11);
  this->level_ = v9;
  v12 = proto::AvatarBin::life_state(bina);
  v13 = *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this - 4) & 7) + 3) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->life_state_, bin, v14);
  this->life_state_ = v12;
  v15 = proto::AvatarBin::promote_level(bina);
  v16 = *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->promote_level_, bin, v17);
  this->promote_level_ = v15;
  v18 = proto::AvatarBin::skill_depot_id(bina);
  v19 = *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->skill_depot_id_, bin, v20);
  this->skill_depot_id_ = v18;
  std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end, 0LL);
  *(float *)v2.m128i_i32 = proto::AvatarBin::cur_hp(bina);
  v21 = 0LL;
  FightPropComp::setCurHp(&this->fight_prop_comp_, *(float *)v2.m128i_i32, 0, (FightPropNtfParamPtr *)&__for_end);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end);
  *(float *)v2.m128i_i32 = proto::AvatarBin::cur_elem_energy(bina);
  cur_elem_engery = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v22 = (__m128i)LODWORD(cur_elem_engery);
  if ( cur_elem_engery > 0.00000011920929 )
  {
    std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end, 0LL);
    v21 = 0LL;
    v22 = _mm_cvtsi32_si128(LODWORD(cur_elem_engery));
    FightPropComp::setCurEnergy(&this->fight_prop_comp_, *(float *)v22.m128i_i32, 0, (FightPropNtfParamPtr *)&__for_end);
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&__for_end);
  }
  *(float *)v22.m128i_i32 = proto::AvatarBin::satiation_val(bina);
  v23 = (unsigned int)_mm_cvtsi128_si32(v22);
  v24 = *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v21) = v24 != 0;
    __asan_report_store4(&this->satiation_val_, v21, v23);
  }
  LODWORD(this->satiation_val_) = v23;
  *(float *)v22.m128i_i32 = proto::AvatarBin::satiation_penalty_time(bina);
  v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
  v26 = *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store4(&this->satiation_penalty_time_, v21, v27);
  this->satiation_penalty_time_ = v25;
  EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
  EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
  while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v34 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v34);
    avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v34);
    v28 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8(v28);
    v29 = *(_QWORD *)v28 + 40LL;
    if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8(*(_QWORD *)v28 + 40LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const proto::AvatarBin *))v29)(v28, bina) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "fromBin",
        272);
      v30 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v39,
              (const char (*)[26])"fromBin fails comp_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v39);
      return -1;
    }
    EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 281: range 0000000013793126-0000000013793651
int32_t __cdecl Avatar::toBin(Avatar *const this, proto::AvatarBin *bin)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx
  float CurHp; // xmm0_4
  float CurEnergy; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v10; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto::AvatarBin::set_avatar_id(bin, this->avatar_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->born_time_);
  }
  proto::AvatarBin::set_born_time(bin, this->born_time_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  v3 = (*(__int64 (__fastcall **)(Avatar *const))v2)(this);
  proto::AvatarBin::set_avatar_type(bin, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::AvatarBin::set_guid(bin, this->guid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::AvatarBin::set_level(bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  proto::AvatarBin::set_life_state(bin, this->life_state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  proto::AvatarBin::set_promote_level(bin, this->promote_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  proto::AvatarBin::set_skill_depot_id(bin, this->skill_depot_id_);
  CurHp = Creature::getCurHp(this);
  proto::AvatarBin::set_cur_hp(bin, CurHp);
  CurEnergy = FightPropComp::getCurEnergy(&this->fight_prop_comp_);
  proto::AvatarBin::set_cur_elem_energy(bin, CurEnergy);
  Avatar::refreshSatiation(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->satiation_val_);
  }
  proto::AvatarBin::set_satiation_val(bin, this->satiation_val_);
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  proto::AvatarBin::set_satiation_penalty_time(bin, this->satiation_penalty_time_);
  EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
  EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
  while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v10 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v10);
    avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v10);
    v6 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    v7 = *(_QWORD *)v6 + 48LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 48LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::AvatarBin *))v7)(v6, bin) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toBin",
        302);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v15,
             (const char (*)[24])"toBin fails comp_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v15);
      return -1;
    }
    EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 311: range 0000000013793652-0000000013793A48
int32_t __cdecl Avatar::toSnapshot(
        const Avatar *const this,
        proto::AvatarSnapshotType snapshot_type,
        uint64_t guid,
        proto::AvatarSnapshotBin *snapshot_bin)
{
  google::protobuf::uint32 Now; // edx
  float MaxHp; // xmm0_4
  float MaxEnergy; // xmm0_4
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  proto::AvatarBin *bin; // [rsp+20h] [rbp-80h]
  proto::MirrorAvatarBin *mirror_avatar_bin; // [rsp+28h] [rbp-78h]
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v15; // [rsp+38h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+40h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+48h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+50h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  proto::AvatarSnapshotBin::set_avatar_snapshot_type(snapshot_bin, snapshot_type);
  bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto::AvatarBin::set_avatar_id(bin, this->avatar_id_);
  Now = common::tools::TimeUtils::getNow();
  proto::AvatarBin::set_born_time(bin, Now);
  proto::AvatarBin::set_avatar_type(bin, 3u);
  proto::AvatarBin::set_guid(bin, guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::AvatarBin::set_level(bin, this->level_);
  proto::AvatarBin::set_life_state(bin, 1u);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  proto::AvatarBin::set_promote_level(bin, this->promote_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  proto::AvatarBin::set_skill_depot_id(bin, this->skill_depot_id_);
  MaxHp = Creature::getMaxHp(this);
  proto::AvatarBin::set_cur_hp(bin, MaxHp);
  MaxEnergy = Creature::getMaxEnergy(this);
  proto::AvatarBin::set_cur_elem_energy(bin, MaxEnergy);
  mirror_avatar_bin = proto::AvatarBin::mutable_mirror_avatar(bin);
  proto::MirrorAvatarBin::set_avatar_snapshot_type(mirror_avatar_bin, snapshot_type);
  EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
  EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
  while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v15 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v15);
    avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v15);
    v7 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 56LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::AvatarSnapshotBin *))v8)(v7, snapshot_bin) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toSnapshot",
        330);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v20,
             (const char (*)[29])"toSnapshot fails comp_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 339: range 0000000013793A4A-0000000013793C16
int32_t __cdecl Avatar::toClient(const Avatar *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  proto::MotionInfo *v4; // rax
  unsigned __int64 v5; // rax
  std::vector<Vector3>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::vector<Vector3>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::vector<Vector3> *__for_range; // [rsp+30h] [rbp-50h]
  proto::SceneAvatarInfo *avatar_info; // [rsp+38h] [rbp-48h]
  const Vector3 *v; // [rsp+40h] [rbp-40h]
  proto::Vector *proto_v; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-30h] BYREF

  if ( Creature::toClient(this, entity_info, player) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "toClient",
      342);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v12, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    __for_range = &this->last_move_params_;
    __for_begin._M_current = std::vector<Vector3>::begin(&this->last_move_params_)._M_current;
    __for_end._M_current = std::vector<Vector3>::end(&this->last_move_params_)._M_current;
    while ( __gnu_cxx::operator!=<Vector3 const*,std::vector<Vector3>>(&__for_begin, &__for_end) )
    {
      v = __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator*(&__for_begin);
      v4 = proto::SceneEntityInfo::mutable_motion_info(entity_info);
      proto_v = proto::MotionInfo::add_params(v4);
      Vector3::operator proto::Vector((proto::Vector *)&v12, v);
      proto::Vector::operator=(proto_v, (proto::Vector *)&v12);
      proto::Vector::~Vector((proto::Vector *const)&v12);
      __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator++(&__for_begin);
    }
    avatar_info = proto::SceneEntityInfo::mutable_avatar(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v5 = *(_QWORD *)this->baseclass_0 + 456LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 456LL);
    return (*(__int64 (__fastcall **)(const Avatar *const, proto::SceneAvatarInfo *))v5)(this, avatar_info);
  }
};

// Line 355: range 0000000013793C18-000000001379418A
int32_t __cdecl Avatar::toClient(const Avatar *const this, proto::SceneAvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t Uid; // edx
  uint32_t AvatarId; // edx
  uint32_t PeerId; // edx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  int32_t v11; // r14d
  unsigned __int64 v12; // rax
  Player *v14; // rax
  PlayerVehicleComp *VehicleComp; // rdx
  proto::AvatarExcelInfo *v16; // rdx
  int32_t result; // eax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v18; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+28h] [rbp-A8h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-90h] BYREF
  char v23[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:371";
  *(_QWORD *)(v2 + 16) = Avatar::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Uid = Avatar::getUid(this);
  proto::SceneAvatarInfo::set_uid(avatar_info, Uid);
  AvatarId = Avatar::getAvatarId(this);
  proto::SceneAvatarInfo::set_avatar_id(avatar_info, AvatarId);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::SceneAvatarInfo::set_guid(avatar_info, this->guid_);
  PeerId = Avatar::getPeerId(this);
  proto::SceneAvatarInfo::set_peer_id(avatar_info, PeerId);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  proto::SceneAvatarInfo::set_skill_depot_id(avatar_info, this->skill_depot_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->born_time_);
  }
  proto::SceneAvatarInfo::set_born_time(avatar_info, this->born_time_);
  EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
  EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)(v2 + 32));
  while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(
            &__for_begin,
            (const EcsBase<Avatar,AvatarCompBase,7>::Iterator *)(v2 + 32)) )
  {
    v18 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v18);
    avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v18);
    v8 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 64LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 64LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::SceneAvatarInfo *))v9)(v8, avatar_info) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toClient",
        366);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v22,
              (const char (*)[27])"toClient fails comp_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v11 = -1;
      goto LABEL_32;
    }
    EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v12 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v12)(v2 + 32, this);
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32))
    && Entity::isOnScene((const Entity *const)this) )
  {
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    VehicleComp = Player::getVehicleComp(v14);
    PlayerVehicleComp::fillVehicleInfo(VehicleComp, avatar_info);
  }
  v16 = proto::SceneAvatarInfo::mutable_excel_info(avatar_info);
  Avatar::fillAvatarExcelInfo(this, v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->anim_hash_);
  }
  proto::SceneAvatarInfo::set_anim_hash(avatar_info, this->anim_hash_);
  v11 = 0;
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
LABEL_32:
  result = v11;
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

// Line 383: range 000000001379418C-0000000013794722
int32_t __cdecl Avatar::toClient(const Avatar *const this, proto::AvatarEnterSceneInfo *enter_info)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  BuffComp *BuffComp; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint64_t Guid; // rdx
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t EntityId; // edx
  std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  AbilityComp *AbilityComp; // rdx
  int32_t result; // eax
  proto::AbilitySyncStateInfo *avatar_ability_info; // [rsp+28h] [rbp-C8h]
  ProtoServerBuffList *server_buff_list; // [rsp+30h] [rbp-C0h]
  proto::AbilitySyncStateInfo *weapon_ability_info; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 21 weapon_gadget_ptr:398 64 16 14 weapon_ptr:401";
  *(_QWORD *)(v3 + 16) = Avatar::toClient;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::AvatarEnterSceneInfo::set_avatar_guid(enter_info, this->guid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[256]);
  }
  proto::AvatarEnterSceneInfo::set_avatar_entity_id(enter_info, *(_DWORD *)&this->baseclass_0[256]);
  avatar_ability_info = proto::AvatarEnterSceneInfo::mutable_avatar_ability_info(enter_info);
  if ( AbilityComp::toClient(&this->ability_comp_, avatar_ability_info) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "toClient",
      389);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v21, (const char (*)[23])"ability toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
  }
  else
  {
    server_buff_list = proto::AvatarEnterSceneInfo::mutable_server_buff_list(enter_info);
    BuffComp = Avatar::getBuffComp(this);
    if ( BuffComp::toClient(BuffComp, server_buff_list) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toClient",
        395);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v21,
             (const char (*)[20])"buff toClient fails");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = -1;
    }
    else
    {
      Avatar::getEquipComp(this);
      EquipComp::getWeaponGadget((const EquipComp *const)(v3 + 32));
      if ( !std::operator!=<AvatarWeaponGadget>((const std::shared_ptr<AvatarWeaponGadget> *)(v3 + 32), 0LL) )
        goto LABEL_19;
      std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      AvatarWeaponGadget::getWeaponItem((const AvatarWeaponGadget *const)(v3 + 64));
      if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "toClient",
          404);
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v21,
               (const char (*)[19])"weapon_ptr is null");
        v9 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        common::milog::MiLogStream::operator<<<AvatarWeaponGadget,(AvatarWeaponGadget*)0>(v8, v9);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Guid = Item::getGuid(v11);
        proto::AvatarEnterSceneInfo::set_weapon_guid(enter_info, Guid);
        v13 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        EntityId = Entity::getEntityId((const Entity *const)v13);
        proto::AvatarEnterSceneInfo::set_weapon_entity_id(enter_info, EntityId);
        weapon_ability_info = proto::AvatarEnterSceneInfo::mutable_weapon_ability_info(enter_info);
        v15 = std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        AbilityComp = Creature::getAbilityComp(v15);
        if ( AbilityComp::toClient(AbilityComp, weapon_ability_info) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "toClient",
            412);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v21, (const char (*)[15])"toClient fails");
          common::milog::MiLogStream::~MiLogStream(&v21);
          v2 = -1;
          v10 = 0;
        }
        else
        {
          v10 = 1;
        }
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 64));
      if ( v10 == 1 )
LABEL_19:
        v2 = 0;
      std::shared_ptr<AvatarWeaponGadget>::~shared_ptr((std::shared_ptr<AvatarWeaponGadget> *const)(v3 + 32));
    }
  }
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 421: range 0000000013794724-0000000013794C37
int32_t __cdecl Avatar::toClient(const Avatar *const this, proto::AvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  proto::AvatarExcelInfo *v9; // rdx
  google::protobuf::Map<unsigned int,proto::PropValue> *prop_map; // [rsp+10h] [rbp-80h]
  FightPropValueMap *proto_fight_map; // [rsp+18h] [rbp-78h]
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v12; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto::AvatarInfo::set_avatar_id(avatar_info, this->avatar_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::AvatarInfo::set_guid(avatar_info, this->guid_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  v3 = (*(__int64 (__fastcall **)(const Avatar *const))v2)(this);
  proto::AvatarInfo::set_avatar_type(avatar_info, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  proto::AvatarInfo::set_skill_depot_id(avatar_info, this->skill_depot_id_);
  prop_map = proto::AvatarInfo::mutable_prop_map(avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 496LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 496LL);
  (*(void (__fastcall **)(const Avatar *const, google::protobuf::Map<unsigned int,proto::PropValue> *))v4)(
    this,
    prop_map);
  proto_fight_map = proto::AvatarInfo::mutable_fight_prop_map(avatar_info);
  FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(
    &this->fight_prop_comp_,
    proto_fight_map,
    0);
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  proto::AvatarInfo::set_life_state(avatar_info, this->life_state_);
  if ( *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->born_time_);
  }
  proto::AvatarInfo::set_born_time(avatar_info, this->born_time_);
  EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
  EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
  while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v12 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v12);
    avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v12);
    v5 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 72LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 72LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::AvatarInfo *))v6)(v5, avatar_info) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toClient",
        436);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v17,
             (const char (*)[27])"toClient fails comp_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v17);
      return -1;
    }
    EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
  }
  v9 = proto::AvatarInfo::mutable_excel_info(avatar_info);
  Avatar::fillAvatarExcelInfo(this, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anim_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->anim_hash_);
  }
  proto::AvatarInfo::set_anim_hash(avatar_info, this->anim_hash_);
  return 0;
};

// Line 447: range 0000000013794C38-0000000013794E79
void __cdecl Avatar::fillAvatarExcelInfo(const Avatar *const this, proto::AvatarExcelInfo *excel_info)
{
  unsigned __int64 v2; // rax
  common::milog::MiLogStream *v3; // rdx
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(const Avatar *const))v2)(this);
  if ( avatar_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->prefab_path_hash >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_config_ptr->prefab_path_hash);
    proto::AvatarExcelInfo::set_prefab_path_hash(excel_info, avatar_config_ptr->prefab_path_hash);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_config_ptr->prefab_path_remote_hash);
    proto::AvatarExcelInfo::set_prefab_path_remote_hash(excel_info, avatar_config_ptr->prefab_path_remote_hash);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->controller_path_hash >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_config_ptr->controller_path_hash);
    proto::AvatarExcelInfo::set_controller_path_hash(excel_info, avatar_config_ptr->controller_path_hash);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->controller_path_remote_hash >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_config_ptr->controller_path_remote_hash);
    proto::AvatarExcelInfo::set_controller_path_remote_hash(excel_info, avatar_config_ptr->controller_path_remote_hash);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->combat_config_hash >> 3) + 0x7FFF8000) )
      __asan_report_load8(&avatar_config_ptr->combat_config_hash);
    proto::AvatarExcelInfo::set_combat_config_hash(excel_info, avatar_config_ptr->combat_config_hash);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "fillAvatarExcelInfo",
      451);
    v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v5,
           (const char (*)[35])"avatar_config_ptr is null, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 463: range 0000000013794E7A-0000000013795090
int32_t __cdecl Avatar::sendProto(Avatar *const this, const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Player *v8; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:464";
  *(_QWORD *)(v2 + 16) = Avatar::sendProto;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "sendProto",
      467);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v7 = Player::sendProto(v8, proto);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
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

// Line 474: range 0000000013795092-00000000137952FA
int32_t __cdecl Avatar::sendMessage(Avatar *const this, common::minet::ConstMessagePtr *p_msg_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  Player *v8; // r14
  std::shared_ptr<const google::protobuf::Message> *v9; // rax
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v11; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:475";
  *(_QWORD *)(v2 + 16) = Avatar::sendMessage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "sendMessage",
      478);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"getPlayer fails");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v9 = std::move<std::shared_ptr<google::protobuf::Message const> &>(p_msg_ptr);
    std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v11, v9);
    v7 = Player::sendMessage(v8, &v11, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v11);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
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

// Line 486: range 00000000137952FC-00000000137956CD
int32_t __cdecl Avatar::setLifeAlive(
        Avatar *const this,
        uint32_t die_revival_type,
        ChangeHpContext *context_ptr,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  int32_t result; // eax
  std::string v11; // [rsp+0h] [rbp-120h]
  ChangeHpContext *context_ptra; // [rsp+8h] [rbp-118h]
  bool is_notifya; // [rsp+10h] [rbp-110h]
  uint32_t die_revival_typea; // [rsp+14h] [rbp-10Ch]
  Avatar *thisa; // [rsp+18h] [rbp-108h]
  data::LifeState old_life_state; // [rsp+28h] [rbp-F8h]
  int32_t ret; // [rsp+2Ch] [rbp-F4h]
  std::string v18; // [rsp+30h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v11._anon_0._M_allocated_capacity) = die_revival_type;
  v11._M_string_length = (std::string::size_type)context_ptr;
  v11._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 10 holder:493 64 16 14 player_ptr:487 96 32 12 trans_no:488";
  *(_QWORD *)(v4 + 16) = Avatar::setLifeAlive;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(v4 + 64, this);
  std::string::basic_string(v4 + 96);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
    std::string::operator=(v4 + 96, &v18);
    std::string::~string(&v18);
  }
  std::string::basic_string(&v18, v4 + 96);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x516u, v11);
  std::string::~string(&v18);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->life_state_);
  }
  old_life_state = thisa->life_state_;
  ret = Creature::changeLifeState(thisa, LIFE_ALIVE, context_ptra, is_notifya);
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->life_state_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->life_state_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->life_state_);
    }
    if ( old_life_state != thisa->life_state_ )
    {
      Avatar::logPlayerLogAvatarDeathRevival(thisa, die_revival_typea);
      if ( old_life_state == LIFE_DEAD )
        Avatar::clearAllModifier(thisa);
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  std::string::~string((void *)(v4 + 96));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  result = ret;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 513: range 00000000137956CE-0000000013795817
const data::AvatarExcelConfig *__cdecl Avatar::getConfig(const Avatar *const this)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, this->avatar_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( avatar_config_ptr )
    return avatar_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/avatar/avatar.cpp",
    "getConfig",
    517);
  v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v6,
         (const char (*)[40])"findAvatarExcelConfig fails, avatar_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->avatar_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 525: range 0000000013795818-00000000137958F5
data::ConfigCharacterPtr __cdecl Avatar::getCharacterConfig(const Avatar *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  data::ConfigCharacterPtr result; // rax
  std::shared_ptr<Config> v4; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<data::ConfigAvatar> __r; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v2 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2680) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2680) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v1 + 2680);
  }
  JsonConfigMgr::findAvatarConfig((const JsonConfigMgr *const)&__r, v2);
  std::shared_ptr<data::ConfigCharacter>::shared_ptr<data::ConfigAvatar,void>(
    (std::shared_ptr<data::ConfigCharacter> *const)this,
    &__r);
  std::shared_ptr<data::ConfigAvatar>::~shared_ptr(&__r);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  result._M_ptr = (std::__shared_ptr<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 531: range 00000000137958F6-0000000013795B1C
data::ElementType __cdecl Avatar::getElemType(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  data::ElementType result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 19 energy_skill_id:532";
  *(_QWORD *)(v1 + 16) = Avatar::getElemType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = Avatar::getEnergySkill(this);
  if ( *(_DWORD *)(v1 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
    avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                                &v5->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v8);
    if ( avatar_skill_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
      }
      result = avatar_skill_config_ptr->cost_elem_type;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "getElemType",
        541);
      v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v9,
             (const char (*)[51])"findAvatarSkillExcelConfig fails, energy_skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = None_0;
    }
  }
  else
  {
    result = None_0;
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
  return result;
};

// Line 550: range 0000000013795B1E-0000000013795CB0
uint32_t __cdecl Avatar::getEnergySkill(const Avatar *const this)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    this->skill_depot_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( avatar_skill_depot_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
    }
    return avatar_skill_depot_config_ptr->energy_skill;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "getEnergySkill",
      554);
    v2 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v6,
           (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->skill_depot_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 562: range 0000000013795CB2-0000000013795EAB
const data::GrowCurveInfo *__fastcall Avatar::findCurveInfo(
        const Avatar *const this,
        data::GrowCurveType type,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::GrowCurveInfo *result; // rax
  const data::GrowCurveInfo *curve_info_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:561";
  *(_QWORD *)(v3 + 16) = Avatar::findCurveInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  curve_info_ptr = GrowCurveExcelConfigMgr::findAvatarCurveInfo(
                     &v6->design_config.txt_config_mgr.grow_curve_config_mgr,
                     level,
                     (data::GrowCurveType)*(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( curve_info_ptr )
  {
    result = curve_info_ptr;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "findCurveInfo",
      566);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v13,
           (const char (*)[33])"findAvatarCurveInfo fails, type:");
    v8 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
           v7,
           (const data::GrowCurveType *)(v3 + 32));
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 574: range 0000000013795F40-0000000013796B3C
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::onDie(Avatar *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple<proto::PlayerDieType,unsigned int> *p_in; // rsi
  int v6; // eax
  unsigned __int64 v7; // rax
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  Player *v10; // rax
  PlayerAvatarComp *AvatarComp; // rax
  __int64 Now; // rsi
  ActorAbility *v13; // rax
  Player *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rdi
  char v17; // dl
  Player *v18; // rax
  PlayerEventComp *EventComp; // r14
  Player *v20; // rax
  PlayerAvatarComp *v21; // rax
  bool *v22; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 *v24; // r9
  Player *v25; // rax
  World *v26; // r14
  Player *v27; // rax
  PlayerWatcherComp *WatcherComp; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t MonsterId; // eax
  Player *v31; // rax
  PlayerWatcherComp *v32; // r14
  ActorAbility *v33; // rax
  data::ConfigAbility *ConfigRef; // rax
  std::string contexta; // [rsp+0h] [rbp-1D0h] OVERLAPPED BYREF
  const std::string *ability_name; // [rsp+20h] [rbp-1B0h]
  std::tuple<proto::PlayerDieType,unsigned int> __in; // [rsp+28h] [rbp-1A8h] BYREF
  std::shared_ptr<Creature> v38; // [rsp+30h] [rbp-1A0h] BYREF
  std::string v39; // [rsp+40h] [rbp-190h] BYREF
  char v40[368]; // [rsp+60h] [rbp-170h] BYREF

  contexta._M_string_length = (std::string::size_type)this;
  contexta._M_dataplus._M_p = (std::string::pointer)context;
  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 10 holder:612 48 1 21 is_cur_use_avatar:645 64 4 22 murderer_entity_id:576 80 4 12 die_t"
                        "ype:595 96 16 14 player_ptr:606 128 16 15 ability_ptr:625 160 16 30 world_avatar_die_event_ptr:6"
                        "48 192 16 13 world_ptr:649 224 16 15 monster_ptr:660 256 32 12 trans_no:607";
  *(_QWORD *)(v2 + 16) = Avatar::onDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862729] = -202116109;
  Creature::onDie((Creature *const)contexta._M_string_length, (ChangeHpContext *)contexta._M_dataplus._M_p);
  *(_DWORD *)(v2 + 64) = 0;
  p_in = (std::tuple<proto::PlayerDieType,unsigned int> *)(((LOBYTE(contexta._M_dataplus._M_p) + 4) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)(contexta._M_dataplus._M_p + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(contexta._M_dataplus._M_p) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(contexta._M_dataplus._M_p
                                                                                                 + 4) >> 3)
                                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(contexta._M_dataplus._M_p + 4);
  }
  *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = *((_DWORD *)contexta._M_dataplus._M_p + 1);
  if ( *(_BYTE *)(((unsigned __int64)contexta._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)contexta._M_dataplus._M_p >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(contexta._M_dataplus._M_p);
  }
  v6 = *(_DWORD *)contexta._M_dataplus._M_p;
  if ( *(_DWORD *)contexta._M_dataplus._M_p == 11 )
  {
    *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = 6;
  }
  else
  {
    if ( v6 <= 11 )
    {
      if ( v6 == 7 )
      {
        *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = 5;
        goto LABEL_22;
      }
      if ( v6 <= 7 )
      {
        if ( v6 == 5 )
        {
          *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = 3;
          goto LABEL_22;
        }
        if ( v6 == 6 )
        {
          *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = 4;
          goto LABEL_22;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)(contexta._M_dataplus._M_p + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(contexta._M_dataplus._M_p) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(contexta._M_dataplus._M_p + 4) >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(contexta._M_dataplus._M_p + 4);
    }
    *(_DWORD *)(v2 + 80) = *((_DWORD *)contexta._M_dataplus._M_p + 1);
    std::shared_ptr<Creature>::shared_ptr(&v38, (const std::shared_ptr<Creature> *)(contexta._M_dataplus._M_p + 8));
    Avatar::getDieInfoFromAttacker((Avatar *const)&__in, (CreaturePtr *)contexta._M_string_length);
    std::tie<proto::PlayerDieType,unsigned int>(
      (proto::PlayerDieType *)(v2 + 224),
      (unsigned int *)(v2 + 80),
      (proto::PlayerDieType *)(v2 + 64),
      (unsigned int *)(v2 + 80));
    p_in = &__in;
    std::tuple<proto::PlayerDieType &,unsigned int &>::operator=<proto::PlayerDieType,unsigned int>(
      (std::tuple<proto::PlayerDieType&,unsigned int&> *const)(v2 + 224),
      &__in);
    std::shared_ptr<Creature>::~shared_ptr(&v38);
    if ( *(_DWORD *)(v2 + 80) )
      *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2) = *(_DWORD *)(v2 + 80);
  }
LABEL_22:
  if ( *(_BYTE *)(((contexta._M_string_length + 408) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((contexta._M_string_length + 408) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(contexta._M_string_length + 408, p_in, contexta._M_string_length + 408);
  }
  *(_DWORD *)(contexta._M_string_length + 408) = 2;
  if ( *(_BYTE *)((contexta._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(contexta._M_string_length);
  v7 = *(_QWORD *)contexta._M_string_length + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)contexta._M_string_length + 152LL);
  (*(void (__fastcall **)(unsigned __int64, std::string::size_type))v7)(v2 + 96, contexta._M_string_length);
  std::string::basic_string(v2 + 256);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    BasicComp = Player::getBasicComp(v8);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v39, BasicComp);
    std::string::operator=(v2 + 256, &v39);
    std::string::~string(&v39);
  }
  std::string::basic_string(&v39, v2 + 256);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x516u, contexta);
  std::string::~string(&v39);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    AvatarComp = Player::getAvatarComp(v10);
    PlayerAvatarComp::onAvatarDie(
      AvatarComp,
      (ChangeHpContext *)contexta._M_dataplus._M_p,
      *((proto::PlayerDieType *)&contexta._anon_0._M_allocated_capacity + 2),
      *(_DWORD *)(v2 + 64),
      (Avatar *)contexta._M_string_length);
  }
  std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v38, 0LL);
  FightPropComp::setCurEnergy(
    (FightPropComp *const)(contexta._M_string_length + 2016),
    0.0,
    1,
    (FightPropNtfParamPtr *)&v38);
  std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v38);
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((contexta._M_string_length + 2696) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((contexta._M_string_length + 2696) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(contexta._M_string_length + 2696, Now, contexta._M_string_length + 2696);
  }
  *(_DWORD *)(contexta._M_string_length + 2696) = Now;
  *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 3) = *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 2);
  std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)(v2 + 128));
  if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v2 + 128)) )
  {
    v13 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    ability_name = &ActorAbility::getConfigRef(v13)->ability_name;
    if ( std::operator==<char>("ClimateAbility_Cold", ability_name) )
    {
      *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 3) = 7;
    }
    else if ( std::operator==<char>("SceneObj_Storm_Lightning", ability_name) )
    {
      *((_DWORD *)&contexta._anon_0._M_allocated_capacity + 3) = 8;
    }
  }
  Avatar::logPlayerLogAvatarDeathRevival(
    (Avatar *const)contexta._M_string_length,
    *((uint32_t *)&contexta._anon_0._M_allocated_capacity + 3));
  Avatar::resetSatiation((Avatar *const)contexta._M_string_length);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
  {
    std::enable_shared_from_this<Entity>::shared_from_this((std::enable_shared_from_this<Entity> *const)&v38);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Player::getAvatarComp(v14);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 224));
    *(_BYTE *)(v2 + 48) = std::operator==<Avatar,Entity>(
                            (const std::shared_ptr<Avatar> *)(v2 + 224),
                            (const std::shared_ptr<Entity> *)&v38);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 224));
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)&v38);
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    SceneComp = Player::getSceneComp(v15);
    v17 = *(_BYTE *)(v2 + 48);
    if ( *(_BYTE *)(((contexta._M_string_length + 2672) >> 3) + 0x7FFF8000) )
    {
      SceneComp = (PlayerSceneComp *)(contexta._M_string_length + 2672);
      __asan_report_load8(contexta._M_string_length + 2672);
    }
    PlayerSceneComp::onAvatarDie(SceneComp, *(_QWORD *)(contexta._M_string_length + 2672), v17);
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    EventComp = Player::getEventComp(v18);
    common::tools::perf::make_shared<AvatarDieEvent,unsigned long &,bool &>(
      (unsigned __int64 *)(v2 + 224),
      (bool *)(contexta._M_string_length + 2672),
      (unsigned __int64 *)(v2 + 48),
      (bool *)(contexta._M_string_length + 2672));
    std::shared_ptr<BaseEvent>::shared_ptr<AvatarDieEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v38,
      (std::shared_ptr<AvatarDieEvent> *)(v2 + 224));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v38);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v38);
    std::shared_ptr<AvatarDieEvent>::~shared_ptr((std::shared_ptr<AvatarDieEvent> *const)(v2 + 224));
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v21 = Player::getAvatarComp(v20);
    contexta._anon_0._M_local_buf[7] = PlayerAvatarComp::isAllAvatarDead(v21);
    v22 = (bool *)(contexta._M_string_length + 2672);
    v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    *(_DWORD *)(v2 + 80) = Player::getUid(v23);
    common::tools::perf::make_shared<WorldAvatarDieEvent,unsigned int,unsigned long &,bool &,bool>(
      (unsigned int *)(v2 + 160),
      (unsigned __int64 *)(v2 + 80),
      v22,
      (bool *)(v2 + 48),
      (unsigned int *)((char *)&contexta._anon_0._M_allocated_capacity + 7),
      v24,
      (bool *)contexta._M_dataplus._M_p,
      (bool *)contexta._M_string_length);
    v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Player::getSceneComp(v25);
    PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 192));
    if ( std::operator!=<World>((const std::shared_ptr<World> *)(v2 + 192), 0LL) )
    {
      v26 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      std::shared_ptr<WorldAvatarDieEvent>::shared_ptr(
        (std::shared_ptr<WorldAvatarDieEvent> *const)&v38,
        (const std::shared_ptr<WorldAvatarDieEvent> *)(v2 + 160));
      std::function<ForeachPolicy ()(Player &)>::function<Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v39,
        (Avatar::onDie::<lambda(Player&)> *)&v38);
      World::foreachPlayer(v26, (std::function<ForeachPolicy(Player&)> *)&v39);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v39);
      Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1}::~Player((Avatar::onDie::<lambda(Player&)> *const)&v38);
    }
    if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(contexta._M_dataplus._M_p + 8)) )
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
        (const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)contexta._M_dataplus._M_p
      + 8);
      Creature::findTopOwnerOrSelf((Creature *const)&v38);
      std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 224));
      std::shared_ptr<Creature>::~shared_ptr(&v38);
      if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 224)) )
      {
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        WatcherComp = Player::getWatcherComp(v27);
        v29 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
        MonsterId = Monster::getMonsterId(v29);
        PlayerWatcherComp::triggerKilledByCertainMonster(WatcherComp, MonsterId);
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 224));
    }
    if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v2 + 128)) )
    {
      v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v32 = Player::getWatcherComp(v31);
      v33 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      ConfigRef = ActorAbility::getConfigRef(v33);
      PlayerWatcherComp::triggerKilledBySpecificAbility(v32, &ConfigRef->ability_name);
    }
    std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 192));
    std::shared_ptr<WorldAvatarDieEvent>::~shared_ptr((std::shared_ptr<WorldAvatarDieEvent> *const)(v2 + 160));
  }
  std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 128));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  std::string::~string((void *)(v2 + 256));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 652: range 0000000013795EAC-0000000013795F23
ForeachPolicy __cdecl Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1}::operator()(
        const Avatar::onDie::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-20h] BYREF

  EventComp = Player::getEventComp(player);
  std::shared_ptr<BaseEvent>::shared_ptr<WorldAvatarDieEvent,void>(
    &p_event_ptr,
    &__closure->__world_avatar_die_event_ptr);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  return 0;
};

// Line 652: range 000000001380D78E-000000001380D7B3
void __cdecl Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1}::Player(
        Avatar::onDie::<lambda(Player&)> *const this,
        Avatar::onDie::<lambda(Player&)> *a2)
{
  std::shared_ptr<WorldAvatarDieEvent>::shared_ptr(
    &this->__world_avatar_die_event_ptr,
    &a2->__world_avatar_die_event_ptr);
};

// Line 652: range 000000001380D87E-000000001380D8A3
void __cdecl Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1}::Player(
        Avatar::onDie::<lambda(Player&)> *const this,
        const Avatar::onDie::<lambda(Player&)> *a2)
{
  std::shared_ptr<WorldAvatarDieEvent>::shared_ptr(
    &this->__world_avatar_die_event_ptr,
    &a2->__world_avatar_die_event_ptr);
};

// Line 652: range 0000000013795F24-0000000013795F3E
void __cdecl Avatar::onDie(ChangeHpContext &)::{lambda(Player &)#1}::~Player(
        Avatar::onDie::<lambda(Player&)> *const this)
{
  std::shared_ptr<WorldAvatarDieEvent>::~shared_ptr(&this->__world_avatar_die_event_ptr);
};

// Line 674: range 0000000013796B3E-0000000013796E85
std::tuple<proto::PlayerDieType,unsigned int> __cdecl Avatar::getDieInfoFromAttacker(
        Avatar *const this,
        CreaturePtr *p_attacker_ptr)
{
  CreaturePtr *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  CreaturePtr *p_attacker_ptra; // [rsp+8h] [rbp-A8h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  p_attacker_ptra = v2;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 die_type:675 48 4 22 murderer_entity_id:676 64 16 14 gadget_ptr:689";
  *(_QWORD *)(v3 + 16) = Avatar::getDieInfoFromAttacker;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  if ( std::operator==<Creature>(0LL, p_attacker_ptra) )
  {
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[7] >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[7] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 8LL);
    }
  }
  else
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptra);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    v7 = *(_QWORD *)v6 + 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 24LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) == 2 )
    {
      *(_DWORD *)(v3 + 32) = 1;
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptra);
      *(_DWORD *)(v3 + 48) = Entity::getEntityId((const Entity *const)v8);
    }
    else
    {
      std::dynamic_pointer_cast<Gadget,Creature>((const std::shared_ptr<Creature> *)(v3 + 64));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 64)) )
      {
        *(_DWORD *)(v3 + 32) = 2;
        v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        *(_DWORD *)(v3 + 48) = Creature::getOwnerEntityId(v9);
        if ( *(_DWORD *)(v3 + 48) )
          *(_DWORD *)(v3 + 32) = 1;
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 64));
    }
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[7] >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[7] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 8LL);
    }
  }
  std::make_tuple<proto::PlayerDieType &,unsigned int &>(
    (proto::PlayerDieType *)this,
    (unsigned int *)(v3 + 32),
    (proto::PlayerDieType *)(v3 + 48),
    (unsigned int *)(v3 + 32));
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
  return (std::tuple<proto::PlayerDieType,unsigned int>)this;
};

// Line 706: range 0000000013796E86-00000000137979B9
int32_t __cdecl Avatar::setMotionInfo(
        Avatar *const this,
        const proto::MotionInfo *motion_info,
        MotionContext *motion_context)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v8; // rax
  char v9; // r14
  Player *v10; // rax
  int v11; // r14d
  proto::MotionState v12; // eax
  unsigned __int64 Position; // rax
  unsigned __int64 Rotation; // rax
  Scene *v15; // rax
  int32_t result; // eax
  bool v17; // [rsp+17h] [rbp-139h]
  int32_t ret; // [rsp+30h] [rbp-120h]
  uint32_t uid; // [rsp+34h] [rbp-11Ch]
  google::protobuf::RepeatedPtrField<proto::Vector>::const_iterator __for_begin; // [rsp+38h] [rbp-118h] BYREF
  google::protobuf::RepeatedPtrField<proto::Vector>::const_iterator __for_end; // [rsp+40h] [rbp-110h] BYREF
  uint64_t now_ms; // [rsp+48h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::Vector> *__for_range; // [rsp+50h] [rbp-100h]
  const proto::Vector *v; // [rsp+58h] [rbp-F8h]
  char v26[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 16 14 player_ptr:710 80 16 13 scene_ptr:749 112 48 12 location:756";
  *(_QWORD *)(v4 + 16) = Avatar::setMotionInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  if ( proto::MotionInfo::state(motion_info) != MOTION_SKIFF_NORMAL
    && proto::MotionInfo::state(motion_info) != MOTION_SKIFF_DASH )
  {
    goto LABEL_73;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v8 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v8)(v4 + 48, this);
  v9 = 0;
  v17 = 1;
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 48)) )
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    Player::getVehicleComp(v10);
    PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v4 + 80));
    v9 = 1;
    if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 80)) )
      v17 = 0;
  }
  if ( v9 )
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 80));
  if ( v17 )
  {
    v3 = 0;
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 48));
  if ( v11 == 1 )
  {
LABEL_73:
    if ( *(char *)(((unsigned __int64)&this->prev_speed_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->prev_speed_.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 45) & 7) >= *(_BYTE *)((((unsigned __int64)&this->prev_speed_.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->prev_speed_, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&this->baseclass_0[392] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[403] >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[403] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->baseclass_0[392], 12LL);
    }
    this->prev_speed_ = *(Vector3 *)&this->baseclass_0[392];
    ret = Entity::setMotionInfo((Entity *const)this, motion_info, motion_context);
    now_ms = common::tools::TimeUtils::getNowMs();
    v12 = proto::MotionInfo::state(motion_info);
    if ( v12 > MOTION_DASH )
    {
      if ( (unsigned int)(v12 - 47) > 1 )
      {
LABEL_47:
        if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->last_valid_time_ms_, motion_info);
        this->last_valid_time_ms_ = 0LL;
LABEL_50:
        Entity::getScene((const Entity *const)(v4 + 80));
        if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 80), 0LL) )
        {
          uid = Avatar::getUid(this);
          if ( uid )
          {
            if ( *(char *)(((unsigned __int64)&motion_context->is_do_move >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&motion_context->is_do_move);
            if ( motion_context->is_do_move )
            {
              ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v4 + 112));
              Position = (unsigned __int64)Entity::getPosition((const Entity *const)this);
              if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
              {
                Position = __asan_report_load_n(Position, 12LL);
              }
              *(_QWORD *)(v4 + 112) = *(_QWORD *)Position;
              *(_DWORD *)(v4 + 120) = *(_DWORD *)(Position + 8);
              Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)this);
              if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
                && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
                && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
              {
                Rotation = __asan_report_load_n(Rotation, 12LL);
              }
              *(_QWORD *)(v4 + 124) = *(_QWORD *)Rotation;
              *(_DWORD *)(v4 + 132) = *(_DWORD *)(Rotation + 8);
              if ( (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3)
                                                                  + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this - 33) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
              {
                __asan_report_load_n(&this->last_valid_pos_, 12LL);
              }
              *(Vector3 *)(v4 + 136) = this->last_valid_pos_;
              if ( *(char *)(((unsigned __int64)&this->last_valid_rot_ >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)this - 21) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
              {
                __asan_report_load_n(&this->last_valid_rot_, 12LL);
              }
              *(Vector3 *)(v4 + 148) = this->last_valid_rot_;
              v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
              Scene::setPlayerLocation(v15, uid, (const ScenePlayerLocation *)(v4 + 112));
            }
          }
        }
        std::vector<Vector3>::clear(&this->last_move_params_);
        __for_range = proto::MotionInfo::params(motion_info);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Vector>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Vector>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          v = google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator*(&__for_begin);
          std::vector<Vector3>::emplace_back<proto::Vector const&>(
            &this->last_move_params_,
            v,
            (const proto::Vector *)&this->last_move_params_);
          google::protobuf::internal::RepeatedPtrIterator<proto::Vector const>::operator++(&__for_begin);
        }
        v3 = ret;
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 80));
        goto LABEL_68;
      }
    }
    else if ( v12 < MOTION_STANDBY )
    {
      goto LABEL_47;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->last_valid_time_ms_);
    if ( this->last_valid_time_ms_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_valid_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->last_valid_time_ms_);
      if ( now_ms > this->last_valid_time_ms_ + 500 )
      {
        if ( (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3)
                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->last_valid_pos_ >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 33) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_pos_.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->last_valid_pos_, 12LL);
        }
        if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[356] >> 3)
                                                             + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[356] >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[367] >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[367] >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load_n(&this->baseclass_0[356], 12LL);
        }
        this->last_valid_pos_ = *(Vector3 *)&this->baseclass_0[356];
        if ( *(char *)(((unsigned __int64)&this->last_valid_rot_ >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 21) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_valid_rot_.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->last_valid_rot_, 12LL);
        }
        if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3)
                                                             + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load_n(&this->baseclass_0[380], 12LL);
        }
        this->last_valid_rot_ = *(Vector3 *)&this->baseclass_0[380];
        this->last_valid_time_ms_ = now_ms;
      }
    }
    else
    {
      this->last_valid_time_ms_ = now_ms + 500;
    }
    goto LABEL_50;
  }
LABEL_68:
  result = v3;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 774: range 00000000137979BA-000000001379891B
int32_t __cdecl Avatar::setMotionState(
        Avatar *const this,
        const proto::MotionInfo *motion_info,
        uint32_t scene_time_ms)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const proto::Vector *v13; // rax
  __m128i v14; // xmm0
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  PileBoolValue *IsInvincible; // rax
  PileBoolValue *IsLockHp; // rax
  const proto::Vector *v20; // rax
  __m128i v22; // xmm0
  GameserverService *v23; // rax
  const float *v24; // rax
  _DWORD *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  Player *v32; // rax
  PlayerWatcherComp *WatcherComp; // rax
  Player *v34; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::array<float,2>::const_reference v36; // rax
  unsigned int *v37; // rdx
  std::array<float,2>::const_reference v38; // rax
  unsigned int *v39; // rdx
  Player *v40; // rax
  PlayerWatcherComp *v41; // rax
  float v42; // xmm0_4
  __int64 v43; // rdx
  unsigned int *v44; // r8
  proto::MotionState *v45; // r9
  Player *v46; // rax
  PlayerEventComp *EventComp; // r14
  Player *v48; // rax
  PlayerWatcherComp *v49; // rax
  Player *v50; // rax
  PlayerWatcherComp *v51; // r14
  Player *v52; // rax
  PlayerVehicleComp *VehicleComp; // rax
  uint32_t CurVehicleType; // eax
  int32_t result; // eax
  bool is_in_swim; // [rsp+27h] [rbp-199h]
  float __a; // [rsp+28h] [rbp-198h] BYREF
  float val; // [rsp+2Ch] [rbp-194h] BYREF
  float add_stamina; // [rsp+30h] [rbp-190h]
  proto::MotionState prev_motion_state; // [rsp+34h] [rbp-18Ch]
  uint32_t prev_motion_state_change_time_ms; // [rsp+38h] [rbp-188h]
  int32_t ret; // [rsp+3Ch] [rbp-184h]
  float min_speed; // [rsp+40h] [rbp-180h]
  float min_hurt_rate; // [rsp+44h] [rbp-17Ch]
  float add_speed; // [rsp+48h] [rbp-178h]
  float add_hurt_rate; // [rsp+4Ch] [rbp-174h]
  float max_hp; // [rsp+50h] [rbp-170h]
  float hurt; // [rsp+54h] [rbp-16Ch]
  float cur_stamina; // [rsp+58h] [rbp-168h]
  float swim_add_stamina; // [rsp+5Ch] [rbp-164h]
  float cur_stamina_0; // [rsp+60h] [rbp-160h]
  float delta_stamina; // [rsp+64h] [rbp-15Ch]
  uint32_t server_time_ms; // [rsp+68h] [rbp-158h]
  uint32_t dash_time; // [rsp+6Ch] [rbp-154h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+70h] [rbp-150h]
  const std::array<float,2> *cost_staminas; // [rsp+78h] [rbp-148h]
  std::shared_ptr<FightPropNtfParam> p_param_ptr; // [rsp+80h] [rbp-140h] BYREF
  StaminaChangeParam param; // [rsp+90h] [rbp-130h] BYREF
  common::milog::MiLogStream v80; // [rsp+B0h] [rbp-110h] BYREF
  char v81[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 16 motion_state:781 64 4 15 sub_stamina:792 80 4 16 drop_speed_y:806 96 4 13 hurt_rate:81"
                        "3 112 4 21 fall_damage_ratio:815 128 16 14 player_ptr:775 160 16 13 event_ptr:918";
  *(_QWORD *)(v3 + 16) = Avatar::setMotionState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 128, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "setMotionState",
      778);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v80, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v80);
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::MotionInfo::state(motion_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[408]);
    }
    prev_motion_state = *(_DWORD *)&this->baseclass_0[408];
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[412] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[412] >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->baseclass_0[412]);
    }
    prev_motion_state_change_time_ms = *(_DWORD *)&this->baseclass_0[412];
    ret = Entity::setMotionState((Entity *const)this, motion_info, scene_time_ms);
    if ( ret && proto::MotionInfo::state(motion_info) != MOTION_DASH_BEFORE_SHAKE )
    {
      v8 = ret;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 160));
      const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.const_value_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
      is_in_swim = 0;
      add_stamina = 0.0;
      v14 = 0LL;
      *(_DWORD *)(v3 + 64) = 0;
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/avatar.cpp",
        "setMotionState",
        794);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v80, (const char (*)[15])"motion_state: ");
      v11 = common::milog::MiLogStream::operator<<<proto::MotionState,(proto::MotionState*)0>(
              v10,
              (const proto::MotionState *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" speed_y:");
      v13 = proto::MotionInfo::speed(motion_info);
      *(float *)v14.m128i_i32 = proto::Vector::y(v13);
      val = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
      v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &val);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, this);
      common::milog::MiLogStream::~MiLogStream(&v80);
      switch ( *(_DWORD *)(v3 + 48) )
      {
        case 8:
          *(float *)v14.m128i_i32 = Avatar::getClimbJumpCostStamina(this);
          *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v14);
          break;
        case 0xE:
        case 0xF:
        case 0x11:
          if ( prev_motion_state == MOTION_SWIM_DASH )
          {
            *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getSwimDashCostStamina(const_value_config_mgr);
            *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v14);
            if ( *(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->last_sub_stamina_);
            }
            if ( *(float *)(v3 + 64) <= this->last_sub_stamina_ )
            {
              v14 = 0LL;
              *(_DWORD *)(v3 + 64) = 0;
            }
            else
            {
              v14 = (__m128i)*(unsigned int *)(v3 + 64);
              *(float *)(v3 + 64) = *(float *)v14.m128i_i32 - this->last_sub_stamina_;
            }
          }
          is_in_swim = 1;
          break;
        case 0x10:
          *(float *)v14.m128i_i32 = Avatar::getCurStamina(this);
          cur_stamina = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
          *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getSwimDashCostStamina(const_value_config_mgr);
          *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v14);
          v14 = (__m128i)0x3FB999999999999AuLL;
          *(double *)v14.m128i_i64 = *(float *)(v3 + 64) + 0.1;
          if ( *(double *)v14.m128i_i64 > cur_stamina )
          {
            *(double *)v14.m128i_i64 = cur_stamina - 0.1;
            *(float *)v14.m128i_i32 = *(double *)v14.m128i_i64;
            *(_DWORD *)(v3 + 64) = v14.m128i_i32[0];
          }
          is_in_swim = 1;
          break;
        case 0x24:
          *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getCrouchRollCostStamina(const_value_config_mgr);
          *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v14);
          break;
        case 0x26:
          IsInvincible = FightPropComp::getIsInvincible(&this->fight_prop_comp_);
          if ( !PileBoolValue::getValue(IsInvincible) )
          {
            IsLockHp = FightPropComp::getIsLockHp(&this->fight_prop_comp_);
            if ( !PileBoolValue::getValue(IsLockHp) )
            {
              v20 = proto::MotionInfo::speed(motion_info);
              *(float *)v14.m128i_i32 = proto::Vector::y(v20);
              *(_DWORD *)(v3 + 80) = _mm_cvtsi128_si32(v14);
              *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getFallHurtMinSpeed(const_value_config_mgr);
              min_speed = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
              *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getFallHurtMinHurtRate(const_value_config_mgr);
              min_hurt_rate = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
              *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getFallHurtAddSpeed(const_value_config_mgr);
              add_speed = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
              *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getFallHurtAddHurtRate(const_value_config_mgr);
              add_hurt_rate = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
              v14 = (__m128i)LODWORD(min_speed);
              if ( min_speed > *(float *)(v3 + 80) )
              {
                v14 = _mm_cvtsi32_si128(LODWORD(add_speed));
                if ( std::fabs(*(float *)v14.m128i_i32) > 0.00000011920929 )
                {
                  v22 = (__m128i)*(unsigned int *)(v3 + 80);
                  *(float *)(v3 + 96) = (float)((float)((float)(*(float *)v22.m128i_i32 - min_speed) * add_hurt_rate)
                                              / add_speed)
                                      + min_hurt_rate;
                  *(float *)v22.m128i_i32 = Creature::getMaxHp(this);
                  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
                  v23 = ServiceBox::findService<GameserverService>();
                  val = AbilityComp::getProperty(
                          &this->ability_comp_,
                          &v23->ability_data_mgr.ACTOR_FALLING_DAMAGE_RATIO)
                      + 1.0;
                  __a = 0.0;
                  v24 = std::max<float>(&__a, &val);
                  v25 = v24;
                  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v24);
                  }
                  *(_DWORD *)(v3 + 112) = *v25;
                  hurt = *(float *)(v3 + 112) * (float)(*(float *)(v3 + 96) * max_hp);
                  common::milog::MiLogStream::create(
                    &v80,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/avatar/avatar.cpp",
                    "setMotionState",
                    817);
                  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          &v80,
                          (const char (*)[16])"[FALL] speed_y:");
                  v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, (const float *)(v3 + 80));
                  v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v27,
                          (const char (*)[13])", hurt_rate:");
                  v29 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, (const float *)(v3 + 96));
                  v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          v29,
                          (const char (*)[21])", fall_damage_ratio:");
                  v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, (const float *)(v3 + 112));
                  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v31, this);
                  common::milog::MiLogStream::~MiLogStream(&v80);
                  std::shared_ptr<FightPropNtfParam>::shared_ptr(&p_param_ptr, 0LL);
                  Creature::changeCurHp(this, -hurt, CHANGE_HP_SUB_FALL, 1, &p_param_ptr);
                  std::shared_ptr<FightPropNtfParam>::~shared_ptr(&p_param_ptr);
                  v14 = (__m128i)LODWORD(hurt);
                  if ( hurt > 0.00000011920929 )
                  {
                    v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    WatcherComp = Player::getWatcherComp(v32);
                    PlayerWatcherComp::setIsHurtInLastTimeInterval(WatcherComp, 1);
                  }
                }
              }
            }
          }
          break;
        case 0x29:
          cost_staminas = ConstValueExcelConfigMgr::getDashBsCostStaminas(const_value_config_mgr);
          v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          AvatarComp = Player::getAvatarComp(v34);
          if ( PlayerAvatarComp::getMonsterAlertCount(AvatarComp) )
          {
            v36 = std::array<float,2ul>::operator[](cost_staminas, 0LL);
            v37 = (unsigned int *)v36;
            if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v36);
            }
            v14 = (__m128i)*v37;
            *(_DWORD *)(v3 + 64) = v14.m128i_i32[0];
          }
          else
          {
            v38 = std::array<float,2ul>::operator[](cost_staminas, 1uLL);
            v39 = (unsigned int *)v38;
            if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v38);
            }
            v14 = (__m128i)*v39;
            *(_DWORD *)(v3 + 64) = v14.m128i_i32[0];
          }
          v40 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v41 = Player::getWatcherComp(v40);
          PlayerWatcherComp::setIsDashInLastTimeInterval(v41, 1);
          break;
        default:
          break;
      }
      if ( is_in_swim
        && (unsigned int)prev_motion_state <= MOTION_DASH_BEFORE_SHAKE
        && ((1LL << prev_motion_state) & 0x20200000070LL) != 0 )
      {
        *(float *)v14.m128i_i32 = ConstValueExcelConfigMgr::getWalkToSwimAddStamina(const_value_config_mgr);
        swim_add_stamina = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
        *(float *)v14.m128i_i32 = Avatar::getCurStamina(this);
        cur_stamina_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
        if ( (float)(*(float *)(v3 + 64) + swim_add_stamina) > cur_stamina_0 )
          add_stamina = swim_add_stamina;
      }
      Avatar::updateStaminaCost(this, (float *)(v3 + 64), 0LL);
      delta_stamina = add_stamina - *(float *)(v3 + 64);
      param.type = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->baseclass_0[408]);
      }
      param.motion_state = *(_DWORD *)&this->baseclass_0[408];
      memset(&param.skill_id, 0, 20);
      Avatar::changeStamina(this, delta_stamina, &param, 0);
      v42 = *(float *)(v3 + 64);
      v43 = (*(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_sub_stamina_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v43 )
        __asan_report_store4(&this->last_sub_stamina_, (((_BYTE)this - 20) & 7u) + 3, v43);
      this->last_sub_stamina_ = v42;
      server_time_ms = Avatar::getPlayerTimeMs(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->baseclass_0[408]);
      }
      if ( prev_motion_state != *(_DWORD *)&this->baseclass_0[408] )
      {
        switch ( *(_DWORD *)&this->baseclass_0[408] )
        {
          case 6:
          case 0x10:
          case 0x21:
          case 0x30:
            common::tools::perf::make_shared<AccelerateEvent,unsigned long &,unsigned int &,proto::MotionState &>(
              (unsigned __int64 *)&p_param_ptr,
              (unsigned int *)&this->guid_,
              (proto::MotionState *)&this->avatar_id_,
              (unsigned __int64 *)&this->baseclass_0[408],
              v44,
              v45);
            std::shared_ptr<BaseEvent>::shared_ptr<AccelerateEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v3 + 160),
              (std::shared_ptr<AccelerateEvent> *)&p_param_ptr);
            std::shared_ptr<AccelerateEvent>::~shared_ptr((std::shared_ptr<AccelerateEvent> *const)&p_param_ptr);
            v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            EventComp = Player::getEventComp(v46);
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&p_param_ptr,
              (const std::shared_ptr<BaseEvent> *)(v3 + 160));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_param_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_param_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
            break;
          case 7:
          case 8:
            v48 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v49 = Player::getWatcherComp(v48);
            PlayerWatcherComp::setIsClimbInLastTimeInterval(v49, 1);
            break;
          default:
            break;
        }
        Avatar::setIsInDash(this, motion_info, server_time_ms);
        Avatar::setIsInFly(this, motion_info, server_time_ms);
        if ( prev_motion_state == MOTION_SKIFF_DASH && scene_time_ms >= prev_motion_state_change_time_ms )
        {
          dash_time = (scene_time_ms - prev_motion_state_change_time_ms) / 0x3E8;
          v50 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v51 = Player::getWatcherComp(v50);
          v52 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          VehicleComp = Player::getVehicleComp(v52);
          CurVehicleType = PlayerVehicleComp::getCurVehicleType(VehicleComp);
          PlayerWatcherComp::triggerVehicleDash(v51, CurVehicleType, dash_time);
        }
      }
      Avatar::tryTriggerFlyAndDashWatcher(this, server_time_ms);
      v8 = 0;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
  result = v8;
  if ( v81 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 945: range 000000001379891C-0000000013799344
int32_t __cdecl Avatar::checkMoveSpeed(
        Avatar *const this,
        proto::MotionState motion_state,
        const Vector3 *pos,
        MotionContext *motion_context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int32_t v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool *p_is_gm_talk_open; // rax
  Player *v13; // rax
  PlayerGmComp *GmComp; // rax
  bool v15; // r15
  Player *v16; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Player *v18; // rax
  PlayerAvatarComp *v19; // r14
  uint64_t NowMs; // rax
  Player *v21; // rax
  Vector3 *Position; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const Vector3 *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  void (__fastcall **v29)(common::milog::MiLogStream *, Avatar *const); // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  proto::MotionInfo *v33; // rax
  google::protobuf::uint64 v34; // rax
  Player *v35; // rax
  Player *v36; // r14
  Player *v37; // rax
  Player *v38; // rax
  PlayerVehicleComp *VehicleComp; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+33h] [rbp-17Dh] BYREF
  int32_t ret; // [rsp+34h] [rbp-17Ch]
  PlayerAvatarComp *avatar_comp; // [rsp+38h] [rbp-178h]
  uint64_t now_ms; // [rsp+40h] [rbp-170h]
  uint64_t last_move_time_ms; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v48; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v49; // [rsp+60h] [rbp-150h] BYREF
  std::string val; // [rsp+80h] [rbp-130h] BYREF
  std::string v51; // [rsp+A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v52; // [rsp+C0h] [rbp-F0h] BYREF
  char v53[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 player_ptr:947 64 64 10 notify:998";
  *(_QWORD *)(v4 + 16) = Avatar::checkMoveSpeed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(v4 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "checkMoveSpeed",
      950);
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v52, (const char (*)[8])"avatar:");
    v9 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" player is null");
    common::milog::MiLogStream::~MiLogStream(&v52);
    v10 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v48);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
    p_is_gm_talk_open = &v11->is_gm_talk_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_gm_talk_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_gm_talk_open);
    }
    v15 = 0;
    if ( v11->is_gm_talk_open )
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      GmComp = Player::getGmComp(v13);
      if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 6u) )
        v15 = 1;
    }
    std::shared_ptr<Config>::~shared_ptr(&v48);
    if ( v15 )
    {
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      AvatarComp = Player::getAvatarComp(v16);
      PlayerAvatarComp::setIsNeedDragBack(AvatarComp, 0);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v19 = Player::getAvatarComp(v18);
      NowMs = common::tools::TimeUtils::getNowMs();
      PlayerAvatarComp::setLastMoveTimeMs(v19, NowMs);
      v10 = 0;
    }
    else
    {
      v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      avatar_comp = Player::getAvatarComp(v21);
      ret = 0;
      if ( PlayerAvatarComp::checkMoveSpeed(avatar_comp, this, motion_state, pos) )
        ret = -1;
      if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(motion_context);
      }
      if ( PlayerAvatarComp::checkSceneTimeMoveSpeed(
             avatar_comp,
             this,
             motion_state,
             motion_context->scene_time_ms,
             pos) )
      {
        ret = -1;
      }
      now_ms = common::tools::TimeUtils::getNowMs();
      if ( ret )
      {
        Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
        if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
        }
        PlayerAvatarComp::setDragBackPos(avatar_comp, *Position);
        PlayerAvatarComp::setIsNeedDragBack(avatar_comp, 1);
        last_move_time_ms = PlayerAvatarComp::getLastMoveTimeMs(avatar_comp);
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/avatar.cpp",
          "checkMoveSpeed",
          979);
        v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v49,
                (const char (*)[25])"setMotionInfo fail, pos:");
        Vector3::toString[abi:cxx11](&val, pos);
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &val);
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" back to:");
        v26 = Entity::getPosition((const Entity *const)this);
        Vector3::toString[abi:cxx11](&v51, v26);
        v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &v51);
        v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v29 = *(void (__fastcall ***)(common::milog::MiLogStream *, Avatar *const))this->baseclass_0;
        if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
          v29 = (void (__fastcall **)(common::milog::MiLogStream *, Avatar *const))__asan_report_load8(*(_QWORD *)this->baseclass_0);
        (*v29)(&v52, this);
        v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v52);
        v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
        v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        operator<<(v31, v32);
        std::string::~string(&v52);
        std::string::~string(&v51);
        std::string::~string(&val);
        common::milog::MiLogStream::~MiLogStream(&v49);
        proto::ForceDragAvatarNotify::ForceDragAvatarNotify((proto::ForceDragAvatarNotify *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->baseclass_0[256]);
        }
        proto::ForceDragAvatarNotify::set_entity_id(
          (proto::ForceDragAvatarNotify *const)(v4 + 64),
          *(_DWORD *)&this->baseclass_0[256]);
        v33 = proto::ForceDragAvatarNotify::mutable_motion_info((proto::ForceDragAvatarNotify *const)(v4 + 64));
        Entity::getMotionInfo((const Entity *const)this, v33);
        if ( *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)motion_context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(motion_context);
        }
        proto::ForceDragAvatarNotify::set_scene_time(
          (proto::ForceDragAvatarNotify *const)(v4 + 64),
          motion_context->scene_time_ms);
        proto::ForceDragAvatarNotify::set_last_move_time_ms(
          (proto::ForceDragAvatarNotify *const)(v4 + 64),
          last_move_time_ms);
        if ( last_move_time_ms )
        {
          if ( now_ms <= last_move_time_ms )
            v34 = 0LL;
          else
            v34 = now_ms - last_move_time_ms;
          proto::ForceDragAvatarNotify::set_delta_time_ms((proto::ForceDragAvatarNotify *const)(v4 + 64), v34);
        }
        v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        Player::sendProto(v35, (const google::protobuf::Message *)(v4 + 64));
        v36 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        std::allocator<char>::allocator(&__a, v4 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)&v52,
          "Move speed is too fast! Use GM \"speed_check 0\" to turn off speed check.",
          &__a);
        Player::notifyGMServerLog(v36, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)&v52);
        std::string::~string(&v52);
        std::allocator<char>::~allocator(&__a);
        proto::ForceDragAvatarNotify::~ForceDragAvatarNotify((proto::ForceDragAvatarNotify *const)(v4 + 64));
      }
      else if ( PlayerAvatarComp::getIsNeedDragBack(avatar_comp) )
      {
        PlayerAvatarComp::setIsNeedDragBack(avatar_comp, 0);
        proto::ForceDragAvatarNotify::ForceDragAvatarNotify((proto::ForceDragAvatarNotify *const)(v4 + 64));
        proto::ForceDragAvatarNotify::set_is_first_valid((proto::ForceDragAvatarNotify *const)(v4 + 64), 1);
        v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        Player::sendProto(v37, (const google::protobuf::Message *)(v4 + 64));
        proto::ForceDragAvatarNotify::~ForceDragAvatarNotify((proto::ForceDragAvatarNotify *const)(v4 + 64));
      }
      v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      VehicleComp = Player::getVehicleComp(v38);
      PlayerVehicleComp::checkVehicleDistance(VehicleComp, pos);
      PlayerAvatarComp::checkAndRecordClientReportMoveSpeedOverLimit(avatar_comp, motion_state, pos, motion_context);
      PlayerAvatarComp::setLastMoveTimeMs(avatar_comp, now_ms);
      v10 = ret;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  result = v10;
  if ( v53 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1012: range 0000000013799346-000000001379982E
void __cdecl Avatar::setIsInDash(Avatar *const this, const proto::MotionInfo *motion_info, uint32_t scene_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  const proto::Vector *v8; // rax
  const proto::Vector *v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  Player *v18; // rax
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t v20; // eax
  Player *v21; // rax
  PlayerWatcherComp *v22; // rax
  bool old_is_in_dash; // [rsp+2Bh] [rbp-65h]
  uint32_t pass_time_ms; // [rsp+2Ch] [rbp-64h]
  char v26[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 player_ptr:1063";
  *(_QWORD *)(v3 + 16) = Avatar::setIsInDash;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_dash_);
  }
  old_is_in_dash = this->is_in_dash_;
  switch ( proto::MotionInfo::state(motion_info) )
  {
    case MOTION_DASH:
    case MOTION_DANGER_DASH:
      v6 = ((_BYTE)this + 20) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_in_dash_, v6, v7);
      this->is_in_dash_ = 1;
      break;
    case MOTION_JUMP:
      if ( proto::MotionInfo::params_size(motion_info) > 0 )
      {
        v8 = proto::MotionInfo::params(motion_info, 0);
        if ( proto::Vector::x(v8) > 2.5 && (v9 = proto::MotionInfo::params(motion_info, 0), proto::Vector::x(v9) < 3.5) )
        {
          v11 = ((_BYTE)this + 20) & 7;
          v12 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v12 )
            __asan_report_store1(&this->is_in_dash_, v11, v12);
          this->is_in_dash_ = 1;
        }
        else
        {
          v13 = ((_BYTE)this + 20) & 7;
          v14 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v14 )
            __asan_report_store1(&this->is_in_dash_, v13, v14);
          this->is_in_dash_ = 0;
        }
      }
      break;
    case MOTION_FALL_ON_GROUND:
    case MOTION_NOTIFY:
    case MOTION_LAND_SPEED:
      break;
    default:
      v15 = ((_BYTE)this + 20) & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store1(&this->is_in_dash_, v15, v16);
      this->is_in_dash_ = 0;
      break;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_dash_);
  }
  if ( old_is_in_dash != this->is_in_dash_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v17 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Avatar *const))v17)(v3 + 32, this);
    if ( this->is_in_dash_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_start_dash_scene_time_ms_, this, &this->last_start_dash_scene_time_ms_);
      }
      this->last_start_dash_scene_time_ms_ = scene_time_ms;
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        WatcherComp = Player::getWatcherComp(v18);
        PlayerWatcherComp::setIsDashInLastTimeInterval(WatcherComp, 1);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_start_dash_scene_time_ms_);
      }
      if ( scene_time_ms <= this->last_start_dash_scene_time_ms_ )
        v20 = 0;
      else
        v20 = scene_time_ms - this->last_start_dash_scene_time_ms_;
      pass_time_ms = v20;
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v22 = Player::getWatcherComp(v21);
        PlayerWatcherComp::tryUpdateDashRecord(v22, pass_time_ms);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  }
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1084: range 0000000013799830-0000000013799D22
void __cdecl Avatar::setIsInFly(Avatar *const this, const proto::MotionInfo *motion_info, uint32_t scene_time_ms)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 Position; // rax
  Player *v13; // rax
  PlayerWatcherComp *WatcherComp; // rax
  const Vector3 *v15; // rax
  uint32_t v16; // eax
  Player *v17; // rax
  PlayerWatcherComp *v18; // rax
  bool old_is_in_fly; // [rsp+27h] [rbp-69h]
  float map_distance; // [rsp+28h] [rbp-68h]
  uint32_t pass_time_ms; // [rsp+2Ch] [rbp-64h]
  char v23[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 player_ptr:1103";
  *(_QWORD *)(v4 + 16) = Avatar::setIsInFly;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_fly_);
  }
  old_is_in_fly = this->is_in_fly_;
  if ( proto::MotionInfo::state(motion_info) == MOTION_FLY )
  {
    v7 = ((_BYTE)this + 21) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_in_fly_, v7, v8);
    this->is_in_fly_ = 1;
  }
  else
  {
    v9 = ((_BYTE)this + 21) & 7;
    v10 = (*(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v10 )
      __asan_report_store1(&this->is_in_fly_, v9, v10);
    this->is_in_fly_ = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_fly_);
  }
  if ( old_is_in_fly != this->is_in_fly_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Avatar *const))v11)(v4 + 32, this);
    if ( this->is_in_fly_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_start_fly_scene_time_ms_, this, &this->last_start_fly_scene_time_ms_);
      }
      this->last_start_fly_scene_time_ms_ = scene_time_ms;
      Position = (unsigned __int64)Entity::getPosition((const Entity *const)this);
      if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_start_fly_pos_ >> 3)
                                                          + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_pos_ >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->last_start_fly_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->last_start_fly_pos_.z + 3) >> 3)
                                                          + 0x7FFF8000) )
      {
        Position = __asan_report_store_n(&this->last_start_fly_pos_, 12LL);
      }
      if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
      {
        Position = __asan_report_load_n(Position, 12LL);
      }
      this->last_start_fly_pos_ = *(Vector3 *)Position;
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
      {
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        WatcherComp = Player::getWatcherComp(v13);
        PlayerWatcherComp::setIsFlyInLastTimeInterval(WatcherComp, 1);
      }
    }
    else if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
    {
      v15 = Entity::getPosition((const Entity *const)this);
      *(float *)v3.m128i_i32 = getDistance(&this->last_start_fly_pos_, v15);
      map_distance = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
      if ( *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_start_fly_scene_time_ms_);
      }
      if ( scene_time_ms <= this->last_start_fly_scene_time_ms_ )
        v16 = 0;
      else
        v16 = scene_time_ms - this->last_start_fly_scene_time_ms_;
      pass_time_ms = v16;
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      v18 = Player::getWatcherComp(v17);
      PlayerWatcherComp::tryUpdateFlyRecord(v18, pass_time_ms, map_distance);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  }
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1125: range 0000000013799D24-000000001379A302
void __cdecl Avatar::tryTriggerFlyAndDashWatcher(Avatar *const this, uint32_t scene_time_ms)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  uint32_t v7; // eax
  Player *v8; // rax
  PlayerWatcherComp *WatcherComp; // rax
  AbilityComp *AbilityComp; // rax
  AbilityComp *v11; // rax
  char v12; // al
  __int64 v13; // rdx
  AbilityComp *v14; // rax
  AbilityComp *v15; // rax
  uint32_t v16; // eax
  Player *v17; // rax
  PlayerWatcherComp *v18; // rax
  const Vector3 *Position; // rax
  uint32_t v20; // eax
  Player *v21; // rax
  PlayerWatcherComp *v22; // rax
  uint32_t pass_time_ms; // [rsp+10h] [rbp-80h]
  uint32_t pass_time_ms_0; // [rsp+14h] [rbp-7Ch]
  float map_distance; // [rsp+18h] [rbp-78h]
  uint32_t pass_time_ms_1; // [rsp+1Ch] [rbp-74h]
  char v27[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 player_ptr:1127";
  *(_QWORD *)(v3 + 16) = Avatar::tryTriggerFlyAndDashWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 32, this);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_dash_);
    }
    if ( !this->is_in_dash_ )
      goto LABEL_26;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->last_trigger_watcher_dash_time_ms_);
    }
    if ( scene_time_ms > this->last_trigger_watcher_dash_time_ms_ + 2000 )
    {
      this->last_trigger_watcher_dash_time_ms_ = scene_time_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_start_dash_scene_time_ms_);
      }
      if ( scene_time_ms <= this->last_start_dash_scene_time_ms_ )
        v7 = 0;
      else
        v7 = scene_time_ms - this->last_start_dash_scene_time_ms_;
      pass_time_ms = v7;
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      WatcherComp = Player::getWatcherComp(v8);
      PlayerWatcherComp::tryUpdateDashRecord(WatcherComp, pass_time_ms);
    }
    else
    {
      if ( !Entity::isOnScene((const Entity *const)this) )
        goto LABEL_28;
      AbilityComp = Creature::getAbilityComp(this);
      if ( !AbilityComp::getDashModifierCount(AbilityComp) )
        goto LABEL_28;
      v11 = Creature::getAbilityComp(this);
      if ( !AbilityComp::getLastDashModifierAppliedPlayerTimeMs(v11) )
        goto LABEL_28;
LABEL_26:
      if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->last_trigger_watcher_dash_time_ms_);
      }
      if ( scene_time_ms > this->last_trigger_watcher_dash_time_ms_ + 2000 )
        v12 = 1;
      else
LABEL_28:
        v12 = 0;
      if ( v12 )
      {
        v13 = (*(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_dash_time_ms_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
          __asan_report_store4(&this->last_trigger_watcher_dash_time_ms_, (((_BYTE)this + 28) & 7u) + 3, v13);
        this->last_trigger_watcher_dash_time_ms_ = scene_time_ms;
        v14 = Creature::getAbilityComp(this);
        if ( scene_time_ms <= AbilityComp::getLastDashModifierAppliedPlayerTimeMs(v14) )
        {
          v16 = 0;
        }
        else
        {
          v15 = Creature::getAbilityComp(this);
          v16 = scene_time_ms - AbilityComp::getLastDashModifierAppliedPlayerTimeMs(v15);
        }
        pass_time_ms_0 = v16;
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v18 = Player::getWatcherComp(v17);
        PlayerWatcherComp::tryUpdateDashRecord(v18, pass_time_ms_0);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_fly_);
    }
    if ( this->is_in_fly_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_fly_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_trigger_watcher_fly_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_trigger_watcher_fly_time_ms_);
      }
      if ( scene_time_ms > this->last_trigger_watcher_fly_time_ms_ + 2000 )
      {
        this->last_trigger_watcher_fly_time_ms_ = scene_time_ms;
        Position = Entity::getPosition((const Entity *const)this);
        *(float *)v2.m128i_i32 = getDistance(&this->last_start_fly_pos_, Position);
        map_distance = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
        if ( *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->last_start_fly_scene_time_ms_);
        }
        if ( scene_time_ms <= this->last_start_fly_scene_time_ms_ )
          v20 = 0;
        else
          v20 = scene_time_ms - this->last_start_fly_scene_time_ms_;
        pass_time_ms_1 = v20;
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        v22 = Player::getWatcherComp(v21);
        PlayerWatcherComp::tryUpdateFlyRecord(v22, pass_time_ms_1, map_distance);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1159: range 000000001379A304-000000001379A830
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall Avatar::procStaminaStep(Avatar *const this, bool use_client_rot, Vector3 rot)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  __m128i v9; // xmm0
  int v10; // eax
  int v11; // xmm1_4 OVERLAPPED
  __m128i v12; // xmm0 OVERLAPPED
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-F0h] BYREF
  StaminaChangeParam param; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 sub_stamina:1170 64 12 14 climb_rot:1175 96 12 8 rot:1158";
  *(_QWORD *)(v3 + 16) = Avatar::procStaminaStep;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  *(Vector3 *)(v3 + 96) = rot;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  if ( this->life_state_ != LIFE_ALIVE )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "procStaminaStep",
      1162);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v16,
           (const char (*)[20])"avatar is not alive");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 102LL;
    goto LABEL_27;
  }
  if ( !Entity::isOnScene((const Entity *const)this) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "procStaminaStep",
      1167);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v16,
           (const char (*)[23])"avatar is not on scene");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 103LL;
    goto LABEL_27;
  }
  v9 = 0LL;
  *(_DWORD *)(v3 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[408]);
  }
  v10 = *(_DWORD *)&this->baseclass_0[408];
  if ( v10 == 17 )
    goto LABEL_23;
  if ( v10 <= 17 )
  {
    if ( v10 == 7 )
    {
      if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3)
                                                           + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load_n(&this->baseclass_0[380], 12LL);
      }
      *(_QWORD *)(v3 + 64) = *(_QWORD *)&this->baseclass_0[380];
      *(_DWORD *)(v3 + 72) = *(_DWORD *)&this->baseclass_0[388];
      if ( use_client_rot )
      {
        *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 96);
        *(_DWORD *)(v3 + 72) = *(_DWORD *)(v3 + 104);
      }
      v11 = *(_DWORD *)(v3 + 72);
      v12 = (__m128i)*(unsigned __int64 *)(v3 + 64);
      *(float *)v12.m128i_i32 = Avatar::getClimbCostStamina(this, *(Vector3 *)(&v11 - 2));
      *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v12);
      goto LABEL_24;
    }
    if ( v10 >= 7 && (unsigned int)(v10 - 14) <= 1 )
    {
LABEL_23:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
      *(float *)v9.m128i_i32 = ConstValueExcelConfigMgr::getSwimCostStamina(&v13->design_config.txt_config_mgr.const_value_config_mgr);
      *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v9);
      std::shared_ptr<Config>::~shared_ptr(&v14);
    }
  }
LABEL_24:
  Avatar::updateStaminaCost(this, (float *)(v3 + 48), 0LL);
  param.type = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->baseclass_0[408]);
  }
  param.motion_state = *(_DWORD *)&this->baseclass_0[408];
  memset(&param.skill_id, 0, 20);
  Avatar::changeStamina(this, -*(float *)(v3 + 48), &param, 0);
  result = 0LL;
LABEL_27:
  if ( v17 == (char *)v3 )
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

// Line 1195: range 000000001379A832-000000001379ACC6
// local variable allocation has failed, the output may be wrong!
float __fastcall Avatar::getClimbCostStamina(const Avatar *const this, Vector3 rot)
{
  unsigned __int64 v2; // r12
  __int64 rax2; // rax
  _DWORD *v4; // r13
  int v5; // xmm1_4 OVERLAPPED
  __m128i v6; // xmm0 OVERLAPPED
  const float *v7; // r15
  const float *v8; // r14
  std::array<float,5>::value_type *v9; // rax
  float *v10; // rdx
  std::array<float,5>::value_type *v11; // rax
  float *v12; // rdx
  std::array<float,5>::value_type *v13; // rax
  float *v14; // rdx
  const float *v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  float result; // xmm0_4
  float v25; // [rsp+14h] [rbp-10Ch]
  float v26; // [rsp+14h] [rbp-10Ch]
  float __val; // [rsp+38h] [rbp-E8h] BYREF
  float proc_angle; // [rsp+3Ch] [rbp-E4h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+40h] [rbp-E0h]
  const std::array<float,5> *climb_params; // [rsp+48h] [rbp-D8h]
  Vector3 v3; // [rsp+54h] [rbp-CCh] BYREF
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    rax2 = __asan_stack_malloc_1(96LL);
    if ( rax2 )
      v2 = rax2;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 slope_angle:1199 48 4 11 result:1201 64 12 8 rot:1194";
  *(_QWORD *)(v2 + 16) = Avatar::getClimbCostStamina;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202177536;
  *(Vector3 *)(v2 + 64) = rot;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v32);
  climb_params = ConstValueExcelConfigMgr::getClimbFormulaParam(const_value_config_mgr);
  v5 = *(_DWORD *)(v2 + 72);
  v6 = (__m128i)*(unsigned __int64 *)(v2 + 64);
  *(float *)v6.m128i_i32 = Entity::getSlopeAngle(*(Vector3 *)(&v5 - 2));
  *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v6);
  proc_angle = *(float *)(v2 + 32) - 50.0;
  v7 = std::array<float,5ul>::operator[](climb_params, 4uLL);
  v8 = std::array<float,5ul>::operator[](climb_params, 3uLL);
  v9 = (std::array<float,5>::value_type *)std::array<float,5ul>::operator[](climb_params, 0LL);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v25 = *v10;
  v11 = (std::array<float,5>::value_type *)std::array<float,5ul>::operator[](climb_params, 1uLL);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v26 = (float)(*v12 * proc_angle) + v25;
  v13 = (std::array<float,5>::value_type *)std::array<float,5ul>::operator[](climb_params, 2uLL);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  __val = (float)((float)(proc_angle * proc_angle) * *v14) + v26;
  v15 = std::clamp<float>(&__val, v8, v7);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  *(_DWORD *)(v2 + 48) = *v16;
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/avatar/avatar.cpp",
    "getClimbCostStamina",
    1204);
  v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v33,
          (const char (*)[21])"[SLOPE] slope_angle:");
  v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v2 + 32));
  v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", rotation:");
  v20 = operator<<(v19, (const Vector3 *)&this->baseclass_0[380]);
  v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])", direction:");
  v3 = rotationToDirection((const Vector3 *)&this->baseclass_0[380], 1);
  v22 = operator<<(v21, &v3);
  v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" result:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v23, (const float *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v33);
  result = *(float *)(v2 + 48);
  if ( v34 == (char *)v2 )
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

// Line 1211: range 000000001379ACC8-000000001379B146
// local variable allocation has failed, the output may be wrong!
float __cdecl Avatar::getClimbJumpCostStamina(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *r12_4; // r12
  int v4; // xmm1_4 OVERLAPPED
  __m128i v5; // xmm0 OVERLAPPED
  const float *v6; // r15
  const float *v7; // r14
  std::array<float,4>::value_type *v8; // rax
  float *v9; // rdx
  std::array<float,4>::value_type *v10; // rax
  float *v11; // rdx
  const float *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  float result; // xmm0_4
  float v22; // [rsp+14h] [rbp-FCh]
  float __val; // [rsp+28h] [rbp-E8h] BYREF
  float proc_angle; // [rsp+2Ch] [rbp-E4h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+30h] [rbp-E0h]
  const std::array<float,4> *climb_params; // [rsp+38h] [rbp-D8h]
  Vector3 v3; // [rsp+44h] [rbp-CCh] BYREF
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 16 slope_angle:1214 64 4 11 result:1216";
  *(_QWORD *)(v1 + 16) = Avatar::getClimbJumpCostStamina;
  r12_4 = (_DWORD *)(v1 >> 3);
  r12_4[536862720] = -235802127;
  r12_4[536862721] = -234556943;
  r12_4[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  climb_params = ConstValueExcelConfigMgr::getClimbJumpFormulaParam(const_value_config_mgr);
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->baseclass_0[380], 12LL);
  }
  v4 = *(_DWORD *)&this->baseclass_0[388];
  v5 = (__m128i)*(unsigned __int64 *)&this->baseclass_0[380];
  *(float *)v5.m128i_i32 = Entity::getSlopeAngle(*(Vector3 *)(&v4 - 2));
  *(_DWORD *)(v1 + 48) = _mm_cvtsi128_si32(v5);
  proc_angle = *(float *)(v1 + 48) - 50.0;
  v6 = std::array<float,4ul>::operator[](climb_params, 3uLL);
  v7 = std::array<float,4ul>::operator[](climb_params, 2uLL);
  v8 = (std::array<float,4>::value_type *)std::array<float,4ul>::operator[](climb_params, 0LL);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v22 = *v9;
  v10 = (std::array<float,4>::value_type *)std::array<float,4ul>::operator[](climb_params, 1uLL);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  __val = (float)(*v11 * proc_angle) + v22;
  v12 = std::clamp<float>(&__val, v7, v6);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  *(_DWORD *)(v1 + 64) = *v13;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/avatar/avatar.cpp",
    "getClimbJumpCostStamina",
    1219);
  v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v29,
          (const char (*)[27])"[SLOPE][JUMP] slope_angle:");
  v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v1 + 48));
  v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", rotation:");
  v17 = operator<<(v16, (const Vector3 *)&this->baseclass_0[380]);
  v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])", direction:");
  v3 = rotationToDirection((const Vector3 *)&this->baseclass_0[380], 1);
  v19 = operator<<(v18, &v3);
  v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" result:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v1 + 64));
  common::milog::MiLogStream::~MiLogStream(&v29);
  result = *(float *)(v1 + 64);
  if ( v30 == (char *)v1 )
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

// Line 1227: range 000000001379B148-000000001379B21A
void __cdecl Avatar::getLastMoveNotify(Avatar *const this, proto::SceneEntityMoveNotify *notify)
{
  proto::MotionInfo *v2; // rax
  std::vector<Vector3>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<Vector3>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<Vector3> *__for_range; // [rsp+28h] [rbp-38h]
  const Vector3 *v; // [rsp+30h] [rbp-30h]
  proto::Vector *proto_v; // [rsp+38h] [rbp-28h]
  proto::Vector from; // [rsp+40h] [rbp-20h] BYREF

  Entity::getLastMoveNotify((Entity *const)this, notify);
  __for_range = &this->last_move_params_;
  __for_begin._M_current = std::vector<Vector3>::begin(&this->last_move_params_)._M_current;
  __for_end._M_current = std::vector<Vector3>::end(&this->last_move_params_)._M_current;
  while ( __gnu_cxx::operator!=<Vector3 *,std::vector<Vector3>>(&__for_begin, &__for_end) )
  {
    v = __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator*(&__for_begin);
    v2 = proto::SceneEntityMoveNotify::mutable_motion_info(notify);
    proto_v = proto::MotionInfo::add_params(v2);
    Vector3::operator proto::Vector(&from, v);
    proto::Vector::operator=(proto_v, &from);
    proto::Vector::~Vector(&from);
    __gnu_cxx::__normal_iterator<Vector3 *,std::vector<Vector3>>::operator++(&__for_begin);
  }
};

// Line 1239: range 000000001379B21C-000000001379B49B
bool __cdecl Avatar::isPlayerCurAvatar(const Avatar *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  bool v5; // r14
  char v6; // r14
  bool v7; // r15
  bool result; // al
  std::shared_ptr<const Avatar> __b; // [rsp+10h] [rbp-A0h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 player_ptr:1240 64 16 19 cur_avatar_ptr:1243";
  *(_QWORD *)(v1 + 16) = Avatar::isPlayerCurAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::getCurAvatar((Player *const)(v1 + 64));
    v6 = 0;
    v7 = 0;
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL) )
    {
      toThisPtr<Avatar const>((const Avatar *)&__b);
      v6 = 1;
      if ( std::operator==<Avatar,Avatar const>((const std::shared_ptr<Avatar> *)(v1 + 64), &__b) )
        v7 = 1;
    }
    if ( v6 )
      std::shared_ptr<Avatar const>::~shared_ptr(&__b);
    v5 = v7;
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v5;
  if ( v10 == (char *)v1 )
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

// Line 1250: range 000000001379B49C-000000001379B5F7
uint32_t __cdecl Avatar::getUid(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1251";
  *(_QWORD *)(v1 + 16) = Avatar::getUid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    Uid = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Uid = Player::getUid(v6);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = Uid;
  if ( v8 == (char *)v1 )
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

// Line 1261: range 000000001379B5F8-000000001379B779
uint32_t __cdecl Avatar::getPeerId(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  uint32_t PeerId; // r14d
  Player *v6; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1262";
  *(_QWORD *)(v1 + 16) = Avatar::getPeerId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    PeerId = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneComp = Player::getSceneComp(v6);
    PeerId = PlayerSceneComp::getPeerId(SceneComp);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = PeerId;
  if ( v9 == (char *)v1 )
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

// Line 1273: range 000000001379B77A-000000001379BC4F
int32_t __cdecl Avatar::assignProp(Avatar *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  EquipComp *EquipComp; // rax
  TalentComp *TalentComp; // rax
  ExtraPropComp *ExtraPropComp; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  int val; // [rsp+1Ch] [rbp-104h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-100h] BYREF
  std::map<data::FightPropType,float> __args_0; // [rsp+40h] [rbp-E0h] BYREF
  char v15[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 10 timer:1274 64 24 17 prop_map_vec:1275";
  *(_QWORD *)(v1 + 16) = Avatar::assignProp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
  std::vector<std::map<data::FightPropType,float>>::vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 296LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 296LL);
  (*(void (__fastcall **)(std::map<data::FightPropType,float> *, Avatar *const))v4)(&__args_0, this);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  Avatar::getPromoteProp(&__args_0, this, this->promote_level_);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  EquipComp = Avatar::getEquipComp(this);
  EquipComp::getEquipCompProp(&__args_0, EquipComp);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  TalentComp = Avatar::getTalentComp(this);
  TalentComp::getTalentCompProp(&__args_0, TalentComp);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  ExtraPropComp = Avatar::getExtraPropComp(this);
  ExtraPropComp::getExtraPropCompProp(&__args_0, ExtraPropComp);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  Creature::getAbilityProp(&__args_0, this);
  FightPropComp::refreshCalProp(
    &this->fight_prop_comp_,
    (const std::vector<std::map<data::FightPropType,float>> *)(v1 + 64),
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/avatar/avatar.cpp",
    "assignProp",
    1282);
  v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v13,
         (const char (*)[28])"[CALC] calc prop cost time:");
  val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 32));
  v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, &val);
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])off_25055C00);
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this);
  common::milog::MiLogStream::~MiLogStream(&v13);
  std::vector<std::map<data::FightPropType,float>>::~vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
  result = 0;
  if ( v15 == (char *)v1 )
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

// Line 1287: range 000000001379BC50-000000001379C2C2
FightPropMap *__cdecl Avatar::getLevelProp(FightPropMap *retstr, Avatar *const this)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  std::map<data::FightPropType,float>::key_type *p_k; // rsi
  std::map<data::FightPropType,float>::mapped_type *v5; // rax
  float *v6; // rdx
  char v7; // cl
  std::map<data::FightPropType,float>::key_type *v8; // rsi
  std::map<data::FightPropType,float>::mapped_type *v9; // rax
  float *v10; // rdx
  char v11; // cl
  std::map<data::FightPropType,float>::key_type *v12; // rsi
  std::map<data::FightPropType,float>::mapped_type *v13; // rax
  float *v14; // rdx
  char v15; // cl
  std::tuple_element<0,std::pair<data::FightPropType,float> >::type *v16; // rsi
  std::map<data::FightPropType,float>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  std::map<data::FightPropType,float>::key_type *v20; // rsi
  std::map<data::FightPropType,float>::mapped_type *v21; // rax
  float *v22; // rdx
  char v23; // cl
  std::map<data::FightPropType,float>::key_type *v24; // rsi
  std::map<data::FightPropType,float>::mapped_type *v25; // rax
  float *v26; // rdx
  char v27; // cl
  float v29; // [rsp+Ch] [rbp-84h]
  float heal_add; // [rsp+Ch] [rbp-84h]
  float healed_add; // [rsp+Ch] [rbp-84h]
  int v32; // [rsp+Ch] [rbp-84h]
  float element_react_critical; // [rsp+Ch] [rbp-84h]
  float element_react_critical_hurt; // [rsp+Ch] [rbp-84h]
  Avatar *thisa; // [rsp+10h] [rbp-80h]
  std::map<data::FightPropType,float>::key_type __k; // [rsp+28h] [rbp-68h] BYREF
  float charge_efficiency; // [rsp+2Ch] [rbp-64h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<data::FightPropType,float> >::type *fight_prop_type; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<data::FightPropType,float> >::type *max_energy; // [rsp+40h] [rbp-50h]
  std::pair<data::FightPropType,float> __in; // [rsp+48h] [rbp-48h] BYREF
  std::shared_ptr<Config> v42; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-30h] BYREF

  thisa = this;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (Avatar *const)48;
    __asan_report_store_n(retstr, 48LL);
  }
  Creature::getLevelProp(retstr, this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->avatar_id_);
  }
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, thisa->avatar_id_);
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( avatar_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->charge_efficiency >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->charge_efficiency >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->charge_efficiency);
    }
    charge_efficiency = avatar_config_ptr->charge_efficiency;
    if ( charge_efficiency == 0.0 )
      charge_efficiency = 1.0;
    v29 = charge_efficiency;
    __k = FIGHT_PROP_CHARGE_EFFICIENCY;
    p_k = &__k;
    v5 = std::map<data::FightPropType,float>::operator[](retstr, &__k);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(p_k) = v7 != 0;
      __asan_report_store4(v5, p_k, v5);
    }
    *v6 = v29;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->heal_add >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->heal_add >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->heal_add);
    }
    heal_add = avatar_config_ptr->heal_add;
    __k = FIGHT_PROP_HEAL_ADD;
    v8 = &__k;
    v9 = std::map<data::FightPropType,float>::operator[](retstr, &__k);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v9, v8, v9);
    }
    *v10 = heal_add;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->healed_add >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->healed_add >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->healed_add);
    }
    healed_add = avatar_config_ptr->healed_add;
    __k = FIGHT_PROP_HEALED_ADD;
    v12 = &__k;
    v13 = std::map<data::FightPropType,float>::operator[](retstr, &__k);
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12, v13);
    }
    *v14 = healed_add;
    __in = Avatar::getAvatarMaxEnergy(thisa);
    fight_prop_type = std::get<0ul,data::FightPropType,float>(&__in);
    max_energy = std::get<1ul,data::FightPropType,float>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(fight_prop_type);
    }
    if ( *fight_prop_type )
    {
      if ( *(_BYTE *)(((unsigned __int64)max_energy >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)max_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(max_energy);
      }
      v32 = *(_DWORD *)max_energy;
      v16 = fight_prop_type;
      v17 = std::map<data::FightPropType,float>::operator[](retstr, fight_prop_type);
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(v16) = v19 != 0;
        __asan_report_store4(v17, v16, v17);
      }
      *v18 = v32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->element_react_critical >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->element_react_critical >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->element_react_critical);
    }
    element_react_critical = avatar_config_ptr->element_react_critical;
    __k = FIGHT_PROP_BASE_ELEM_REACT_CRITICAL;
    v20 = &__k;
    v21 = std::map<data::FightPropType,float>::operator[](retstr, &__k);
    v22 = v21;
    v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
    {
      LOBYTE(v20) = v23 != 0;
      __asan_report_store4(v21, v20, v21);
    }
    *v22 = element_react_critical;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->element_react_critical_hurt >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->element_react_critical_hurt >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->element_react_critical_hurt);
    }
    element_react_critical_hurt = avatar_config_ptr->element_react_critical_hurt;
    __k = FIGHT_PROP_BASE_ELEM_REACT_CRITICAL_HURT;
    v24 = &__k;
    v25 = std::map<data::FightPropType,float>::operator[](retstr, &__k);
    v26 = v25;
    v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
    if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
    {
      LOBYTE(v24) = v27 != 0;
      __asan_report_store4(v25, v24, v25);
    }
    *v26 = element_react_critical_hurt;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getLevelProp",
      1294);
    v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v43,
           (const char (*)[35])"findAvatarConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &thisa->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v43);
  }
  return retstr;
};

// Line 1328: range 000000001379C2C4-000000001379C6F9
int32_t __cdecl Avatar::doHurt(Avatar *const this, Player *player, Creature *attacker, HurtContext *context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  Group *v8; // rax
  ChallengeComp *ChallengeComp; // rdx
  unsigned __int64 v10; // rax
  Player *v11; // rax
  PlayerTowerComp *TowerComp; // rax
  Player *v13; // rax
  PlayerWatcherComp *WatcherComp; // rax
  Player *v15; // rax
  PlayerWatcherComp *v16; // r14
  ActorAbility *v17; // rax
  data::ConfigAbility *ConfigRef; // rax
  int32_t result; // eax
  int ret; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 group_ptr:1334 64 16 15 player_ptr:1340";
  *(_QWORD *)(v4 + 16) = Avatar::doHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  ret = Creature::doHurt(this, player, attacker, context);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    Entity::getGroup((const Entity *const)(v4 + 32));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      ChallengeComp = Group::getChallengeComp(v8);
      ChallengeComp::onAvatarBeaten(ChallengeComp, this);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Avatar *const))v10)(v4 + 64, this);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&context->final_damage);
      }
      if ( context->final_damage <= 0.0 )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/avatar.cpp",
          "doHurt",
          1354);
        if ( *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->final_damage >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&context->final_damage);
        }
        common::milog::MiLogStream::operator()(&v23, "final damage not positive: %f", context->final_damage);
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        TowerComp = Player::getTowerComp(v11);
        PlayerTowerComp::onDoHurt(TowerComp);
        v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        WatcherComp = Player::getWatcherComp(v13);
        PlayerWatcherComp::setIsHurtInLastTimeInterval(WatcherComp, 1);
        if ( std::operator!=<ActorAbility>(&context->attack_result.ability_ptr, 0LL) )
        {
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v16 = Player::getWatcherComp(v15);
          v17 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attack_result.ability_ptr);
          ConfigRef = ActorAbility::getConfigRef(v17);
          PlayerWatcherComp::tryRecordCurAvatarHurtByAbility(v16, &ConfigRef->ability_name);
        }
      }
    }
    v7 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 32));
  }
  result = v7;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1363: range 000000001379C6FA-000000001379CADB
void __cdecl Avatar::onChangeHp(Avatar *const this, float old_hp, ChangeHpContext *context)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  float CurHp; // xmm0_4
  common::milog::MiLogStream *v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  float delta_hp; // [rsp+2Ch] [rbp-F4h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 player_ptr:1364 64 16 14 scene_ptr:1375 96 32 13 trans_no:1365";
  *(_QWORD *)(v3 + 16) = Avatar::onChangeHp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 32, this);
  std::string::basic_string(v3 + 96);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    CurHp = Creature::getCurHp(this);
    Avatar::recordPlayerLogAvatarHpChange(this, old_hp, CurHp, context);
    delta_hp = Creature::getCurHp(this) - old_hp;
    if ( delta_hp > 0.0 )
    {
      Entity::getScene((const Entity *const)(v3 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/avatar.cpp",
          "onChangeHp",
          1378);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v13,
               (const char (*)[18])"scene_ptr is null");
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this);
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        v9 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9);
        v10 = *(_QWORD *)v9 + 216LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(*(_QWORD *)v9 + 216LL);
        (*(void (__fastcall **)(unsigned __int64, _QWORD, Avatar *const))v10)(v9, (unsigned int)(int)delta_hp, this);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
  }
  std::string::~string((void *)(v3 + 96));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1391: range 000000001379CADC-000000001379CAEB
void __cdecl Avatar::onChangeEnergy(Avatar *const this, bool is_notify)
{
  ;
};

// Line 1399: range 000000001379CAEC-000000001379CD6B
FightPropMap *__cdecl Avatar::getPromoteProp(FightPropMap *retstr, Avatar *const this, uint32_t promote_level)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  float *p_value; // rax
  data::FightPropType *p_prop_type; // rsi
  std::map<data::FightPropType,float>::mapped_type *v7; // rax
  float *v8; // rdx
  char v9; // cl
  float value; // [rsp+8h] [rbp-88h]
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+38h] [rbp-58h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+40h] [rbp-50h]
  const data::PropValConfig *prop_val_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-30h] BYREF

  std::map<data::FightPropType,float>::map(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                p_avatar_config_mgr,
                                this->avatar_id_,
                                promote_level);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( avatar_promote_config_ptr )
  {
    __for_range = &avatar_promote_config_ptr->add_props;
    __for_begin._M_current = std::vector<data::PropValConfig>::begin(&avatar_promote_config_ptr->add_props)._M_current;
    __for_end._M_current = std::vector<data::PropValConfig>::end(&avatar_promote_config_ptr->add_props)._M_current;
    while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(&__for_begin, &__for_end) )
    {
      prop_val_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
      p_value = &prop_val_config->value;
      if ( *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_value);
      }
      value = prop_val_config->value;
      p_prop_type = &prop_val_config->prop_type;
      v7 = std::map<data::FightPropType,float>::operator[](retstr, &prop_val_config->prop_type);
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      {
        LOBYTE(p_prop_type) = v9 != 0;
        __asan_report_store4(v7, p_prop_type, v7);
      }
      *v8 = value;
      __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getPromoteProp",
      1405);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v19,
           (const char (*)[43])"findAvatarPromoteExcelConfig fails, level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->promote_level_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  return retstr;
};

// Line 1419: range 000000001379CD6C-000000001379CEE2
void __cdecl Avatar::getAvatarPropMap(const Avatar *const this, PropValueMap *map)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  appendIntPropValue(map, 0xFA1u, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  appendIntPropValue(map, 0x3EAu, this->promote_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->satiation_val_);
  }
  appendHundredIntPropValue(map, 0x3EBu, this->satiation_val_);
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  appendHundredIntPropValue(map, 0x3ECu, this->satiation_penalty_time_);
};

// Line 1428: range 000000001379CEE4-000000001379D47E
void __cdecl Avatar::notifyAvatarProp(Avatar *const this, const std::vector<data::PropType> *prop_type_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  __gnu_cxx::__normal_iterator<const data::PropType*,std::vector<data::PropType> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator::pointer v11; // rax
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator::pointer v12; // rax
  google::protobuf::int64 v13; // r14
  unsigned __int64 v14; // rax
  google::protobuf::Map<unsigned int,proto::PropValue>::key_type key; // [rsp+18h] [rbp-218h] BYREF
  google::protobuf::Map<unsigned int,long int>::key_type v16; // [rsp+1Ch] [rbp-214h] BYREF
  std::vector<data::PropType>::const_iterator __for_begin; // [rsp+20h] [rbp-210h] BYREF
  std::vector<data::PropType>::const_iterator __for_end; // [rsp+28h] [rbp-208h] BYREF
  google::protobuf::Map<unsigned int,long int> *avatar_prop_map; // [rsp+30h] [rbp-200h]
  const std::vector<data::PropType> *__for_range; // [rsp+38h] [rbp-1F8h]
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator b; // [rsp+40h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-1D0h] BYREF
  char v23[432]; // [rsp+80h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 prop_type:1438 48 24 13 prop_map:1429 112 24 13 prop_vec:1432 176 24 9 iter:1440 240 1"
                        "04 23 avatar_prop_notify:1434";
  *(_QWORD *)(v2 + 16) = Avatar::notifyAvatarProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  google::protobuf::Map<unsigned int,proto::PropValue>::Map((google::protobuf::Map<unsigned int,proto::PropValue> *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 496LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 496LL);
  (*(void (__fastcall **)(Avatar *const, unsigned __int64))v5)(this, v2 + 48);
  std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v2 + 112));
  proto::AvatarPropNotify::AvatarPropNotify((proto::AvatarPropNotify *const)(v2 + 240));
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  proto::AvatarPropNotify::set_avatar_guid((proto::AvatarPropNotify *const)(v2 + 240), this->guid_);
  avatar_prop_map = proto::AvatarPropNotify::mutable_prop_map((proto::AvatarPropNotify *const)(v2 + 240));
  __for_range = prop_type_vec;
  __for_begin._M_current = std::vector<data::PropType>::begin(prop_type_vec)._M_current;
  __for_end._M_current = std::vector<data::PropType>::end(prop_type_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::PropType const*,std::vector<data::PropType>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<data::PropType const*,std::vector<data::PropType>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    key = *(_DWORD *)(v2 + 32);
    google::protobuf::Map<unsigned int,proto::PropValue>::find(
      (google::protobuf::Map<unsigned int,proto::PropValue>::iterator *)(v2 + 176),
      (google::protobuf::Map<unsigned int,proto::PropValue> *const)(v2 + 48),
      &key);
    google::protobuf::Map<unsigned int,proto::PropValue>::end(
      &b,
      (google::protobuf::Map<unsigned int,proto::PropValue> *const)(v2 + 48));
    if ( google::protobuf::operator==(
           (const google::protobuf::Map<unsigned int,proto::PropValue>::iterator *)(v2 + 176),
           &b) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "notifyAvatarProp",
        1443);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])"prop_type:");
      v9 = common::milog::MiLogStream::operator<<<data::PropType,(data::PropType*)0>(
             v8,
             (const data::PropType *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v9,
              (const char (*)[20])" not found, avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v11 = google::protobuf::Map<unsigned int,proto::PropValue>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::PropValue>::iterator *const)(v2 + 176));
      std::vector<proto::PropValue>::push_back((std::vector<proto::PropValue> *const)(v2 + 112), &v11->second);
      v12 = google::protobuf::Map<unsigned int,proto::PropValue>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::PropValue>::iterator *const)(v2 + 176));
      v13 = proto::PropValue::val(&v12->second);
      v16 = *(_DWORD *)(v2 + 32);
      v14 = (unsigned __int64)google::protobuf::Map<unsigned int,long>::operator[](avatar_prop_map, &v16);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_store8(v14, &v16);
      *(_QWORD *)v14 = v13;
    }
    __gnu_cxx::__normal_iterator<data::PropType const*,std::vector<data::PropType>>::operator++(&__for_begin);
  }
  Creature::notifyPropList(this, (const std::vector<proto::PropValue> *)(v2 + 112));
  Avatar::sendProto(this, (const google::protobuf::Message *)(v2 + 240));
  proto::AvatarPropNotify::~AvatarPropNotify((proto::AvatarPropNotify *const)(v2 + 240));
  std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v2 + 112));
  google::protobuf::Map<unsigned int,proto::PropValue>::~Map((google::protobuf::Map<unsigned int,proto::PropValue> *const)(v2 + 48));
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
};

// Line 1456: range 000000001379D480-000000001379D726
void __cdecl Avatar::notifyAllProp(Avatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rax
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator::reference p__; // [rsp+18h] [rbp-108h]
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,proto::PropValue>::iterator __for_end; // [rsp+40h] [rbp-E0h] BYREF
  char v8[192]; // [rsp+60h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 13 prop_map:1457 96 24 13 prop_vec:1459";
  *(_QWORD *)(v1 + 16) = Avatar::notifyAllProp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  google::protobuf::Map<unsigned int,proto::PropValue>::Map((google::protobuf::Map<unsigned int,proto::PropValue> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 496LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 496LL);
  (*(void (__fastcall **)(Avatar *const, unsigned __int64))v4)(this, v1 + 32);
  std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v1 + 96));
  google::protobuf::Map<unsigned int,proto::PropValue>::begin(
    &__for_begin,
    (google::protobuf::Map<unsigned int,proto::PropValue> *const)(v1 + 32));
  google::protobuf::Map<unsigned int,proto::PropValue>::end(
    &__for_end,
    (google::protobuf::Map<unsigned int,proto::PropValue> *const)(v1 + 32));
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p__ = google::protobuf::Map<unsigned int,proto::PropValue>::iterator::operator*(&__for_begin);
    std::vector<proto::PropValue>::push_back((std::vector<proto::PropValue> *const)(v1 + 96), &p__->second);
    google::protobuf::Map<unsigned int,proto::PropValue>::iterator::operator++(&__for_begin);
  }
  Creature::notifyPropList(this, (const std::vector<proto::PropValue> *)(v1 + 96));
  FightPropComp::notifyAllProp(&this->fight_prop_comp_);
  std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v1 + 96));
  google::protobuf::Map<unsigned int,proto::PropValue>::~Map((google::protobuf::Map<unsigned int,proto::PropValue> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1470: range 000000001379D728-000000001379D981
data::ConfigAvatarPtr __cdecl Avatar::getJsonConfig(const Avatar *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  data::ConfigAvatarPtr result; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 config_avatar_ptr:1471";
  *(_QWORD *)(v2 + 16) = Avatar::getJsonConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2680) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2680) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v1 + 2680);
  }
  JsonConfigMgr::findAvatarConfig((const JsonConfigMgr *const)(v2 + 32), v5);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( std::operator==<data::ConfigAvatar>((const std::shared_ptr<data::ConfigAvatar> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getJsonConfig",
      1474);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v9,
           (const char (*)[35])"findAvatarConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 2680));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<data::ConfigAvatar>::shared_ptr((std::shared_ptr<data::ConfigAvatar> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<data::ConfigAvatar>::shared_ptr(
      (std::shared_ptr<data::ConfigAvatar> *const)this,
      (std::shared_ptr<data::ConfigAvatar> *)(v2 + 32));
  }
  std::shared_ptr<data::ConfigAvatar>::~shared_ptr((std::shared_ptr<data::ConfigAvatar> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigAvatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1481: range 000000001379DAC8-000000001379DD4D
int32_t __cdecl Avatar::initTimer(Avatar *const this)
{
  std::weak_ptr<Avatar> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  std::weak_ptr<Player> v6; // [rsp+10h] [rbp-C0h] BYREF
  std::weak_ptr<Avatar> v7; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Avatar> __r; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-90h] BYREF
  char v10[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<Avatar> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<Avatar> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 15 avatar_wtr:1482";
  v1[1]._M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)Avatar::initTimer;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<Avatar>((Avatar *)&__r);
  std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(v1 + 2, &__r);
  std::shared_ptr<Avatar>::~shared_ptr(&__r);
  std::weak_ptr<Avatar>::weak_ptr(&v7, v1 + 2);
  std::weak_ptr<Player>::lock(&v6);
  common::tools::perf::make_shared<PlayerTimer,std::shared_ptr<Player>,Avatar::initTimer(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&__r,
    (Avatar::initTimer::<lambda(uint64_t)> *)&v6,
    (std::shared_ptr<Player> *)&v7,
    (Avatar::initTimer::<lambda(uint64_t)> *)&v6);
  std::shared_ptr<PlayerTimer>::operator=(&this->stamina_timer_ptr_, (std::shared_ptr<PlayerTimer> *)&__r);
  std::shared_ptr<PlayerTimer>::~shared_ptr((std::shared_ptr<PlayerTimer> *const)&__r);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v6);
  Avatar::initTimer(void)::{lambda(unsigned long)#1}::~initTimer((Avatar::initTimer::<lambda(uint64_t)> *const)&v7);
  if ( std::operator==<PlayerTimer>(&this->stamina_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "initTimer",
      1493);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v9,
      (const char (*)[26])"create PlayerTimer failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = -1;
  }
  else
  {
    v4 = 0;
  }
  std::weak_ptr<Avatar>::~weak_ptr(v1 + 2);
  result = v4;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1483: range 00000000138277D6-00000000138277FB
void __cdecl Avatar::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        Avatar::initTimer::<lambda(uint64_t)> *const this,
        Avatar::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->__avatar_wtr, &a2->__avatar_wtr);
};

// Line 1483: range 00000000138283F2-0000000013828417
void __cdecl Avatar::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        Avatar::initTimer::<lambda(uint64_t)> *const this,
        const Avatar::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->__avatar_wtr, &a2->__avatar_wtr);
};

// Line 1483: range 000000001379D982-000000001379DAAA
void __cdecl Avatar::initTimer(void)::{lambda(unsigned long)#1}::operator()(
        const Avatar::initTimer::<lambda(uint64_t)> *const __closure,
        uint64_t player_time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Avatar *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:1485";
  *(_QWORD *)(v2 + 16) = Avatar::initTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v2 + 32));
  if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Avatar::procStaminaInTimer(v5, player_time_ms);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1483: range 000000001379DAAC-000000001379DAC6
void __cdecl Avatar::initTimer(void)::{lambda(unsigned long)#1}::~initTimer(
        Avatar::initTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Avatar>::~weak_ptr(&this->__avatar_wtr);
};

// Line 1503: range 000000001379DD4E-000000001379DEE9
int32_t __cdecl Avatar::startTimer(Avatar *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PlayerTimer *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<PlayerTimer>(&this->stamina_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "startTimer",
      1506);
    v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v6,
           (const char (*)[36])"stamina_timer_ptr_ is nullptr, uid:");
    val = Avatar::getUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stamina_timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v3)
      && (v4 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stamina_timer_ptr_),
          PlayerTimer::startMS(v4, 0xC8u, 1, "./src/player/avatar/avatar.cpp", "startTimer", 1512)) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "startTimer",
        1514);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"startMs failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 1523: range 000000001379DEEA-000000001379DFBE
void __cdecl Avatar::stopTimer(Avatar *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<PlayerTimer>(&this->stamina_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "stopTimer",
      1526);
    v1 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v4,
           (const char (*)[36])"stamina_timer_ptr_ is nullptr, uid:");
    val = Avatar::getUid(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    v2 = std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stamina_timer_ptr_);
    common::tools::MiTimer::cancel(v2);
  }
};

// Line 1535: range 000000001379DFC0-000000001379E32A
int32_t __cdecl Avatar::initAbility(Avatar *const this, Scene *scene, bool is_init)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  std::__shared_ptr_access<data::ConfigAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  TalentComp *TalentComp; // rax
  char v11; // r14
  bool v12; // r15
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  ScenePtr p_scene_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 22 config_avatar_ptr:1536";
  *(_QWORD *)(v3 + 16) = Avatar::initAbility;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 488LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 488LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 32, this);
  if ( std::operator==<data::ConfigAvatar>((const std::shared_ptr<data::ConfigAvatar> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "initAbility",
      1539);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v17,
           (const char (*)[20])"getJsonConfig fails");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<data::ConfigAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    AbilityComp::setInitAbilities(&this->ability_comp_, &v9->abilities);
    TalentComp = Avatar::getTalentComp(this);
    TalentComp::initDynamicTalents(TalentComp);
    v11 = 0;
    v12 = 0;
    if ( is_init )
    {
      toThisPtr<Scene>((Scene *)&p_scene_ptr);
      v11 = 1;
      if ( AbilityComp::init(&this->ability_comp_, &p_scene_ptr) )
        v12 = 1;
    }
    if ( v11 )
      std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "initAbility",
        1547);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"init fails");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
  }
  std::shared_ptr<data::ConfigAvatar>::~shared_ptr((std::shared_ptr<data::ConfigAvatar> *const)(v3 + 32));
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1555: range 000000001379E32C-000000001379E44E
bool __cdecl Avatar::canChangeElement(const Avatar *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(const Avatar *const))v1)(this);
  if ( avatar_config_ptr )
    return !std::vector<unsigned int>::empty(&avatar_config_ptr->cand_skill_depot_ids);
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/avatar/avatar.cpp",
    "canChangeElement",
    1559);
  v2 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v5,
         (const char (*)[28])"getConfig fails, avatar_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->avatar_id_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 1569: range 000000001379E450-000000001379E615
data::ElementType __cdecl Avatar::getCurElementType(const Avatar *const this)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  AvatarSkillExcelConfigMgr *v3; // rcx
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+10h] [rbp-30h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    this->skill_depot_id_);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( !avatar_skill_depot_config_ptr )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
  }
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              v3,
                              avatar_skill_depot_config_ptr->energy_skill);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( !avatar_skill_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
  }
  return avatar_skill_config_ptr->cost_elem_type;
};

// Line 1585: range 000000001379E616-000000001379EDC4
int32_t __cdecl Avatar::changeElemType(Avatar *const this, data::ElementType elem_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  Player *v17; // rcx
  int32_t result; // eax
  uint32_t target_skill_depot_id; // [rsp+1Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+40h] [rbp-D0h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 skill_depot_id:1601 64 16 15 player_ptr:1593";
  *(_QWORD *)(v2 + 16) = Avatar::changeElemType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(Avatar *const))v5)(this);
  if ( avatar_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Avatar *const))v8)(v2 + 64, this);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "changeElemType",
        1596);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v27,
             (const char (*)[28])"getPlayer fails, avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->avatar_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = -1;
    }
    else
    {
      target_skill_depot_id = 0;
      __for_range = &avatar_config_ptr->cand_skill_depot_ids;
      __for_begin._M_current = std::vector<unsigned int>::begin(&avatar_config_ptr->cand_skill_depot_ids)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&avatar_config_ptr->cand_skill_depot_ids)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v2 + 48) = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
        avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                          &v12->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                          *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( !avatar_skill_depot_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "changeElemType",
            1606);
          v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v27,
                  (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v27);
          v7 = -1;
          goto LABEL_37;
        }
        if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
        }
        if ( avatar_skill_depot_config_ptr->energy_skill )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v26);
          p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.avatar_skill_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
          }
          avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                                      p_avatar_skill_config_mgr,
                                      avatar_skill_depot_config_ptr->energy_skill);
          std::shared_ptr<Config>::~shared_ptr(&v26);
          if ( !avatar_skill_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/avatar.cpp",
              "changeElemType",
              1614);
            v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v27,
                    (const char (*)[51])"findAvatarSkillExcelConfig fails, energy_skill_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              &avatar_skill_depot_config_ptr->energy_skill);
            common::milog::MiLogStream::~MiLogStream(&v27);
            v7 = -1;
            goto LABEL_37;
          }
          if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
          }
          if ( elem_type == avatar_skill_config_ptr->cost_elem_type )
          {
            target_skill_depot_id = *(_DWORD *)(v2 + 48);
            break;
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( target_skill_depot_id )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v7 = Avatar::changeSkillDepotId(this, v17, target_skill_depot_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "changeElemType",
          1625);
        v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v27, (const char (*)[33])off_25056460);
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, this);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = -1;
      }
    }
LABEL_37:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "changeElemType",
      1589);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v27,
           (const char (*)[28])"getConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  result = v7;
  if ( v28 == (char *)v2 )
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

// Line 1633: range 000000001379EDC6-000000001379FF33
__int64 __fastcall Avatar::changeSkillDepotId(Avatar *const this, Player *player, uint32_t skill_depot_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Avatar *v16; // rsi
  unsigned __int64 v17; // rax
  FightPropComp *FightPropComp; // rcx
  float v19; // xmm0_4
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v21; // rax
  TalentComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  SkillComp *SkillComp; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  uint32_t v27; // ecx
  char v28; // dl
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  TalentComp *v31; // rax
  SkillComp *v32; // rax
  common::milog::MiLogStream *v33; // rax
  TalentComp *v34; // rax
  common::milog::MiLogStream *v35; // rax
  TalentComp *v36; // rax
  common::milog::MiLogStream *v37; // rax
  FightPropComp *v38; // rdi
  float v39; // ecx
  TalentComp *v40; // r14
  google::protobuf::RepeatedField<unsigned int> *v41; // rax
  TalentComp *v42; // rax
  uint32_t CurCoreProudSkillLevel; // eax
  TalentComp *v44; // r14
  google::protobuf::RepeatedField<unsigned int> *v45; // rax
  SkillComp *v46; // r14
  google::protobuf::Map<unsigned int,unsigned int> *v47; // rax
  TalentComp *v48; // r14
  google::protobuf::Map<unsigned int,unsigned int> *v49; // rax
  Scene *v50; // rax
  PlayerQuestComp *QuestComp; // rax
  PlayerQuestComp *v52; // rax
  SkillComp *v53; // rax
  PlayerWatcherComp *WatcherComp; // rax
  __int64 result; // rax
  data::ElementType prev_elem_type; // [rsp+20h] [rbp-2B0h]
  data::ElementType cur_elem_type; // [rsp+24h] [rbp-2ACh]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+28h] [rbp-2A8h] BYREF
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<0,std::pair<data::FightPropType,float> >::type *max_energy_prop_type; // [rsp+38h] [rbp-298h]
  std::tuple_element<1,std::pair<data::FightPropType,float> >::type *max_energy; // [rsp+40h] [rbp-290h]
  std::tuple_element<0,std::pair<data::FightPropType,float> >::type *max_energy_prop_type_0; // [rsp+48h] [rbp-288h]
  std::tuple_element<1,std::pair<data::FightPropType,float> >::type *max_energy_0; // [rsp+50h] [rbp-280h]
  std::pair<data::FightPropType,float> __in; // [rsp+58h] [rbp-278h] BYREF
  common::milog::MiLogStream v68; // [rsp+60h] [rbp-270h] BYREF
  char v69[592]; // [rsp+80h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 19 skill_depot_id:1632 48 16 14 scene_ptr:1725 80 48 21 fight_prop_guard:1651 160 48 26 r"
                        "efresh_ability_guard:1652 240 240 18 change_notify:1715";
  *(_QWORD *)(v3 + 16) = Avatar::changeSkillDepotId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  *(_DWORD *)(v3 + 32) = skill_depot_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(Avatar *const))v6)(this);
  if ( avatar_config_ptr )
  {
    __in = (std::pair<data::FightPropType,float>)std::vector<unsigned int>::end(&avatar_config_ptr->cand_skill_depot_ids)._M_current;
    M_current = std::vector<unsigned int>::end(&avatar_config_ptr->cand_skill_depot_ids)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&avatar_config_ptr->cand_skill_depot_ids)._M_current;
    __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                         v10,
                         (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                         (const unsigned int *)(v3 + 32))._M_current;
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
           &__lhs,
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__in) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "changeSkillDepotId",
        1642);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v68, (const char (*)[27])off_250565A0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v12, (const char (*)[30])off_250565E0);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v8 = 910;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->skill_depot_id_);
      }
      if ( this->skill_depot_id_ == *(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/avatar.cpp",
          "changeSkillDepotId",
          1647);
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v68,
                (const char (*)[35])"avatar already has skill_depot_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->skill_depot_id_);
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, this);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v8 = 911;
      }
      else
      {
        FightPropGuard::FightPropGuard((FightPropGuard *const)(v3 + 80));
        RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 160));
        FightPropGuard::addCreature((FightPropGuard *const)(v3 + 80), this, 0);
        v16 = this;
        RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v3 + 160), this);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v17 = *(_QWORD *)this->baseclass_0 + 280LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 280LL);
        if ( (*(unsigned int (__fastcall **)(Avatar *const))v17)(this) )
        {
          std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v3 + 48), 0LL);
          FightPropComp::setCurEnergy(&this->fight_prop_comp_, 0.0, 1, (FightPropNtfParamPtr *)(v3 + 48));
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v3 + 48));
          __in = Avatar::getAvatarMaxEnergy(this);
          max_energy_prop_type = std::get<0ul,data::FightPropType,float>(&__in);
          max_energy = std::get<1ul,data::FightPropType,float>(&__in);
          v16 = (Avatar *)(((unsigned __int8)max_energy_prop_type & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)max_energy_prop_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)max_energy_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy_prop_type >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(max_energy_prop_type);
          }
          if ( *max_energy_prop_type )
          {
            FightPropComp = Creature::getFightPropComp(this);
            if ( *(_BYTE *)(((unsigned __int64)max_energy >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)max_energy & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(max_energy);
            }
            v19 = -*max_energy;
            if ( *(_BYTE *)(((unsigned __int64)max_energy_prop_type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)max_energy_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy_prop_type >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(max_energy_prop_type);
            }
            v16 = (Avatar *)*(unsigned int *)max_energy_prop_type;
            FightPropComp::modifyProp(FightPropComp, (data::FightPropType)v16, v19, 0);
          }
        }
        TalentComp = Avatar::getTalentComp(this);
        if ( TalentComp::disableAllTeamTalent(TalentComp) )
        {
          common::milog::MiLogStream::create(
            &v68,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "changeSkillDepotId",
            1670);
          v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v68,
                  (const char (*)[48])"talent_comp disableAllTeamTalent fails. avatar:");
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this);
          common::milog::MiLogStream::~MiLogStream(&v68);
          v8 = -1;
        }
        else
        {
          v22 = Avatar::getTalentComp(this);
          if ( TalentComp::disableCurSkillDepot(v22) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/avatar.cpp",
              "changeSkillDepotId",
              1675);
            v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v68,
                    (const char (*)[48])"talent_comp disableCurSkillDepot fails. avatar:");
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v23, this);
            common::milog::MiLogStream::~MiLogStream(&v68);
            v8 = -1;
          }
          else
          {
            SkillComp = Avatar::getSkillComp(this);
            if ( SkillComp::clearSkill(SkillComp) )
            {
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/avatar/avatar.cpp",
                "changeSkillDepotId",
                1680);
              v25 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v68,
                      (const char (*)[37])"skill_comp clearSkill fails. avatar:");
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v25, this);
              common::milog::MiLogStream::~MiLogStream(&v68);
              v8 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              v26 = *(_QWORD *)this->baseclass_0 + 280LL;
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                v26 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 280LL);
              prev_elem_type = (*(unsigned int (__fastcall **)(Avatar *const))v26)(this);
              v27 = *(_DWORD *)(v3 + 32);
              v28 = *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000);
              LOBYTE(v16) = v28 != 0;
              v29 = (v28 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v28);
              if ( (_BYTE)v29 )
                __asan_report_store4(&this->skill_depot_id_, v16, v29);
              this->skill_depot_id_ = v27;
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8(this);
              v30 = *(_QWORD *)this->baseclass_0 + 280LL;
              if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                v30 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 280LL);
              cur_elem_type = (*(unsigned int (__fastcall **)(Avatar *const))v30)(this);
              v31 = Avatar::getTalentComp(this);
              TalentComp::checkOpenSkillDepot(v31);
              v32 = Avatar::getSkillComp(this);
              if ( SkillComp::init(v32) )
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/avatar/avatar.cpp",
                  "changeSkillDepotId",
                  1692);
                v33 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v68,
                        (const char (*)[31])"skill_comp init fails. avatar:");
                common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v33, this);
                common::milog::MiLogStream::~MiLogStream(&v68);
                v8 = -1;
              }
              else
              {
                v34 = Avatar::getTalentComp(this);
                if ( TalentComp::enableCurSkillDepot(v34) )
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/avatar/avatar.cpp",
                    "changeSkillDepotId",
                    1697);
                  v35 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v68,
                          (const char (*)[35])"enableCurSkillDepot fails. avatar:");
                  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v35, this);
                  common::milog::MiLogStream::~MiLogStream(&v68);
                  v8 = -1;
                }
                else
                {
                  v36 = Avatar::getTalentComp(this);
                  if ( TalentComp::enableAllTeamTalent(v36) )
                  {
                    common::milog::MiLogStream::create(
                      &v68,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/avatar/avatar.cpp",
                      "changeSkillDepotId",
                      1702);
                    v37 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                            &v68,
                            (const char (*)[47])"talent_comp enableAllTeamTalent fails. avatar:");
                    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v37, this);
                    common::milog::MiLogStream::~MiLogStream(&v68);
                    v8 = -1;
                  }
                  else
                  {
                    __in = Avatar::getAvatarMaxEnergy(this);
                    max_energy_prop_type_0 = std::get<0ul,data::FightPropType,float>(&__in);
                    max_energy_0 = std::get<1ul,data::FightPropType,float>(&__in);
                    if ( *(_BYTE *)(((unsigned __int64)max_energy_prop_type_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)max_energy_prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy_prop_type_0 >> 3)
                                                                                               + 0x7FFF8000) )
                    {
                      __asan_report_load4(max_energy_prop_type_0);
                    }
                    if ( *max_energy_prop_type_0 )
                    {
                      v38 = Creature::getFightPropComp(this);
                      if ( *(_BYTE *)(((unsigned __int64)max_energy_0 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)max_energy_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy_0 >> 3)
                                                                                       + 0x7FFF8000) )
                      {
                        v38 = (FightPropComp *)max_energy_0;
                        __asan_report_load4(max_energy_0);
                      }
                      v39 = *max_energy_0;
                      if ( *(_BYTE *)(((unsigned __int64)max_energy_prop_type_0 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)max_energy_prop_type_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_energy_prop_type_0 >> 3)
                                                                                                 + 0x7FFF8000) )
                      {
                        v38 = (FightPropComp *)max_energy_prop_type_0;
                        __asan_report_load4(max_energy_prop_type_0);
                      }
                      FightPropComp::modifyProp(v38, *max_energy_prop_type_0, v39, 0);
                    }
                    proto::AvatarSkillDepotChangeNotify::AvatarSkillDepotChangeNotify((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                    if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->guid_);
                    proto::AvatarSkillDepotChangeNotify::set_avatar_guid(
                      (proto::AvatarSkillDepotChangeNotify *const)(v3 + 240),
                      this->guid_);
                    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->baseclass_0[256]);
                    }
                    proto::AvatarSkillDepotChangeNotify::set_entity_id(
                      (proto::AvatarSkillDepotChangeNotify *const)(v3 + 240),
                      *(_DWORD *)&this->baseclass_0[256]);
                    if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->skill_depot_id_);
                    }
                    proto::AvatarSkillDepotChangeNotify::set_skill_depot_id(
                      (proto::AvatarSkillDepotChangeNotify *const)(v3 + 240),
                      this->skill_depot_id_);
                    v40 = Avatar::getTalentComp(this);
                    v41 = proto::AvatarSkillDepotChangeNotify::mutable_talent_id_list((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                    TalentComp::getProtoTalents(v40, v41);
                    v42 = Avatar::getTalentComp(this);
                    CurCoreProudSkillLevel = TalentComp::getCurCoreProudSkillLevel(v42);
                    proto::AvatarSkillDepotChangeNotify::set_core_proud_skill_level(
                      (proto::AvatarSkillDepotChangeNotify *const)(v3 + 240),
                      CurCoreProudSkillLevel);
                    v44 = Avatar::getTalentComp(this);
                    v45 = proto::AvatarSkillDepotChangeNotify::mutable_proud_skill_list((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                    TalentComp::getProtoProudSkills(v44, v45);
                    v46 = Avatar::getSkillComp(this);
                    v47 = proto::AvatarSkillDepotChangeNotify::mutable_skill_level_map((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                    SkillComp::getProtoSkillLevelMap(v46, v47);
                    v48 = Avatar::getTalentComp(this);
                    v49 = proto::AvatarSkillDepotChangeNotify::mutable_proud_skill_extra_level_map((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                    TalentComp::getProtoProudSkillExtraLevels(v48, v49);
                    Entity::getScene((const Entity *const)(v3 + 48));
                    if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 48)) )
                    {
                      v50 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
                      Scene::notifyAllPlayer<proto::AvatarSkillDepotChangeNotify>(
                        v50,
                        (proto::AvatarSkillDepotChangeNotify *)(v3 + 240),
                        0);
                    }
                    else
                    {
                      Entity::notifySelf<proto::AvatarSkillDepotChangeNotify>(
                        (Entity *const)this,
                        (proto::AvatarSkillDepotChangeNotify *)(v3 + 240));
                    }
                    QuestComp = Player::getQuestComp(player);
                    PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_AVATAR_ELEMENT_EQUAL, 1, 0);
                    v52 = Player::getQuestComp(player);
                    PlayerQuestComp::tryAcceptQuestByCond(v52, QUEST_COND_AVATAR_ELEMENT_NOT_EQUAL, 1, 0);
                    v53 = Avatar::getSkillComp(this);
                    SkillComp::notifySkillInfo(v53);
                    Avatar::internalCheckRefreshTeamResonance(this);
                    WatcherComp = Player::getWatcherComp(player);
                    PlayerWatcherComp::triggerElementTypeChange(WatcherComp, prev_elem_type, cur_elem_type);
                    v8 = 0;
                    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
                    proto::AvatarSkillDepotChangeNotify::~AvatarSkillDepotChangeNotify((proto::AvatarSkillDepotChangeNotify *const)(v3 + 240));
                  }
                }
              }
            }
          }
        }
        RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v3 + 160));
        FightPropGuard::~FightPropGuard((FightPropGuard *const)(v3 + 80));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "changeSkillDepotId",
      1637);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v68,
           (const char (*)[28])"getConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v8 = -1;
  }
  result = v8;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1752: range 000000001379FF34-00000000137A015D
uint32_t __cdecl Avatar::getFirstSkillId(const Avatar *const this)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v4; // rax
  uint32_t *v5; // rdx
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    this->skill_depot_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( avatar_skill_depot_config_ptr )
  {
    if ( std::vector<unsigned int>::empty(&avatar_skill_depot_config_ptr->skills) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "getFirstSkillId",
        1761);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v8, (const char (*)[13])"skills.empty");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return 0;
    }
    else
    {
      v4 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &avatar_skill_depot_config_ptr->skills,
                                                                                                 0LL);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      return *v5;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getFirstSkillId",
      1756);
    v2 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v8,
           (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->skill_depot_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0;
  }
};

// Line 1769: range 00000000137A015E-00000000137A0365
float __cdecl Avatar::getCurStamina(Avatar *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  float v7; // r14d
  Player *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:1770";
  *(_QWORD *)(v2 + 16) = Avatar::getCurStamina;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getCurStamina",
      1773);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = 0.0;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    *(float *)v1.m128i_i32 = Player::getCurStamina(v8);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v7;
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

// Line 1782: range 00000000137A0366-00000000137A06BA
void __cdecl Avatar::updateStaminaCost(Avatar *const this, float *cost_value, uint64_t interval_ms)
{
  __m128i v3; // xmm0
  unsigned __int64 p_M_refcount; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  char v8; // r14
  Player *v9; // rax
  bool v10; // r15
  GameserverService *v11; // rax
  GameserverService *v12; // rax
  float interval; // [rsp+24h] [rbp-8Ch]
  float cost_delta; // [rsp+28h] [rbp-88h]
  float cost_ratio; // [rsp+2Ch] [rbp-84h]
  PlayerVehicleComp v17; // [rsp+30h] [rbp-80h] BYREF

  p_M_refcount = (unsigned __int64)&v17._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      p_M_refcount = v5;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 15 player_ptr:1784";
  *(_QWORD *)(p_M_refcount + 16) = Avatar::updateStaminaCost;
  v6 = p_M_refcount >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(p_M_refcount + 32, this);
  v8 = 0;
  v10 = 0;
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(p_M_refcount + 32)) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
    Player::getVehicleComp(v9);
    PlayerVehicleComp::getCurVehicle(&v17);
    v8 = 1;
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)&v17) )
      v10 = 1;
  }
  if ( v8 )
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v17);
  if ( !v10 )
  {
    if ( (interval_ms & 0x8000000000000000LL) != 0LL )
      *(float *)v3.m128i_i32 = (float)(int)(interval_ms & 1 | (interval_ms >> 1))
                             + (float)(int)(interval_ms & 1 | (interval_ms >> 1));
    else
      *(float *)v3.m128i_i32 = (float)(int)interval_ms;
    interval = *(float *)v3.m128i_i32 / 1000.0;
    v11 = ServiceBox::findService<GameserverService>();
    *(float *)v3.m128i_i32 = AbilityComp::getProperty(
                               &this->ability_comp_,
                               &v11->ability_data_mgr.ACTOR_COST_STAMINA_DELTA);
    cost_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v12 = ServiceBox::findService<GameserverService>();
    *(float *)v3.m128i_i32 = AbilityComp::getProperty(
                               &this->ability_comp_,
                               &v12->ability_data_mgr.ACTOR_COST_STAMINA_RATIO);
    cost_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    if ( *(_BYTE *)(((unsigned __int64)cost_value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cost_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cost_value);
    }
    *cost_value = (float)(cost_ratio + 1.0) * (float)(*cost_value + (float)(cost_delta * interval));
    if ( interval > *cost_value )
      *cost_value = interval;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_refcount + 32));
  if ( &v17._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1801: range 00000000137A06BC-00000000137A09F8
void __cdecl Avatar::updateStaminaRecover(Avatar *const this, float *recover_value, uint64_t interval_ms)
{
  __m128i v3; // xmm0
  unsigned __int64 p_M_refcount; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  char v8; // r14
  Player *v9; // rax
  bool v10; // r15
  GameserverService *v11; // rax
  GameserverService *v12; // rax
  float v13; // xmm0_4
  float recover_delta; // [rsp+28h] [rbp-88h]
  float recover_ratio; // [rsp+2Ch] [rbp-84h]
  PlayerVehicleComp v17; // [rsp+30h] [rbp-80h] BYREF

  p_M_refcount = (unsigned __int64)&v17._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      p_M_refcount = v5;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 15 player_ptr:1803";
  *(_QWORD *)(p_M_refcount + 16) = Avatar::updateStaminaRecover;
  v6 = p_M_refcount >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(p_M_refcount + 32, this);
  v8 = 0;
  v10 = 0;
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(p_M_refcount + 32)) )
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_refcount + 32));
    Player::getVehicleComp(v9);
    PlayerVehicleComp::getCurVehicle(&v17);
    v8 = 1;
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)&v17) )
      v10 = 1;
  }
  if ( v8 )
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v17);
  if ( !v10 )
  {
    v11 = ServiceBox::findService<GameserverService>();
    *(float *)v3.m128i_i32 = AbilityComp::getProperty(
                               &this->ability_comp_,
                               &v11->ability_data_mgr.ACTOR_RECOVER_STAMINA_DELTA);
    recover_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v12 = ServiceBox::findService<GameserverService>();
    *(float *)v3.m128i_i32 = AbilityComp::getProperty(
                               &this->ability_comp_,
                               &v12->ability_data_mgr.ACTOR_RECOVER_STAMINA_RATIO);
    recover_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    if ( *(_BYTE *)(((unsigned __int64)recover_value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)recover_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)recover_value >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(recover_value);
    }
    if ( (interval_ms & 0x8000000000000000LL) != 0LL )
      v13 = (float)(int)(interval_ms & 1 | (interval_ms >> 1)) + (float)(int)(interval_ms & 1 | (interval_ms >> 1));
    else
      v13 = (float)(int)interval_ms;
    *recover_value = (float)(recover_ratio + 1.0)
                   * (float)(*recover_value + (float)((float)(v13 * recover_delta) / 1000.0));
    if ( *recover_value < 0.0 )
      *recover_value = 0.0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_M_refcount + 32));
  if ( &v17._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1819: range 00000000137A09FA-00000000137A0AD8
void __cdecl Avatar::resetReviveInfo(Avatar *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)&this->is_revive_after_die_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_revive_after_die_, v1, &this->is_revive_after_die_);
  this->is_revive_after_die_ = 0;
  v2 = (((_BYTE)this - 100) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_hp_after_die_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->revive_hp_after_die_, v2, v3);
  this->revive_hp_after_die_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_source_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revive_source_entity_id_, v2, &this->revive_source_entity_id_);
  }
  this->revive_source_entity_id_ = 0;
};

// Line 1827: range 00000000137A0ADA-00000000137A0C0D
int32_t __cdecl Avatar::enableAllTalent(Avatar *const this)
{
  TalentComp *TalentComp; // rax
  EquipComp *EquipComp; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  TalentComp = Avatar::getTalentComp(this);
  if ( TalentComp::enableAllMyTalent(TalentComp) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "enableAllTalent",
      1830);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v4,
      (const char (*)[34])"talent_comp enableAllTalent fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    EquipComp = Avatar::getEquipComp(this);
    if ( EquipComp::enableAllEquipTalent(EquipComp) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "enableAllTalent",
        1835);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v4,
        (const char (*)[33])"equip_comp enableAllTalent fails");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 1843: range 00000000137A0C0E-00000000137A0D41
int32_t __cdecl Avatar::disableAllTalent(Avatar *const this)
{
  TalentComp *TalentComp; // rax
  EquipComp *EquipComp; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  TalentComp = Avatar::getTalentComp(this);
  if ( TalentComp::disableAllMyTalent(TalentComp) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "disableAllTalent",
      1846);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v4,
      (const char (*)[35])"talent_comp disableAllTalent fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    EquipComp = Avatar::getEquipComp(this);
    if ( EquipComp::disableAllEquipTalent(EquipComp) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "disableAllTalent",
        1851);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v4,
        (const char (*)[39])"equip_comp disableAllEquipTalent fails");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 1859: range 00000000137A0D42-00000000137A0EA0
void __cdecl Avatar::clearAllModifier(Avatar *const this)
{
  std::shared_ptr<WeaponGadget> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  AbilityComp *AbilityComp; // rax
  std::shared_ptr<AvatarWeaponGadget> __r; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::shared_ptr<WeaponGadget> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<WeaponGadget> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<WeaponGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 22 weapon_gadget_ptr:1862";
  v1[1]._M_ptr = (std::__shared_ptr<WeaponGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)Avatar::clearAllModifier;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  AbilityComp::clearAllModifier(&this->ability_comp_);
  Avatar::getEquipComp(this);
  EquipComp::getWeaponGadget((const EquipComp *const)&__r);
  std::shared_ptr<WeaponGadget>::shared_ptr<AvatarWeaponGadget,void>(v1 + 2, &__r);
  std::shared_ptr<AvatarWeaponGadget>::~shared_ptr(&__r);
  if ( std::operator!=<WeaponGadget>(v1 + 2, 0LL) )
  {
    v4 = std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    AbilityComp = Creature::getAbilityComp(v4);
    AbilityComp::clearAllModifier(AbilityComp);
  }
  std::shared_ptr<WeaponGadget>::~shared_ptr(v1 + 2);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<WeaponGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1872: range 00000000137A0EA2-00000000137A10AC
uint64_t __cdecl Avatar::getPlayerTimeMs(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rdx
  uint64_t PlayerTimeMs; // r14
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  uint64_t result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1873";
  *(_QWORD *)(v1 + 16) = Avatar::getPlayerTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "getPlayerTimeMs",
      1876);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    PlayerTimeMs = 0LL;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Player::getBasicComp(v7);
    PlayerTimeMs = PlayerBasicComp::getPlayerTimeMs(BasicComp);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = PlayerTimeMs;
  if ( v11 == (char *)v1 )
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

// Line 1884: range 00000000137A10AE-00000000137A12B8
uint64_t __cdecl Avatar::getPlayerClientTotalTickTimeMs(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rdx
  uint64_t ClientTotalTickTimeMs; // r14
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  uint64_t result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:1885";
  *(_QWORD *)(v1 + 16) = Avatar::getPlayerClientTotalTickTimeMs;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "getPlayerClientTotalTickTimeMs",
      1888);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    ClientTotalTickTimeMs = 0LL;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Player::getBasicComp(v7);
    ClientTotalTickTimeMs = PlayerBasicComp::getClientTotalTickTimeMs(BasicComp);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = ClientTotalTickTimeMs;
  if ( v11 == (char *)v1 )
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

// Line 1896: range 00000000137A12BA-00000000137A15F6
// local variable allocation has failed, the output may be wrong!
EntityPtr __cdecl Avatar::findEntityInSameScene(const Avatar *const this, uint32_t entity_id)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  Player *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  void (__fastcall *v10)(const Avatar *const, unsigned __int64, _QWORD); // r8
  int v11; // r14d
  EntityPtr result; // rax
  uint32_t entity_ida; // [rsp+Ch] [rbp-C4h]
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  entity_ida = v2;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 15 entity_ptr:1897 64 16 15 player_ptr:1902 96 16 14 scene_ptr:1905";
  *(_QWORD *)(v3 + 16) = Avatar::findEntityInSameScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Entity::findEntityInSameScene((const Entity *const)(v3 + 32), entity_id);
  if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, (std::shared_ptr<Entity> *)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)((*(_QWORD *)&entity_id >> 3) + 0x7FFF8000LL) )
      __asan_report_load8(entity_id);
    v6 = **(_QWORD **)&entity_id + 152LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(**(_QWORD **)&entity_id + 152LL);
    (*(void (__fastcall **)(unsigned __int64, uint32_t))v6)(v3 + 64, entity_id);
    if ( !std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      goto LABEL_21;
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Player::getSceneComp(v7);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      v9 = *(_QWORD *)v8 + 120LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(*(_QWORD *)v8 + 120LL);
      v10 = *(void (__fastcall **)(const Avatar *const, unsigned __int64, _QWORD))v9;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store16(this);
      v10(this, v8, entity_ida);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    if ( v11 == 1 )
LABEL_21:
      std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)this, 0LL);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
  if ( v14 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1916: range 00000000137A15F8-00000000137A1AB7
data::ElementType __cdecl Avatar::getInitElemType(Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  data::ElementType result; // eax
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-A8h]
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 20 energy_skill_id:1930";
  *(_QWORD *)(v1 + 16) = Avatar::getInitElemType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(Avatar *const))v4)(this);
  if ( avatar_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.avatar_skill_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->skill_depot_id);
    }
    avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                      p_avatar_skill_config_mgr,
                                      avatar_config_ptr->skill_depot_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( avatar_skill_depot_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_skill_depot_config_ptr->energy_skill);
      }
      *(_DWORD *)(v1 + 32) = avatar_skill_depot_config_ptr->energy_skill;
      if ( *(_DWORD *)(v1 + 32) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v14);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
        avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                                    &v9->design_config.txt_config_mgr.avatar_skill_config_mgr,
                                    *(_DWORD *)(v1 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v14);
        if ( avatar_skill_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
          }
          result = avatar_skill_config_ptr->cost_elem_type;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "getInitElemType",
            1939);
          v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v15,
                  (const char (*)[51])"findAvatarSkillExcelConfig fails, energy_skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = None_0;
        }
      }
      else
      {
        result = None_0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "getInitElemType",
        1927);
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v15,
             (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &avatar_config_ptr->skill_depot_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = None_0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getInitElemType",
      1920);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v15,
           (const char (*)[28])"getConfig fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = None_0;
  }
  if ( v16 == (char *)v1 )
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

// Line 1948: range 00000000137A1AB8-00000000137A1EA3
int32_t __cdecl Avatar::changeStamina(
        Avatar *const this,
        float stamina,
        const StaminaChangeParam *param,
        bool is_force_zero_die)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  Player *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  __m128i v11; // xmm0
  common::milog::MiLogStream *v12; // r14
  Player *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Player *v16; // rax
  float CurStamina; // xmm0_4
  Player *v18; // rax
  Player *v19; // rax
  PlayerAvatarComp *AvatarComp; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 player_ptr:1949";
  *(_QWORD *)(v4 + 16) = Avatar::changeStamina;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(v4 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "changeStamina",
      1952);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v24,
           (const char (*)[37])"Avatar getPlayer nullptr, avatar_id:");
    val = Avatar::getAvatarId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BasicComp = Player::getBasicComp(v9);
    v11 = _mm_cvtsi32_si128(LODWORD(stamina));
    PlayerBasicComp::changeCurStamina(BasicComp, *(float *)v11.m128i_i32, param, 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[408]);
    }
    if ( (unsigned int)(*(_DWORD *)&this->baseclass_0[408] - 14) <= 3 )
      is_force_zero_die = 1;
    if ( is_force_zero_die )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/avatar.cpp",
        "changeStamina",
        1969);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v24, (const char (*)[13])"cur_stamina:");
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      *(float *)v11.m128i_i32 = Player::getCurStamina(v13);
      val = _mm_cvtsi128_si32(v11);
      v14 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)&val);
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" is_less:");
      v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      CurStamina = Player::getCurStamina(v16);
      common::milog::MiLogStream::operator<<(v15, CurStamina < 0.00000011920929);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( Player::getCurStamina(v18) < 0.00000011920929 )
      {
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        AvatarComp = Player::getAvatarComp(v19);
        PlayerAvatarComp::allAvatarDie(AvatarComp, PLAYER_DIE_DRAWN);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 32));
  result = 0;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1980: range 00000000137A1EA4-00000000137A1ED6
void __cdecl Avatar::clearSpeed(Avatar *const this)
{
  Vector3::reset((Vector3 *const)&this->baseclass_0[392]);
  Vector3::reset(&this->prev_speed_);
};

// Line 1986: range 00000000137A1ED8-00000000137A211C
void __cdecl Avatar::clearMotionState(Avatar *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // rsi
  Vector3 v8; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->baseclass_0[408], v1, &this->baseclass_0[408]);
  }
  *(_DWORD *)&this->baseclass_0[408] = 2;
  v2 = ((_BYTE)this + 20) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_in_dash_, v2, v3);
  this->is_in_dash_ = 0;
  v4 = ((_BYTE)this + 21) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_in_fly_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_in_fly_, v4, v5);
  this->is_in_fly_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_start_dash_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_start_dash_scene_time_ms_, v4, &this->last_start_dash_scene_time_ms_);
  }
  this->last_start_dash_scene_time_ms_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_scene_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_start_fly_scene_time_ms_, v4, &this->last_start_fly_scene_time_ms_);
  }
  this->last_start_fly_scene_time_ms_ = 0;
  Vector3::Vector3(&v8, 0.0, 0.0, 0.0);
  v6 = *(_BYTE *)((((unsigned __int64)&this->last_start_fly_pos_.z + 3) >> 3) + 0x7FFF8000);
  v7 = v6 != 0;
  if ( ((((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->last_start_fly_pos_ >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&this->last_start_fly_pos_ >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v7 & ((((unsigned __int8)this + 47) & 7) >= v6) )
  {
    v7 = 12LL;
    __asan_report_store_n(&this->last_start_fly_pos_, 12LL);
  }
  this->last_start_fly_pos_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->sit_on_chair_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->sit_on_chair_id_, v7);
  this->sit_on_chair_id_ = 0LL;
  Avatar::stopUnlockChairTimer(this);
};

// Line 1999: range 00000000137A211E-00000000137A22F9
int32_t __cdecl Avatar::checkPosition(Avatar *const this, const Vector3 *pos)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  Player *v7; // rax
  PlayerAvatarComp *AvatarComp; // rax
  int v10; // r15d
  int32_t result; // eax
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 player_ptr:2002";
  *(_QWORD *)(v3 + 16) = Avatar::checkPosition;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !Entity::checkPosition((Entity *const)this, pos) )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL)
    && (v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
        AvatarComp = Player::getAvatarComp(v7),
        !PlayerAvatarComp::allAvatarDie(AvatarComp, PLAYER_DIE_ABYSS)) )
  {
    v2 = 1;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v10 == 1 )
LABEL_17:
    v2 = 0;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2010: range 00000000137A22FA-00000000137A232A
void __cdecl Avatar::procBuffInTimer(Avatar *const this, uint64_t player_time_ms)
{
  BuffComp *BuffComp; // rdx

  BuffComp = Avatar::getBuffComp(this);
  BuffComp::onMsTimer(BuffComp, player_time_ms);
};

// Line 2015: range 00000000137A232C-00000000137A3092
void __cdecl Avatar::procStaminaInTimer(Avatar *const this, uint64_t player_time_ms)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  Player *v8; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  char v17; // r14
  GadgetVehicleComp *v18; // r15
  bool v19; // r15
  GadgetVehicleComp *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  float v22; // xmm0_4
  Player *v23; // rax
  PlayerBasicComp *v24; // rdi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  Player *v26; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::array<float,2>::const_reference v28; // rax
  _DWORD *v29; // rdx
  std::array<float,2>::const_reference v30; // rax
  _DWORD *v31; // rdx
  Player *v32; // rax
  PlayerBasicComp *v33; // rcx
  const PlayerBasicComp *basic_comp; // [rsp+30h] [rbp-160h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+40h] [rbp-150h]
  unsigned __int64 stamina_recover_wait_time_ms; // [rsp+50h] [rbp-140h]
  const std::array<float,2> *dash_cost_staminas; // [rsp+58h] [rbp-138h]
  std::shared_ptr<Config> v39; // [rsp+60h] [rbp-130h] BYREF
  std::shared_ptr<Player> v40; // [rsp+70h] [rbp-120h] BYREF
  StaminaChangeParam param; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v42; // [rsp+A0h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 22 dash_cost_stamina:2096 64 16 15 player_ptr:2016 96 16 16 vehicle_ptr:2071 128 16 21 ve"
                        "hicle_comp_ptr:2074";
  *(_QWORD *)(v3 + 16) = Avatar::procStaminaInTimer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v6)(v3 + 64, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "procStaminaInTimer",
      2019);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v42,
           (const char (*)[31])"player_ptr is null, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v42);
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    basic_comp = Player::getBasicComp(v8);
    if ( Entity::isOnScene((const Entity *const)this)
      && Avatar::isPlayerCurAvatar(this)
      && Creature::getLifeState(this) == LIFE_ALIVE )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->avatar_id_);
      }
      avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, this->avatar_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
      if ( avatar_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->baseclass_0[408]);
        }
        switch ( *(_DWORD *)&this->baseclass_0[408] )
        {
          case 6:
          case 7:
          case 8:
          case 0xC:
          case 0xE:
          case 0xF:
          case 0x11:
          case 0x12:
          case 0x15:
          case 0x21:
          case 0x24:
          case 0x29:
            break;
          case 0xD:
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v39);
            v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
            *(float *)v2.m128i_i32 = ConstValueExcelConfigMgr::getFlyCostStamina(&v12->design_config.txt_config_mgr.const_value_config_mgr);
            *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
            std::shared_ptr<Config>::~shared_ptr(&v39);
            *(float *)(v3 + 48) = (float)(200.0 * *(float *)(v3 + 48)) / 1000.0;
            Avatar::updateStaminaCost(this, (float *)(v3 + 48), 0xC8uLL);
            v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            BasicComp = Player::getBasicComp(v13);
            param.type = 3;
            if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->baseclass_0[408]);
            }
            param.motion_state = *(_DWORD *)&this->baseclass_0[408];
            memset(&param.skill_id, 0, 20);
            PlayerBasicComp::changeCurStamina(BasicComp, -*(float *)(v3 + 48), &param, 1);
            break;
          case 0x10:
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 96));
            v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            *(float *)v2.m128i_i32 = ConstValueExcelConfigMgr::getSwimDashCostStaminaPerSecond(&v15->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
            *(float *)(v3 + 48) = (float)(200.0 * COERCE_FLOAT(_mm_cvtsi128_si32(v2))) / 1000.0;
            Avatar::updateStaminaCost(this, (float *)(v3 + 48), 0xC8uLL);
            param.type = 3;
            if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->baseclass_0[408]);
            }
            param.motion_state = *(_DWORD *)&this->baseclass_0[408];
            memset(&param.skill_id, 0, 20);
            Avatar::changeStamina(this, -*(float *)(v3 + 48), &param, 0);
            break;
          default:
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            Player::getVehicleComp(v16);
            PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v3 + 96));
            if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
            {
              std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 128));
              v17 = 0;
              v19 = 0;
              if ( std::operator!=<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 128)) )
              {
                v18 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                std::shared_ptr<Player>::shared_ptr(&v40, (const std::shared_ptr<Player> *)(v3 + 64));
                v17 = 1;
                if ( !GadgetVehicleComp::getPlayerSlot(v18, &v40) )
                  v19 = 1;
              }
              if ( v17 )
                std::shared_ptr<Player>::~shared_ptr(&v40);
              if ( v19 )
              {
                v20 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                GadgetVehicleComp::procVehicleStamina(v20, 0xC8uLL, 0, 1);
              }
              std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 128));
            }
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 128));
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            *(float *)v2.m128i_i32 = ConstValueExcelConfigMgr::getStaminaRecoverWaitTime(&v21->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
            v22 = 1000.0 * COERCE_FLOAT(_mm_cvtsi128_si32(v2));
            if ( v22 >= 9.223372e18 )
              stamina_recover_wait_time_ms = (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL;
            else
              stamina_recover_wait_time_ms = (unsigned int)(int)v22;
            if ( player_time_ms > stamina_recover_wait_time_ms + PlayerBasicComp::getLastStaminaCostTimeMs(basic_comp) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->stamina_recover_speed >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->stamina_recover_speed >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&avatar_config_ptr->stamina_recover_speed);
              }
              *(float *)(v3 + 48) = avatar_config_ptr->stamina_recover_speed;
              *(float *)(v3 + 48) = (float)(200.0 * *(float *)(v3 + 48)) / 1000.0;
              Avatar::updateStaminaRecover(this, (float *)(v3 + 48), 0xC8uLL);
              v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v24 = Player::getBasicComp(v23);
              param.type = 3;
              if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
              {
                v24 = (PlayerBasicComp *)&this->baseclass_0[408];
                __asan_report_load4(&this->baseclass_0[408]);
              }
              param.motion_state = *(_DWORD *)&this->baseclass_0[408];
              memset(&param.skill_id, 0, 20);
              PlayerBasicComp::changeCurStamina(v24, *(float *)(v3 + 48), &param, 1);
            }
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
            break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_dash_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_in_dash_);
        }
        if ( this->is_in_dash_ )
        {
          *(_DWORD *)(v3 + 48) = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v40);
          v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
          dash_cost_staminas = ConstValueExcelConfigMgr::getDashCostStaminas(&v25->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
          v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          AvatarComp = Player::getAvatarComp(v26);
          if ( PlayerAvatarComp::getMonsterAlertCount(AvatarComp) )
          {
            v28 = std::array<float,2ul>::operator[](dash_cost_staminas, 0LL);
            v29 = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            *(_DWORD *)(v3 + 48) = *v29;
          }
          else
          {
            v30 = std::array<float,2ul>::operator[](dash_cost_staminas, 1uLL);
            v31 = v30;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            *(_DWORD *)(v3 + 48) = *v31;
          }
          *(float *)(v3 + 48) = (float)(200.0 * *(float *)(v3 + 48)) / 1000.0;
          Avatar::updateStaminaCost(this, (float *)(v3 + 48), 0xC8uLL);
          v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v33 = Player::getBasicComp(v32);
          param.type = 4;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[408] >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->baseclass_0[408]);
          }
          param.motion_state = *(_DWORD *)&this->baseclass_0[408];
          memset(&param.skill_id, 0, 20);
          PlayerBasicComp::changeCurStamina(v33, -*(float *)(v3 + 48), &param, 1);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "procStaminaInTimer",
          2032);
        v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v42,
                (const char (*)[35])"findAvatarConfig fails, avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->avatar_id_);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v43 == (char *)v3 )
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
};

// Line 2114: range 00000000137A3094-00000000137A37ED
int32_t __cdecl Avatar::useSpring(Avatar *const this, PlayerWorldScene *world_scene, const SpringUseParam *use_param)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __m128i v7; // xmm0
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx
  std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int v14; // r14d
  common::milog::MiLogStream *v15; // rdx
  int32_t result; // eax
  float add_hp; // [rsp+2Ch] [rbp-144h]
  float sub_spring; // [rsp+30h] [rbp-140h]
  float cur_spring_volume; // [rsp+34h] [rbp-13Ch]
  float hp_spring_ratio; // [rsp+38h] [rbp-138h]
  float recover_hp_percent; // [rsp+3Ch] [rbp-134h]
  float cur_hp; // [rsp+40h] [rbp-130h]
  float max_hp; // [rsp+44h] [rbp-12Ch]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-110h] BYREF
  char v29[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 21 notify_param_ptr:2153 64 96 12 context:2157";
  *(_QWORD *)(v4 + 16) = Avatar::useSpring;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862725] = -202116109;
  *(float *)v3.m128i_i32 = PlayerWorldScene::getCurSpringVolume(world_scene);
  cur_spring_volume = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v7 = 0LL;
  if ( cur_spring_volume <= 0.0 )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "useSpring",
      2118);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v28, (const char (*)[23])"cur_spring_volume is 0");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = 0;
    goto LABEL_32;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  hp_spring_ratio = (float)(int)ConstValueExcelConfigMgr::getHpSpringRatio(const_value_config_mgr);
  recover_hp_percent = (float)(int)ConstValueExcelConfigMgr::getRecoverHpPercent(const_value_config_mgr);
  *(float *)v7.m128i_i32 = Creature::getCurHp(this);
  cur_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  *(float *)v7.m128i_i32 = Creature::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( *(_BYTE *)(((unsigned __int64)use_param >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)use_param & 7) >= *(_BYTE *)(((unsigned __int64)use_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(use_param);
  }
  if ( use_param->is_auto_use )
  {
    if ( *(_BYTE *)(((unsigned __int64)&use_param->spring_auto_use_percent >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)use_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&use_param->spring_auto_use_percent >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&use_param->spring_auto_use_percent);
    }
    if ( (float)(cur_hp * 100.0) >= (float)((float)(int)use_param->spring_auto_use_percent * max_hp) )
    {
      v8 = 0;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&use_param->spring_auto_use_percent >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)use_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&use_param->spring_auto_use_percent >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&use_param->spring_auto_use_percent);
    }
    add_hp = (float)((float)((float)(int)use_param->spring_auto_use_percent * max_hp) / 100.0) - cur_hp;
  }
  else
  {
    add_hp = (float)(max_hp * recover_hp_percent) / 100.0;
  }
  if ( add_hp > (float)(max_hp - cur_hp) )
    add_hp = max_hp - cur_hp;
  if ( add_hp >= 0.00000011920929 && hp_spring_ratio >= 0.00000011920929 )
  {
    sub_spring = add_hp / hp_spring_ratio;
    if ( (float)(add_hp / hp_spring_ratio) > cur_spring_volume )
      sub_spring = cur_spring_volume;
    v11 = 1LL;
    PlayerWorldScene::changeCurSpringVolume(world_scene, -sub_spring, 1);
    common::tools::perf::make_shared<FightPropNtfParam>();
    v9 = (unsigned __int64)std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = (v10 != 0) & (unsigned __int8)(v10 <= 3);
    if ( (_BYTE)v12 )
      v9 = __asan_report_store4(v9, v11, v12);
    *(_DWORD *)v9 = 1;
    v13 = std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    std::vector<unsigned int>::push_back(&v13->param_vec, &use_param->point_id);
    ChangeHpContext::ChangeHpContext((ChangeHpContext *const)(v4 + 64));
    *(_DWORD *)(v4 + 64) = 105;
    if ( *(_BYTE *)(((unsigned __int64)use_param >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)use_param & 7) >= *(_BYTE *)(((unsigned __int64)use_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(use_param);
    }
    *(_BYTE *)(v4 + 121) = use_param->is_auto_use;
    std::shared_ptr<FightPropNtfParam>::shared_ptr(
      (std::shared_ptr<FightPropNtfParam> *const)&v27,
      (const std::shared_ptr<FightPropNtfParam> *)(v4 + 32));
    v14 = (unsigned int)Creature::changeCurHp(
                          this,
                          (float)(sub_spring * hp_spring_ratio) + 0.00000011920929,
                          (ChangeHpContext *)(v4 + 64),
                          1,
                          (FightPropNtfParamPtr *)&v27) >> 31;
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v27);
    if ( (_BYTE)v14 )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "useSpring",
        2162);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v28,
              (const char (*)[18])"changeCurHp fails");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, this);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    ChangeHpContext::~ChangeHpContext((ChangeHpContext *const)(v4 + 64));
    std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v4 + 32));
  }
  else
  {
    v8 = 0;
  }
LABEL_32:
  result = v8;
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2170: range 00000000137A37EE-00000000137A3F43
void __cdecl Avatar::recordPlayerLogAvatarHpChange(
        Avatar *const this,
        float old_hp,
        float cur_hp,
        ChangeHpContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rdx
  proto_log::PlayerLogBodyAvatarHpChange *v9; // rcx
  proto_log::PlayerLogBodyAvatarHpChange *v10; // rcx
  proto_log::PlayerLogBodyAvatarHpChange *v11; // rcx
  Entity *v13; // rax
  proto_log::PlayerLogBodyAvatarHpChange *v14; // rax
  google::protobuf::uint32 v15; // edx
  google::protobuf::uint32 v16; // edx
  google::protobuf::RepeatedField<unsigned int> *v17; // r14
  google::protobuf::RepeatedField<unsigned int> *v18; // rax
  ActorAbility *v19; // rax
  proto_log::PlayerLogBodyAvatarHpChange *v20; // rax
  proto_log::PlayerLogBodyAvatarHpChange *v21; // rax
  Player *v22; // rax
  PlayerAvatarComp *AvatarComp; // r14
  proto_log::EntityLog *entity_log; // [rsp+20h] [rbp-180h]
  std::string *ability_name; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-170h] BYREF
  char v28[336]; // [rsp+50h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 16 15 player_ptr:2173 80 16 22 hp_change_log_ptr:2179 112 16 16 ability_ptr:2183 144 16 15 "
                        "caster_ptr:2186 176 72 20 temp_entity_log:2189";
  *(_QWORD *)(v4 + 16) = Avatar::recordPlayerLogAvatarHpChange;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  if ( std::fabs(cur_hp - old_hp) > 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v7 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, Avatar *const))v7)(v4 + 48, this);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "recordPlayerLogAvatarHpChange",
        2176);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v27,
             (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarHpChange>();
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      proto_log::PlayerLogBodyAvatarHpChange::set_avatar_level(v9, this->level_);
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(context);
      }
      proto_log::PlayerLogBodyAvatarHpChange::set_reason(v10, context->reason);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->avatar_id_);
      }
      proto_log::PlayerLogBodyAvatarHpChange::set_avatar_id(v11, this->avatar_id_);
      std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(context);
      }
      if ( context->reason == CHANGE_HP_ADD_ABILITY
        && std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v4 + 112), 0LL) )
      {
        std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        ActorAbility::getCaster((ActorAbility *const)(v4 + 144));
        if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v4 + 144), 0LL) )
        {
          proto_log::EntityLog::EntityLog((proto_log::EntityLog *const)(v4 + 176));
          v13 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
          Entity::getEntityLog(v13, (proto_log::EntityLog *)(v4 + 176));
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          entity_log = proto_log::PlayerLogBodyAvatarHpChange::mutable_source_log(v14);
          v15 = proto_log::EntityLog::entity_type((const proto_log::EntityLog *const)(v4 + 176));
          proto_log::EntityLog::set_entity_type(entity_log, v15);
          v16 = proto_log::EntityLog::id((const proto_log::EntityLog *const)(v4 + 176));
          proto_log::EntityLog::set_id(entity_log, v16);
          v17 = proto_log::EntityLog::mutable_level(entity_log);
          v18 = proto_log::EntityLog::mutable_level((proto_log::EntityLog *const)(v4 + 176));
          google::protobuf::RepeatedField<unsigned int>::Swap(v17, v18);
          proto_log::EntityLog::~EntityLog((proto_log::EntityLog *const)(v4 + 176));
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v4 + 144));
      }
      if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v4 + 112)) )
      {
        v19 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        ability_name = &ActorAbility::getConfigRef(v19)->ability_name;
        if ( std::operator==<char>("ClimateAbility_Cold", ability_name) )
        {
          v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          proto_log::PlayerLogBodyAvatarHpChange::set_reason(v20, 0xDu);
        }
        else if ( std::operator==<char>("SceneObj_Storm_Lightning", ability_name) )
        {
          v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarHpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
          proto_log::PlayerLogBodyAvatarHpChange::set_reason(v21, 0xEu);
        }
      }
      v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
      AvatarComp = Player::getAvatarComp(v22);
      std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange>::shared_ptr(
        (std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange> *const)(v4 + 144),
        (const std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange> *)(v4 + 80));
      PlayerAvatarComp::recordAvatarHpChangeLogs(
        AvatarComp,
        (std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange> *)(v4 + 144),
        cur_hp - old_hp);
      std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange> *const)(v4 + 144));
      std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v4 + 112));
      std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarHpChange> *const)(v4 + 80));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 48));
  }
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 2215: range 00000000137A3F44-00000000137A4355
void __cdecl Avatar::logPlayerLogAvatarDeathRevival(Avatar *const this, uint32_t die_revival_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::AvatarLog *v8; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  Player *v11; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::string *v13; // rax
  Player *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  DungeonScene *v16; // rax
  const std::string *v17; // rax
  Player *v18; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 15 player_ptr:2216 64 16 26 death_revival_log_ptr:2222 96 16 22 dungeon_scene_ptr:2227";
  *(_QWORD *)(v2 + 16) = Avatar::logPlayerLogAvatarDeathRevival;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "logPlayerLogAvatarDeathRevival",
      2219);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarDeathRevival>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = proto_log::PlayerLogBodyAvatarDeathRevival::mutable_avatar(v7);
    Avatar::getAvatarLog(this, v8);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyAvatarDeathRevival::set_reason(v9, die_revival_type);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarComp = Player::getAvatarComp(v11);
    v13 = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp);
    proto_log::PlayerLogBodyAvatarDeathRevival::set_combat_transaction(v10, v13);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::getSceneComp(v14);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 96));
    if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 96), 0LL) )
    {
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarDeathRevival,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v17 = DungeonScene::getTransaction[abi:cxx11](v16);
      proto_log::PlayerLogBodyAvatarDeathRevival::set_dungeon_transaction(v15, v17);
    }
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarDeathRevival,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAvatarDeathRevival> *)(v2 + 64));
    Player::printStatLog(v18, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
    std::shared_ptr<proto_log::PlayerLogBodyAvatarDeathRevival>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarDeathRevival> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
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
};

// Line 2237: range 00000000137A4356-00000000137A4521
std::string *__cdecl Avatar::getCombatTransaction[abi:cxx11](std::string *retstr, Avatar *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  Player *v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::string *v8; // rdx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-61h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:2238";
  *(_QWORD *)(v2 + 16) = Avatar::getCombatTransaction[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    std::allocator<char>::allocator(&__a, 0LL);
    std::string::basic_string<std::allocator<char>>(retstr, byte_24FD2920, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarComp = Player::getAvatarComp(v6);
    v8 = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp);
    std::string::basic_string(retstr, v8);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2248: range 00000000137A4522-00000000137A46AC
void __cdecl Avatar::onAvatarEquipChange(Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerAvatarComp *AvatarComp; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:2249";
  *(_QWORD *)(v1 + 16) = Avatar::onAvatarEquipChange;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v4)(v1 + 32, this);
  if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AvatarComp = Player::getAvatarComp(v5);
    PlayerAvatarComp::setIsChangedEquip(AvatarComp, 1);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2259: range 00000000137A46AE-00000000137A5528
void __cdecl Avatar::getAvatarLog(Avatar *const this, proto_log::AvatarLog *avatar_log)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  EquipComp *EquipComp; // rax
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  signed int v11; // ecx
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  proto_log::RelicLog *v13; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  proto_log::RelicLog *v15; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  proto_log::RelicLog *v17; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  proto_log::RelicLog *v19; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  proto_log::RelicLog *v21; // rax
  signed int v22; // ecx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  EquipComp *v25; // rax
  std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  float v27; // xmm0_4
  float v28; // xmm0_4
  bool v29; // dl
  unsigned __int64 v30; // rax
  google::protobuf::uint32 v31; // edx
  unsigned __int64 v32; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t Uid; // edx
  SkillComp *SkillComp; // rax
  std::pair<unsigned int const,unsigned int> *v36; // rax
  std::pair<unsigned int const,unsigned int> *v37; // rdx
  TalentComp *TalentComp; // rax
  float max_hp; // [rsp+14h] [rbp-18Ch]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+18h] [rbp-188h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+20h] [rbp-180h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseTalent>>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+38h] [rbp-168h]
  const std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__for_range_0; // [rsp+40h] [rbp-160h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_1; // [rsp+48h] [rbp-158h]
  const std::map<unsigned int,std::shared_ptr<BaseTalent>> *__for_range_3; // [rsp+50h] [rbp-150h]
  const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > *v48; // [rsp+58h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *team_resonance_id; // [rsp+60h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *__0; // [rsp+68h] [rbp-138h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v51; // [rsp+70h] [rbp-130h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *skill_depot_id; // [rsp+78h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *skill_level_map; // [rsp+80h] [rbp-120h]
  proto_log::SkillDepotLog *skill_depot_log; // [rsp+88h] [rbp-118h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+90h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+98h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+A0h] [rbp-100h]
  proto_log::SkillLevelLog *skill_level_log; // [rsp+A8h] [rbp-F8h]
  const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > *v59; // [rsp+B0h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *_; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *equip_affix_ptr; // [rsp+C0h] [rbp-E0h]
  proto_log::AffixLog *affix_log; // [rsp+C8h] [rbp-D8h]
  std::tuple_element<0,std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+D0h] [rbp-D0h]
  std::tuple_element<1,std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+D8h] [rbp-C8h]
  proto_log::WeaponLog *weapon_log; // [rsp+E0h] [rbp-C0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+E8h] [rbp-B8h] BYREF
  std::pair<const data::EquipType,std::shared_ptr<Equip> > __in; // [rsp+F0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v68; // [rsp+110h] [rbp-90h] BYREF
  char v69[112]; // [rsp+130h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 player_ptr:2331";
  *(_QWORD *)(v3 + 16) = Avatar::getAvatarLog;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto_log::AvatarLog::set_avatar_id(avatar_log, this->avatar_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto_log::AvatarLog::set_level(avatar_log, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  proto_log::AvatarLog::set_promote_level(avatar_log, this->promote_level_);
  EquipComp = Avatar::getEquipComp(this);
  __for_range = EquipComp::getEquipMap(EquipComp);
  __for_begin._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(__for_range)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_begin);
    std::pair<data::EquipType const,std::shared_ptr<Equip>>::pair(&__in, v7);
    equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(&__in);
    equip_ptr = std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(&__in);
    if ( !std::operator==<Equip>(equip_ptr, 0LL) )
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      v9 = *(_QWORD *)v8 + 72LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(*(_QWORD *)v8 + 72LL);
      v10 = (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
      if ( v10 == 3 )
      {
        v11 = (unsigned int)Avatar::getEquipComp(this);
        if ( *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)equip_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(equip_type);
        }
        EquipComp::findEquip<Reliquary>((EquipComp *const)(v3 + 32), (data::EquipType)v11);
        if ( !std::operator==<Reliquary>((const std::shared_ptr<Reliquary> *)(v3 + 32), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)equip_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)equip_type >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(equip_type);
          }
          switch ( *equip_type )
          {
            case EQUIP_BRACER:
              v12 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              v13 = proto_log::AvatarLog::mutable_relic_bracer(avatar_log);
              Reliquary::getRelicLog(v12, v13);
              break;
            case EQUIP_NECKLACE:
              v20 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              v21 = proto_log::AvatarLog::mutable_relic_necklace(avatar_log);
              Reliquary::getRelicLog(v20, v21);
              break;
            case EQUIP_SHOES:
              v16 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              v17 = proto_log::AvatarLog::mutable_relic_shoes(avatar_log);
              Reliquary::getRelicLog(v16, v17);
              break;
            case EQUIP_RING:
              v18 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              v19 = proto_log::AvatarLog::mutable_relic_ring(avatar_log);
              Reliquary::getRelicLog(v18, v19);
              break;
            case EQUIP_DRESS:
              v14 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              v15 = proto_log::AvatarLog::mutable_relic_dress(avatar_log);
              Reliquary::getRelicLog(v14, v15);
              break;
            default:
              break;
          }
        }
        std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v3 + 32));
      }
      else if ( v10 == 4 )
      {
        v22 = (unsigned int)Avatar::getEquipComp(this);
        if ( *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)equip_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)equip_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(equip_type);
        }
        EquipComp::findEquip<Weapon>((EquipComp *const)(v3 + 32), (data::EquipType)v22);
        if ( !std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v3 + 32), 0LL) )
        {
          weapon_log = proto_log::AvatarLog::mutable_weapon(avatar_log);
          v23 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          Weapon::getWeaponLog(v23, weapon_log);
        }
        std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 32));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/avatar.cpp",
          "getAvatarLog",
          2312);
        v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v68, (const char (*)[12])"equip_type:");
        common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(v24, equip_type);
        common::milog::MiLogStream::~MiLogStream(&v68);
      }
    }
    std::pair<data::EquipType const,std::shared_ptr<Equip>>::~pair(&__in);
    std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_begin);
  }
  v25 = Avatar::getEquipComp(this);
  __for_range_0 = EquipComp::getReliquarySetAffixMap(v25);
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::begin(__for_range_0)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::_Self *)&__for_end) )
  {
    v59 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<EquipAffix>>(v59);
    equip_affix_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<EquipAffix> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<EquipAffix>>(v59);
    if ( std::operator!=<EquipAffix>(equip_affix_ptr, 0LL) )
    {
      affix_log = proto_log::AvatarLog::add_relic_set_affix_list(avatar_log);
      v26 = std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EquipAffix,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_affix_ptr);
      EquipAffix::getAffixLog(v26, affix_log);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<EquipAffix> > > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  proto_log::AvatarLog::set_life_state(avatar_log, this->life_state_);
  *(float *)v2.m128i_i32 = Creature::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( max_hp >= 0.00000011920929 )
    v27 = Creature::getCurHp(this) / max_hp;
  else
    v27 = 0.0;
  proto_log::AvatarLog::set_hp_percent(avatar_log, (int)(float)(v27 * 100.0));
  v28 = Avatar::calcAvatarCombatForce(this);
  proto_log::AvatarLog::set_avatar_combat_force(avatar_log, (int)(float)(v28 + 0.5));
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  proto_log::AvatarLog::set_skill_depot_id(avatar_log, this->skill_depot_id_);
  v29 = !Avatar::isFormal(this);
  proto_log::AvatarLog::set_is_trial(avatar_log, v29);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v30 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    v30 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  v31 = (*(__int64 (__fastcall **)(Avatar *const))v30)(this);
  proto_log::AvatarLog::set_avatar_type(avatar_log, v31);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v32 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    v32 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v32)(v3 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
  {
    v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Uid = Player::getUid(v33);
    proto_log::AvatarLog::set_owner_uid(avatar_log, Uid);
  }
  SkillComp = Avatar::getSkillComp(this);
  __for_range_1 = SkillComp::getDepotSkillLevelMap(SkillComp);
  __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(__for_range_1)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v51 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
    skill_depot_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v51);
    skill_level_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v51);
    skill_depot_log = proto_log::AvatarLog::add_skill_depot_list(avatar_log);
    __for_range_2 = skill_level_map;
    __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              &__for_begin_1,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin) )
    {
      v36 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
      v37 = v36;
      if ( ((unsigned __int8)v36 & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v36 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v36, 8LL);
      }
      __for_end = *v37;
      skill_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      skill_level_log = proto_log::SkillDepotLog::add_skill_level_list(skill_depot_log);
      if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(skill_id);
      }
      proto_log::SkillLevelLog::set_skill_id(skill_level_log, *skill_id);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(skill_level);
      }
      proto_log::SkillLevelLog::set_skill_level(skill_level_log, *skill_level);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
  }
  TalentComp = Avatar::getTalentComp(this);
  __for_range_3 = TalentComp::getTeamResonanceTalentMap(TalentComp);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseTalent>>::begin(__for_range_3)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::shared_ptr<BaseTalent>>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            &__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::_Self *)&__for_end) )
  {
    v48 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator*(&__for_begin);
    team_resonance_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseTalent>>(v48);
    __0 = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseTalent> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseTalent>>(v48);
    if ( *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)team_resonance_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)team_resonance_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(team_resonance_id);
    }
    proto_log::AvatarLog::add_team_resonance_list(avatar_log, *team_resonance_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseTalent>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2354: range 00000000137A552A-00000000137A55F3
void __cdecl Avatar::getTeamAvatarLog(Avatar *const this, proto_log::TeamAvatarLog *team_avatar_log)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = *(_QWORD *)this->baseclass_0 + 400LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 400LL);
  v3 = (*(__int64 (__fastcall **)(Avatar *const))v2)(this);
  proto_log::TeamAvatarLog::set_avatar_type(team_avatar_log, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto_log::TeamAvatarLog::set_avatar_id(team_avatar_log, this->avatar_id_);
};

// Line 2361: range 00000000137A55F4-00000000137A57F7
float __cdecl Avatar::calcAvatarCombatForce(const Avatar *const this)
{
  __m128i v1; // xmm0
  FightPropComp *p_fight_prop_comp; // rcx
  float MaxElementAddHurt; // [rsp+4h] [rbp-5Ch]
  float MaxElementSubHurt; // [rsp+4h] [rbp-5Ch]
  float combat_force; // [rsp+10h] [rbp-50h]
  float combat_forcea; // [rsp+10h] [rbp-50h]
  float prop_value; // [rsp+14h] [rbp-4Ch]
  std::map<data::FightPropType,float>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+28h] [rbp-38h]
  const std::map<data::FightPropType,float> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const data::FightPropType,float> *v13; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *fight_prop_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *param_ratio; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-10h] BYREF

  v1 = 0LL;
  combat_force = 0.0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  __for_range = ConstValueExcelConfigMgr::getAvatarForceParamMap(const_value_config_mgr);
  __for_begin._M_node = std::map<data::FightPropType,float>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<data::FightPropType,float>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin);
    fight_prop_type = std::get<0ul,data::FightPropType const,float>(v13);
    param_ratio = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>(v13);
    p_fight_prop_comp = &this->fight_prop_comp_;
    if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(fight_prop_type);
    }
    *(float *)v1.m128i_i32 = FightPropComp::getPropValue(p_fight_prop_comp, *fight_prop_type, 1);
    prop_value = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    if ( *(_BYTE *)(((unsigned __int64)param_ratio >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param_ratio);
    }
    v1 = (__m128i)*(unsigned int *)param_ratio;
    combat_force = (float)(*(float *)v1.m128i_i32 * prop_value) + combat_force;
    std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin);
  }
  MaxElementAddHurt = FightPropComp::getMaxElementAddHurt(&this->fight_prop_comp_);
  combat_forcea = (float)(ConstValueExcelConfigMgr::getAvatarForceElementAddHurt(const_value_config_mgr)
                        * MaxElementAddHurt)
                + combat_force;
  MaxElementSubHurt = FightPropComp::getMaxElementSubHurt(&this->fight_prop_comp_);
  return (float)(ConstValueExcelConfigMgr::getAvatarForceElementSubHurt(const_value_config_mgr) * MaxElementSubHurt)
       + combat_forcea;
};

// Line 2376: range 00000000137A57F8-00000000137A58B3
const FightPropMap *__cdecl Avatar::getBaseLevelProp(const Avatar *const this)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  const FightPropMap *BaseLevelProp; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  BaseLevelProp = AvatarExcelConfigMgr::findBaseLevelProp(p_avatar_config_mgr, this->avatar_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return BaseLevelProp;
};

// Line 2382: range 00000000137A58B4-00000000137A5D86
std::pair<data::FightPropType,float> __cdecl Avatar::getAvatarMaxEnergy(const Avatar *const this)
{
  char *v1; // r14
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t SkillComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // r15d
  Skill *v13; // rax
  std::pair<data::FightPropType,float> v14; // rax
  float __y; // [rsp+1Ch] [rbp-C4h] BYREF
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+20h] [rbp-C0h]
  char *val; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 20 energy_skill_id:2385 48 4 14 prop_type:2396 64 16 14 skill_ptr:2402";
  *(_QWORD *)(v3 + 16) = Avatar::getAvatarMaxEnergy;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = Avatar::getEnergySkill(this);
  if ( !*(_DWORD *)(v3 + 32) )
    goto LABEL_17;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &v6->design_config.txt_config_mgr.avatar_skill_config_mgr,
                              *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !avatar_skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getAvatarMaxEnergy",
      2393);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"findAvatarSkillExcelConfig fails, energy_skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
  }
  *(_DWORD *)(v3 + 48) = FightPropComp::getMaxEnergyType(avatar_skill_config_ptr->cost_elem_type);
  if ( !*(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getAvatarMaxEnergy",
      2399);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v18,
           (const char (*)[34])"getMaxPropType failed, elem_type:");
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_skill_config_ptr->cost_elem_type);
    }
    val = (char *)data::enumValToStr(avatar_skill_config_ptr->cost_elem_type);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    goto LABEL_17;
  }
  SkillComp = (unsigned int)Avatar::getSkillComp(this);
  SkillComp::findSkill((const SkillComp *const)(v3 + 64), SkillComp);
  if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getAvatarMaxEnergy",
      2405);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v18,
            (const char (*)[34])"findSkill fails, energy_skill_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v12 = 0;
  }
  else
  {
    v13 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(float *)v2.m128i_i32 = Skill::getMaxElemEnergy(v13, 0);
    LODWORD(__y) = _mm_cvtsi128_si32(v2);
    std::pair<data::FightPropType,float>::pair<data::FightPropType&,float,true>(
      (std::pair<data::FightPropType,float> *const)&val,
      (data::FightPropType *)(v3 + 48),
      &__y);
    v1 = val;
    v12 = 1;
  }
  std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v3 + 64));
  if ( !v12 )
  {
LABEL_17:
    *(_DWORD *)(v3 + 48) = 0;
    __y = 0.0;
    std::pair<data::FightPropType,float>::pair<data::FightPropType,int,true>(
      (std::pair<data::FightPropType,float> *const)&val,
      (data::FightPropType *)(v3 + 48),
      (int *)&__y);
    v1 = val;
  }
  v14 = (std::pair<data::FightPropType,float>)v1;
  if ( v19 == (char *)v3 )
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
  return v14;
};

// Line 2417: range 00000000137A5D88-00000000137A60C4
void __cdecl Avatar::logPlayerLogAvatarPromote(Avatar *const this, Player *player, uint32_t promote_level_before)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  uint32_t quality_type; // [rsp+24h] [rbp-8Ch]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+28h] [rbp-88h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-80h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-70h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 27 avatar_levelup_log_ptr:2418";
  *(_QWORD *)(v3 + 16) = Avatar::logPlayerLogAvatarPromote;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarLevelup>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto_log::PlayerLogBodyAvatarLevelup::set_avatar_id(v6, this->avatar_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(Avatar *const))v7)(this);
  if ( avatar_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->quality_type);
    }
    quality_type = avatar_config_ptr->quality_type;
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    proto_log::PlayerLogBodyAvatarLevelup::set_avatar_quality(v8, quality_type);
  }
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_log::PlayerLogBodyAvatarLevelup::set_promote_level_before(v9, promote_level_before);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarLevelup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  proto_log::PlayerLogBodyAvatarLevelup::set_promote_level_after(v10, this->promote_level_);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarLevelup,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyAvatarLevelup> *)(v3 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyAvatarLevelup>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarLevelup> *const)(v3 + 32));
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2432: range 00000000137A60C6-00000000137A6303
void __cdecl Avatar::onRemoveFromSceneTeam(Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:2433";
  *(_QWORD *)(v1 + 16) = Avatar::onRemoveFromSceneTeam;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v4)(v1 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL)
    && (v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32)),
        AvatarComp = Player::getAvatarComp(v5),
        Guid = Avatar::getGuid(this),
        PlayerAvatarComp::isMyAvatarInSceneTeam(AvatarComp, Guid)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "onRemoveFromSceneTeam",
      2437);
    v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v10,
           (const char (*)[44])"avatar is in current scene team, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->avatar_id_);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    Avatar::clearAllTeamBuffAndDynamicTalent(this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2446: range 00000000137A6304-00000000137A6492
void __cdecl Avatar::clearAllTeamBuffAndDynamicTalent(Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerAvatarComp *AvatarComp; // rdx
  TalentComp *TalentComp; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:2447";
  *(_QWORD *)(v1 + 16) = Avatar::clearAllTeamBuffAndDynamicTalent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v4)(v1 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AvatarComp = Player::getAvatarComp(v5);
    PlayerAvatarComp::delAllTeamBuffFromAvatar(AvatarComp, this);
  }
  TalentComp = Avatar::getTalentComp(this);
  TalentComp::clearAllDynamicTalents(TalentComp);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2456: range 00000000137A6494-00000000137A660E
void __cdecl Avatar::onAddToSceneTeam(Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  Player *v5; // rax
  PlayerAvatarComp *AvatarComp; // rdx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:2457";
  *(_QWORD *)(v1 + 16) = Avatar::onAddToSceneTeam;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v4)(v1 + 32, this);
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AvatarComp = Player::getAvatarComp(v5);
    PlayerAvatarComp::addAllTeamBuffToAvatar(AvatarComp, this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2467: range 00000000137A6610-00000000137A6847
float __cdecl Avatar::getPlayerTime(const Avatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rdx
  Player *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  uint64_t PlayerTimeMs; // rax
  float v9; // xmm0_4
  float result; // xmm0_4
  float v11; // [rsp+4h] [rbp-8Ch]
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-80h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 player_ptr:2468";
  *(_QWORD *)(v1 + 16) = Avatar::getPlayerTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "getPlayerTime",
      2471);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v12,
           (const char (*)[24])"getPlayer fail, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v11 = 0.0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BasicComp = Player::getBasicComp(v6);
    PlayerTimeMs = PlayerBasicComp::getPlayerTimeMs(BasicComp);
    if ( (PlayerTimeMs & 0x8000000000000000LL) != 0LL )
      v9 = (float)(int)(PlayerTimeMs & 1 | (PlayerTimeMs >> 1)) + (float)(int)(PlayerTimeMs & 1 | (PlayerTimeMs >> 1));
    else
      v9 = (float)(int)PlayerTimeMs;
    v11 = v9 * 0.001;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  result = v11;
  if ( v13 == (char *)v1 )
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

// Line 2479: range 00000000137A6848-00000000137A6B30
void __cdecl Avatar::refreshSatiation(Avatar *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx
  char v4; // cl
  float *p_b; // rsi
  GameserverService *v6; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  float SatiationRecoverSpeed; // xmm0_4
  float __a; // [rsp+1Ch] [rbp-24h] BYREF
  float __b; // [rsp+20h] [rbp-20h] BYREF
  float player_time; // [rsp+24h] [rbp-1Ch]
  float delta_time; // [rsp+28h] [rbp-18h]
  float delta_satiation_val; // [rsp+2Ch] [rbp-14h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-10h] BYREF

  *(float *)v1.m128i_i32 = Avatar::getPlayerTime(this);
  player_time = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_satiation_player_time_);
  }
  __b = player_time - this->last_refresh_satiation_player_time_;
  __a = 0.0;
  p_b = &__b;
  v2 = (float *)std::max<float>(&__a, &__b);
  v3 = v2;
  v4 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
  LOBYTE(p_b) = v4 != 0;
  if ( v4 != 0 && (char)(((unsigned __int8)v2 & 7) + 3) >= v4 )
    __asan_report_load4(v2);
  delta_time = *v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_satiation_player_time_, p_b, &this->last_refresh_satiation_player_time_);
  }
  this->last_refresh_satiation_player_time_ = player_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  if ( this->satiation_penalty_time_ < delta_time )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->satiation_penalty_time_);
    }
    delta_time = delta_time - this->satiation_penalty_time_;
    this->satiation_penalty_time_ = 0.0;
    v6 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    SatiationRecoverSpeed = ConstValueExcelConfigMgr::getSatiationRecoverSpeed(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    delta_satiation_val = SatiationRecoverSpeed * delta_time;
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->satiation_val_);
    }
    if ( this->satiation_val_ < delta_satiation_val )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->satiation_val_, v6, &this->satiation_val_);
      }
      this->satiation_val_ = 0.0;
    }
    else
    {
      this->satiation_val_ = this->satiation_val_ - delta_satiation_val;
    }
  }
  else
  {
    this->satiation_penalty_time_ = this->satiation_penalty_time_ - delta_time;
  }
};

// Line 2503: range 00000000137A6B32-00000000137A6C82
bool __cdecl Avatar::isSatiationFull(Avatar *const this)
{
  char v1; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // r12
  float satiation_val; // [rsp+4h] [rbp-2Ch]
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  Avatar::refreshSatiation(this);
  v1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  if ( this->satiation_penalty_time_ > 0.0 )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->satiation_val_);
  }
  satiation_val = this->satiation_val_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v1 = 1;
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  if ( satiation_val < ConstValueExcelConfigMgr::getSatiationValBound(&v2->design_config.txt_config_mgr.const_value_config_mgr) )
    v3 = 0;
  else
LABEL_7:
    v3 = 1;
  if ( v1 )
    std::shared_ptr<Config>::~shared_ptr(v6);
  return v3;
};

// Line 2510: range 00000000137A6C84-00000000137A7453
// local variable allocation has failed, the output may be wrong!
void __cdecl Avatar::addSatiation(
        Avatar *const this,
        float material_param_a,
        float material_param_b,
        uint32_t item_count)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __m128i v7; // xmm0
  float *v8; // rax
  float *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  float SatiationPenaltyTime; // xmm0_4
  char v15; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  char v17; // r15
  unsigned __int64 v18; // rax
  Player *v19; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  float satiation_val; // [rsp+8h] [rbp-F8h]
  float v29; // [rsp+8h] [rbp-F8h]
  float __a; // [rsp+20h] [rbp-E0h] BYREF
  float max_hp; // [rsp+24h] [rbp-DCh]
  unsigned __int64 __args_0; // [rsp+28h] [rbp-D8h] BYREF
  std::shared_ptr<FullSatiationEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v35; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 20 delta_satiation:2519 64 16 15 player_ptr:2527";
  *(_QWORD *)(v4 + 16) = Avatar::addSatiation;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  Avatar::refreshSatiation(this);
  *(float *)v7.m128i_i32 = Creature::getMaxHp(this);
  *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v7);
  __a = 1.0;
  v8 = (float *)std::max<float>(&__a, (const float *)(v4 + 48));
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  max_hp = *v9;
  if ( max_hp == 0.0 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "addSatiation",
      2516);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v36,
            (const char (*)[21])"max_hp is 0, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    *(float *)(v4 + 48) = (float)(int)item_count * (float)((float)(material_param_b / max_hp) + material_param_a);
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->satiation_val_);
    }
    this->satiation_val_ = *(float *)(v4 + 48) + this->satiation_val_;
    satiation_val = this->satiation_val_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    v12 = satiation_val > ConstValueExcelConfigMgr::getSatiationValBound(&v11->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( v12 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
      SatiationPenaltyTime = ConstValueExcelConfigMgr::getSatiationPenaltyTime(&v13->design_config.txt_config_mgr.const_value_config_mgr);
      if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->satiation_penalty_time_);
      }
      this->satiation_penalty_time_ = SatiationPenaltyTime + this->satiation_penalty_time_;
      std::shared_ptr<Config>::~shared_ptr(&v35);
    }
    v15 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->satiation_penalty_time_);
    }
    if ( this->satiation_penalty_time_ > 0.0 )
      goto LABEL_20;
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->satiation_val_);
    }
    v29 = this->satiation_val_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v15 = 1;
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    if ( v29 <= ConstValueExcelConfigMgr::getSatiationValBound(&v16->design_config.txt_config_mgr.const_value_config_mgr) )
      v17 = 0;
    else
LABEL_20:
      v17 = 1;
    if ( v15 )
      std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( v17 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v18 = *(_QWORD *)this->baseclass_0 + 152LL;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
      (*(void (__fastcall **)(unsigned __int64, Avatar *const))v18)(v4 + 64, this);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
      {
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        EventComp = Player::getEventComp(v19);
        __args_0 = Avatar::getGuid(this);
        common::tools::perf::make_shared<FullSatiationEvent,unsigned long>((unsigned __int64 *)&__r, &__args_0);
        std::shared_ptr<BaseEvent>::shared_ptr<FullSatiationEvent,void>((std::shared_ptr<BaseEvent> *const)&v35, &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v35);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v35);
        std::shared_ptr<FullSatiationEvent>::~shared_ptr(&__r);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
    }
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/avatar.cpp",
      "addSatiation",
      2533);
    v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v36, (const char (*)[17])"delta_satiation:");
    v22 = common::milog::MiLogStream::operator<<<float,(float *)0>(v21, (const float *)(v4 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])" satiation_val_:");
    v24 = common::milog::MiLogStream::operator<<<float,(float *)0>(v23, &this->satiation_val_);
    v25 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v24,
            (const char (*)[26])" satiation_penalty_time_:");
    v26 = common::milog::MiLogStream::operator<<<float,(float *)0>(v25, &this->satiation_penalty_time_);
    v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v27, this);
    common::milog::MiLogStream::~MiLogStream(&v36);
    Avatar::notifySatiation(this);
  }
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2539: range 00000000137A7454-00000000137A7772
void __cdecl Avatar::resetSatiation(Avatar *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v8; // rdx
  char v9; // al
  proto::AvatarSatiationData *v10; // rdx
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 11 notify:2548";
  *(_QWORD *)(v2 + 16) = Avatar::resetSatiation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->satiation_val_);
  }
  if ( this->satiation_val_ != 0.0 )
    goto LABEL_10;
  v1 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->satiation_penalty_time_);
  }
  if ( this->satiation_penalty_time_ != 0.0 )
  {
LABEL_10:
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->satiation_val_, v1, &this->satiation_val_);
    }
    this->satiation_val_ = 0.0;
    v5 = (((_BYTE)this - 124) & 7u) + 3;
    v6 = (*(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->satiation_penalty_time_, v5, v6);
    v7 = 0LL;
    this->satiation_penalty_time_ = 0.0;
    *(float *)v7.m128i_i32 = Avatar::getPlayerTime(this);
    v8 = (unsigned int)_mm_cvtsi128_si32(v7);
    v9 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_satiation_player_time_ >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v5) = v9 != 0;
      __asan_report_store4(&this->last_refresh_satiation_player_time_, v5, v8);
    }
    LODWORD(this->last_refresh_satiation_player_time_) = v8;
    Avatar::notifySatiation(this);
    proto::AvatarSatiationDataNotify::AvatarSatiationDataNotify((proto::AvatarSatiationDataNotify *const)(v2 + 48));
    v10 = proto::AvatarSatiationDataNotify::add_satiation_data_list((proto::AvatarSatiationDataNotify *const)(v2 + 48));
    Avatar::getProtoSatiationData(this, v10);
    Avatar::sendProto(this, (const google::protobuf::Message *)(v2 + 48));
    proto::AvatarSatiationDataNotify::~AvatarSatiationDataNotify((proto::AvatarSatiationDataNotify *const)(v2 + 48));
  }
  if ( v11 == (char *)v2 )
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
};

// Line 2556: range 00000000137A7774-00000000137A7835
void __cdecl Avatar::notifySatiation(Avatar *const this)
{
  std::allocator<data::PropType> __a; // [rsp+17h] [rbp-49h] BYREF
  std::initializer_list<data::PropType> __l; // [rsp+18h] [rbp-48h] BYREF

  __l._M_array = (std::initializer_list<data::PropType>::iterator)0x3EC000003EBLL;
  std::allocator<data::PropType>::allocator(&__a);
  std::vector<data::PropType>::vector(
    (std::vector<data::PropType> *const)&__l._M_len,
    (std::initializer_list<data::PropType>)__PAIR128__(2LL, &__l),
    &__a);
  Avatar::notifyAvatarProp(this, (const std::vector<data::PropType> *)&__l._M_len);
  std::vector<data::PropType>::~vector((std::vector<data::PropType> *const)&__l._M_len);
  std::allocator<data::PropType>::~allocator(&__a);
};

// Line 2562: range 00000000137A7836-00000000137A7A80
void __cdecl Avatar::getProtoSatiationData(const Avatar *const this, proto::AvatarSatiationData *proto_satiation_data)
{
  __m128i v2; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  __m128i v4; // xmm0
  common::milog::MiLogStream *v5; // rdx
  float v6; // xmm1_4
  float recover_speed; // [rsp+18h] [rbp-48h]
  float player_time; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  *(float *)v2.m128i_i32 = ConstValueExcelConfigMgr::getSatiationRecoverSpeed(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  recover_speed = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  v4 = 0LL;
  if ( recover_speed == 0.0 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar.cpp",
      "getProtoSatiationData",
      2566);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"recover_speed is 0, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    *(float *)v4.m128i_i32 = Avatar::getPlayerTime(this);
    player_time = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->guid_);
    proto::AvatarSatiationData::set_avatar_guid(proto_satiation_data, this->guid_);
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->satiation_penalty_time_);
    }
    v6 = this->satiation_penalty_time_ + player_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->satiation_val_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->satiation_val_);
    }
    proto::AvatarSatiationData::set_finish_time(
      proto_satiation_data,
      (float)(this->satiation_val_ / recover_speed) + v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_penalty_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->satiation_penalty_time_);
    }
    proto::AvatarSatiationData::set_penalty_finish_time(
      proto_satiation_data,
      this->satiation_penalty_time_ + player_time);
  }
};

// Line 2578: range 00000000137A7A82-00000000137A8686
__int64 __fastcall Avatar::getStrengthenPoint(const Avatar *const this, data::StrengthenPointType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r14
  int v5; // eax
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // r13d
  const StrengthenExcelConfigMgr *p_level; // rdi
  uint32_t v10; // edx
  signed int v11; // eax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  StrengthenExcelConfigMgr *v15; // r13
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // ecx
  EquipComp *EquipComp; // rax
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v19; // rax
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  StrengthenExcelConfigMgr *v22; // r13
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t Level; // ecx
  unsigned int v25; // eax
  SkillComp *SkillComp; // rax
  std::pair<unsigned int const,unsigned int> *v27; // rax
  std::pair<unsigned int const,unsigned int> *v28; // rdx
  const StrengthenExcelConfigMgr *p_strengthen_config_mgr; // rdi
  unsigned int StrengthenPoint; // eax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  __int64 result; // rax
  unsigned int total_points; // [rsp+10h] [rbp-170h]
  unsigned int total_points_0; // [rsp+14h] [rbp-16Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+20h] [rbp-160h] BYREF
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *depot_skill_level_map; // [rsp+28h] [rbp-158h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+38h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+40h] [rbp-140h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_type; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+58h] [rbp-128h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+60h] [rbp-120h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+68h] [rbp-118h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+70h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+78h] [rbp-108h] BYREF
  std::shared_ptr<Config> v51; // [rsp+80h] [rbp-100h] BYREF
  std::pair<const data::EquipType,std::shared_ptr<Equip> > __in; // [rsp+90h] [rbp-F0h] BYREF
  common::milog::MiLogStream v53; // [rsp+B0h] [rbp-D0h] BYREF
  char v54[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 type:2577 64 8 9 iter:2631 96 16 18 reliquary_ptr:2612";
  *(_QWORD *)(v2 + 16) = Avatar::getStrengthenPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = type;
  v5 = *(_DWORD *)(v2 + 48);
  if ( v5 == 4 )
  {
    total_points_0 = 0;
    SkillComp = Avatar::getSkillComp(this);
    depot_skill_level_map = SkillComp::getDepotSkillLevelMap(SkillComp);
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                                 depot_skill_level_map,
                                                                                                 &this->skill_depot_id_);
    __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(depot_skill_level_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_end) )
    {
      __for_range_0 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 64))->second;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(__for_range_0)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v27 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        v28 = v27;
        if ( ((unsigned __int8)v27 & 7) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v27 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v27->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v27, 8LL);
        }
        __for_end = *v28;
        _ = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
        skill_level = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v51);
        p_strengthen_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.strengthen_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3)
                                                                        + 0x7FFF8000) )
        {
          p_strengthen_config_mgr = (const StrengthenExcelConfigMgr *)skill_level;
          __asan_report_load4(skill_level);
        }
        StrengthenPoint = StrengthenExcelConfigMgr::getStrengthenPoint(
                            p_strengthen_config_mgr,
                            STRENGTHEN_POINT_TALENT,
                            0,
                            *skill_level);
        total_points_0 = SAFE_ADD<unsigned int,unsigned int>(total_points_0, StrengthenPoint);
        std::shared_ptr<Config>::~shared_ptr(&v51);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    v8 = total_points_0;
  }
  else
  {
    if ( v5 > 4 )
    {
LABEL_48:
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "getStrengthenPoint",
        2642);
      v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v53, (const char (*)[14])"unknonw type:");
      v32 = common::milog::MiLogStream::operator<<<data::StrengthenPointType,(data::StrengthenPointType*)0>(
              v31,
              (const data::StrengthenPointType *)(v2 + 48));
      v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v33, this);
      common::milog::MiLogStream::~MiLogStream(&v53);
      v8 = 0;
      goto LABEL_49;
    }
    switch ( v5 )
    {
      case 3:
        total_points = 0;
        EquipComp = Avatar::getEquipComp(this);
        __for_range = EquipComp::getEquipMap(EquipComp);
        __for_end_0._M_node = std::map<data::EquipType,std::shared_ptr<Equip>>::begin(__for_range)._M_node;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_end_0,
                  (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_end) )
        {
          v19 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_end_0);
          std::pair<data::EquipType const,std::shared_ptr<Equip>>::pair(&__in, v19);
          equip_type = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(&__in);
          equip_ptr = std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(&__in);
          std::dynamic_pointer_cast<Reliquary,Equip>((const std::shared_ptr<Equip> *)(v2 + 96));
          if ( !std::operator==<Reliquary>(0LL, (const std::shared_ptr<Reliquary> *)(v2 + 96)) )
          {
            v20 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            reliquary_config_ptr = Reliquary::getReliquaryConfig(v20);
            if ( reliquary_config_ptr )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v51);
              v22 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.strengthen_config_mgr;
              v23 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              Level = Reliquary::getLevel(v23);
              if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reliquary_config_ptr->rank_level);
              }
              v25 = StrengthenExcelConfigMgr::getStrengthenPoint(
                      v22,
                      STRENGTHEN_POINT_RELIQUARY,
                      reliquary_config_ptr->rank_level,
                      Level);
              total_points = SAFE_ADD<unsigned int,unsigned int>(total_points, v25);
              std::shared_ptr<Config>::~shared_ptr(&v51);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/avatar/avatar.cpp",
                "getStrengthenPoint",
                2620);
              v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v53,
                      (const char (*)[33])"getReliquaryConfig fail, avatar:");
              common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v21, this);
              common::milog::MiLogStream::~MiLogStream(&v53);
            }
          }
          std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v2 + 96));
          std::pair<data::EquipType const,std::shared_ptr<Equip>>::~pair(&__in);
          std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_end_0);
        }
        v8 = total_points;
        break;
      case 1:
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v6 = *(_QWORD *)this->baseclass_0 + 312LL;
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
        avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(const Avatar *const))v6)(this);
        if ( avatar_config_ptr )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v51);
          p_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.strengthen_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            p_level = (const StrengthenExcelConfigMgr *)&this->level_;
            __asan_report_load4(&this->level_);
          }
          v10 = this->level_;
          if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) <= 3 )
          {
            p_level = (const StrengthenExcelConfigMgr *)&avatar_config_ptr->quality_type;
            __asan_report_load4(&avatar_config_ptr->quality_type);
          }
          v8 = StrengthenExcelConfigMgr::getStrengthenPoint(
                 p_level,
                 STRENGTHEN_POINT_AVATAR,
                 avatar_config_ptr->quality_type,
                 v10);
          std::shared_ptr<Config>::~shared_ptr(&v51);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "getStrengthenPoint",
            2586);
          v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 &v53,
                 (const char (*)[24])"getConfig fail, avatar:");
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v8 = 0;
        }
        break;
      case 2:
        v11 = (unsigned int)Avatar::getEquipComp(this);
        EquipComp::findEquip<Weapon>((EquipComp *const)(v2 + 96), (data::EquipType)v11);
        if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "getStrengthenPoint",
            2596);
          v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v53,
                  (const char (*)[28])"weapon_ptr is null, avatar:");
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, this);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v8 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          weapon_config_ptr = Weapon::getWeaponExcelConfig(v13);
          if ( weapon_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v51);
            v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.strengthen_config_mgr;
            v16 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v17 = Weapon::getLevel(v16);
            if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&weapon_config_ptr->rank_level);
            }
            v8 = StrengthenExcelConfigMgr::getStrengthenPoint(
                   v15,
                   STRENGTHEN_POINT_WEAPON,
                   weapon_config_ptr->rank_level,
                   v17);
            std::shared_ptr<Config>::~shared_ptr(&v51);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/avatar.cpp",
              "getStrengthenPoint",
              2602);
            v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v53,
                    (const char (*)[35])"getWeaponExcelConfig fail, avatar:");
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, this);
            common::milog::MiLogStream::~MiLogStream(&v53);
            v8 = 0;
          }
        }
        std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v2 + 96));
        break;
      default:
        goto LABEL_48;
    }
  }
LABEL_49:
  result = v8;
  if ( v54 == (char *)v2 )
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

// Line 2650: range 00000000137A8688-00000000137A88AC
int32_t __cdecl Avatar::notifySceneTeam(Avatar *const this, const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  Player *v7; // rax
  SceneTeam *v8; // rdx
  int32_t result; // eax
  char v10[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 player_ptr:2651 64 16 19 scene_team_ptr:2656";
  *(_QWORD *)(v2 + 16) = Avatar::notifySceneTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v5)(v2 + 32, this);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
  {
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Player::getAvatarComp(v7);
    PlayerAvatarComp::findSceneTeam((PlayerAvatarComp *const)(v2 + 64));
    if ( std::operator==<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v2 + 64), 0LL) )
    {
      v6 = -1;
    }
    else
    {
      v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SceneTeam::sendProto(v8, proto);
      v6 = 0;
    }
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = v6;
  if ( v10 == (char *)v2 )
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

// Line 2667: range 00000000137A88AE-00000000137A8D17
void __cdecl Avatar::internalCheckRefreshTeamResonance(Avatar *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  SceneTeam *v9; // r15
  uint64_t guid; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Uid; // eax
  SceneTeam *v13; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 15 player_ptr:2668 64 16 14 scene_ptr:2674 96 16 19 scene_team_ptr:2680";
  *(_QWORD *)(v1 + 16) = Avatar::internalCheckRefreshTeamResonance;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, Avatar *const))v4)(v1 + 32, this);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "internalCheckRefreshTeamResonance",
      2671);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v14,
           (const char (*)[24])"player is null, avatar:");
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    Entity::getScene((const Entity *const)(v1 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/avatar.cpp",
        "internalCheckRefreshTeamResonance",
        2677);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v14, (const char (*)[42])off_25057C80);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7);
      v8 = *(_QWORD *)v7 + 280LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(*(_QWORD *)v7 + 280LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v8)(v1 + 96, v7);
      if ( !std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v1 + 96)) )
      {
        v9 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->guid_);
        guid = this->guid_;
        v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Uid = Player::getUid(v11);
        if ( SceneTeam::isAvatarInTeam(v9, Uid, guid) )
        {
          v13 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          SceneTeam::refreshCurTeamResonances(v13);
        }
      }
      std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v1 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  if ( v15 == (char *)v1 )
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

// Line 2694: range 00000000137A8D18-00000000137A9341
int32_t __cdecl Avatar::toShowAvatarInfo(const Avatar *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rdx
  uint32_t CostumeId; // edx
  uint32_t SkillDepotId; // edx
  unsigned __int64 v10; // rax
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  float MaxStamina; // xmm0_4
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  proto::AvatarExcelInfo *v19; // rdx
  int32_t result; // eax
  google::protobuf::Map<unsigned int,proto::PropValue> *prop_map; // [rsp+10h] [rbp-E0h]
  FightPropValueMap *proto_fight_map; // [rsp+18h] [rbp-D8h]
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *v23; // [rsp+28h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *avatar_comp_ptr; // [rsp+38h] [rbp-B8h]
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::Iterator __for_end; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-90h] BYREF
  char v29[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 player_ptr:2700";
  *(_QWORD *)(v2 + 16) = Avatar::toShowAvatarInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !Avatar::isFormal(this) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "toShowAvatarInfo",
      2697);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v28,
      (const char (*)[39])"toShowAvatarInfo must be formal avatar");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v6)(v2 + 32, this);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "toShowAvatarInfo",
        2703);
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v28,
             (const char (*)[24])"player is null, avatar:");
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->avatar_id_);
      }
      proto::ShowAvatarInfo::set_avatar_id(show_avatar_info, this->avatar_id_);
      CostumeId = Avatar::getCostumeId(this);
      proto::ShowAvatarInfo::set_costume_id(show_avatar_info, CostumeId);
      SkillDepotId = Avatar::getSkillDepotId(this);
      proto::ShowAvatarInfo::set_skill_depot_id(show_avatar_info, SkillDepotId);
      prop_map = proto::ShowAvatarInfo::mutable_prop_map(show_avatar_info);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v10 = *(_QWORD *)this->baseclass_0 + 496LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 496LL);
      (*(void (__fastcall **)(const Avatar *const, google::protobuf::Map<unsigned int,proto::PropValue> *))v10)(
        this,
        prop_map);
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BasicComp = Player::getBasicComp(v11);
      MaxStamina = PlayerBasicComp::getMaxStamina(BasicComp);
      appendHundredIntPropValue(prop_map, 0x271Au, MaxStamina);
      proto_fight_map = proto::ShowAvatarInfo::mutable_fight_prop_map(show_avatar_info);
      FightPropComp::getFightPropValueMap<google::protobuf::Map<unsigned int,float>>(
        &this->fight_prop_comp_,
        proto_fight_map,
        0);
      EcsBase<Avatar,AvatarCompBase,7u>::begin((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_begin);
      EcsBase<Avatar,AvatarCompBase,7u>::end((const EcsBase<Avatar,AvatarCompBase,7> *const)&__for_end);
      while ( EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(&__for_begin, &__for_end) )
      {
        v23 = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(&__for_begin);
        comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v23);
        avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<AvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<AvatarCompBase>>(v23);
        v14 = (unsigned __int64)std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_comp_ptr);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14);
        v15 = *(_QWORD *)v14 + 80LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(*(_QWORD *)v14 + 80LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::ShowAvatarInfo *))v15)(v14, show_avatar_info) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/avatar.cpp",
            "toShowAvatarInfo",
            2718);
          v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v28,
                  (const char (*)[35])"toShowAvatarInfo fails comp_type: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, comp_type);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v17,
                  (const char (*)[16])" formal_avatar:");
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v18, this);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v5 = -1;
          goto LABEL_28;
        }
        EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(&__for_begin);
      }
      v19 = proto::ShowAvatarInfo::mutable_excel_info(show_avatar_info);
      Avatar::fillAvatarExcelInfo(this, v19);
      v5 = 0;
    }
LABEL_28:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  result = v5;
  if ( v29 == (char *)v2 )
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

// Line 2727: range 00000000137A9342-00000000137A9363
uint32_t __cdecl Avatar::getCostumeId(const Avatar *const this)
{
  FashionComp *FashionComp; // rax

  FashionComp = Avatar::getFashionComp(this);
  return FashionComp::getCostumeId(FashionComp);
};

// Line 2732: range 00000000137A9364-00000000137A9390
int32_t __cdecl Avatar::wearCostume(Avatar *const this, uint32_t costume_id)
{
  FashionComp *FashionComp; // rax

  FashionComp = Avatar::getFashionComp(this);
  return FashionComp::wearCostume(FashionComp, costume_id);
};

// Line 2737: range 00000000137A9392-00000000137A93A0
int32_t __cdecl Avatar::initDefaultWearCostume(Avatar *const this)
{
  return 0;
};

// Line 2742: range 00000000137A94C4-00000000137A9813
void __cdecl Avatar::startUnlockChairTimer(Avatar *const this)
{
  std::weak_ptr<Avatar> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerUnixTimer *v4; // rax
  std::weak_ptr<Player> v5; // [rsp+10h] [rbp-B0h] BYREF
  std::weak_ptr<Avatar> v6; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<Avatar> __r; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-80h] BYREF
  char v9[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (std::weak_ptr<Avatar> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<Avatar> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 15 avatar_wtr:2746";
  v1[1]._M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)Avatar::startUnlockChairTimer;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Avatar::stopUnlockChairTimer(this);
  if ( std::operator==<PlayerUnixTimer>(&this->unlock_chair_timer_ptr_, 0LL) )
  {
    toThisPtr<Avatar>((Avatar *)&__r);
    std::weak_ptr<Avatar>::weak_ptr<Avatar,void>(v1 + 2, &__r);
    std::shared_ptr<Avatar>::~shared_ptr(&__r);
    std::weak_ptr<Avatar>::weak_ptr(&v6, v1 + 2);
    std::weak_ptr<Player>::lock(&v5);
    common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}>(
      (std::shared_ptr<Player> *)&__r,
      (Avatar::startUnlockChairTimer::<lambda(uint64_t)> *)&v5,
      (std::shared_ptr<Player> *)&v6,
      (Avatar::startUnlockChairTimer::<lambda(uint64_t)> *)&v5);
    std::shared_ptr<PlayerUnixTimer>::operator=(
      &this->unlock_chair_timer_ptr_,
      (std::shared_ptr<PlayerUnixTimer> *)&__r);
    std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&__r);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v5);
    Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::~startUnlockChairTimer((Avatar::startUnlockChairTimer::<lambda(uint64_t)> *const)&v6);
    std::weak_ptr<Avatar>::~weak_ptr(v1 + 2);
  }
  if ( std::operator==<PlayerUnixTimer>(&this->unlock_chair_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "startUnlockChairTimer",
      2758);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v8,
      (const char (*)[36])"unlock_chair_timer_ptr_ create fail");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v4 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unlock_chair_timer_ptr_);
    if ( PlayerUnixTimer::startS(v4, 3u, 0, "./src/player/avatar/avatar.cpp", "startUnlockChairTimer", 2761) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "startUnlockChairTimer",
        2763);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v8,
        (const char (*)[37])"unlock_chair_timer_ptr_ start failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2747: range 00000000137A93A2-00000000137A94A7
void __cdecl Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::operator()(
        const Avatar::startUnlockChairTimer::<lambda(uint64_t)> *const __closure,
        uint64_t time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Avatar *v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:2749";
  *(_QWORD *)(v2 + 16) = Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v2 + 32));
  if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Avatar::setSitOnChairId(v5, 0LL);
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2747: range 0000000013827B02-0000000013827B27
void __cdecl Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::startUnlockChairTimer(
        Avatar::startUnlockChairTimer::<lambda(uint64_t)> *const this,
        Avatar::startUnlockChairTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->__avatar_wtr, &a2->__avatar_wtr);
};

// Line 2747: range 00000000138285D4-00000000138285F9
void __cdecl Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::startUnlockChairTimer(
        Avatar::startUnlockChairTimer::<lambda(uint64_t)> *const this,
        const Avatar::startUnlockChairTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->__avatar_wtr, &a2->__avatar_wtr);
};

// Line 2747: range 00000000137A94A8-00000000137A94C2
void __cdecl Avatar::startUnlockChairTimer(void)::{lambda(unsigned long)#1}::~startUnlockChairTimer(
        Avatar::startUnlockChairTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Avatar>::~weak_ptr(&this->__avatar_wtr);
};

// Line 2769: range 00000000137A9814-00000000137A9885
void __cdecl Avatar::stopUnlockChairTimer(Avatar *const this)
{
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator!=<PlayerUnixTimer>(&this->unlock_chair_timer_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unlock_chair_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unlock_chair_timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
  }
};

// Line 2777: range 00000000137A9886-00000000137A9B1C
bool __cdecl Avatar::isBanRevive(const Avatar *const this)
{
  bool isAvatarBanHeal; // r14
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  Player *v6; // rax
  std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  RoguelikeDungeonActivity *v9; // rax
  RoguelikeMiscMgr *RoguelikeMiscMgr; // rcx
  int v11; // r15d
  bool result; // al
  char v13[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 player_ptr:2778 64 16 17 activity_ptr:2781";
  *(_QWORD *)(v2 + 16) = Avatar::isBanRevive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, const Avatar *const))v5)(v2 + 32, this);
  if ( !std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    goto LABEL_19;
  v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Player::getActivityComp(v6);
  PlayerActivityComp::findOpenningActivity<RoguelikeDungeonActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator!=<RoguelikeDungeonActivity>((const std::shared_ptr<RoguelikeDungeonActivity> *)(v2 + 64), 0LL)
    && (v7 = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
        BaseActivity::isOpening(v7, 0)) )
  {
    v9 = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    RoguelikeMiscMgr = RoguelikeDungeonActivity::getRoguelikeMiscMgr(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->guid_);
    isAvatarBanHeal = RoguelikeMiscMgr::isAvatarBanHeal(RoguelikeMiscMgr, this->guid_);
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)(v2 + 64));
  if ( v11 == 1 )
LABEL_19:
    isAvatarBanHeal = 0;
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  result = isAvatarBanHeal;
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

// Line 2791: range 00000000137A9B1E-00000000137AA713
float __cdecl Avatar::calcCombatForceComparisonFactor(const Avatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  SkillComp *SkillComp; // rax
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::pointer v12; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v14; // rdx
  unsigned int *p_second; // rax
  uint32_t TalentComp; // eax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t ExtraLevel; // eax
  float v19; // xmm0_4
  float v20; // xmm0_4
  unsigned int *v21; // rax
  uint32_t *v22; // rdx
  TalentComp *v23; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v24; // rdx
  float *v25; // rax
  __m128i v26; // xmm0
  float result; // xmm0_4
  std::less<unsigned int> __comp; // [rsp+2Eh] [rbp-212h] BYREF
  std::allocator<std::pair<unsigned int const,float> > __a; // [rsp+2Fh] [rbp-211h] BYREF
  uint32_t total_level; // [rsp+30h] [rbp-210h]
  uint32_t total_count; // [rsp+34h] [rbp-20Ch]
  float talent_factor; // [rsp+38h] [rbp-208h]
  float avg_level; // [rsp+3Ch] [rbp-204h]
  float skill_factor; // [rsp+40h] [rbp-200h]
  uint32_t talent_id; // [rsp+44h] [rbp-1FCh]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-1F8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-1F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-1E8h] BYREF
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+60h] [rbp-1E0h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *depot_skill_level_map; // [rsp+68h] [rbp-1D8h]
  const std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+70h] [rbp-1D0h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *config_skill_level_map; // [rsp+78h] [rbp-1C8h]
  std::vector<unsigned int> *__for_range; // [rsp+80h] [rbp-1C0h]
  const std::vector<unsigned int> *talent_vec; // [rsp+88h] [rbp-1B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+90h] [rbp-1B0h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+98h] [rbp-1A8h]
  std::shared_ptr<Config> v47; // [rsp+A0h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v48; // [rsp+B0h] [rbp-190h] BYREF
  std::initializer_list<std::pair<unsigned int const,float> > __l; // [rsp+D0h] [rbp-170h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-160h]
  __int64 v51; // [rsp+E8h] [rbp-158h]
  __int64 v52; // [rsp+F0h] [rbp-150h]
  __int64 v53; // [rsp+F8h] [rbp-148h]
  __int64 v54; // [rsp+100h] [rbp-140h]
  char v55[304]; // [rsp+110h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 4 15 talent_key:2857 64 8 9 iter:2814 96 8 16 config_iter:2834 128 8 16 talent_iter:2868 16"
                        "0 16 15 talent_ptr:2849 192 24 14 skill_vec:2825";
  *(_QWORD *)(v1 + 16) = Avatar::calcCombatForceComparisonFactor;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -218959360;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  if ( !(_BYTE)`guard variable for'Avatar::calcCombatForceComparisonFactor(void)::talent_factor_map
    && __cxa_guard_acquire(&`guard variable for'Avatar::calcCombatForceComparisonFactor(void)::talent_factor_map) )
  {
    std::allocator<std::pair<unsigned int const,float>>::allocator(&__a);
    __l._M_array = (std::initializer_list<std::pair<unsigned int const,float> >::iterator)0x3F80000000000000LL;
    __l._M_len = 0x3F93333300000001LL;
    v50 = 0x3FACCCCD00000002LL;
    v51 = 0x3FACCCCD00000003LL;
    v52 = 0x3FB9999A00000004LL;
    v53 = 0x3FB9999A00000005LL;
    v54 = 0x3FE6666600000006LL;
    std::map<unsigned int,float>::map(
      (std::map<unsigned int,float> *const)&Avatar::calcCombatForceComparisonFactor(void)const::talent_factor_map,
      (std::initializer_list<std::pair<unsigned int const,float> >)__PAIR128__(7LL, &__l),
      &__comp,
      &__a);
    __cxa_guard_release(&`guard variable for'Avatar::calcCombatForceComparisonFactor(void)::talent_factor_map);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<unsigned int,float>::~map,
      (void *)&Avatar::calcCombatForceComparisonFactor(void)const::talent_factor_map,
      &_dso_handle);
    std::allocator<std::pair<unsigned int const,float>>::~allocator(&__a);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 160));
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160))->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_depot_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_depot_id_);
  }
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    this->skill_depot_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
  if ( avatar_skill_depot_config_ptr )
  {
    SkillComp = Avatar::getSkillComp(this);
    depot_skill_level_map = SkillComp::getDepotSkillLevelMap(SkillComp);
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v1 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                                 depot_skill_level_map,
                                                                                                 &this->skill_depot_id_);
    __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(depot_skill_level_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v1 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/avatar.cpp",
        "calcCombatForceComparisonFactor",
        2817);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v48,
             (const char (*)[51])"depot_skill_level_map find failed, skill_depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->skill_depot_id_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v6 = 1065353216;
    }
    else
    {
      skill_level_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v1 + 64))->second;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 160));
      config_skill_level_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160))->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_skill_level_map;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
      total_level = 0;
      total_count = 0;
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)(v1 + 192),
        &avatar_skill_depot_config_ptr->skills);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 192),
        &avatar_skill_depot_config_ptr->energy_skill);
      __for_range = (std::vector<unsigned int> *)(v1 + 192);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 192))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v1 + 48) = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v47);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47);
        skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                             &v11->design_config.txt_config_mgr.avatar_skill_config_mgr,
                             *(_DWORD *)(v1 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v47);
        if ( skill_config_ptr )
        {
          *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v1 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(config_skill_level_map, &skill_config_ptr->proud_skill_group_id);
          __for_end_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(config_skill_level_map)._M_cur;
          if ( !std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v1 + 96),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)&__for_end_0) )
          {
            v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v1 + 96));
            if ( std::map<unsigned int,unsigned int>::size(&v12->second) > 1 )
            {
              *(std::map<unsigned int,unsigned int>::const_iterator *)(v1 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                                     skill_level_map,
                                                                                     (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
              __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end(skill_level_map)._M_node;
              if ( !std::operator==(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 128),
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
              {
                v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 128));
                p_second = &v14->second;
                if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(p_second);
                }
                total_level += v14->second;
                ++total_count;
                TalentComp = (unsigned int)Avatar::getTalentComp(this);
                TalentComp::findSkillTalent((const TalentComp *const)(v1 + 160), TalentComp);
                if ( std::operator!=<BaseTalent>(0LL, (const std::shared_ptr<BaseTalent> *)(v1 + 160)) )
                {
                  v17 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
                  ExtraLevel = BaseTalent::getExtraLevel(v17);
                  total_level += ExtraLevel;
                }
                std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v1 + 160));
              }
            }
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( total_count )
        v19 = (float)(int)total_level / (float)(int)total_count;
      else
        v19 = 1.0;
      avg_level = v19;
      v20 = (float)(v19 - 4.0) * 0.06 + 1.0;
      skill_factor = v20;
      *(_DWORD *)(v1 + 48) = 0;
      talent_vec = &avatar_skill_depot_config_ptr->talents;
      __for_range_0 = &avatar_skill_depot_config_ptr->talents;
      *(std::vector<unsigned int>::const_iterator *)(v1 + 128) = std::vector<unsigned int>::begin(&avatar_skill_depot_config_ptr->talents);
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v1 + 128),
                &__for_end_0) )
      {
        v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 128));
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        talent_id = *v22;
        v23 = Avatar::getTalentComp(this);
        if ( TalentComp::isTalentUnlock(v23, talent_id) )
          ++*(_DWORD *)(v1 + 48);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 128));
      }
      talent_factor = 1.0;
      *(std::map<unsigned int,float>::const_iterator *)(v1 + 128) = std::map<unsigned int,float>::find(
                                                                      &Avatar::calcCombatForceComparisonFactor(void)const::talent_factor_map,
                                                                      (const std::map<unsigned int,float>::key_type *)(v1 + 48));
      __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,float>::end(&Avatar::calcCombatForceComparisonFactor(void)const::talent_factor_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v1 + 128),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)&__for_end_0) )
      {
        v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v1 + 128));
        v25 = &v24->second;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        talent_factor = v24->second;
      }
      v26 = _mm_cvtsi32_si128(LODWORD(skill_factor));
      *(float *)v26.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v26.m128i_i32, talent_factor);
      v6 = _mm_cvtsi128_si32(v26);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 192));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/avatar.cpp",
      "calcCombatForceComparisonFactor",
      2809);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v48,
           (const char (*)[56])"findAvatarSkillDepotExcelConfig failed, skill_depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->skill_depot_id_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v6 = 1065353216;
  }
  result = *(float *)&v6;
  if ( v55 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2876: range 00000000137AA714-00000000137AA75F
EquipComp *__cdecl Avatar::getEquipComp(const Avatar *const this)
{
  std::__shared_ptr_access<EquipComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<EquipComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<EquipComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<EquipComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<EquipComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<EquipComp>::~shared_ptr(v3);
  return v1;
};

// Line 2877: range 00000000137AA760-00000000137AA7AB
SkillComp *__cdecl Avatar::getSkillComp(const Avatar *const this)
{
  std::__shared_ptr_access<SkillComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<SkillComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<SkillComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<SkillComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SkillComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<SkillComp>::~shared_ptr(v3);
  return v1;
};

// Line 2878: range 00000000137AA7AC-00000000137AA7F7
BuffComp *__cdecl Avatar::getBuffComp(const Avatar *const this)
{
  std::__shared_ptr_access<BuffComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<BuffComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<BuffComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<BuffComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BuffComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<BuffComp>::~shared_ptr(v3);
  return v1;
};

// Line 2879: range 00000000137AA7F8-00000000137AA843
TalentComp *__cdecl Avatar::getTalentComp(const Avatar *const this)
{
  std::__shared_ptr_access<TalentComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<TalentComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<TalentComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<TalentComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<TalentComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<TalentComp>::~shared_ptr(v3);
  return v1;
};

// Line 2880: range 00000000137AA844-00000000137AA88F
FashionComp *__cdecl Avatar::getFashionComp(const Avatar *const this)
{
  std::__shared_ptr_access<FashionComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<FashionComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<FashionComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<FashionComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FashionComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<FashionComp>::~shared_ptr(v3);
  return v1;
};

// Line 2881: range 00000000137AA890-00000000137AA8DB
ExtraPropComp *__cdecl Avatar::getExtraPropComp(const Avatar *const this)
{
  std::__shared_ptr_access<ExtraPropComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<ExtraPropComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Avatar,AvatarCompBase,7u>::findComp<ExtraPropComp>((const EcsBase<Avatar,AvatarCompBase,7> *const)v3);
  v1 = std::__shared_ptr_access<ExtraPropComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ExtraPropComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<ExtraPropComp>::~shared_ptr(v3);
  return v1;
};
