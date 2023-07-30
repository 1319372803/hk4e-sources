// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/service/tothemoon_service.h

// Line 28: range 000000000CCC4BAC-000000000CCC4BD6
void __cdecl TothemoonThreadLocal::TothemoonThreadLocal(TothemoonThreadLocal *const this)
{
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr);
  std::shared_ptr<PlayerManager>::shared_ptr(&this->player_mgr);
};

// Line 28: range 000000000CFCE580-000000000CFCE5C0
void __cdecl TothemoonThreadLocal::TothemoonThreadLocal(TothemoonThreadLocal *const this, TothemoonThreadLocal *a2)
{
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr, &a2->timer_mgr_ptr);
  std::shared_ptr<PlayerManager>::shared_ptr(&this->player_mgr, &a2->player_mgr);
};

// Line 28: range 000000000CCC4C70-000000000CCC4C9A
void __cdecl TothemoonThreadLocal::~TothemoonThreadLocal(TothemoonThreadLocal *const this)
{
  std::shared_ptr<PlayerManager>::~shared_ptr(&this->player_mgr);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&this->timer_mgr_ptr);
};

// Line 41: range 000000000CCAFEA0-000000000CCAFEAE
uint32_t __cdecl TothemoonService::getServiceType(TothemoonService *const this)
{
  return 14;
};
