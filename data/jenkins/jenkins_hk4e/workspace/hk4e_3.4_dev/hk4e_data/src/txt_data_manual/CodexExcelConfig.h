// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CodexExcelConfig.h

// Line 19: range 000000000DE264C2-000000000DE265D5
void __cdecl CodexExcelConfigMgr::CodexExcelConfigMgr(CodexExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::CodexExcelConfigMgrBase::CodexExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'CodexExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CodexExcelConfigMgrBase = v1;
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::unordered_set(&this->disused_codex_set);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->quest_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->weapon_to_id_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->reliquary_suit_and_level_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->animal_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->material_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->books_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->push_tips_to_id_map);
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->view_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->pushtips_codex_id_to_group_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->group_id_to_pushtips_codex_set_map);
};

// Line 19: range 000000000D8150F0-000000000D815203
void __cdecl CodexExcelConfigMgr::~CodexExcelConfigMgr(CodexExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CodexExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CodexExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->group_id_to_pushtips_codex_set_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->pushtips_codex_id_to_group_map);
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->view_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->push_tips_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->books_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->material_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->animal_to_id_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->reliquary_suit_and_level_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->weapon_to_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->quest_to_id_map);
  std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::~unordered_set(&this->disused_codex_set);
  data::CodexExcelConfigMgrBase::~CodexExcelConfigMgrBase(this);
};
