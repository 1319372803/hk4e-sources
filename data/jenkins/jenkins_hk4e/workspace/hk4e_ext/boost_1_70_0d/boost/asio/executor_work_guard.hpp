// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/executor_work_guard.hpp

// Line 72: range 0000000019B855BE-0000000019B85A31
void __fastcall boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(
        boost::asio::executor_work_guard<boost::asio::executor> *const this)
{
  bool *p_owns; // rdi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v6; // rdx

  p_owns = &this->owns_;
  if ( *(char *)(((unsigned __int64)p_owns >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_owns);
  }
  else if ( !this->owns_ )
  {
    goto LABEL_3;
  }
  impl = boost::asio::executor::get_impl(&this->executor_);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_14;
  }
  v6 = (unsigned __int64)(impl->_vptr_impl_base + 4);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v6);
    goto LABEL_15;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 4))();
LABEL_3:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v3 = (unsigned __int64)this;
    __asan_report_load8(this);
LABEL_16:
    __asan_report_load8(v3);
    goto LABEL_17;
  }
  v3 = (unsigned __int64)this->executor_.impl_;
  if ( !this->executor_.impl_ )
    return;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  v4 = *(_QWORD *)v3 + 8LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(v4);
    JUMPOUT(0x19B8567FLL);
  }
  (*(void (**)(void))(*(_QWORD *)v3 + 8LL))();
};
