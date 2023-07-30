// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DailyTaskExcelConfig.h

// Line 18: range 000000000DE180C0-000000000DE1818B
void __cdecl DailyTaskExcelConfigMgr::DailyTaskExcelConfigMgr(DailyTaskExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::DailyTaskExcelConfigMgrBase::DailyTaskExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'DailyTaskExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DailyTaskExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->city_2_pools_map);
  std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::unordered_map(&this->pool_2_tasks_map);
  std::unordered_set<unsigned int>::unordered_set(&this->city_open_quest_set);
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::unordered_map(&this->task_2_npc_map);
  std::unordered_map<unsigned int,data::CityTaskOpenExcelConfig const*>::unordered_map(&this->city_2_task_open_config_map);
  std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::unordered_map(&this->group_id_2_daily_task_config_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->pool_id_to_task_types_map_);
};

// Line 18: range 000000000D811DE6-000000000D811EB1
void __cdecl DailyTaskExcelConfigMgr::~DailyTaskExcelConfigMgr(DailyTaskExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DailyTaskExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DailyTaskExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->pool_id_to_task_types_map_);
  std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::~unordered_map(&this->group_id_2_daily_task_config_map);
  std::unordered_map<unsigned int,data::CityTaskOpenExcelConfig const*>::~unordered_map(&this->city_2_task_open_config_map);
  std::unordered_map<unsigned int,std::vector<std::tuple<unsigned int,unsigned int>>>::~unordered_map(&this->task_2_npc_map);
  std::unordered_set<unsigned int>::~unordered_set(&this->city_open_quest_set);
  std::unordered_map<unsigned int,std::vector<data::DailyTaskExcelConfig>>::~unordered_map(&this->pool_2_tasks_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->city_2_pools_map);
  data::DailyTaskExcelConfigMgrBase::~DailyTaskExcelConfigMgrBase(this);
};
