// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/coroutine.hpp

// Line 246: range 000000000C713296-000000000C7132E5
void __cdecl boost::asio::coroutine::coroutine(boost::asio::coroutine *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = 0;
};

// Line 268: range 000000000C7132E6-000000000C71335F
void __cdecl boost::asio::detail::coroutine_ref::coroutine_ref(
        boost::asio::detail::coroutine_ref *const this,
        boost::asio::coroutine *c)
{
  boost::asio::coroutine *v2; // rdx

  v2 = c;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->value_ = &v2->value_;
  if ( *(char *)(((unsigned __int64)&this->modified_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->modified_);
  this->modified_ = 0;
};

// Line 270: range 000000000C713360-000000000C713415
void __cdecl boost::asio::detail::coroutine_ref::~coroutine_ref(boost::asio::detail::coroutine_ref *const this)
{
  __int64 v1; // rsi
  int *value; // rdx

  if ( *(char *)(((unsigned __int64)&this->modified_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->modified_);
  if ( !this->modified_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    value = this->value_;
    if ( *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)this->value_ & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this->value_);
    }
    *value = -1;
  }
};

// Line 271: range 000000000C713416-000000000C713484
int __cdecl boost::asio::detail::coroutine_ref::operator int(const boost::asio::detail::coroutine_ref *const this)
{
  __int64 v1; // rsi
  int *value; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  value = this->value_;
  if ( *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)this->value_ & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this->value_);
  }
  return *value;
};

// Line 272: range 000000000C713486-000000000C71353C
// local variable allocation has failed, the output may be wrong!
int *__cdecl boost::asio::detail::coroutine_ref::operator=(boost::asio::detail::coroutine_ref *const this, int v)
{
  int *value; // rdx

  if ( *(char *)(((unsigned __int64)&this->modified_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->modified_);
  this->modified_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, *(_QWORD *)&v);
  value = this->value_;
  if ( *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)this->value_ & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this->value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this->value_);
  }
  *value = v;
  return this->value_;
};
