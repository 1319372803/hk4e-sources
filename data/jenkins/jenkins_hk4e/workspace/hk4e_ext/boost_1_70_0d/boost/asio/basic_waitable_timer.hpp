// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/basic_waitable_timer.hpp

// Line 353: range 0000000019B8862A-0000000019B887F5
std::size_t __fastcall boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::cancel(
        boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *service; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::implementation_type *p_implementation; // r14
  void *p_might_have_pending_waits; // rbx
  unsigned __int64 v4; // r13
  std::size_t result; // rax
  void *p_scheduler; // rdi
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  boost::system::error_code anonymous0; // [rsp+20h] [rbp+20h] BYREF

  p_might_have_pending_waits = this;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 16 6 ec:355";
  vars0[2] = (__int64)boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::cancel;
  v4 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  LODWORD(vars0[4]) = 0;
  BYTE4(vars0[4]) = 0;
  vars0[5] = (__int64)&boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_9;
  }
  service = this->impl_.service_;
  p_implementation = &this->impl_.implementation_;
  p_might_have_pending_waits = &this->impl_.implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->impl_.implementation_.might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_9:
    __asan_report_load1(p_might_have_pending_waits);
LABEL_10:
    p_scheduler = &service->scheduler_;
    if ( *(_BYTE *)(((unsigned __int64)&service->scheduler_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_scheduler);
    }
    else
    {
      result = boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
                 service->scheduler_,
                 &service->timer_queue_,
                 &p_implementation->timer_data,
                 0xFFFFFFFFFFFFFFFFLL);
      p_scheduler = &p_implementation->might_have_pending_waits;
      if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) >= 0 )
      {
        p_implementation->might_have_pending_waits = 0;
        *(_QWORD *)&anonymous0.val_ = 0LL;
        anonymous0.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
        goto LABEL_7;
      }
    }
    __asan_report_store1(p_scheduler);
    __asan_handle_no_return(p_scheduler);
    boost::asio::detail::do_throw_error(&anonymous0, "cancel");
  }
  if ( this->impl_.implementation_.might_have_pending_waits )
    goto LABEL_10;
  *(_QWORD *)&anonymous0.val_ = 0LL;
  anonymous0.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  result = 0LL;
LABEL_7:
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  return result;
};

// Line 562: range 0000000019B892DE-0000000019B895DC
std::size_t __fastcall boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::expires_after(
        boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor> *const this,
        const boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::duration *expiry_time)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::implementation_type *p_implementation; // r15
  boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor> *v3; // r12
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r14
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep v7; // rax
  __int64 v8; // rax
  std::chrono::duration<long int,std::ratio<1,1000000000> >::rep v9; // rax
  const boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::duration *p_might_have_pending_waits; // rdi
  std::size_t result; // rax
  void *p_scheduler; // rdi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *service; // [rsp+8h] [rbp-B0h]
  __int64 v14; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-A0h] BYREF
  char v16[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = this;
  v4 = (unsigned __int64)expiry_time;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor> *const)96;
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 5 epoch 64 16 6 ec:564";
  *(_QWORD *)(v5 + 16) = boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::expires_after;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  *(_DWORD *)(v5 + 64) = 0;
  *(_BYTE *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v3);
  }
  else
  {
    service = v3->impl_.service_;
    p_implementation = &v3->impl_.implementation_;
    v14 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)this);
    *(_QWORD *)(v5 + 32) = 0LL;
    if ( (unsigned __int8)std::chrono::operator<<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
                            &v14,
                            v5 + 32) )
      goto LABEL_11;
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = std::chrono::operator-<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
           &v15,
           &v14);
    if ( !*(_BYTE *)(((unsigned __int64)expiry_time >> 3) + 0x7FFF8000) )
    {
      if ( v7 < expiry_time->__r )
      {
        v4 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  __asan_report_load8(expiry_time);
LABEL_11:
  v15 = 0x8000000000000000LL;
  v9 = -std::chrono::operator-<std::chrono::_V2::steady_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>(
          &v14,
          &v15);
  if ( *(_BYTE *)(((unsigned __int64)expiry_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(expiry_time);
  }
  else if ( v9 > expiry_time->__r )
  {
    v4 = 0x8000000000000000LL;
    goto LABEL_17;
  }
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)expiry_time >> 3) + 0x7FFF8000) )
  {
    p_might_have_pending_waits = expiry_time;
    __asan_report_load8(expiry_time);
    goto LABEL_24;
  }
  v4 = expiry_time->__r + v14;
LABEL_17:
  p_might_have_pending_waits = (const boost::asio::basic_waitable_timer<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>,boost::asio::executor>::duration *)&p_implementation->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_load1(p_might_have_pending_waits);
    goto LABEL_25;
  }
  if ( !p_implementation->might_have_pending_waits )
  {
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    result = 0LL;
    goto LABEL_20;
  }
LABEL_25:
  p_scheduler = &service->scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&service->scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_scheduler);
    goto LABEL_29;
  }
  result = boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
             service->scheduler_,
             &service->timer_queue_,
             &p_implementation->timer_data,
             0xFFFFFFFFFFFFFFFFLL);
  p_scheduler = &p_implementation->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_29:
    __asan_report_store1(p_scheduler);
    goto LABEL_30;
  }
  p_implementation->might_have_pending_waits = 0;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_20:
  if ( *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  v3->impl_.implementation_.expiry.__d.__r = v4;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return result;
  }
LABEL_31:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  return result;
};
