// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/bind_executor.hpp

// Line 178: range 000000000C66DAB2-000000000C66DADA
boost::asio::executor_binder<void (*)(),boost::asio::executor>::executor_type __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get_executor(
        const boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this)
{
  const boost::asio::executor *v1; // rsi

  boost::asio::executor::executor(&this->executor_, v1);
  return (boost::asio::executor_binder<void (*)(),boost::asio::executor>::executor_type)this;
};

// Line 182: range 000000000C6606D6-000000000C6606F0
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::~executor_binder_base(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::executor,false> *const this)
{
  boost::asio::executor::~executor(&this->executor_);
};

// Line 182: range 000000000C6BA9DC-000000000C6BA9F6
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::~executor_binder_base(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::io_context::strand,false> *const this)
{
  boost::asio::io_context::strand::~strand(&this->executor_);
};

// Line 186: range 000000000C66DAEE-000000000C66DB6C
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::executor,void (* const&)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::executor,false> *const this,
        boost::asio::executor *e,
        void (*const *u)(void))
{
  void (*v3)(void); // rdx

  boost::asio::executor::executor(&this->executor_, e);
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v3 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v3;
};

// Line 186: range 000000000C6C9280-000000000C6C92FE
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::executor,void (*)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::executor,false> *const this,
        boost::asio::executor *e,
        void (**u)(void))
{
  void (*v3)(void); // rdx

  boost::asio::executor::executor(&this->executor_, e);
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v3 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v3;
};

// Line 186: range 000000000C703C72-000000000C703D54
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::io_context::strand,void (* const&)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::executor,false> *const this,
        boost::asio::io_context::strand *e,
        void (*const *u)(void))
{
  boost::asio::detail::executor_binder_base<void (*)(),boost::asio::executor,false> *v3; // rcx
  __int64 v4; // rdx
  boost::asio::detail::strand_service::strand_impl *impl; // rdx
  void (*v6)(void); // rdx
  boost::asio::io_context::strand p_e; // [rsp+20h] [rbp-20h] BYREF

  v3 = this;
  v4 = *(unsigned __int16 *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
  if ( (_WORD)v4 )
    __asan_report_load16(e, e, v4);
  impl = e->impl_;
  p_e.service_ = e->service_;
  p_e.impl_ = impl;
  boost::asio::executor::executor<boost::asio::io_context::strand>(&v3->executor_, &p_e);
  boost::asio::io_context::strand::~strand(&p_e);
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v6 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v6;
};

// Line 186: range 000000000C6C9CEA-000000000C6C9DAF
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand const&,void (*)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::io_context::strand,false> *const this,
        const boost::asio::io_context::strand *e,
        void (**u)(void))
{
  __int64 v3; // rdx
  boost::asio::detail::strand_service::strand_impl *impl; // rdx
  void (*v5)(void); // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  v3 = *(unsigned __int16 *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
  if ( (_WORD)v3 )
    __asan_report_load16(e, e, v3);
  impl = e->impl_;
  this->executor_.service_ = e->service_;
  this->executor_.impl_ = impl;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v5 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v5;
};

// Line 186: range 000000000C702568-000000000C70262D
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand,void (* const&)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::io_context::strand,false> *const this,
        boost::asio::io_context::strand *e,
        void (*const *u)(void))
{
  __int64 v3; // rdx
  boost::asio::detail::strand_service::strand_impl *impl; // rdx
  void (*v5)(void); // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  v3 = *(unsigned __int16 *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
  if ( (_WORD)v3 )
    __asan_report_load16(e, e, v3);
  impl = e->impl_;
  this->executor_.service_ = e->service_;
  this->executor_.impl_ = impl;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v5 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v5;
};

// Line 186: range 000000000C6CEE58-000000000C6CEF1D
void __cdecl boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand,void (*)(void)>(
        boost::asio::detail::executor_binder_base<void (*)(),boost::asio::io_context::strand,false> *const this,
        boost::asio::io_context::strand *e,
        void (**u)(void))
{
  __int64 v3; // rdx
  boost::asio::detail::strand_service::strand_impl *impl; // rdx
  void (*v5)(void); // rdx

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  v3 = *(unsigned __int16 *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
  if ( (_WORD)v3 )
    __asan_report_load16(e, e, v3);
  impl = e->impl_;
  this->executor_.service_ = e->service_;
  this->executor_.impl_ = impl;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_load8(u);
  v5 = *u;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->target_ = v5;
};

// Line 300: range 000000000C6C2308-000000000C6C2335
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder<void (*)(void)>(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this,
        boost::asio::executor_arg_t a2,
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::executor_type *e,
        void (**u)(void))
{
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand const&,void (*)(void)>(
    this,
    (const boost::asio::io_context::strand *)a2.gap0[0],
    (void (**)(void))e);
};

// Line 307: range 000000000C6606F2-000000000C660752
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this,
        const boost::asio::executor_binder<void (*)(),boost::asio::executor> *other)
{
  void (*const *v2)(void); // r12
  boost::asio::executor_binder<void (*)(),boost::asio::executor> v3; // [rsp+18h] [rbp-18h] BYREF

  v2 = boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get(other);
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get_executor(&v3);
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::executor,void (* const&)(void)>(
    this,
    &v3.executor_,
    v2);
  boost::asio::executor::~executor(&v3.executor_);
};

// Line 307: range 000000000C70182A-000000000C70188A
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this,
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *other)
{
  void (*const *v2)(void); // r12
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> v3; // [rsp+10h] [rbp-20h] BYREF

  v2 = boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(other);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get_executor(&v3);
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand,void (* const&)(void)>(
    this,
    &v3.executor_,
    v2);
  boost::asio::io_context::strand::~strand(&v3.executor_);
};

// Line 326: range 000000000C703814-000000000C703891
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder<void (*)(void),boost::asio::io_context::strand>(
        boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this,
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *other)
{
  void (*const *v2)(void); // r12
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> v3; // [rsp+10h] [rbp-20h] BYREF

  v2 = boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(other);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get_executor(&v3);
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::io_context::strand,void (* const&)(void)>(
    this,
    &v3.executor_,
    v2);
  boost::asio::io_context::strand::~strand(&v3.executor_);
};

// Line 347: range 000000000C6C1E3A-000000000C6C1E9A
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this,
        boost::asio::executor_binder<void (*)(),boost::asio::executor> *other)
{
  void (**v2)(void); // r12
  boost::asio::executor_binder<void (*)(),boost::asio::executor> v3; // [rsp+18h] [rbp-18h] BYREF

  v2 = boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get(other);
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get_executor(&v3);
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::executor_binder_base<boost::asio::executor,void (*)(void)>(
    this,
    &v3.executor_,
    v2);
  boost::asio::executor::~executor(&v3.executor_);
};

// Line 347: range 000000000C6C9ED0-000000000C6C9F30
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this,
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *other)
{
  void (**v2)(void); // r12
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> v3; // [rsp+10h] [rbp-20h] BYREF

  v2 = boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(other);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get_executor(&v3);
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::executor_binder_base<boost::asio::io_context::strand,void (*)(void)>(
    this,
    &v3.executor_,
    v2);
  boost::asio::io_context::strand::~strand(&v3.executor_);
};

// Line 380: range 000000000C660754-000000000C66076E
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::~executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this)
{
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::executor,false>::~executor_binder_base(this);
};

// Line 380: range 000000000C6BA9F8-000000000C6BAA12
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::~executor_binder(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this)
{
  boost::asio::detail::executor_binder_base<void (*)(void),boost::asio::io_context::strand,false>::~executor_binder_base(this);
};

// Line 385: range 000000000C6C926E-000000000C6C927F
boost::asio::executor_binder<void (*)(),boost::asio::executor>::target_type *__cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get(boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this)
{
  return &this->target_;
};

// Line 385: range 000000000C6CEE46-000000000C6CEE57
boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::target_type *__cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this)
{
  return &this->target_;
};

// Line 391: range 000000000C66DADC-000000000C66DAED
const boost::asio::executor_binder<void (*)(),boost::asio::executor>::target_type *__cdecl boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get(const boost::asio::executor_binder<void (*)(),boost::asio::executor> *const this)
{
  return &this->target_;
};

// Line 391: range 000000000C6CEE34-000000000C6CEE45
const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::target_type *__cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this)
{
  return &this->target_;
};

// Line 397: range 000000000C6CED96-000000000C6CEE05
boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::executor_type __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get_executor(
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this)
{
  unsigned __int64 v1; // rsi
  boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::executor_type result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  if ( *(_WORD *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1);
  result.impl_ = *(boost::asio::detail::strand_service::implementation_type *)(v1 + 8);
  this->executor_.service_ = *(boost::asio::detail::strand_service **)v1;
  this->executor_.impl_ = result.impl_;
  result.service_ = (boost::asio::detail::strand_service *)this;
  return result;
};

// Line 411: range 000000000C700458-000000000C700494
void __cdecl boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::operator()<>(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_);
  this->target_();
};

// Line 498: range 000000000C6BA99A-000000000C6BA9DA
boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *__cdecl boost::asio::bind_executor<boost::asio::io_context::strand,void (*)(void)>(
        boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *retstr,
        const boost::asio::io_context::strand *ex,
        void (**t)(void),
        std::enable_if<true,void>::type *a4)
{
  boost::asio::executor_arg_t v6; // [rsp+2Fh] [rbp-1h] BYREF

  boost::asio::executor_arg_t::executor_arg_t(&v6);
  boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::executor_binder<void (*)(void)>(
    retstr,
    (boost::asio::executor_arg_t)ex,
    (const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>::executor_type *)t,
    (void (**)(void))ex);
  return retstr;
};

// Line 556: range 000000000C6E8D6C-000000000C6E8DA3
boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(),boost::asio::executor>,std::allocator<void> >::type __cdecl boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,std::allocator<void>>::get(
        const boost::asio::executor_binder<void (*)(),boost::asio::executor> *b,
        const std::allocator<void> *a)
{
  boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(),boost::asio::executor>,std::allocator<void> >::type v2; // bl
  void (*const *v3)(void); // rdx

  v3 = boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get(b);
  boost::asio::associated_allocator<void (*)(void),std::allocator<void>>::get(v3, a);
  return v2;
};

// Line 556: range 000000000C6C9DFF-000000000C6C9E36
boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,std::allocator<void> >::type __cdecl boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,std::allocator<void>>::get(
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *b,
        const std::allocator<void> *a)
{
  boost::asio::associated_allocator<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,std::allocator<void> >::type v2; // bl
  void (*const *v3)(void); // rdx

  v3 = boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get(b);
  boost::asio::associated_allocator<void (*)(void),std::allocator<void>>::get(v3, a);
  return v2;
};

// Line 568: range 000000000C6EF583-000000000C6EF5D0
boost::asio::associated_executor<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> >::type __cdecl boost::asio::associated_executor<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::get(
        const boost::asio::executor_binder<void (*)(),boost::asio::executor> *b,
        const boost::asio::detail::io_object_executor<boost::asio::executor> *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::asio::executor_binder<void (*)(void),boost::asio::executor>::get_executor(b);
  return (boost::asio::associated_executor<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> >::type)b;
};

// Line 568: range 000000000C6C9DB0-000000000C6C9DFE
boost::asio::associated_executor<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::asio::system_executor>::type __cdecl boost::asio::associated_executor<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>,boost::asio::system_executor>::get(
        const boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> *b,
        const boost::asio::system_executor *a2)
{
  boost::asio::associated_executor<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand>,boost::asio::system_executor>::type result; // rax

  if ( *(_WORD *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_store16(b);
  result = boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>::get_executor(b);
  result.service_ = (boost::asio::detail::strand_service *)b;
  return result;
};
