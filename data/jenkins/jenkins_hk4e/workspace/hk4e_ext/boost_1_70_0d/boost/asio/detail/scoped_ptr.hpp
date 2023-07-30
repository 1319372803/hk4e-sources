// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/scoped_ptr.hpp

// Line 31: range 000000000C65DDE4-000000000C65DE22
void __cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::scoped_ptr(
        boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const this,
        boost::asio::detail::scheduler *p)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->p_ = p;
};

// Line 31: range 000000000C65F4B2-000000000C65F4F0
void __cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::scoped_ptr(
        boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *const this,
        boost::asio::detail::strand_service::strand_impl *p)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->p_ = p;
};

// Line 37: range 000000000C65DE24-000000000C65DEAF
void __cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::~scoped_ptr(
        boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const this)
{
  unsigned __int64 p; // rax
  unsigned __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p = (unsigned __int64)this->p_;
  if ( this->p_ )
  {
    if ( *(_BYTE *)((p >> 3) + 0x7FFF8000) )
      p = __asan_report_load8(p);
    v2 = *(_QWORD *)p + 8LL;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      p = __asan_report_load8(*(_QWORD *)p + 8LL);
    (*(void (__fastcall **)(unsigned __int64))v2)(p);
  }
};

// Line 37: range 000000000C65F53E-000000000C65F594
void __cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::~scoped_ptr(
        boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *const this)
{
  boost::asio::detail::strand_service::strand_impl *p; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  p = this->p_;
  if ( this->p_ )
  {
    boost::asio::detail::strand_service::strand_impl::~strand_impl(this->p_);
    operator delete(p, 0x68uLL);
  }
};

// Line 43: range 000000000C65DEB0-000000000C65DEE5
boost::asio::detail::scheduler *__cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::get(
        boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->p_;
};

// Line 43: range 000000000C65F596-000000000C65F5CB
boost::asio::detail::strand_service::strand_impl *__cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::get(
        boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->p_;
};

// Line 61: range 000000000C65F5CC-000000000C65F652
void __cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::reset(
        boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *const this,
        boost::asio::detail::strand_service::strand_impl *p)
{
  boost::asio::detail::strand_service::strand_impl *v2; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v2 = this->p_;
  if ( this->p_ )
  {
    boost::asio::detail::strand_service::strand_impl::~strand_impl(this->p_);
    operator delete(v2, 0x68uLL);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->p_ = p;
};

// Line 68: range 000000000C65DF30-000000000C65DF78
boost::asio::detail::scheduler *__cdecl boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler>::release(
        boost::asio::detail::scoped_ptr<boost::asio::detail::scheduler> *const this)
{
  boost::asio::detail::scheduler *tmp; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  tmp = this->p_;
  this->p_ = 0LL;
  return tmp;
};
