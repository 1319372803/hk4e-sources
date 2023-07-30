// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/asio/io_context_strand.hpp

// Line 99: range 000000000BEF943C-000000000BEF949C
void __cdecl boost::asio::io_context::strand::strand(
        boost::asio::io_context::strand *const this,
        boost::asio::io_context *io_context)
{
  boost::asio::detail::strand_service *v2; // rax

  v2 = boost::asio::use_service<boost::asio::detail::strand_service>(io_context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (boost::asio::detail::strand_service *)__asan_report_store8();
  this->service_ = v2;
  boost::asio::detail::strand_service::construct(this->service_, &this->impl_);
};

// Line 113: range 000000000BEF949E-000000000BEF94A8
void __cdecl boost::asio::io_context::strand::~strand(boost::asio::io_context::strand *const this)
{
  ;
};

// Line 118: range 000000000BEF94AA-000000000BEF94E7
boost::asio::io_context *__cdecl boost::asio::io_context::strand::context(
        const boost::asio::io_context::strand *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return boost::asio::io_context::service::get_io_context(this->service_);
};

// Line 127: range 000000000BEF94E8-000000000BEF951A
void __cdecl boost::asio::io_context::strand::on_work_started(const boost::asio::io_context::strand *const this)
{
  boost::asio::io_context *v1; // rax
  boost::asio::io_context::executor_type v2; // [rsp+18h] [rbp-8h] BYREF

  v1 = boost::asio::io_context::strand::context(this);
  v2.io_context_ = boost::asio::io_context::get_executor(v1).io_context_;
  boost::asio::io_context::executor_type::on_work_started(&v2);
};

// Line 136: range 000000000BEF951C-000000000BEF954E
void __cdecl boost::asio::io_context::strand::on_work_finished(const boost::asio::io_context::strand *const this)
{
  boost::asio::io_context *v1; // rax
  boost::asio::io_context::executor_type v2; // [rsp+18h] [rbp-8h] BYREF

  v1 = boost::asio::io_context::strand::context(this);
  v2.io_context_ = boost::asio::io_context::get_executor(v1).io_context_;
  boost::asio::io_context::executor_type::on_work_finished(&v2);
};

// Line 157: range 000000000BF6C502-000000000BF6C673
void __cdecl boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
        const boost::asio::io_context::strand *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 7 tmp:159";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v3 + 32),
    f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
    this->service_,
    &this->impl_,
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)(v3 + 32));
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 157: range 000000000BF6FE4E-000000000BF6FFBF
void __cdecl boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>(
        const boost::asio::io_context::strand *const this,
        boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 7 tmp:159";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::strand::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>> &,std::allocator<void>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::spawn_helper(
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v3 + 32),
    f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::strand_service::dispatch<boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>>(
    this->service_,
    &this->impl_,
    (boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *)(v3 + 32));
  boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,boost::context::basic_fixedsize_stack<boost::context::stack_traits>>::~spawn_helper((boost::asio::detail::spawn_helper<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >,boost::context::basic_fixedsize_stack<boost::context::stack_traits> > *const)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 157: range 000000000BFB0BBE-000000000BFB0CF6
void __cdecl boost::asio::io_context::strand::dispatch<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::strand *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 tmp:159";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::strand::dispatch<boost::asio::executor::function,std::allocator<void>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::asio::executor::function::function((boost::asio::executor::function *const)(v3 + 32), f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::strand_service::dispatch<boost::asio::executor::function>(
    this->service_,
    &this->impl_,
    (boost::asio::executor::function *)(v3 + 32));
  boost::asio::executor::function::~function((boost::asio::executor::function *const)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 208: range 000000000BFB0CF8-000000000BFB0E30
void __cdecl boost::asio::io_context::strand::post<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::strand *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 tmp:210";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::strand::post<boost::asio::executor::function,std::allocator<void>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::asio::executor::function::function((boost::asio::executor::function *const)(v3 + 32), f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::strand_service::post<boost::asio::executor::function>(
    this->service_,
    &this->impl_,
    (boost::asio::executor::function *)(v3 + 32));
  boost::asio::executor::function::~function((boost::asio::executor::function *const)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 255: range 000000000BFB0E32-000000000BFB0F6A
void __cdecl boost::asio::io_context::strand::defer<boost::asio::executor::function,std::allocator<void>>(
        const boost::asio::io_context::strand *const this,
        boost::asio::executor::function *f,
        const std::allocator<void> *a)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 tmp:257";
  *(_QWORD *)(v3 + 16) = boost::asio::io_context::strand::defer<boost::asio::executor::function,std::allocator<void>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::asio::executor::function::function((boost::asio::executor::function *const)(v3 + 32), f);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  boost::asio::detail::strand_service::post<boost::asio::executor::function>(
    this->service_,
    &this->impl_,
    (boost::asio::executor::function *)(v3 + 32));
  boost::asio::executor::function::~function((boost::asio::executor::function *const)(v3 + 32));
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 313: range 000000000BEF954F-000000000BEF95C0
bool __cdecl boost::asio::operator==(
        const boost::asio::io_context::strand *a,
        const boost::asio::io_context::strand *b)
{
  boost::asio::detail::strand_service::strand_impl *impl; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&a->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a->impl_);
  impl = a->impl_;
  if ( *(_BYTE *)(((unsigned __int64)&b->impl_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&b->impl_);
  return impl == b->impl_;
};
