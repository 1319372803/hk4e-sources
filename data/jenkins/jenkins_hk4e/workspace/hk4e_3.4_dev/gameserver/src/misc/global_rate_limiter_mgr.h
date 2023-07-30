// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/global_rate_limiter_mgr.h

// Line 17: range 00000000176ADA8A-00000000176ADAA4
void __cdecl GlobalRateLimiterMgr::GlobalRateLimiterMgr(GlobalRateLimiterMgr *const this)
{
  std::shared_ptr<common::tools::ConcurrentRateLimiter>::shared_ptr(&this->login_rate_limiter_ptr_);
};

// Line 17: range 00000000176ADAA6-00000000176ADAC0
void __cdecl GlobalRateLimiterMgr::~GlobalRateLimiterMgr(GlobalRateLimiterMgr *const this)
{
  std::shared_ptr<common::tools::ConcurrentRateLimiter>::~shared_ptr(&this->login_rate_limiter_ptr_);
};
