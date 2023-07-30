// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/PersonalLineExcelConfig.h

// Line 18: range 000000000DE26DF2-000000000DE26E71
void __cdecl PersonalLineExcelConfigMgr::PersonalLineExcelConfigMgr(PersonalLineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::PersonalLineExcelConfigMgrBase::PersonalLineExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'PersonalLineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PersonalLineExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->personal_line_id_open_timestamp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->personal_line_rely_quest_id_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->personal_line_rely_quest_id_set_);
};

// Line 18: range 000000000D8153EA-000000000D815469
void __cdecl PersonalLineExcelConfigMgr::~PersonalLineExcelConfigMgr(PersonalLineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PersonalLineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PersonalLineExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->personal_line_rely_quest_id_set_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->personal_line_rely_quest_id_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->personal_line_id_open_timestamp_map_);
  data::PersonalLineExcelConfigMgrBase::~PersonalLineExcelConfigMgrBase(this);
};
