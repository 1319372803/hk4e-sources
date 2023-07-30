// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/strand_service.hpp

// Line 32: range 000000000C6A3A16-000000000C6A3AB0
void __cdecl boost::asio::detail::strand_service::~strand_service(boost::asio::detail::strand_service *const this)
{
  int (**v1)(...); // rdx
  std::size_t *i; // rbx

  v1 = (int (**)(...))(&`vtable for'boost::asio::detail::strand_service + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_service = v1;
  if ( this != (boost::asio::detail::strand_service *const)-88LL )
  {
    for ( i = &this->salt_;
          i != (std::size_t *)this->implementations_;
          boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl>::~scoped_ptr((boost::asio::detail::scoped_ptr<boost::asio::detail::strand_service::strand_impl> *const)i) )
    {
      --i;
    }
  }
  boost::asio::detail::posix_mutex::~posix_mutex(&this->mutex_);
  boost::asio::detail::service_base<boost::asio::detail::strand_service>::~service_base(this);
};

// Line 32: range 000000000C6A3AB2-000000000C6A3ADC
void __cdecl boost::asio::detail::strand_service::~strand_service(boost::asio::detail::strand_service *const this)
{
  boost::asio::detail::strand_service::~strand_service(this);
  operator delete(this, 0x668uLL);
};

// Line 45: range 000000000C65F4F2-000000000C65F53C
void __cdecl boost::asio::detail::strand_service::strand_impl::~strand_impl(
        boost::asio::detail::strand_service::strand_impl *const this)
{
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(&this->ready_queue_);
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(&this->waiting_queue_);
  boost::asio::detail::posix_mutex::~posix_mutex(&this->mutex_);
  boost::asio::detail::scheduler_operation::~scheduler_operation(this);
};
