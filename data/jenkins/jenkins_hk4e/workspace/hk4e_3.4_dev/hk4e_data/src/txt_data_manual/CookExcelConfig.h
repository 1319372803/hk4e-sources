// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CookExcelConfig.h

// Line 18: range 000000000DE16E14-000000000DE16E83
void __cdecl CookExcelConfigMgr::CookExcelConfigMgr(CookExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::CookExcelConfigMgrBase::CookExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'CookExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CookExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::unordered_map(&this->avatar_bonus_config_map);
  std::vector<unsigned int>::vector(&this->default_unlocked_recipe_vec);
};

// Line 18: range 000000000D811970-000000000D8119DF
void __cdecl CookExcelConfigMgr::~CookExcelConfigMgr(CookExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CookExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CookExcelConfigMgrBase = v1;
  std::vector<unsigned int>::~vector(&this->default_unlocked_recipe_vec);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::~unordered_map(&this->avatar_bonus_config_map);
  data::CookExcelConfigMgrBase::~CookExcelConfigMgrBase(this);
};
