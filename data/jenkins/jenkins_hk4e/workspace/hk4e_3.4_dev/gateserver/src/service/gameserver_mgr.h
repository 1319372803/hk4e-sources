// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/gameserver_mgr.h

// Line 21: range 000000000C88C1EE-000000000C88C2C9
void __cdecl GameserverMgrConfig::GameserverMgrConfig(GameserverMgrConfig *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->threshold_load_0 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->threshold_load_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->threshold_load_1);
  }
  this->threshold_load_1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->choose_add_load >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->choose_add_load);
  }
  this->choose_add_load = 0;
};

// Line 31: range 000000000C8421C8-000000000C8421F2
void __cdecl GameserverMgr::GameserverMgr(GameserverMgr *const this)
{
  std::mutex::mutex(&this->mu_);
  ServerLBMgr::ServerLBMgr(&this->lb_mgr_);
};

// Line 31: range 000000000C8421F4-000000000C842212
void __cdecl GameserverMgr::~GameserverMgr(GameserverMgr *const this)
{
  ServerLBMgr::~ServerLBMgr(&this->lb_mgr_);
};
