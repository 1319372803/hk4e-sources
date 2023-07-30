// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FetterExcelConfig.h

// Line 20: range 000000000DE18D2A-000000000DE18D77
void __cdecl PhotographExcelConfigMgr::PhotographExcelConfigMgr(PhotographExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::PhotographExcelConfigMgrBase::PhotographExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'PhotographExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PhotographExcelConfigMgrBase = v1;
};

// Line 20: range 000000000D81212E-000000000D81217B
void __cdecl PhotographExcelConfigMgr::~PhotographExcelConfigMgr(PhotographExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PhotographExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PhotographExcelConfigMgrBase = v1;
  data::PhotographExcelConfigMgrBase::~PhotographExcelConfigMgrBase(this);
};

// Line 23: range 000000000D800D06-000000000D800D18
int32_t __cdecl PhotographExcelConfigMgr::checkConfig(
        PhotographExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 30: range 000000000DE192E0-000000000DE193E1
void __cdecl FetterExcelConfigMgr::FetterExcelConfigMgr(FetterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::FettersExcelConfigMgrBase::FettersExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'FetterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FettersExcelConfigMgrBase = v1;
  PhotographExcelConfigMgr::PhotographExcelConfigMgr(&this->photograph_config_mgr);
  std::unordered_map<unsigned int,data::FetterConfig *>::unordered_map(&this->fetter_config_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->avatar_all_fetters_map);
  std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::unordered_map(&this->avatar_fetters_index_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->avatar_birthday_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->fetter_dungeon_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->fetter_point_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->fetter_quest_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(&this->fetter_parent_quest_avatars_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::unordered_map(&this->avatar_fetter_level_reward_map);
};

// Line 30: range 000000000D8121EC-000000000D8122ED
void __cdecl FetterExcelConfigMgr::~FetterExcelConfigMgr(FetterExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FetterExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_FettersExcelConfigMgrBase = v1;
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::~unordered_map(&this->avatar_fetter_level_reward_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->fetter_parent_quest_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->fetter_quest_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->fetter_point_avatars_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->fetter_dungeon_avatars_map);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->avatar_birthday_map);
  std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::~unordered_map(&this->avatar_fetters_index_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->avatar_all_fetters_map);
  std::unordered_map<unsigned int,data::FetterConfig *>::~unordered_map(&this->fetter_config_map);
  PhotographExcelConfigMgr::~PhotographExcelConfigMgr(&this->photograph_config_mgr);
  data::FettersExcelConfigMgrBase::~FettersExcelConfigMgrBase(this);
};
