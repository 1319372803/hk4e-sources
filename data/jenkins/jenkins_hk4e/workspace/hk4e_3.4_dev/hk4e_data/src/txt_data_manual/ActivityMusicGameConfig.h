// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityMusicGameConfig.h

// Line 17: range 000000000DE36D80-000000000DE36E03
void __cdecl ActivityMusicGameConfigMgr::ActivityMusicGameConfigMgr(ActivityMusicGameConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityMusicGameConfigMgrBase::ActivityMusicGameConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityMusicGameConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMusicGameConfigMgrBase = v1;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->music_id_2_music_basic_id_map);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->watcher_id_2_prev_watcher_id_map);
  std::unordered_set<unsigned int>::unordered_set(&this->cond_watcher_id_set);
};

// Line 17: range 000000000D818D86-000000000D818E09
void __cdecl ActivityMusicGameConfigMgr::~ActivityMusicGameConfigMgr(ActivityMusicGameConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityMusicGameConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityMusicGameConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->cond_watcher_id_set);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->watcher_id_2_prev_watcher_id_map);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->music_id_2_music_basic_id_map);
  data::ActivityMusicGameConfigMgrBase::~ActivityMusicGameConfigMgrBase(this);
};
