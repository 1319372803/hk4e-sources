// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGachaExcelConfig.h

// Line 20: range 000000000DE512FA-000000000DE513F6
void __cdecl ActivityGachaExcelConfigMgr::ActivityGachaExcelConfigMgr(ActivityGachaExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityGachaExcelConfigMgrBase::ActivityGachaExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityGachaExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGachaExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::unordered_map(&this->gather_config_map);
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::unordered_map(&this->elem_config_map);
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::unordered_map(&this->monster_config_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->group_id_2_target_map);
  std::vector<unsigned int>::vector(&this->normal_robot_vec);
  std::vector<unsigned int>::vector(&this->hidden_robot_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_full_monster_die_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_full_monster_die_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_full_monster_die_stage_id);
  }
  this->need_full_monster_die_stage_id = 0;
};

// Line 20: range 000000000D81E868-000000000D81E921
void __cdecl ActivityGachaExcelConfigMgr::~ActivityGachaExcelConfigMgr(ActivityGachaExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityGachaExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityGachaExcelConfigMgrBase = v1;
  std::vector<unsigned int>::~vector(&this->hidden_robot_vec);
  std::vector<unsigned int>::~vector(&this->normal_robot_vec);
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->group_id_2_target_map);
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::~unordered_map(&this->monster_config_map);
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::~unordered_map(&this->elem_config_map);
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::~unordered_map(&this->gather_config_map);
  data::ActivityGachaExcelConfigMgrBase::~ActivityGachaExcelConfigMgrBase(this);
};
