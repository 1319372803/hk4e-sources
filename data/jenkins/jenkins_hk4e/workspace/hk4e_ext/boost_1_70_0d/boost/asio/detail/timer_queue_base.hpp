// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/timer_queue_base.hpp

// Line 34: range 000000000C6433F4-000000000C643472
void __cdecl boost::asio::detail::timer_queue_base::timer_queue_base(boost::asio::detail::timer_queue_base *const this)
{
  int (**v1)(...); // rdx

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
};

// Line 37: range 000000000C643474-000000000C6434C1
void __cdecl boost::asio::detail::timer_queue_base::~timer_queue_base(
        boost::asio::detail::timer_queue_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::timer_queue_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_timer_queue_base = v1;
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 37: range 000000000C6434C2-000000000C6434EC
void __cdecl boost::asio::detail::timer_queue_base::~timer_queue_base(
        boost::asio::detail::timer_queue_base *const this)
{
  boost::asio::detail::timer_queue_base::~timer_queue_base(this);
  operator delete(this, 0x10uLL);
};
