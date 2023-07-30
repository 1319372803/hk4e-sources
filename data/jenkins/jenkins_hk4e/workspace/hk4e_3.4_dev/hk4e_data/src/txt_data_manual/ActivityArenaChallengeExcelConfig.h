// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityArenaChallengeExcelConfig.h

// Line 18: range 000000000DE36092-000000000DE36123
void __cdecl ActivityArenaChallengeExcelConfigMgr::ActivityArenaChallengeExcelConfigMgr(
        ActivityArenaChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityArenaChallengeExcelConfigMgrBase::ActivityArenaChallengeExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityArenaChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityArenaChallengeExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::unordered_map(&this->arena_challenge_config_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::unordered_map(&this->normal_challenge_watcher_list_map);
  std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::unordered_map(&this->watcher_arena_challenge_map);
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>>>::unordered_map(&this->related_challenge_map_);
};

// Line 18: range 000000000D818A88-000000000D818B19
void __cdecl ActivityArenaChallengeExcelConfigMgr::~ActivityArenaChallengeExcelConfigMgr(
        ActivityArenaChallengeExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityArenaChallengeExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityArenaChallengeExcelConfigMgrBase = v1;
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,std::tuple<unsigned int,unsigned int,unsigned int>,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,std::tuple<unsigned int,unsigned int,unsigned int>>>>::~unordered_map(&this->related_challenge_map_);
  std::unordered_map<unsigned int,std::tuple<unsigned int,unsigned int,unsigned int>>::~unordered_map(&this->watcher_arena_challenge_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::~unordered_map(&this->normal_challenge_watcher_list_map);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::~unordered_map(&this->arena_challenge_config_map);
  data::ActivityArenaChallengeExcelConfigMgrBase::~ActivityArenaChallengeExcelConfigMgrBase(this);
};
