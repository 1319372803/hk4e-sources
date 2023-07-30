// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OpActivityExcelConfig.h

// Line 18: range 000000000DE30CEE-000000000DE30D71
void __cdecl OpActivityExcelConfigMgr::OpActivityExcelConfigMgr(OpActivityExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::OpActivityExcelConfigMgrBase::OpActivityExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'OpActivityExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OpActivityExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->refresh_id_bonus_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->dungeon_id_bonus_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->bonus_to_activity_map);
};

// Line 18: range 000000000D817A76-000000000D817AF9
void __cdecl OpActivityExcelConfigMgr::~OpActivityExcelConfigMgr(OpActivityExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'OpActivityExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_OpActivityExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->bonus_to_activity_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->dungeon_id_bonus_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->refresh_id_bonus_map);
  data::OpActivityExcelConfigMgrBase::~OpActivityExcelConfigMgrBase(this);
};
