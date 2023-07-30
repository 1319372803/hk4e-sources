// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/item/equip_affix.cpp

// Line 24: range 00000000165E92C8-00000000165E9488
const data::BaseTalentConfig *__cdecl EquipAffix::findBaseTalentConfig(const EquipAffix *const this)
{
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t level; // ecx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const data::EquipAffixExcelConfig *affix_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.equip_affix_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)&this->level_;
    __asan_report_load4();
  }
  level = this->level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)&this->group_id_;
    __asan_report_load4();
  }
  affix_config_ptr = EquipAffixExcelConfigMgr::findEquipAffixExcelConfig(
                       p_equip_affix_config_mgr,
                       this->group_id_,
                       level);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( affix_config_ptr )
    return affix_config_ptr;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/item/equip_affix.cpp",
    "findBaseTalentConfig",
    28);
  v3 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v11,
         (const char (*)[37])"findEquipAffixExcelConfig affix_id: ");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->group_id_);
  v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" level: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->level_);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
  common::milog::MiLogStream::~MiLogStream(&v11);
  return 0LL;
};

// Line 35: range 00000000165E948A-00000000165E94E4
int32_t __cdecl EquipAffix::initMixins(EquipAffix *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  EquipAffix::initLevelMixins(this, this->level_);
  return 0;
};

// Line 41: range 00000000165E94E6-00000000165E9B09
__int64 __fastcall EquipAffix::initLevelMixins(EquipAffix *const this, uint32_t detail_level)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const EquipAffixExcelConfigMgr *p_equip_affix_config_mgr; // rdi
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  __int64 result; // rax
  std::vector<std::shared_ptr<data::ConfigTalentMixin>>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<data::ConfigTalentMixin>>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  const data::EquipAffixExcelConfig *affix_config_ptr; // [rsp+38h] [rbp-F8h]
  const std::string *mixin_name; // [rsp+40h] [rbp-F0h]
  data::ConfigTalentMixinGroup *config_talent_mixin_vec_ptr; // [rsp+48h] [rbp-E8h]
  std::vector<std::shared_ptr<data::ConfigTalentMixin>> *__for_range; // [rsp+50h] [rbp-E0h]
  data::ConfigTalentMixinPtr *config_talent_mixin_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 detail_level:40 64 16 8 param:60 96 16 24 base_talent_mixin_ptr:63";
  *(_QWORD *)(v3 + 16) = EquipAffix::initLevelMixins;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = detail_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  p_equip_affix_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.equip_affix_config_mgr;
  v7 = *(_DWORD *)(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    p_equip_affix_config_mgr = (const EquipAffixExcelConfigMgr *)&this->group_id_;
    __asan_report_load4();
  }
  affix_config_ptr = EquipAffixExcelConfigMgr::findEquipAffixExcelConfig(p_equip_affix_config_mgr, this->group_id_, v7);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( affix_config_ptr )
  {
    mixin_name = &affix_config_ptr->open_config;
    if ( (unsigned __int8)std::string::empty(&affix_config_ptr->open_config) )
    {
      v2 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      config_talent_mixin_vec_ptr = JsonConfigMgr::obtainTalentMixinConfigs(
                                      &v12->design_config.json_config_mgr,
                                      mixin_name);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      if ( config_talent_mixin_vec_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_QWORD *)(v3 + 64) = this->avatar_;
        *(_QWORD *)(v3 + 72) = this;
        __for_range = config_talent_mixin_vec_ptr;
        __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::begin(config_talent_mixin_vec_ptr)._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::end(config_talent_mixin_vec_ptr)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>(
                  &__for_begin,
                  &__for_end) )
        {
          config_talent_mixin_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator*(&__for_begin);
          v15 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_talent_mixin_ptr);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          v16 = *(_QWORD *)v15 + 56LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64))v16)(v3 + 96, v15, v3 + 64);
          if ( std::operator==<BaseTalentMixin>((const std::shared_ptr<BaseTalentMixin> *)(v3 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/item/equip_affix.cpp",
              "initLevelMixins",
              66);
            v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    &v28,
                    (const char (*)[24])"createTalentMixin fails");
            operator<<(v17, (const TalentParam *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v28);
            v2 = -1;
            v18 = 0;
          }
          else
          {
            std::vector<std::shared_ptr<BaseTalentMixin>>::push_back(
              &this->mixin_vec_,
              (const std::vector<std::shared_ptr<BaseTalentMixin>>::value_type *)(v3 + 96));
            v18 = 1;
          }
          std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 96));
          if ( v18 != 1 )
            goto LABEL_26;
          __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator++(&__for_begin);
        }
        v2 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/item/equip_affix.cpp",
          "initLevelMixins",
          57);
        v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v28,
                (const char (*)[25])" findTalentMixinConfigs ");
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, mixin_name);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v2 = -1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/item/equip_affix.cpp",
      "initLevelMixins",
      45);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v28,
           (const char (*)[37])"findEquipAffixExcelConfig affix_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->group_id_);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" level: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
  }
LABEL_26:
  result = v2;
  if ( v29 == (char *)v3 )
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

// Line 78: range 00000000165E9B0A-00000000165E9BB4
void __cdecl EquipAffix::getAffixLog(const EquipAffix *const this, proto_log::AffixLog *affix_log)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::AffixLog::set_affix_id(affix_log, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::AffixLog::set_affix_level(affix_log, this->level_);
};
