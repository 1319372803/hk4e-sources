// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/io_object_impl.hpp

// Line 74: range 0000000019B8CB66-0000000019B8D8EF
void __fastcall boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>,boost::asio::executor>::io_object_impl(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *const this,
        const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::executor_type *ex)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  char *v9; // rax
  const char *v10; // rdi
  char v11; // al
  bool v12; // r12
  unsigned __int64 v13; // rdi
  __int64 (**v14)(void); // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::implementation_executor_type *p_implementation_executor; // rax
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *p_has_native_impl; // rdi

  impl = boost::asio::executor::get_impl(ex);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_23;
  }
  v4 = (unsigned __int64)(impl->_vptr_impl_base + 2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v5 = __asan_report_load8(v4);
    goto LABEL_24;
  }
  v5 = (*((__int64 (**)(void))impl->_vptr_impl_base + 2))();
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v5);
    goto LABEL_25;
  }
  v6 = boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>(*(boost::asio::detail::service_registry *const *)v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->service_ = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  this->implementation_.expiry.__d.__r = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->implementation_.timer_data.op_queue_.front_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.op_queue_.back_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  this->implementation_.timer_data.op_queue_.back_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.heap_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
    goto LABEL_30;
  }
  this->implementation_.timer_data.heap_index_ = -1LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.next_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  this->implementation_.timer_data.next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  this->implementation_.timer_data.prev_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v7 = (unsigned __int64)ex;
    __asan_report_load8(ex);
    goto LABEL_33;
  }
  v7 = (unsigned __int64)ex->impl_;
  if ( ex->impl_ )
  {
    if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)v7 + 64LL;
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v9 = (char *)(*(__int64 (**)(void))(*(_QWORD *)v7 + 64LL))();
        goto LABEL_16;
      }
      goto LABEL_34;
    }
LABEL_33:
    __asan_report_load8(v7);
LABEL_34:
    __asan_report_load8(v8);
  }
  v9 = (char *)&`typeinfo for'void;
LABEL_16:
  v10 = v9 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_37;
  }
  v10 = (const char *)*((_QWORD *)v9 + 1);
  if ( v10 == "N5boost4asio10io_context13executor_typeE" )
  {
LABEL_38:
    v12 = 1;
    goto LABEL_39;
  }
  v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)v10 & 7) && v11 )
  {
LABEL_37:
    __asan_report_load1(v10);
    goto LABEL_38;
  }
  v12 = *v10 != 42 && strcmp(v10, "N5boost4asio10io_context13executor_typeE") == 0;
LABEL_39:
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
    v13 = (unsigned __int64)ex;
    __asan_report_load8(ex);
LABEL_51:
    v14 = (__int64 (**)(void))__asan_report_load8(v13);
    goto LABEL_52;
  }
  v13 = (unsigned __int64)ex->impl_;
  if ( !ex->impl_ )
    goto LABEL_44;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_51;
  v14 = *(__int64 (***)(void))v13;
  if ( *(_BYTE *)((*(_QWORD *)v13 >> 3) + 0x7FFF8000LL) )
  {
LABEL_52:
    p_implementation_executor = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::implementation_executor_type *)__asan_report_load8(v14);
    goto LABEL_53;
  }
  v13 = (*v14)();
LABEL_44:
  p_implementation_executor = &this->implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    p_has_native_impl = (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *)p_implementation_executor;
    __asan_report_store8();
    goto LABEL_54;
  }
  this->implementation_executor_.executor_.impl_ = (boost::asio::executor::impl_base *)v13;
  p_has_native_impl = (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *)&this->implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&this->implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_54:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_55;
  }
  this->implementation_executor_.has_native_impl_ = v12;
  p_has_native_impl = (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *)&this->implementation_;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->implementation_.expiry.__d.__r = 0LL;
  p_has_native_impl = (boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor> *)&this->implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->implementation_.might_have_pending_waits >> 3) + 0x7FFF8000) >= 0 )
  {
    this->implementation_.might_have_pending_waits = 0;
    return;
  }
LABEL_56:
  __asan_report_store1(p_has_native_impl);
  boost::asio::detail::handler_work<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::executor>::~handler_work(p_has_native_impl);
};

// Line 74: range 0000000019B8E2B0-0000000019B8F05C
void __fastcall boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this,
        const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::executor_type *ex)
{
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  char *v9; // rax
  const char *v10; // rdi
  char v11; // al
  bool v12; // r12
  unsigned __int64 v13; // rdi
  __int64 (**v14)(void); // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_executor_type *p_implementation_executor; // rax
  void *p_has_native_impl; // rdi
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::date_type d; // [rsp+Ch] [rbp-2Ch] BYREF
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> v18; // [rsp+10h] [rbp-28h] BYREF
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_duration_type time_of_day; // [rsp+18h] [rbp-20h] BYREF

  impl = boost::asio::executor::get_impl(ex);
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(impl);
    goto LABEL_23;
  }
  v4 = (unsigned __int64)(impl->_vptr_impl_base + 2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v5 = __asan_report_load8(v4);
    goto LABEL_24;
  }
  v5 = (*((__int64 (**)(void))impl->_vptr_impl_base + 2))();
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(v5);
    goto LABEL_25;
  }
  v6 = boost::asio::detail::service_registry::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(*(boost::asio::detail::service_registry *const *)v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  this->service_ = v6;
  time_of_day.ticks_.value_ = 0x7FFFFFFFFFFFFFFELL;
  d.days_ = -2;
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
    &v18,
    &d,
    &time_of_day);
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8();
    goto LABEL_27;
  }
  this->implementation_.expiry.time_ = v18;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  this->implementation_.timer_data.op_queue_.front_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.op_queue_.back_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  this->implementation_.timer_data.op_queue_.back_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.heap_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
    goto LABEL_30;
  }
  this->implementation_.timer_data.heap_index_ = -1LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.next_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  this->implementation_.timer_data.next_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_.timer_data.prev_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  this->implementation_.timer_data.prev_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v7 = (unsigned __int64)ex;
    __asan_report_load8(ex);
    goto LABEL_33;
  }
  v7 = (unsigned __int64)ex->impl_;
  if ( ex->impl_ )
  {
    if ( !*(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v8 = *(_QWORD *)v7 + 64LL;
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        v9 = (char *)(*(__int64 (**)(void))(*(_QWORD *)v7 + 64LL))();
        goto LABEL_16;
      }
      goto LABEL_34;
    }
LABEL_33:
    __asan_report_load8(v7);
LABEL_34:
    __asan_report_load8(v8);
  }
  v9 = (char *)&`typeinfo for'void;
LABEL_16:
  v10 = v9 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_37;
  }
  v10 = (const char *)*((_QWORD *)v9 + 1);
  if ( v10 == "N5boost4asio10io_context13executor_typeE" )
  {
LABEL_38:
    v12 = 1;
    goto LABEL_39;
  }
  v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)v10 & 7) && v11 )
  {
LABEL_37:
    __asan_report_load1(v10);
    goto LABEL_38;
  }
  v12 = *v10 != 42 && strcmp(v10, "N5boost4asio10io_context13executor_typeE") == 0;
LABEL_39:
  if ( *(_BYTE *)(((unsigned __int64)ex >> 3) + 0x7FFF8000) )
  {
    v13 = (unsigned __int64)ex;
    __asan_report_load8(ex);
LABEL_51:
    v14 = (__int64 (**)(void))__asan_report_load8(v13);
    goto LABEL_52;
  }
  v13 = (unsigned __int64)ex->impl_;
  if ( !ex->impl_ )
    goto LABEL_44;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_51;
  v14 = *(__int64 (***)(void))v13;
  if ( *(_BYTE *)((*(_QWORD *)v13 >> 3) + 0x7FFF8000LL) )
  {
LABEL_52:
    p_implementation_executor = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_executor_type *)__asan_report_load8(v14);
    goto LABEL_53;
  }
  v13 = (*v14)();
LABEL_44:
  p_implementation_executor = &this->implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    p_has_native_impl = p_implementation_executor;
    __asan_report_store8();
    goto LABEL_54;
  }
  this->implementation_executor_.executor_.impl_ = (boost::asio::executor::impl_base *)v13;
  p_has_native_impl = (void *)&this->implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&this->implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_54:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_55;
  }
  this->implementation_executor_.has_native_impl_ = v12;
  time_of_day.ticks_.value_ = 0x7FFFFFFFFFFFFFFELL;
  d.days_ = -2;
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
    &v18,
    &d,
    &time_of_day);
  p_has_native_impl = &this->implementation_;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  this->implementation_.expiry.time_ = v18;
  p_has_native_impl = &this->implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->implementation_.might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_56:
    __asan_report_store1(p_has_native_impl);
    JUMPOUT(0x19B8E67FLL);
  }
  this->implementation_.might_have_pending_waits = 0;
};

// Line 83: range 000000000C6C291E-000000000C6C2A35
void __cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this,
        boost::asio::io_context *context,
        std::enable_if<true,void>::type *a3)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *v3; // rax
  boost::asio::io_context::executor_type v4; // rax
  boost::asio::executor ex; // [rsp+28h] [rbp-18h] BYREF

  v3 = boost::asio::use_service<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>(context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->service_ = v3;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::implementation_type::implementation_type(&this->implementation_);
  v4.io_context_ = boost::asio::io_context::get_executor(context).io_context_;
  boost::asio::executor::executor<boost::asio::io_context::executor_type>(&ex, v4);
  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(
    &this->implementation_executor_,
    &ex,
    1);
  boost::asio::executor::~executor(&ex);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::construct(
    this->service_,
    &this->implementation_);
};

// Line 83: range 000000000C6A1150-000000000C6A1235
void __cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
        boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this,
        boost::asio::io_context *context,
        std::enable_if<true,void>::type *a3)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *v3; // rax
  boost::asio::io_context::executor_type v4; // rax
  boost::asio::executor ex; // [rsp+28h] [rbp-18h] BYREF

  v3 = boost::asio::use_service<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>(context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->service_ = v3;
  boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type::implementation_type(&this->implementation_);
  v4.io_context_ = boost::asio::io_context::get_executor(context).io_context_;
  boost::asio::executor::executor<boost::asio::io_context::executor_type>(&ex, v4);
  boost::asio::detail::io_object_executor<boost::asio::executor>::io_object_executor(
    &this->implementation_executor_,
    &ex,
    1);
  boost::asio::executor::~executor(&ex);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::reactive_socket_service_base::construct(
    &this->service_->boost::asio::detail::reactive_socket_service_base,
    &this->implementation_);
};

// Line 83: range 0000000019B86132-0000000019B86553
void __fastcall boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
        boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const this,
        boost::asio::io_context *context,
        std::enable_if<true,void>::type *a3)
{
  unsigned __int64 p_implementation; // r13
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r12
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *v7; // rax
  __int64 v8; // rax
  boost::asio::executor::impl_base *impl; // rdi
  int (**vptr_impl_base)(...); // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_executor_type *p_implementation_executor; // rax
  void *p_has_native_impl; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  char v15; // al
  unsigned __int64 v16; // rdx
  char v17; // cl
  char *v18; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rdi
  void *v20; // rdi
  boost::asio::executor v21; // [rsp+8h] [rbp-B0h] BYREF
  std::__shared_ptr<void,(__gnu_cxx::_Lock_policy)2>::element_type *v22; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+18h] [rbp-A0h]
  char v24[152]; // [rsp+20h] [rbp-98h] BYREF

  p_implementation = (unsigned __int64)context;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(context);
    goto LABEL_10;
  }
  v7 = boost::asio::detail::service_registry::use_service<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>(
         context->service_registry_,
         context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  this->service_ = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8();
    goto LABEL_12;
  }
  this->implementation_._M_ptr = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&this->implementation_._M_refcount >> 3) + 0x7FFF8000) )
  {
    this->implementation_._M_refcount._M_pi = 0LL;
    boost::asio::executor::executor<boost::asio::io_context::executor_type>(
      &v21,
      (boost::asio::io_context::executor_type)context);
    goto LABEL_13;
  }
LABEL_12:
  __asan_report_store8();
LABEL_13:
  impl = v21.impl_;
  if ( !v21.impl_ )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)v21.impl_ >> 3) + 0x7FFF8000) )
  {
    vptr_impl_base = (int (**)(...))__asan_report_load8(v21.impl_);
    goto LABEL_25;
  }
  vptr_impl_base = v21.impl_->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)v21.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_implementation_executor = (boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_executor_type *)__asan_report_load8(vptr_impl_base);
    goto LABEL_26;
  }
  impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
LABEL_17:
  p_implementation_executor = &this->implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    p_has_native_impl = p_implementation_executor;
    __asan_report_store8();
    goto LABEL_27;
  }
  this->implementation_executor_.executor_.impl_ = impl;
  p_has_native_impl = (void *)&this->implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&this->implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_28;
  }
  this->implementation_executor_.has_native_impl_ = 1;
  p_has_native_impl = v21.impl_;
  if ( v21.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v21.impl_ >> 3) + 0x7FFF8000) )
    {
      v13 = (unsigned __int64)(v21.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))v21.impl_->_vptr_impl_base + 1))();
        goto LABEL_23;
      }
LABEL_29:
      __asan_report_load8(v13);
      goto LABEL_30;
    }
LABEL_28:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_29;
  }
LABEL_23:
  p_implementation = (unsigned __int64)&this->implementation_;
  v22 = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<void *,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<void*,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
LABEL_30:
  v14 = *(_QWORD *)(v5 + 72);
  v15 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
  {
    __asan_report_store4(v14 + 8);
LABEL_43:
    __asan_report_store4(v16);
    goto LABEL_44;
  }
  *(_DWORD *)(v14 + 8) = 1;
  v16 = v14 + 12;
  v17 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 12) & 7) + 3) >= v17 && v17 )
    goto LABEL_43;
  *(_DWORD *)(v14 + 12) = 1;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  *(_QWORD *)v14 = &`vtable for'std::_Sp_counted_deleter<void *,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  *(_QWORD *)(v14 + 16) = 0LL;
  v23 = v14;
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v18 = (char *)p_implementation;
    __asan_report_store8();
LABEL_47:
    v20 = (void *)__asan_report_load8(v18);
    __cxa_begin_catch(v20);
    __asan_handle_no_return(v20);
    __cxa_rethrow();
  }
  this->implementation_._M_ptr = v22;
  v18 = (char *)(p_implementation + 8);
  if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_implementation + 8);
  *(_QWORD *)(p_implementation + 8) = v23;
  if ( v19 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v19);
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 115: range 000000000C66D9E8-000000000C66DA51
void __cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::~io_object_impl(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::destroy(
    this->service_,
    &this->implementation_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->implementation_executor_);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::implementation_type::~implementation_type(&this->implementation_);
};

// Line 115: range 000000000C67A2BC-000000000C67A319
void __cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl(
        boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::reactive_socket_service_base::destroy(
    &this->service_->boost::asio::detail::reactive_socket_service_base,
    &this->implementation_);
  boost::asio::detail::io_object_executor<boost::asio::executor>::~io_object_executor(&this->implementation_executor_);
};

// Line 115: range 0000000019B89868-0000000019B89A36
void __fastcall boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>,boost::asio::executor>::~io_object_impl(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *const this)
{
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::implementation_type *p_implementation; // rbp
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *service; // rsi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *v3; // rbx
  unsigned __int64 p_scheduler; // rdi
  unsigned __int64 v5; // rdx
  boost::asio::detail::epoll_reactor *scheduler; // rdi
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *v7; // rdi
  void *p_key; // rdi
  boost::asio::detail::timer_queue_base *type_info; // rax
  int (**vptr_service)(...); // rax
  int v11; // [rsp+0h] [rbp-28h] BYREF
  char v12; // [rsp+4h] [rbp-24h]
  const boost::system::detail::system_error_category *v13; // [rsp+8h] [rbp-20h]

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_11;
  }
  service = this->service_;
  p_implementation = &this->implementation_;
  this = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *const)((char *)this + 16);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_11:
    __asan_report_load1(this);
    goto LABEL_12;
  }
  if ( !p_implementation->might_have_pending_waits )
    goto LABEL_4;
LABEL_12:
  p_scheduler = (unsigned __int64)&service->scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&service->scheduler_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_scheduler);
    goto LABEL_16;
  }
  scheduler = service->scheduler_;
  service = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *)((char *)service + 40);
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>(
    scheduler,
    (boost::asio::detail::timer_queue<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > > *)service,
    &p_implementation->timer_data,
    0xFFFFFFFFFFFFFFFFLL);
  p_scheduler = (unsigned __int64)&p_implementation->might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&p_implementation->might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_16:
    __asan_report_store1(p_scheduler);
    goto LABEL_17;
  }
  p_implementation->might_have_pending_waits = 0;
LABEL_4:
  p_scheduler = (unsigned __int64)&v3->implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_scheduler);
    goto LABEL_18;
  }
  p_scheduler = (unsigned __int64)v3->implementation_executor_.executor_.impl_;
  if ( p_scheduler )
  {
    if ( !*(_BYTE *)((p_scheduler >> 3) + 0x7FFF8000) )
    {
      v5 = *(_QWORD *)p_scheduler + 8LL;
      if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64, boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *))(*(_QWORD *)p_scheduler + 8LL))(
          p_scheduler,
          service);
        goto LABEL_9;
      }
LABEL_19:
      v7 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *)v5;
      __asan_report_load8(v5);
      goto LABEL_20;
    }
LABEL_18:
    __asan_report_load8(p_scheduler);
    goto LABEL_19;
  }
LABEL_9:
  v3 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *)((char *)v3 + 24);
  while ( 1 )
  {
    v7 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
LABEL_20:
      __asan_report_load8(v7);
LABEL_21:
      __asan_report_load8(v7);
LABEL_22:
      v3->implementation_.expiry.__d.__r = 0LL;
      goto LABEL_23;
    }
    service = v3->service_;
    if ( !v3->service_ )
      return;
    v7 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor> *)v3->service_;
    if ( *(_BYTE *)(((unsigned __int64)service >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    vptr_service = service->_vptr_service;
    v3->service_ = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *)service->_vptr_service;
    if ( !vptr_service )
      break;
LABEL_23:
    service->_vptr_service = 0LL;
    p_key = &service->key_;
    if ( *(_BYTE *)(((unsigned __int64)&service->key_ >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    type_info = (boost::asio::detail::timer_queue_base *)service->key_.type_info_;
    v11 = 0;
    v12 = 0;
    v13 = &boost::system::detail::cat_holder<void>::system_category_instance;
    ((void (__fastcall *)(_QWORD, boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock> > >,boost::asio::executor>::service_type *, int *, _QWORD))type_info)(
      0LL,
      service,
      &v11,
      0LL);
  }
  p_key = &v3->implementation_;
  if ( !*(_BYTE *)(((unsigned __int64)&v3->implementation_ >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  __asan_report_store8();
LABEL_31:
  __asan_report_load8(p_key);
};

// Line 144: range 000000000C6D625C-000000000C6D626D
const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_executor_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation_executor(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  return &this->implementation_executor_;
};

// Line 144: range 000000000C6CE434-000000000C6CE445
const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_executor_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation_executor(
        boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  return &this->implementation_executor_;
};

// Line 151: range 000000000C6C2A36-000000000C6C2A6B
boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->service_;
};

// Line 151: range 000000000C66D512-000000000C66D547
boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(
        boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->service_;
};

// Line 157: range 000000000C6CA718-000000000C6CA74D
const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_service(
        const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->service_;
};

// Line 157: range 000000000C6BB830-000000000C6BB865
const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::service_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_service(
        const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->service_;
};

// Line 163: range 000000000C6C2A6C-000000000C6C2A7D
boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(
        boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  return &this->implementation_;
};

// Line 163: range 000000000C66D548-000000000C66D559
boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(
        boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  return &this->implementation_;
};

// Line 169: range 000000000C6CA74E-000000000C6CA75F
const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::get_implementation(
        const boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor> *const this)
{
  return &this->implementation_;
};

// Line 169: range 000000000C6BB866-000000000C6BB877
const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::implementation_type *__cdecl boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor>::get_implementation(
        const boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::executor> *const this)
{
  return &this->implementation_;
};
