// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/resolver_service.hpp

// Line 37: range 0000000019B76BD2-0000000019B77949
void __fastcall boost::asio::detail::resolver_service<boost::asio::ip::tcp>::~resolver_service(
        boost::asio::detail::resolver_service<boost::asio::ip::tcp> *const this)
{
  boost::asio::detail::resolver_service_base *v1; // rbx
  unsigned __int64 v2; // r12
  unsigned __int64 p_work_thread; // r13
  boost::asio::detail::resolver_service<boost::asio::ip::tcp> *v4; // rbp
  boost::asio::detail::scheduler *p; // rdi
  volatile signed __int64 *p_M_i; // rax
  void *p_work_scheduler; // rdi
  bool *v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  bool *v14; // rdi

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_37;
  }
  this->_vptr_service = (int (**)(...))(&`vtable for'boost::asio::detail::resolver_service<boost::asio::ip::tcp> + 2);
  v1 = &this->boost::asio::detail::resolver_service_base;
  this = (boost::asio::detail::resolver_service<boost::asio::ip::tcp> *const)((char *)this + 88);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_M_i = (volatile signed __int64 *)__asan_report_load8(this);
    goto LABEL_38;
  }
  p = v1->work_scheduler_.p_;
  if ( !p )
    goto LABEL_25;
  p_M_i = &p->outstanding_work_._M_i;
  if ( !*(_BYTE *)(((unsigned __int64)&p->outstanding_work_ >> 3) + 0x7FFF8000) )
  {
    if ( _InterlockedExchangeAdd64(p_M_i, 0xFFFFFFFFFFFFFFFFLL) != 1 )
      goto LABEL_6;
    goto LABEL_39;
  }
LABEL_38:
  p = (boost::asio::detail::scheduler *)p_M_i;
  __asan_report_store8();
LABEL_39:
  boost::asio::detail::scheduler::stop(p);
LABEL_6:
  p_work_scheduler = &v1->work_scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_work_scheduler);
    goto LABEL_41;
  }
  boost::asio::detail::scheduler::stop(v1->work_scheduler_.p_);
  p_work_scheduler = &v1->work_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_thread_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_work_scheduler);
LABEL_42:
    __asan_report_load1(p_work_scheduler);
    goto LABEL_43;
  }
  v2 = (unsigned __int64)v1->work_thread_.p_;
  if ( !v2 )
    goto LABEL_18;
  p_work_scheduler = (void *)(v2 + 8);
  if ( *(char *)(((v2 + 8) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_42;
  if ( *(_BYTE *)(v2 + 8) )
    goto LABEL_11;
LABEL_43:
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    v14 = (bool *)v2;
    __asan_report_load8(v2);
    goto LABEL_47;
  }
  pthread_join(*(_QWORD *)v2, 0LL);
  v14 = (bool *)(v2 + 8);
  if ( *(char *)(((v2 + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_47:
    __asan_report_store1(v14);
    goto LABEL_48;
  }
  *(_BYTE *)(v2 + 8) = 1;
LABEL_11:
  p_work_thread = (unsigned __int64)&v1->work_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_thread_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    v8 = (bool *)p_work_thread;
    __asan_report_load8(p_work_thread);
LABEL_49:
    __asan_report_load1(v8);
    goto LABEL_50;
  }
  v2 = (unsigned __int64)v1->work_thread_.p_;
  if ( !v2 )
    goto LABEL_16;
  v8 = (bool *)(v2 + 8);
  if ( *(char *)(((v2 + 8) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_49;
  if ( !*(_BYTE *)(v2 + 8) )
  {
LABEL_50:
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v2);
      goto LABEL_53;
    }
    pthread_detach(*(_QWORD *)v2);
  }
  operator delete((void *)v2, 0x10uLL);
LABEL_16:
  if ( *(_BYTE *)((p_work_thread >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    v9 = p_work_thread;
    __asan_report_store8();
    goto LABEL_54;
  }
  v1->work_thread_.p_ = 0LL;
LABEL_18:
  v9 = (unsigned __int64)&v1->work_scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_scheduler_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(v9);
LABEL_55:
    __asan_report_load8(v9);
    goto LABEL_56;
  }
  v9 = (unsigned __int64)v1->work_scheduler_.p_;
  if ( !v9 )
    goto LABEL_23;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  v10 = *(_QWORD *)v9 + 8LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    v11 = v10;
    __asan_report_load8(v10);
    goto LABEL_57;
  }
  (*(void (**)(void))(*(_QWORD *)v9 + 8LL))();
LABEL_23:
  v11 = (unsigned __int64)&v1->work_scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_scheduler_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  v1->work_scheduler_.p_ = 0LL;
LABEL_25:
  v11 = (unsigned __int64)&v1->work_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_thread_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v11);
LABEL_59:
    __asan_report_load1(v11);
    goto LABEL_60;
  }
  v2 = (unsigned __int64)v1->work_thread_.p_;
  if ( !v2 )
    goto LABEL_30;
  v11 = v2 + 8;
  if ( *(char *)(((v2 + 8) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_59;
  if ( !*(_BYTE *)(v2 + 8) )
  {
LABEL_60:
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    {
      v12 = v2;
      __asan_report_load8(v2);
      goto LABEL_63;
    }
    pthread_detach(*(_QWORD *)v2);
  }
  operator delete((void *)v2, 0x10uLL);
LABEL_30:
  v12 = (unsigned __int64)&v1->work_scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&v1->work_scheduler_ >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(v12);
    goto LABEL_64;
  }
  v12 = (unsigned __int64)v1->work_scheduler_.p_;
  if ( v12 )
  {
    if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      v13 = *(_QWORD *)v12 + 8LL;
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v12 + 8LL))();
        goto LABEL_35;
      }
LABEL_65:
      __asan_report_load8(v13);
      JUMPOUT(0x19B76F89LL);
    }
LABEL_64:
    __asan_report_load8(v12);
    goto LABEL_65;
  }
LABEL_35:
  pthread_mutex_destroy(&v1->mutex_.mutex_);
  operator delete(v4, 0x68uLL);
};
