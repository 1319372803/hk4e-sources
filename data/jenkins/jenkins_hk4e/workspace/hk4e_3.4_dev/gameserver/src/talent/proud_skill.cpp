// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/proud_skill.cpp

// Line 19: range 000000001315C190-000000001315C1B8
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ProudSkill *proud_skill)
{
  operator<<(stream, proud_skill);
  return stream;
};

// Line 26: range 000000001315C1BA-000000001315C3C0
const data::BaseTalentConfig *__cdecl ProudSkill::findBaseTalentConfig(const ProudSkill *const this)
{
  uint32_t v1; // ecx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  uint32_t level; // [rsp+1Ch] [rbp-54h]
  AvatarTalentExcelConfigMgr *talent_config_mgr; // [rsp+20h] [rbp-50h]
  const data::ProudSkillExcelConfig *base_talent_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v1 = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level = v1 + this->extra_level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  base_talent_config_ptr = AvatarTalentExcelConfigMgr::findProudSkillConfig(talent_config_mgr, this->group_id_, level);
  if ( base_talent_config_ptr )
    return base_talent_config_ptr;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/talent/proud_skill.cpp",
    "findBaseTalentConfig",
    33);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v10,
         (const char (*)[34])"findProudSkillExcelConfig fails. ");
  v3 = operator<<(v2, this);
  v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0LL;
};

// Line 42: range 000000001315C3C2-000000001315C787
int32_t __cdecl ProudSkill::initMixins(ProudSkill *const this)
{
  const data::AvatarTalentExcelConfigMgrBase *v1; // rdx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  __int64 v6; // rsi
  uint32_t proud_skill_group_id; // ecx
  char v8; // dl
  bool v9; // dl
  uint32_t level; // ecx
  char v11; // al
  uint32_t v12; // ecx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  AvatarTalentExcelConfigMgr *talent_config_mgr; // [rsp+18h] [rbp-58h]
  const data::ProudSkillExcelConfig *config_ptr; // [rsp+20h] [rbp-50h]
  const data::ProudSkillExcelConfig *cur_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  v1 = talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(v1, this->id_);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/proud_skill.cpp",
      "initMixins",
      47);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v19,
           (const char (*)[34])"findProudSkillExcelConfig fails. ");
    v3 = operator<<(v2, this);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_6:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  v6 = (((_BYTE)config_ptr + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->proud_skill_group_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proud_skill_group_id = config_ptr->proud_skill_group_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  v9 = v8 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v8;
  if ( v9 )
    __asan_report_store4(&this->group_id_, v6, v9);
  this->group_id_ = proud_skill_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level = config_ptr->level;
  v11 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v6) = v11 != 0;
    __asan_report_store4(&this->level_, v6, (_BYTE)this + 64);
  }
  this->level_ = level;
  v12 = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cur_config_ptr = AvatarTalentExcelConfigMgr::findProudSkillConfig(
                     talent_config_mgr,
                     this->group_id_,
                     v12 + this->extra_level_);
  if ( !cur_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/proud_skill.cpp",
      "initMixins",
      57);
    v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v19,
            (const char (*)[34])"findProudSkillExcelConfig fails. ");
    v14 = operator<<(v13, this);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_6;
  }
  return BaseTalent::addMixin(this, &cur_config_ptr->open_config);
};

// Line 66: range 000000001315C788-000000001315C99A
BaseTalentPtr __cdecl ProudSkill::clone(const ProudSkill *const this, Avatar *avatar)
{
  Avatar *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  BaseTalent *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  BaseTalentPtr result; // rax
  Avatar *avatara; // [rsp+8h] [rbp-88h]
  std::shared_ptr<ProudSkill> v11; // [rsp+20h] [rbp-70h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  avatara = v2;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 talent_ptr:67";
  *(_QWORD *)(v3 + 16) = ProudSkill::clone;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<ProudSkill,Avatar &,unsigned int const&>(
    (Avatar *)&v11,
    (const unsigned int *)avatara,
    (Avatar *)&avatar->baseclass_0[56],
    (const unsigned int *)avatara);
  std::static_pointer_cast<BaseTalent,ProudSkill>((const std::shared_ptr<ProudSkill> *)(v3 + 32));
  std::shared_ptr<ProudSkill>::~shared_ptr(&v11);
  v6 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&avatar->baseclass_0[68] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)avatar + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar->baseclass_0[68] >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  BaseTalent::setExtraLevel(v6, *(_DWORD *)&avatar->baseclass_0[68]);
  v7 = (unsigned __int64)std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = *(_QWORD *)v7 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7) )
    std::shared_ptr<BaseTalent>::shared_ptr((std::shared_ptr<BaseTalent> *const)this, 0LL);
  else
    std::shared_ptr<BaseTalent>::shared_ptr(
      (std::shared_ptr<BaseTalent> *const)this,
      (std::shared_ptr<BaseTalent> *)(v3 + 32));
  std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = &this->BaseTalent;
  return result;
};

// Line 78: range 000000001315C99C-000000001315CBAC
bool __cdecl ProudSkill::isTeamTalent(const ProudSkill *const this)
{
  const data::AvatarTalentExcelConfigMgrBase *v1; // rdx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  AvatarTalentExcelConfigMgr *talent_config_mgr; // [rsp+10h] [rbp-50h]
  const data::ProudSkillExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v8);
  v1 = talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(v1, this->id_);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->proud_skill_type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( config_ptr->proud_skill_type == 1 )
      return 1;
    if ( *(char *)(((unsigned __int64)&config_ptr->effective_for_team >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config_ptr->effective_for_team);
    return config_ptr->effective_for_team != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/proud_skill.cpp",
      "isTeamTalent",
      83);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v9,
           (const char (*)[34])"findProudSkillExcelConfig fails. ");
    v3 = operator<<(v2, this);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 92: range 000000001315CBAE-000000001315CE8D
bool __cdecl ProudSkill::isValidOnAvatar(const ProudSkill *const this, Avatar *avatar)
{
  unsigned __int64 v2; // rax
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  bool v5; // bl
  AvatarTalentExcelConfigMgr *v6; // rcx
  data::ElementType elem_type; // [rsp+14h] [rbp-4Ch]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)avatar->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  elem_type = (*(unsigned int (__fastcall **)(Avatar *))v2)(avatar);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proud_skill_config_ptr = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
                             p_avatar_talent_config_mgr,
                             this->id_);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( proud_skill_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)proud_skill_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->proud_skill_type >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( proud_skill_config_ptr->proud_skill_type == 1 )
      goto LABEL_16;
    if ( *(char *)(((unsigned __int64)&proud_skill_config_ptr->effective_for_team >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&proud_skill_config_ptr->effective_for_team);
    if ( proud_skill_config_ptr->effective_for_team )
    {
LABEL_16:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v10);
      v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.avatar_talent_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v5 = AvatarTalentExcelConfigMgr::checkProudSkillCond(v6, this->id_, elem_type);
      std::shared_ptr<Config>::~shared_ptr(&v10);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/proud_skill.cpp",
      "isValidOnAvatar",
      97);
    v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v11,
           (const char (*)[48])"findProudSkillExcelConfig fail, proud_skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return 0;
  }
  return v5;
};
