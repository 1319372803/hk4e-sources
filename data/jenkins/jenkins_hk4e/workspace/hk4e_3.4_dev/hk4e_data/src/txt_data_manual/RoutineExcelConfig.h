// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RoutineExcelConfig.h

// Line 18: range 000000000DE2E77E-000000000DE2E811
void __cdecl RoutineExcelConfigMgr::RoutineExcelConfigMgr(RoutineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::RoutineExcelConfigMgrBase::RoutineExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'RoutineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RoutineExcelConfigMgrBase = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->backup_routine_map);
  std::map<unsigned int,unsigned int>::map(&this->group_to_routine_map);
  std::vector<unsigned int>::vector(&this->snow_mountain_specail_tag_vec);
  std::vector<unsigned int>::vector(&this->snow_mountain_normal_tag_vec);
};

// Line 18: range 000000000D81724C-000000000D8172DF
void __cdecl RoutineExcelConfigMgr::~RoutineExcelConfigMgr(RoutineExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RoutineExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_RoutineExcelConfigMgrBase = v1;
  std::vector<unsigned int>::~vector(&this->snow_mountain_normal_tag_vec);
  std::vector<unsigned int>::~vector(&this->snow_mountain_specail_tag_vec);
  std::map<unsigned int,unsigned int>::~map(&this->group_to_routine_map);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->backup_routine_map);
  data::RoutineExcelConfigMgrBase::~RoutineExcelConfigMgrBase(this);
};
