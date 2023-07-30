// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/EquipAffixExcelConfig.h

// Line 18: range 000000000DE15712-000000000DE1576F
void __cdecl EquipAffixExcelConfigMgr::EquipAffixExcelConfigMgr(EquipAffixExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::EquipAffixExcelConfigMgrBase::EquipAffixExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'EquipAffixExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EquipAffixExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::unordered_map(&this->equip_affix_level_config_map_);
};

// Line 18: range 000000000D811316-000000000D811373
void __cdecl EquipAffixExcelConfigMgr::~EquipAffixExcelConfigMgr(EquipAffixExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EquipAffixExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EquipAffixExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<data::EquipAffixExcelConfig>>::~unordered_map(&this->equip_affix_level_config_map_);
  data::EquipAffixExcelConfigMgrBase::~EquipAffixExcelConfigMgrBase(this);
};
