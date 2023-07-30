// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/server_load_balance_mgr.h

// Line 22: range 000000000C63F092-000000000C63F0E6
void __cdecl ServerLBMgrConfig::ServerLBMgrConfig(ServerLBMgrConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_add_load);
  }
  this->choose_add_load = 0;
};

// Line 28: range 000000000C63F158-000000000C63F1B3
void __cdecl ServerLBMgr::ServerLBMgr(ServerLBMgr *const this)
{
  __int64 v1; // rbx
  common::tools::RandomSet<unsigned int> *id_set_by_threshold; // r12

  ServerLBMgrConfig::ServerLBMgrConfig(&this->config);
  std::map<unsigned int,int>::map(&this->load_map);
  v1 = 2LL;
  id_set_by_threshold = this->id_set_by_threshold;
  while ( v1 >= 0 )
  {
    common::tools::RandomSet<unsigned int>::RandomSet(id_set_by_threshold++);
    --v1;
  }
};

// Line 28: range 000000000C63F1B4-000000000C63F20F
void __cdecl ServerLBMgr::~ServerLBMgr(ServerLBMgr *const this)
{
  int64_t *i; // rbx

  if ( this != (ServerLBMgr *const)-64LL )
  {
    for ( i = this->total_load;
          i != (int64_t *)this->id_set_by_threshold;
          common::tools::RandomSet<unsigned int>::~RandomSet((common::tools::RandomSet<unsigned int> *const)i) )
    {
      i -= 15;
    }
  }
  std::map<unsigned int,int>::~map(&this->load_map);
};
