// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/thread_group.hpp

// Line 36: range 000000000C64A4C2-000000000C64A4DC
void __cdecl boost::asio::detail::thread_group::~thread_group(boost::asio::detail::thread_group *const this)
{
  boost::asio::detail::thread_group::join(this);
};

// Line 57: range 000000000C64A4FA-000000000C64A5D4
void __cdecl boost::asio::detail::thread_group::join(boost::asio::detail::thread_group *const this)
{
  boost::asio::detail::thread_group::item *first; // rax
  boost::asio::detail::thread_group::item *tmp; // [rsp+18h] [rbp-18h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( !this->first_ )
      break;
    boost::asio::detail::posix_thread::join(&this->first_->thread_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    tmp = this->first_;
    first = this->first_;
    if ( *(_BYTE *)(((unsigned __int64)&this->first_->next_ >> 3) + 0x7FFF8000) )
      first = (boost::asio::detail::thread_group::item *)__asan_report_load8(&this->first_->next_);
    this->first_ = first->next_;
    if ( tmp )
    {
      boost::asio::detail::thread_group::item::~item(tmp);
      operator delete(tmp, 0x18uLL);
    }
  }
};

// Line 76: range 000000000C64A4DE-000000000C64A4F8
void __cdecl boost::asio::detail::thread_group::item::~item(boost::asio::detail::thread_group::item *const this)
{
  boost::asio::detail::posix_thread::~posix_thread(&this->thread_);
};
