// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BlossomExcelConfig.h

// Line 18: range 000000000DE20102-000000000DE201DF
void __cdecl BlossomExcelConfigMgr::BlossomExcelConfigMgr(BlossomExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::BlossomExcelConfigMgrBase::BlossomExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'BlossomExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BlossomExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->city_2_section_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->section_2_camp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->section_2_initial_camp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->section_2_safe_camp_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->section_2_order_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->group_2_camp_map_);
  std::set<unsigned int>::set(&this->quest_set_);
  std::set<unsigned int>::set(&this->activity_cond_set_);
};

// Line 18: range 000000000D813C1C-000000000D813CF9
void __cdecl BlossomExcelConfigMgr::~BlossomExcelConfigMgr(BlossomExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BlossomExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BlossomExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->activity_cond_set_);
  std::set<unsigned int>::~set(&this->quest_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->group_2_camp_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->section_2_order_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->section_2_safe_camp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->section_2_initial_camp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->section_2_camp_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->city_2_section_map_);
  data::BlossomExcelConfigMgrBase::~BlossomExcelConfigMgrBase(this);
};
