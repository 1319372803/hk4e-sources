// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/team_resonance.cpp

// Line 19: range 000000001315FF86-000000001315FFAE
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const TeamResonance *team_resonance)
{
  operator<<(stream, team_resonance);
  return stream;
};

// Line 26: range 000000001315FFB0-000000001316013F
const data::BaseTalentConfig *__cdecl TeamResonance::findBaseTalentConfig(const TeamResonance *const this)
{
  TeamResonanceExcelConfigMgr *p_team_resonance_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  const data::TeamResonanceExcelConfig *base_talent_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_team_resonance_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.team_resonance_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_talent_config_ptr = data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig(
                             p_team_resonance_config_mgr,
                             this->id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( base_talent_config_ptr )
    return base_talent_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/talent/team_resonance.cpp",
    "findBaseTalentConfig",
    30);
  v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v8,
         (const char (*)[37])"findTeamResonanceExcelConfig fails. ");
  v3 = operator<<(v2, this);
  v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};

// Line 39: range 0000000013160140-00000000131603DF
int32_t __cdecl TeamResonance::initMixins(TeamResonance *const this)
{
  TeamResonanceExcelConfigMgr *p_team_resonance_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  __int64 v6; // rsi
  uint32_t team_resonance_group_id; // ecx
  char v8; // dl
  bool v9; // dl
  uint32_t level; // ecx
  char v11; // al
  const data::TeamResonanceExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_team_resonance_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.team_resonance_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_ptr = data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig(
                 p_team_resonance_config_mgr,
                 this->id_);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( config_ptr )
  {
    v6 = (((_BYTE)config_ptr + 92) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->team_resonance_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->team_resonance_group_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    team_resonance_group_id = config_ptr->team_resonance_group_id;
    v8 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v8 != 0;
    v9 = v8 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v8;
    if ( v9 )
      __asan_report_store4(&this->group_id_, v6, v9);
    this->group_id_ = team_resonance_group_id;
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
    return BaseTalent::addMixin(this, &config_ptr->open_config);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/team_resonance.cpp",
      "initMixins",
      43);
    v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v14,
           (const char (*)[37])"findTeamResonanceExcelConfig fails. ");
    v3 = operator<<(v2, this);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};
