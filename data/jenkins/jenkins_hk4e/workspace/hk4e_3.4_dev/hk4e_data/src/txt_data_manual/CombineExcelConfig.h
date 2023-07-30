// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CombineExcelConfig.h

// Line 17: range 000000000DE1A1B2-000000000DE1A269
void __cdecl CombineExcelConfigMgr::CombineExcelConfigMgr(CombineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::CombineExcelConfigMgrBase::CombineExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'CombineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CombineExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->unlock_combine_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->quest_unlock_combine_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->quest_lock_combine_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->combine_to_quest_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->finished_quest_possible_unlock_map_);
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::map(&this->activity_cond_possible_unlock_map_);
};

// Line 17: range 000000000D8126BC-000000000D812773
void __cdecl CombineExcelConfigMgr::~CombineExcelConfigMgr(CombineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CombineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CombineExcelConfigMgrBase = v1;
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::~map(&this->activity_cond_possible_unlock_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->finished_quest_possible_unlock_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->combine_to_quest_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->quest_lock_combine_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->quest_unlock_combine_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->unlock_combine_map_);
  data::CombineExcelConfigMgrBase::~CombineExcelConfigMgrBase(this);
};
