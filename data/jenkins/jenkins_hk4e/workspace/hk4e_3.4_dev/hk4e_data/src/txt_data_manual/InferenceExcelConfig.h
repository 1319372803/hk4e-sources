// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/InferenceExcelConfig.h

// Line 18: range 000000000DE56AA6-000000000DE56B5F
void __cdecl InferenceExcelConfigMgr::InferenceExcelConfigMgr(InferenceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::InferenceExcelConfigMgrBase::InferenceExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'InferenceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_InferenceExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->parent_quest_to_page_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->page_to_word_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->word_to_parent_quest_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->word_to_conclusion_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->conclusion_to_page_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->word_to_unlock_word_map);
};

// Line 18: range 000000000D81FC26-000000000D81FCDF
void __cdecl InferenceExcelConfigMgr::~InferenceExcelConfigMgr(InferenceExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'InferenceExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_InferenceExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->word_to_unlock_word_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->conclusion_to_page_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->word_to_conclusion_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->word_to_parent_quest_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->page_to_word_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->parent_quest_to_page_map);
  data::InferenceExcelConfigMgrBase::~InferenceExcelConfigMgrBase(this);
};
