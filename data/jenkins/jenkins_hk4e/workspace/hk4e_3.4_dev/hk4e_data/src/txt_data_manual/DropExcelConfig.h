// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/DropExcelConfig.h

// Line 109: range 0000000014269C54-0000000014269CA9
void __cdecl DropExcelConfigMgr::GroupReferrer::GroupReferrer(DropExcelConfigMgr::GroupReferrer *const this)
{
  __int64 v1; // rsi

  std::vector<std::pair<unsigned int,unsigned int>>::vector(&this->activity_cond_vec);
  if ( *(char *)(((unsigned __int64)&this->is_activity_group >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_activity_group, v1, &this->is_activity_group);
  this->is_activity_group = 0;
};

// Line 109: range 00000000142C847C-00000000142C8496
void __cdecl DropExcelConfigMgr::GroupReferrer::~GroupReferrer(DropExcelConfigMgr::GroupReferrer *const this)
{
  std::vector<std::pair<unsigned int,unsigned int>>::~vector(&this->activity_cond_vec);
};
