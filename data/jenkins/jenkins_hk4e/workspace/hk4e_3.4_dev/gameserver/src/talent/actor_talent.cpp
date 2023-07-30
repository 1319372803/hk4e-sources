// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/actor_talent.cpp

// Line 19: range 0000000013158D01-0000000013158D29
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ActorTalent *actor_talent)
{
  operator<<(stream, actor_talent);
  return stream;
};

// Line 26: range 0000000013158D2A-0000000013158EB9
const data::BaseTalentConfig *__cdecl ActorTalent::findBaseTalentConfig(const ActorTalent *const this)
{
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  const data::AvatarTalentExcelConfig *base_talent_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.avatar_talent_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  base_talent_config_ptr = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
                             p_avatar_talent_config_mgr,
                             this->id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( base_talent_config_ptr )
    return base_talent_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/talent/actor_talent.cpp",
    "findBaseTalentConfig",
    30);
  v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v8,
         (const char (*)[36])"findAvatarTalentExcelConfig fails. ");
  v3 = operator<<(v2, this);
  v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};

// Line 39: range 0000000013158EBA-00000000131591FB
int32_t __cdecl ActorTalent::initMixins(ActorTalent *const this)
{
  common::milog::MiLogStream *v1; // rdx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  const data::AvatarTalentExcelConfig *config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->group_id_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->level_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->extra_level_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/actor_talent.cpp",
      "initMixins",
      42);
    v1 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v11,
           (const char (*)[52])"talent should not have group_id/level/extra_level. ");
    v2 = operator<<(v1, this);
    v3 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v2, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v3, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.avatar_talent_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    config_ptr = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
                   p_avatar_talent_config_mgr,
                   this->id_);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( config_ptr )
    {
      return BaseTalent::addMixin(this, &config_ptr->open_config);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/actor_talent.cpp",
        "initMixins",
        49);
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v11,
             (const char (*)[36])"findAvatarTalentExcelConfig fails. ");
      v7 = operator<<(v6, this);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
  }
};
