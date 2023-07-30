// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBartenderExcelConfig.h

// Line 18: range 000000000DE4DC8E-000000000DE4DE2A
void __cdecl ActivityBartenderExcelConfigMgr::ActivityBartenderExcelConfigMgr(
        ActivityBartenderExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityBartenderExcelConfigMgrBase::ActivityBartenderExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityBartenderExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBartenderExcelConfigMgrBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_material_count);
  }
  this->min_material_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_material_count);
  }
  this->max_material_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_fail_formula_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_fail_formula_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_fail_formula_id);
  }
  this->default_fail_formula_id = 0;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->affix_to_material_count_map);
  std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::unordered_map(&this->bartender_material_to_formula_affix_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->order_to_formula_affix_map);
  std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int>>,std::equal_to<std::vector<unsigned int>>,std::allocator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>>>::unordered_map(&this->formula_affix_to_order_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->parent_quest_to_task_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->quest_to_unlock_formual_map);
  std::set<unsigned int>::set(&this->default_unlock_formula_set);
};

// Line 18: range 000000000D81DC04-000000000D81DCCF
void __cdecl ActivityBartenderExcelConfigMgr::~ActivityBartenderExcelConfigMgr(
        ActivityBartenderExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityBartenderExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityBartenderExcelConfigMgrBase = v1;
  std::set<unsigned int>::~set(&this->default_unlock_formula_set);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->quest_to_unlock_formual_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->parent_quest_to_task_map);
  std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int>>,std::equal_to<std::vector<unsigned int>>,std::allocator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>>>::~unordered_map(&this->formula_affix_to_order_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->order_to_formula_affix_map);
  std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::~unordered_map(&this->bartender_material_to_formula_affix_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->affix_to_material_count_map);
  data::ActivityBartenderExcelConfigMgrBase::~ActivityBartenderExcelConfigMgrBase(this);
};
