// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/bind/mem_fn_template.hpp

// Line 110: range 000000000BF188DC-000000000BF18933
void __cdecl boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::cmf0(
        boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *const this,
        boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 118: range 000000000BF2E86C-000000000BF2E97C
bool __cdecl boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::operator()(
        const boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *const this,
        const boost::shared_mutex::state_data *t)
{
  const boost::shared_mutex::state_data *v2; // rcx
  unsigned __int64 v3; // rax
  __int64 (__fastcall **v4)(const boost::shared_mutex::state_data *); // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v2 = (const boost::shared_mutex::state_data *)((char *)t + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v3 = (unsigned __int64)t + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)t + *((_QWORD *)&this->f_ + 1));
    v4 = (__int64 (__fastcall **)(const boost::shared_mutex::state_data *))((char *)this->f_ + *(_QWORD *)v3 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4);
    return (*v4)(v2);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    return this->f_(v2);
  }
};

// Line 161: range 000000000BF64492-000000000BF644E9
void __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::mf1(
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 161: range 000000000BF71D84-000000000BF71DDB
void __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>::mf1(
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 161: range 000000000BF66960-000000000BF669B7
void __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::mf1(
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 161: range 000000000BF74B72-000000000BF74BC9
void __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>::mf1(
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 161: range 000000000BF650D0-000000000BF65127
void __cdecl boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>::mf1(
        boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *const this,
        boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 161: range 000000000BF6724E-000000000BF672A5
void __cdecl boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>::mf1(
        boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *const this,
        boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 163: range 000000000BFAC5C6-000000000BFAC72A
int __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::operator()(
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *const this,
        common::minet::AServerMgr<GateserverSession> *p,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *p_a1)
{
  char *v3; // r12
  unsigned __int64 v4; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F *v5; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F f; // rbx
  int v7; // ebx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v10; // [rsp+20h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (char *)p + *((_QWORD *)&this->f_ + 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F *)((char *)this->f_ + *(_QWORD *)v4 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    f = *v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    f = this->f_;
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v10,
    p_a1);
  v7 = ((__int64 (__fastcall *)(char *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))f)(
         v3,
         &v10);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v10);
  return v7;
};

// Line 163: range 000000000BF92A5E-000000000BF92B79
int __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>::operator()(
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const this,
        common::minet::AServerMgr<GateserverSession> *p,
        common::minet::AServerSession *a1)
{
  common::minet::AServerMgr<GateserverSession> *v3; // rcx
  unsigned __int64 v4; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F *v5; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (common::minet::AServerMgr<GateserverSession> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F *)((char *)this->f_ + *(_QWORD *)v4 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    f = *v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    f = this->f_;
  }
  return f(v3, a1);
};

// Line 163: range 000000000BFACC96-000000000BFACDFA
int __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::operator()(
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *const this,
        common::minet::AServerMgr<HttpSession> *p,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *p_a1)
{
  char *v3; // r12
  unsigned __int64 v4; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F *v5; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F f; // rbx
  int v7; // ebx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v10; // [rsp+20h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (char *)p + *((_QWORD *)&this->f_ + 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F *)((char *)this->f_ + *(_QWORD *)v4 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    f = *v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    f = this->f_;
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v10,
    p_a1);
  v7 = ((__int64 (__fastcall *)(char *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *))f)(
         v3,
         &v10);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v10);
  return v7;
};

// Line 163: range 000000000BF94678-000000000BF94793
int __cdecl boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>::operator()(
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const this,
        common::minet::AServerMgr<HttpSession> *p,
        common::minet::AServerSession *a1)
{
  common::minet::AServerMgr<HttpSession> *v3; // rcx
  unsigned __int64 v4; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F *v5; // rax
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (common::minet::AServerMgr<HttpSession> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F *)((char *)this->f_ + *(_QWORD *)v4 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    f = *v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    f = this->f_;
  }
  return f(v3, a1);
};

// Line 163: range 000000000BFB3342-000000000BFB345E
void __cdecl boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>::operator()(
        const boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *const this,
        common::minet::AServerMgr<GateserverSession> *p,
        unsigned __int16 a1)
{
  common::minet::AServerMgr<GateserverSession> *v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (common::minet::AServerMgr<GateserverSession> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (unsigned __int64)this->f_ + *(_QWORD *)v4 - 1;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    (*(void (__fastcall **)(common::minet::AServerMgr<GateserverSession> *, _QWORD))v5)(v3, a1);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    this->f_(v3, a1);
  }
};

// Line 163: range 000000000BFB31F4-000000000BFB3310
void __cdecl boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>::operator()(
        const boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *const this,
        common::minet::AServerMgr<HttpSession> *p,
        unsigned __int16 a1)
{
  common::minet::AServerMgr<HttpSession> *v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v3 = (common::minet::AServerMgr<HttpSession> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v4 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8((char *)p + *((_QWORD *)&this->f_ + 1));
    v5 = (unsigned __int64)this->f_ + *(_QWORD *)v4 - 1;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    (*(void (__fastcall **)(common::minet::AServerMgr<HttpSession> *, _QWORD))v5)(v3, a1);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    this->f_(v3, a1);
  }
};

// Line 276: range 000000000BF726C8-000000000BF7271F
void __cdecl boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>::mf2(
        boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const this,
        boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 276: range 000000000BF750AA-000000000BF75101
void __cdecl boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>::mf2(
        boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const this,
        boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 276: range 000000000BF6CA4C-000000000BF6CAA3
void __cdecl boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::mf2(
        boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this,
        boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 276: range 000000000BF6FFC0-000000000BF70017
void __cdecl boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::mf2(
        boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this,
        boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F f)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = v2;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  this->f_ = f;
  *((_QWORD *)&this->f_ + 1) = v3;
};

// Line 278: range 000000000BFA1F1A-000000000BFA2036
int __cdecl boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>::operator()(
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const this,
        common::minet::AServerMgr<GateserverSession> *p,
        common::minet::AServerSession *a1,
        unsigned int a2)
{
  const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *v4; // rdi
  unsigned __int64 v5; // rax
  const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *v6; // rax
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v4 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v4 = this;
    __asan_report_load8(this);
  }
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v5 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v4 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)((char *)p + *((_QWORD *)&this->f_ + 1));
      __asan_report_load8(v4);
    }
    v6 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)((char *)this->f_ + *(_QWORD *)v5 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v4 = v6;
      __asan_report_load8(v6);
    }
    f = v6->f_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v4 = this;
      __asan_report_load8(this);
    }
    f = this->f_;
  }
  return f((common::minet::AServerMgr<GateserverSession> *)v4, a1, a2);
};

// Line 278: range 000000000BFA59CA-000000000BFA5AE6
int __cdecl boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>::operator()(
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const this,
        common::minet::AServerMgr<HttpSession> *p,
        common::minet::AServerSession *a1,
        unsigned int a2)
{
  const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *v4; // rdi
  unsigned __int64 v5; // rax
  const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *v6; // rax
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v4 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v4 = this;
    __asan_report_load8(this);
  }
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v5 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v4 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)((char *)p + *((_QWORD *)&this->f_ + 1));
      __asan_report_load8(v4);
    }
    v6 = (const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)((char *)this->f_ + *(_QWORD *)v5 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v4 = v6;
      __asan_report_load8(v6);
    }
    f = v6->f_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v4 = this;
      __asan_report_load8(this);
    }
    f = this->f_;
  }
  return f((common::minet::AServerMgr<HttpSession> *)v4, a1, a2);
};

// Line 278: range 000000000BFADC9E-000000000BFADDBC
void __cdecl boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::operator()(
        const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this,
        common::minet::AServerMgr<GateserverSession> *p,
        const boost::system::error_code *a1,
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *a2)
{
  const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v4; // rdi
  unsigned __int64 v5; // rax
  const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v6; // rax
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v4 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v4 = this;
    __asan_report_load8(this);
  }
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v5 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v4 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)p + *((_QWORD *)&this->f_ + 1));
      __asan_report_load8(v4);
    }
    v6 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)this->f_ + *(_QWORD *)v5 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v4 = v6;
      __asan_report_load8(v6);
    }
    f = v6->f_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v4 = this;
      __asan_report_load8(this);
    }
    f = this->f_;
  }
  f((common::minet::AServerMgr<GateserverSession> *)v4, a1, a2);
};

// Line 278: range 000000000BFADE8A-000000000BFADFA8
void __cdecl boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::operator()(
        const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this,
        common::minet::AServerMgr<HttpSession> *p,
        const boost::system::error_code *a1,
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *a2)
{
  const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v4; // rdi
  unsigned __int64 v5; // rax
  const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v6; // rax
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F f; // rax

  if ( *(_BYTE *)(((unsigned __int64)(&this->f_ + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->f_ + 1);
  v4 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)p + *((_QWORD *)&this->f_ + 1));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v4 = this;
    __asan_report_load8(this);
  }
  if ( ((__int64)this->f_ & 1) != 0 )
  {
    v5 = (unsigned __int64)p + *((_QWORD *)&this->f_ + 1);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v4 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)p + *((_QWORD *)&this->f_ + 1));
      __asan_report_load8(v4);
    }
    v6 = (const boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)((char *)this->f_ + *(_QWORD *)v5 - 1);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      v4 = v6;
      __asan_report_load8(v6);
    }
    f = v6->f_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v4 = this;
      __asan_report_load8(this);
    }
    f = this->f_;
  }
  f((common::minet::AServerMgr<HttpSession> *)v4, a1, a2);
};
