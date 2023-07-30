// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/connect.hpp

// Line 297: range 0000000019B8C7D4-0000000019B8CB64
void __fastcall boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::~range_connect_op(
        boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const this)
{
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > *p_handler; // rbx
  unsigned __int64 p_clear; // rdi
  char v4; // al
  char v5; // al
  boost::detail::sp_counted_base *pi; // rdi
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > *p_h; // r12
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v9; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi

  p_handler = &this->handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) )
  {
    p_clear = (unsigned __int64)&this->handler_;
    __asan_report_store8();
    goto LABEL_31;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>
                                                  + 2);
  p_clear = (unsigned __int64)&this->handler_.pg1_.clear_;
  if ( *(char *)(((unsigned __int64)&p_handler->pg1_.clear_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_31:
    __asan_report_load1(p_clear);
LABEL_32:
    __asan_report_load8(p_clear);
LABEL_33:
    __asan_report_store1(p_clear);
    goto LABEL_34;
  }
  if ( !p_handler->pg1_.clear_ )
    goto LABEL_8;
  p_clear = (unsigned __int64)&p_handler->pg1_;
  if ( *(_BYTE *)(((unsigned __int64)&p_handler->pg1_ >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  p_clear = (unsigned __int64)p_handler->pg1_.b_;
  v4 = *(_BYTE *)((p_clear >> 3) + 0x7FFF8000);
  if ( v4 <= ((__int64)p_handler->pg1_.b_ & 7) && v4 )
    goto LABEL_33;
  *(_BYTE *)p_clear = 0;
LABEL_8:
  p_clear = (unsigned __int64)&p_handler->pg0_.clear_;
  if ( *(char *)(((unsigned __int64)&p_handler->pg0_.clear_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_34:
    __asan_report_load1(p_clear);
LABEL_35:
    __asan_report_load8(p_clear);
LABEL_36:
    __asan_report_store1(p_clear);
    goto LABEL_37;
  }
  if ( !p_handler->pg0_.clear_ )
    goto LABEL_14;
  p_clear = (unsigned __int64)&p_handler->pg0_;
  if ( *(_BYTE *)(((unsigned __int64)&p_handler->pg0_ >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  p_clear = (unsigned __int64)p_handler->pg0_.b_;
  v5 = *(_BYTE *)((p_clear >> 3) + 0x7FFF8000);
  if ( v5 <= ((__int64)p_handler->pg0_.b_ & 7) && v5 )
    goto LABEL_36;
  *(_BYTE *)p_clear = 0;
LABEL_14:
  p_clear = (unsigned __int64)&p_handler->impl_.pn;
  if ( *(_BYTE *)(((unsigned __int64)&p_handler->impl_.pn >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_clear);
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  pi = p_handler->impl_.pn.pi_;
  if ( pi )
    boost::detail::sp_counted_base::release(pi);
  if ( *(_BYTE *)(((unsigned __int64)p_handler >> 3) + 0x7FFF8000) )
    goto LABEL_38;
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&p_handler->wg1_);
  p_h = &p_handler->h_;
  p_handler = (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > *)((char *)p_handler + 32);
  if ( *(_BYTE *)(((unsigned __int64)p_handler >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    impl = (boost::asio::executor::impl_base *)p_handler;
    __asan_report_load8(p_handler);
LABEL_40:
    __asan_report_load8(impl);
    goto LABEL_41;
  }
  impl = p_h->handler_.executor_.impl_;
  if ( !impl )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)impl >> 3) + 0x7FFF8000) )
    goto LABEL_40;
  v9 = (unsigned __int64)(impl->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v9;
    __asan_report_load8(v9);
    goto LABEL_42;
  }
  (*((void (**)(void))impl->_vptr_impl_base + 1))();
LABEL_23:
  p_M_refcount = &p_h->coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&p_h->coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_refcount);
    goto LABEL_43;
  }
  M_pi = p_h->coro_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  p_M_refcount = &this->endpoints_.values_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_.values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_refcount);
    JUMPOUT(0x19B8CA11LL);
  }
  v12 = this->endpoints_.values_._M_refcount._M_pi;
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
};

// Line 324: range 0000000019B95E0C-0000000019B966A7
void __fastcall boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::range_connect_op(
        boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const this,
        boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *other)
{
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > *p_handler; // rbp
  unsigned __int64 p_h; // r12
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > *v4; // r13
  boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> *p_endpoints; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v9; // rdx
  volatile signed __int32 *p_M_use_count; // rdi
  char v11; // dl
  void *p_index; // rdi
  char v13; // al
  char v14; // al
  unsigned __int64 p_ca; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rax
  __int64 (**v17)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v18; // rax
  void *p_target; // rdi
  boost::asio::executor_work_guard<boost::asio::executor> *p_impl; // rdi
  boost::detail::sp_counted_base *pi; // rax
  char v22; // al
  bool clear; // dl
  char v24; // al
  bool v25; // dl
  char v26; // cl

  if ( *(_BYTE *)(((unsigned __int64)&other->socket_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&other->socket_);
    goto LABEL_62;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->socket_ >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8();
    goto LABEL_63;
  }
  this->socket_ = other->socket_;
  p_endpoints = &other->endpoints_;
  if ( *(_BYTE *)(((unsigned __int64)&other->endpoints_ >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_endpoints);
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_store8();
    goto LABEL_65;
  }
  this->endpoints_.values_._M_ptr = other->endpoints_.values_._M_ptr;
  p_M_refcount = &other->endpoints_.values_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&other->endpoints_.values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(p_M_refcount);
    goto LABEL_66;
  }
  M_pi = other->endpoints_.values_._M_refcount._M_pi;
  v9 = &this->endpoints_.values_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_.values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    p_M_use_count = (volatile signed __int32 *)v9;
    __asan_report_store8();
    goto LABEL_67;
  }
  this->endpoints_.values_._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_12;
  p_M_use_count = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_68;
  v11 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v11 || !v11 )
  {
    _InterlockedAdd(p_M_use_count, 1u);
    goto LABEL_12;
  }
LABEL_67:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_68:
  p_index = &M_pi->_M_use_count;
  v26 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v26 && v26 )
  {
    __asan_report_load4(p_index);
    goto LABEL_72;
  }
  ++M_pi->_M_use_count;
LABEL_12:
  p_index = &other->endpoints_.index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->endpoints_.index_ >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_load8(p_index);
    goto LABEL_73;
  }
  p_index = &this->endpoints_.index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_.index_ >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8();
    goto LABEL_74;
  }
  this->endpoints_.index_ = other->endpoints_.index_;
  p_index = &other->index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->index_ >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8(p_index);
    goto LABEL_75;
  }
  p_index = &this->index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_ >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8();
LABEL_76:
    __asan_report_load4(p_index);
LABEL_77:
    __asan_report_store4(p_index);
    goto LABEL_78;
  }
  this->index_ = other->index_;
  p_index = &other->start_;
  v13 = *(_BYTE *)(((unsigned __int64)&other->start_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_76;
  p_index = &this->start_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_77;
  this->start_ = other->start_;
  p_handler = &this->handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
    goto LABEL_79;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>,boost::asio::executor,std::allocator<void>>
                                                  + 2);
  p_h = (unsigned __int64)&this->handler_.h_;
  v4 = &other->handler_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(v4);
    goto LABEL_80;
  }
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    p_ca = p_h;
    __asan_report_store8();
    goto LABEL_81;
  }
  this->handler_.h_.coro_._M_ptr = other->handler_.h_.coro_._M_ptr;
  p_ca = (unsigned __int64)&this->handler_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  this->handler_.h_.coro_._M_refcount._M_pi = 0LL;
  p_ca = (unsigned __int64)&other->handler_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_ca);
    goto LABEL_83;
  }
  v16 = other->handler_.h_.coro_._M_refcount._M_pi;
  other->handler_.h_.coro_._M_refcount._M_pi = 0LL;
  this->handler_.h_.coro_._M_refcount._M_pi = v16;
  other->handler_.h_.coro_._M_ptr = 0LL;
  p_ca = (unsigned __int64)&other->handler_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load8(p_ca);
    goto LABEL_84;
  }
  p_ca = (unsigned __int64)&this->handler_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8();
    goto LABEL_85;
  }
  this->handler_.h_.ca_ = other->handler_.h_.ca_;
  p_ca = (unsigned __int64)&other->handler_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(p_ca);
LABEL_86:
    v17 = (__int64 (**)(void))__asan_report_load8(p_ca);
    goto LABEL_87;
  }
  p_ca = (unsigned __int64)other->handler_.h_.handler_.executor_.impl_;
  if ( !p_ca )
    goto LABEL_32;
  if ( *(_BYTE *)((p_ca >> 3) + 0x7FFF8000) )
    goto LABEL_86;
  v17 = *(__int64 (***)(void))p_ca;
  if ( *(_BYTE *)((*(_QWORD *)p_ca >> 3) + 0x7FFF8000LL) )
  {
LABEL_87:
    v18 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v17);
    goto LABEL_88;
  }
  p_ca = (*v17)();
LABEL_32:
  v18 = &this->handler_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    p_target = v18;
    __asan_report_store8();
    goto LABEL_89;
  }
  this->handler_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_ca;
  p_target = &other->handler_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(p_target);
    goto LABEL_90;
  }
  p_target = &this->handler_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    __asan_report_store8();
    goto LABEL_91;
  }
  this->handler_.h_.handler_.target_ = other->handler_.h_.handler_.target_;
  p_target = &other->handler_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_target);
    goto LABEL_92;
  }
  p_target = &this->handler_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  this->handler_.h_.ready_ = other->handler_.h_.ready_;
  p_target = &other->handler_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(p_target);
    goto LABEL_94;
  }
  p_target = &this->handler_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8();
    goto LABEL_95;
  }
  this->handler_.h_.ec_ = other->handler_.h_.ec_;
  p_target = &other->handler_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(p_target);
    goto LABEL_96;
  }
  p_target = &this->handler_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_store8();
    goto LABEL_97;
  }
  this->handler_.h_.value_ = other->handler_.h_.value_;
  p_target = &other->handler_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_load8(p_target);
    goto LABEL_98;
  }
  p_target = &this->handler_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  this->handler_.wg1_.executor_.impl_ = other->handler_.wg1_.executor_.impl_;
  other->handler_.wg1_.executor_.impl_ = 0LL;
  p_target = &other->handler_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&other->handler_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_99:
    __asan_report_load1(p_target);
    goto LABEL_100;
  }
  p_target = &this->handler_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&this->handler_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_100:
    __asan_report_store1(p_target);
    goto LABEL_101;
  }
  this->handler_.wg1_.owns_ = other->handler_.wg1_.owns_;
  other->handler_.wg1_.owns_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)p_handler >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)p_handler;
    __asan_report_store8();
    goto LABEL_102;
  }
  this->handler_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>
                                                  + 2);
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.impl_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(p_impl);
    goto LABEL_103;
  }
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.impl_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.impl_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_store8();
    goto LABEL_104;
  }
  this->handler_.impl_.px = other->handler_.impl_.px;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.impl_.pn;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.impl_.pn >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8();
    goto LABEL_105;
  }
  this->handler_.impl_.pn.pi_ = 0LL;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.impl_.pn;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.impl_.pn >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(p_impl);
    goto LABEL_106;
  }
  pi = other->handler_.impl_.pn.pi_;
  other->handler_.impl_.pn.pi_ = 0LL;
  this->handler_.impl_.pn.pi_ = pi;
  other->handler_.impl_.px = 0LL;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.pg0_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.pg0_ >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(p_impl);
    goto LABEL_107;
  }
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.pg0_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.pg0_ >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_store8();
LABEL_108:
    __asan_report_load1(p_impl);
    goto LABEL_109;
  }
  this->handler_.pg0_.b_ = other->handler_.pg0_.b_;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.pg0_.clear_;
  v22 = *(_BYTE *)(((unsigned __int64)&other->handler_.pg0_.clear_ >> 3) + 0x7FFF8000);
  if ( v22 <= (((unsigned __int8)other - 88) & 7) && v22 )
    goto LABEL_108;
  clear = other->handler_.pg0_.clear_;
  other->handler_.pg0_.clear_ = 0;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.pg0_.clear_;
  if ( *(char *)(((unsigned __int64)&this->handler_.pg0_.clear_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_109:
    __asan_report_store1(p_impl);
    goto LABEL_110;
  }
  this->handler_.pg0_.clear_ = clear;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.pg1_;
  if ( *(_BYTE *)(((unsigned __int64)&other->handler_.pg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_load8(p_impl);
    goto LABEL_111;
  }
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.pg1_;
  if ( *(_BYTE *)(((unsigned __int64)&this->handler_.pg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
LABEL_112:
    __asan_report_load1(p_impl);
    goto LABEL_113;
  }
  this->handler_.pg1_.b_ = other->handler_.pg1_.b_;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&other->handler_.pg1_.clear_;
  v24 = *(_BYTE *)(((unsigned __int64)&other->handler_.pg1_.clear_ >> 3) + 0x7FFF8000);
  if ( v24 <= (((unsigned __int8)other - 72) & 7) && v24 )
    goto LABEL_112;
  v25 = other->handler_.pg1_.clear_;
  other->handler_.pg1_.clear_ = 0;
  p_impl = (boost::asio::executor_work_guard<boost::asio::executor> *)&this->handler_.pg1_.clear_;
  if ( *(char *)(((unsigned __int64)&this->handler_.pg1_.clear_ >> 3) + 0x7FFF8000) >= 0 )
  {
    this->handler_.pg1_.clear_ = v25;
    return;
  }
LABEL_113:
  __asan_report_store1(p_impl);
  boost::asio::executor_work_guard<boost::asio::executor>::reset(p_impl);
};

// Line 335: range 0000000019BAB05C-0000000019BAB2B4
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::operator()(
        boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> > > > *const this,
        boost::system::error_code ec,
        int start)
{
  __int64 v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rbp
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdx
  volatile signed __int32 *p_M_use_count; // rdi
  char v12; // cl
  std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type *v13; // rdx
  __int64 v14; // rsi OVERLAPPED
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v15; // rdx
  __int64 v16; // rax
  char v17; // si
  boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp> v18; // [rsp+0h] [rbp-E8h]
  boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp> end; // [rsp+18h] [rbp-D0h]
  char v20[152]; // [rsp+50h] [rbp-98h] BYREF

  v4 = *(_QWORD *)&ec.val_;
  v18.values_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ec.cat_;
  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v6 = v16;
  }
  v7 = v6 + 96;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 24 3 tmp";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::operator();
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218103808;
  v8[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->endpoints_);
    goto LABEL_13;
  }
  *(_QWORD *)(v6 + 32) = this->endpoints_.values_._M_ptr;
  p_M_refcount = &this->endpoints_.values_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->endpoints_.values_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    p_M_use_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_14:
    v7 = __asan_report_store4(p_M_use_count);
    goto LABEL_15;
  }
  M_pi = this->endpoints_.values_._M_refcount._M_pi;
  *(_QWORD *)(v6 + 40) = M_pi;
  if ( !M_pi )
  {
LABEL_9:
    *(_QWORD *)(v7 - 48) = 0LL;
    v18.index_ = *(_QWORD *)(v7 - 64);
    v13 = *(std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v7 - 56);
    *(_QWORD *)(v7 - 56) = 0LL;
    end.values_._M_ptr = v13;
    end.values_._M_refcount._M_pi = 0LL;
    v14 = v4;
    v15 = v18.values_._M_refcount._M_pi;
    boost::asio::detail::range_connect_op<boost::asio::ip::tcp,boost::asio::executor,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::beast::detail::any_endpoint,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::ops::connect_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp>>>>::process<boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>>(
      this,
      *(boost::system::error_code *)&v14,
      start,
      v18,
      end);
    goto LABEL_19;
  }
  p_M_use_count = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v12 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v12 || !v12 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_9;
    }
    goto LABEL_14;
  }
LABEL_15:
  v17 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v17 || !v17 )
  {
    ++M_pi->_M_use_count;
    goto LABEL_9;
  }
  __asan_report_load4(&M_pi->_M_use_count);
LABEL_19:
  if ( end.values_._M_ptr )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)end.values_._M_ptr);
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};
