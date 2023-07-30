// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEchoShellExcelConfig.h

// Line 18: range 000000000DE3E256-000000000DE3E2D9
void __cdecl ActivityEchoShellExcelConfigMgr::ActivityEchoShellExcelConfigMgr(
        ActivityEchoShellExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ActivityEchoShellExcelConfigMgrBase::ActivityEchoShellExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ActivityEchoShellExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityEchoShellExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->shell_reward_map);
  std::unordered_set<unsigned int>::unordered_set(&this->shell_set);
  std::unordered_set<unsigned int>::unordered_set(&this->related_dungeon_set);
};

// Line 18: range 000000000D81A676-000000000D81A6F9
void __cdecl ActivityEchoShellExcelConfigMgr::~ActivityEchoShellExcelConfigMgr(
        ActivityEchoShellExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActivityEchoShellExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ActivityEchoShellExcelConfigMgrBase = v1;
  std::unordered_set<unsigned int>::~unordered_set(&this->related_dungeon_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->shell_set);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->shell_reward_map);
  data::ActivityEchoShellExcelConfigMgrBase::~ActivityEchoShellExcelConfigMgrBase(this);
};
