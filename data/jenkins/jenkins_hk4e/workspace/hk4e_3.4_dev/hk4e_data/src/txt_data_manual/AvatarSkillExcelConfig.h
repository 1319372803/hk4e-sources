// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarSkillExcelConfig.h

// Line 19: range 000000000DE01F58-000000000DE01FDB
void __cdecl AvatarSkillExcelConfigMgr::AvatarSkillExcelConfigMgr(AvatarSkillExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::AvatarSkillExcelConfigMgrBase::AvatarSkillExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'AvatarSkillExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarSkillExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->skill_depot_talent_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->skill_depot_proud_skill_group_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->core_proud_skill_open_map);
};

// Line 19: range 000000000D80E3F4-000000000D80E477
void __cdecl AvatarSkillExcelConfigMgr::~AvatarSkillExcelConfigMgr(AvatarSkillExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarSkillExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AvatarSkillExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->core_proud_skill_open_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->skill_depot_proud_skill_group_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->skill_depot_talent_map);
  data::AvatarSkillExcelConfigMgrBase::~AvatarSkillExcelConfigMgrBase(this);
};
