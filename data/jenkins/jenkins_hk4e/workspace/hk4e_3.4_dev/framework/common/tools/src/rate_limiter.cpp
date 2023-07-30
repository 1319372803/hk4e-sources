// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/rate_limiter.cpp

// Line 38: range 000000001A03917A-000000001A039198
void __fastcall common::tools::RateLimiter::setRate(
        common::tools::RateLimiter *const this,
        double a2,
        double permits_per_second)
{
  if ( a2 > 0.0 )
    common::tools::RateLimiter::doSetRate(this, 0.0);
};

// Line 46: range 000000001A038F7C-000000001A039177
double __fastcall common::tools::RateLimiter::getRate(common::tools::RateLimiter *const this)
{
  double v1; // xmm1_8
  double result; // xmm0_8
  common::tools::RateLimiter *p_stable_interval_micros; // rdi

  if ( !*(_BYTE *)(((unsigned __int64)&this->stable_interval_micros_ >> 3) + 0x7FFF8000) )
    return 1000.0 / this->stable_interval_micros_;
  p_stable_interval_micros = (common::tools::RateLimiter *const)&this->stable_interval_micros_;
  __asan_report_load8(p_stable_interval_micros);
  common::tools::RateLimiter::doSetRate(p_stable_interval_micros, v1);
  return result;
};

// Line 53: range 000000001A0391E6-000000001A0395DA
bool __fastcall common::tools::RateLimiter::acquire(common::tools::RateLimiter *const this, uint32_t required_permits)
{
  double max_permits; // xmm1_8
  common::tools::RateLimiter *v3; // rbx
  uint64_t NowMs; // r12
  bool result; // al
  uint64_t next_free_ticket_micros; // rdx
  uint64_t v7; // rcx
  __int64 v8; // rdx
  double v9; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  unsigned __int64 v15; // rdx
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = this;
  NowMs = common::tools::TimeUtils::getNowMs();
  result = common::tools::RateLimiter::canAcquire(this, required_permits, NowMs);
  if ( result )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->next_free_ticket_micros_ >> 3) + 0x7FFF8000) )
    {
      result = ((__int64 (__fastcall *)(uint64_t *))__asan_report_load8)(&this->next_free_ticket_micros_);
    }
    else
    {
      next_free_ticket_micros = this->next_free_ticket_micros_;
      if ( next_free_ticket_micros >= NowMs )
        goto LABEL_12;
      v7 = NowMs - next_free_ticket_micros;
      v8 = NowMs - next_free_ticket_micros;
      if ( v8 >= 0 )
      {
        v9 = (double)(int)v7;
        goto LABEL_6;
      }
    }
    v9 = (double)(int)(v8 & 1 | (v7 >> 1)) + (double)(int)(v8 & 1 | (v7 >> 1));
LABEL_6:
    if ( *(_BYTE *)(((unsigned __int64)&this->stable_interval_micros_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->stable_interval_micros_);
    }
    else
    {
      v10 = v9 / this->stable_interval_micros_;
      if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        v11 = v10 + this->stored_permits_;
        *(double *)v16 = v11;
        this = (common::tools::RateLimiter *const)((char *)this + 8);
        if ( !*(_BYTE *)(((unsigned __int64)&v3->max_permits_ >> 3) + 0x7FFF8000) )
        {
          max_permits = v3->max_permits_;
          if ( max_permits <= v11 )
          {
LABEL_10:
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(this);
              goto LABEL_29;
            }
            v3->stored_permits_ = this->stored_permits_;
            v3->next_free_ticket_micros_ = NowMs;
LABEL_12:
            this = v3;
            v12 = (double)(int)required_permits;
            *(double *)v16 = (double)(int)required_permits;
            if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
            {
              if ( v12 <= v3->stored_permits_ )
                this = (common::tools::RateLimiter *const)v16;
              if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              {
                max_permits = this->stored_permits_;
                v13 = v12 - this->stored_permits_;
                this = (common::tools::RateLimiter *)&v3->stable_interval_micros_;
                if ( !*(_BYTE *)(((unsigned __int64)&v3->stable_interval_micros_ >> 3) + 0x7FFF8000) )
                {
                  v14 = v13 * v3->stable_interval_micros_;
                  if ( v14 < 9.223372036854776e18 )
                  {
                    v15 = (unsigned int)(int)v14;
                    goto LABEL_19;
                  }
LABEL_32:
                  v15 = (unsigned int)(int)(v14 - 9.223372036854776e18) ^ 0x8000000000000000LL;
LABEL_19:
                  v3->next_free_ticket_micros_ += v15;
                  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(v3);
                    return (unsigned __int8)common::tools::ConcurrentRateLimiter::create(max_permits);
                  }
                  else
                  {
                    v3->stored_permits_ = v3->stored_permits_ - max_permits;
                  }
                  return result;
                }
LABEL_31:
                v14 = __asan_report_load8(this);
                goto LABEL_32;
              }
LABEL_30:
              __asan_report_load8(this);
              goto LABEL_31;
            }
LABEL_29:
            __asan_report_load8(this);
            goto LABEL_30;
          }
LABEL_27:
          this = (common::tools::RateLimiter *const)v16;
          goto LABEL_10;
        }
LABEL_26:
        result = ((__int64 (__fastcall *)(common::tools::RateLimiter *const))__asan_report_load8)(this);
        goto LABEL_27;
      }
    }
    __asan_report_load8(this);
    goto LABEL_26;
  }
  return result;
};

// Line 99: range 000000001A03919A-000000001A0391E5
bool __fastcall common::tools::RateLimiter::canAcquire(
        common::tools::RateLimiter *const this,
        uint32_t required_permits,
        uint64_t now_micros)
{
  uint64_t *p_next_free_ticket_micros; // rdi

  if ( !*(_BYTE *)(((unsigned __int64)&this->next_free_ticket_micros_ >> 3) + 0x7FFF8000) )
    return this->next_free_ticket_micros_ <= now_micros;
  p_next_free_ticket_micros = &this->next_free_ticket_micros_;
  __asan_report_load8(p_next_free_ticket_micros);
  return common::tools::RateLimiter::canAcquire(
           (common::tools::RateLimiter *const)p_next_free_ticket_micros,
           required_permits);
};

// Line 116: range 000000001A0395DC-000000001A039671
void __fastcall common::tools::ConcurrentRateLimiter::setRate(
        common::tools::ConcurrentRateLimiter *const this,
        double a2,
        double permits_per_second)
{
  std::mutex *p_mu; // r12
  std::mutex *v5; // rdi
  int v6; // ebp

  if ( a2 > 0.0 )
  {
    p_mu = &this->mu_;
    if ( &_pthread_key_create )
    {
      v5 = &this->mu_;
      v6 = pthread_mutex_lock(&v5->_M_mutex);
      if ( v6 )
      {
        __asan_handle_no_return(v5);
        std::__throw_system_error(v6);
      }
    }
    common::tools::RateLimiter::doSetRate(this, a2);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&p_mu->_M_mutex);
  }
};

// Line 125: range 000000001A039676-000000001A0396F7
double __fastcall common::tools::ConcurrentRateLimiter::getRate(common::tools::ConcurrentRateLimiter *const this)
{
  std::mutex *p_mu; // r12
  std::mutex *v3; // rdi
  int v4; // ebp
  double result; // xmm0_8

  p_mu = &this->mu_;
  if ( &_pthread_key_create )
  {
    v3 = &this->mu_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  result = common::tools::RateLimiter::getRate(this);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mu->_M_mutex);
  return result;
};

// Line 134: range 000000001A0396FC-000000001A03977F
bool __fastcall common::tools::ConcurrentRateLimiter::acquire(
        common::tools::ConcurrentRateLimiter *const this,
        uint32_t required_permits)
{
  std::mutex *p_mu; // r13
  std::mutex *v4; // rdi
  int v5; // r12d
  bool v6; // bl

  p_mu = &this->mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  v6 = common::tools::RateLimiter::acquire(this, required_permits);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mu->_M_mutex);
  return v6;
};

// Line 140: range 000000001A039784-000000001A039807
bool __fastcall common::tools::ConcurrentRateLimiter::canAcquire(
        common::tools::ConcurrentRateLimiter *const this,
        uint32_t required_permits)
{
  std::mutex *p_mu; // r13
  std::mutex *v4; // rdi
  int v5; // r12d
  bool canAcquire; // bl

  p_mu = &this->mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  canAcquire = common::tools::RateLimiter::canAcquire(this, required_permits);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mu->_M_mutex);
  return canAcquire;
};
