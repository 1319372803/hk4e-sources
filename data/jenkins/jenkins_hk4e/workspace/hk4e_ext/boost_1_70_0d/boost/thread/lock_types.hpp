// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/lock_types.hpp

// Line 121: range 000000000BF0BF48-000000000BF0BFCD
void __cdecl boost::unique_lock<boost::mutex>::unique_lock(
        boost::unique_lock<boost::mutex> *const this,
        boost::mutex *m_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked, m_);
  this->is_locked = 0;
  boost::unique_lock<boost::mutex>::lock(this);
};

// Line 327: range 000000000BF0BFCE-000000000BF0C01C
void __cdecl boost::unique_lock<boost::mutex>::~unique_lock(boost::unique_lock<boost::mutex> *const this)
{
  if ( boost::unique_lock<boost::mutex>::owns_lock(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::mutex::unlock(this->m);
  }
};

// Line 334: range 000000000BF0D75E-000000000BF0D8A5
void __cdecl boost::unique_lock<boost::mutex>::lock(boost::unique_lock<boost::mutex> *const this)
{
  __int64 v1; // rsi
  boost::lock_error e; // [rsp+10h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m )
  {
    boost::lock_error::lock_error(&e, 1, "boost unique_lock has no mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( boost::unique_lock<boost::mutex>::owns_lock(this) )
  {
    boost::lock_error::lock_error(&e, 35, "boost unique_lock owns already the mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::mutex::lock(this->m);
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked, v1);
  this->is_locked = 1;
};

// Line 439: range 000000000BF0C7E4-000000000BF0C92E
void __cdecl boost::unique_lock<boost::mutex>::unlock(boost::unique_lock<boost::mutex> *const this)
{
  __int64 v1; // rsi
  boost::lock_error e; // [rsp+10h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m )
  {
    boost::lock_error::lock_error(&e, 1, "boost unique_lock has no mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( !boost::unique_lock<boost::mutex>::owns_lock(this) )
  {
    boost::lock_error::lock_error(&e, 1, "boost unique_lock doesn't own the mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::mutex::unlock(this->m);
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked, v1);
  this->is_locked = 0;
};

// Line 471: range 000000000BF0D714-000000000BF0D75C
bool __cdecl boost::unique_lock<boost::mutex>::owns_lock(const boost::unique_lock<boost::mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_locked);
  return this->is_locked;
};

// Line 517: range 000000000BF0C680-000000000BF0C705
void __cdecl boost::shared_lock<boost::shared_mutex>::shared_lock(
        boost::shared_lock<boost::shared_mutex> *const this,
        boost::shared_mutex *m_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m = m_;
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked, m_);
  this->is_locked = 0;
  boost::shared_lock<boost::shared_mutex>::lock(this);
};

// Line 628: range 000000000BF0C706-000000000BF0C754
void __cdecl boost::shared_lock<boost::shared_mutex>::~shared_lock(boost::shared_lock<boost::shared_mutex> *const this)
{
  if ( boost::shared_lock<boost::shared_mutex>::owns_lock(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::shared_mutex::unlock_shared(this->m);
  }
};

// Line 635: range 000000000BF18D7E-000000000BF18EC5
void __cdecl boost::shared_lock<boost::shared_mutex>::lock(boost::shared_lock<boost::shared_mutex> *const this)
{
  __int64 v1; // rsi
  boost::lock_error e; // [rsp+10h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m )
  {
    boost::lock_error::lock_error(&e, 1, "boost shared_lock has no mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( boost::shared_lock<boost::shared_mutex>::owns_lock(this) )
  {
    boost::lock_error::lock_error(&e, 35, "boost shared_lock owns already the mutex");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::lock_error>(&e);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::shared_mutex::lock_shared(this->m);
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked, v1);
  this->is_locked = 1;
};

// Line 750: range 000000000BF18EC6-000000000BF18F0E
bool __cdecl boost::shared_lock<boost::shared_mutex>::owns_lock(
        const boost::shared_lock<boost::shared_mutex> *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_locked);
  return this->is_locked;
};
