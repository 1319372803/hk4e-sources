// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySummerTimeExcelConfig.h

// Line 17: range 000000000DE3D228-000000000DE3D35A
void __cdecl ActivitySummerTimeExcelConfigMgr::ActivitySummerTimeExcelConfigMgr(
        ActivitySummerTimeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivitySummerTimeExcelConfigMgrBase::ActivitySummerTimeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivitySummerTimeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySummerTimeExcelConfigMgrBase = v1;
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::map(&this->summer_time_stage_map);
  std::map<unsigned int,unsigned int>::map(&this->watcher_id_stage_id_map);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->mist_zone_signal_point_map);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(&this->singal_point_2_config_id_map);
  std::set<unsigned int>::set(&this->all_float_singal_point_set);
  std::map<unsigned int,Vector3>::map(&this->float_signal_position_map);
  std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::map(&this->race_config_map);
  std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::unordered_map(&this->group_to_race_config_map);
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->mist_zone_signal_order_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_gadget_id);
  }
  this->vehicle_gadget_id = 0;
};

// Line 17: range 000000000D81A20E-000000000D81A2FD
void __cdecl ActivitySummerTimeExcelConfigMgr::~ActivitySummerTimeExcelConfigMgr(
        ActivitySummerTimeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivitySummerTimeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivitySummerTimeExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->mist_zone_signal_order_map);
  std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::~unordered_map(&this->group_to_race_config_map);
  std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::~map(&this->race_config_map);
  std::map<unsigned int,Vector3>::~map(&this->float_signal_position_map);
  std::set<unsigned int>::~set(&this->all_float_singal_point_set);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->singal_point_2_config_id_map);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->mist_zone_signal_point_map);
  std::map<unsigned int,unsigned int>::~map(&this->watcher_id_stage_id_map);
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::~map(&this->summer_time_stage_map);
  data::ActivitySummerTimeExcelConfigMgrBase::~ActivitySummerTimeExcelConfigMgrBase(this);
};
