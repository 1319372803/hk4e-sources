// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/strand_executor_service.hpp

// Line 35: range 0000000014ED3D68-0000000014ED3E0B
void __fastcall boost::asio::detail::strand_executor_service::~strand_executor_service(
        boost::asio::detail::strand_executor_service *const this)
{
  boost::asio::detail::scoped_ptr<boost::asio::detail::posix_mutex> *p_salt; // rbp
  pthread_mutex_t *p_mutex; // r12
  boost::asio::detail::scoped_ptr<boost::asio::detail::posix_mutex> *mutexes; // r13
  boost::asio::detail::strand_executor_service *v4; // rbx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_5;
  }
  this->_vptr_service = (int (**)(...))(&`vtable for'boost::asio::detail::strand_executor_service + 2);
  mutexes = this->mutexes_;
  if ( this != (boost::asio::detail::strand_executor_service *const)-80LL )
  {
    p_salt = (boost::asio::detail::scoped_ptr<boost::asio::detail::posix_mutex> *)&this->salt_;
    while ( 1 )
    {
      if ( mutexes == p_salt )
        goto LABEL_11;
      this = (boost::asio::detail::strand_executor_service *const)--p_salt;
      if ( *(_BYTE *)(((unsigned __int64)p_salt >> 3) + 0x7FFF8000) )
        break;
      p_mutex = &p_salt->p_->mutex_;
      if ( p_salt->p_ )
      {
LABEL_6:
        pthread_mutex_destroy(p_mutex);
        operator delete(p_mutex, 0x28uLL);
      }
    }
LABEL_5:
    __asan_report_load8(this);
    goto LABEL_6;
  }
LABEL_11:
  pthread_mutex_destroy(&v4->mutex_.mutex_);
  operator delete(v4, 0x668uLL);
};
