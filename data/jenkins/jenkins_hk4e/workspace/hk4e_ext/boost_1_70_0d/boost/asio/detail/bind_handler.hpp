// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/bind_handler.hpp

// Line 33: range 000000000C6DBAAC-000000000C6DBAC6
void __cdecl boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::~binder1(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const this)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(&this->handler_);
};

// Line 43: range 000000000C6E9574-000000000C6E96D7
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::system::error_code *arg1)
{
  __int64 v3; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx
  const boost::system::error_category *cat; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 32LL);
  }
  if ( *(char *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&handler->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)handler + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&handler->l_.a3_.t_ + 7) >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load_n(handler, 32LL);
  }
  v3 = *((_QWORD *)&handler->f_.f_ + 1);
  this->handler_.f_.f_ = handler->f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v3;
  t = handler->l_.a3_.t_;
  this->handler_.l_.a1_.t_ = handler->l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)arg1 >> 3) + 0x7FFF8000) )
    __asan_report_load16(arg1);
  cat = arg1->cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&arg1->val_;
  this->arg1_.cat_ = cat;
};

// Line 43: range 000000000C6EADA8-000000000C6EAF0B
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this,
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *handler,
        const boost::system::error_code *arg1)
{
  __int64 v3; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx
  const boost::system::error_category *cat; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 32LL);
  }
  if ( *(char *)(((unsigned __int64)handler >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&handler->l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)handler + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&handler->l_.a3_.t_ + 7) >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load_n(handler, 32LL);
  }
  v3 = *((_QWORD *)&handler->f_.f_ + 1);
  this->handler_.f_.f_ = handler->f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v3;
  t = handler->l_.a3_.t_;
  this->handler_.l_.a1_.t_ = handler->l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)arg1 >> 3) + 0x7FFF8000) )
    __asan_report_load16(arg1);
  cat = arg1->cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&arg1->val_;
  this->arg1_.cat_ = cat;
};

// Line 43: range 000000000C6E2322-000000000C6E23AA
void __cdecl boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const this,
        boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *handler,
        const boost::system::error_code *arg1)
{
  const boost::system::error_category *cat; // rdx

  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    &this->handler_,
    handler);
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)arg1 >> 3) + 0x7FFF8000) )
    __asan_report_load16(arg1);
  cat = arg1->cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&arg1->val_;
  this->arg1_.cat_ = cat;
};

// Line 56: range 000000000C6F415C-000000000C6F42C0
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *other)
{
  __int64 v2; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx
  const boost::system::error_category *cat; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 32LL);
  }
  if ( *(char *)(((unsigned __int64)other >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&other->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)other + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&other->handler_.l_.a3_.t_ + 7) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(other, 32LL);
  }
  v2 = *((_QWORD *)&other->handler_.f_.f_ + 1);
  this->handler_.f_.f_ = other->handler_.f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v2;
  t = other->handler_.l_.a3_.t_;
  this->handler_.l_.a1_.t_ = other->handler_.l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)&other->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_load16(&other->arg1_);
  cat = other->arg1_.cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&other->arg1_.val_;
  this->arg1_.cat_ = cat;
};

// Line 56: range 000000000C6F56EC-000000000C6F5850
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *other)
{
  __int64 v2; // rdx
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *t; // rdx
  const boost::system::error_category *cat; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->handler_.l_.a3_.t_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 32LL);
  }
  if ( *(char *)(((unsigned __int64)other >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&other->handler_.l_.a3_.t_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)other + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&other->handler_.l_.a3_.t_ + 7) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(other, 32LL);
  }
  v2 = *((_QWORD *)&other->handler_.f_.f_ + 1);
  this->handler_.f_.f_ = other->handler_.f_.f_;
  *((_QWORD *)&this->handler_.f_.f_ + 1) = v2;
  t = other->handler_.l_.a3_.t_;
  this->handler_.l_.a1_.t_ = other->handler_.l_.a1_.t_;
  this->handler_.l_.a3_.t_ = t;
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)&other->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_load16(&other->arg1_);
  cat = other->arg1_.cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&other->arg1_.val_;
  this->arg1_.cat_ = cat;
};

// Line 56: range 000000000C6EF324-000000000C6EF3AD
void __cdecl boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::binder1(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const this,
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *other)
{
  const boost::system::error_category *cat; // rdx

  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    &this->handler_,
    &other->handler_);
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->arg1_);
  if ( *(_WORD *)(((unsigned __int64)&other->arg1_ >> 3) + 0x7FFF8000) )
    __asan_report_load16(&other->arg1_);
  cat = other->arg1_.cat_;
  *(_QWORD *)&this->arg1_.val_ = *(_QWORD *)&other->arg1_.val_;
  this->arg1_.cat_ = cat;
};

// Line 63: range 000000000C701CA0-000000000C701CC5
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::operator()(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this)
{
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>(
    &this->handler_,
    &this->arg1_);
};

// Line 63: range 000000000C70210C-000000000C702131
void __cdecl boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>::operator()(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *const this)
{
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>(
    &this->handler_,
    &this->arg1_);
};

// Line 63: range 000000000C6FE542-000000000C6FE592
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>::operator()(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *const this)
{
  boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *v1; // rcx
  __int64 *p_val; // rax
  __int64 v3; // rsi OVERLAPPED
  __int64 v4; // rdx

  v1 = this;
  p_val = (__int64 *)&this->arg1_.val_;
  if ( *(_WORD *)(((unsigned __int64)&this->arg1_ >> 3) + 0x7FFF8000) )
    p_val = (__int64 *)__asan_report_load16(&this->arg1_);
  v3 = *p_val;
  v4 = p_val[1];
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::operator()(
    &v1->handler_,
    *(boost::system::error_code *)&v3);
};

// Line 103: range 000000000C6FA1C6-000000000C6FA1EB
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *function,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *this_handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(
    function,
    &this_handler->handler_);
};

// Line 103: range 000000000C6FC6A8-000000000C6FC6CD
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>(
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *function,
        boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > >,boost::system::error_code> *this_handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>,boost::system::error_code>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>>(
    function,
    &this_handler->handler_);
};

// Line 103: range 000000000C6F918A-000000000C6F91AF
void __cdecl boost::asio::detail::asio_handler_invoke<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>(
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *function,
        boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void>,boost::system::error_code> *this_handler)
{
  boost_asio_handler_invoke_helpers::invoke<boost::asio::detail::binder1<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>,boost::system::error_code>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>(
    function,
    &this_handler->handler_);
};
