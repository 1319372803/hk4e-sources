// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/bind/bind_mf_cc.hpp

// Line 30: range 000000000BF0C23F-000000000BF0C36F
boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *__fastcall boost::bind<bool,boost::shared_mutex::state_data,boost::reference_wrapper<boost::shared_mutex::state_data>>(
        boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *retstr,
        bool (*f)(const boost::shared_mutex::state_data *),
        boost::reference_wrapper<boost::shared_mutex::state_data> a1,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > v9; // [rsp+28h] [rbp-78h] BYREF
  boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> v10; // [rsp+30h] [rbp-70h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF
  boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> v12; // 0:rsi.8

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 5 a1:30";
  *(_QWORD *)(v4 + 16) = boost::bind<bool,boost::shared_mutex::state_data,boost::reference_wrapper<boost::shared_mutex::state_data>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = a4;
  boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>::list1(
    &v9,
    *(boost::reference_wrapper<boost::shared_mutex::state_data> *)(v4 + 32));
  boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::cmf0(&v10, f);
  v12.f_ = v10.f_;
  boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::bind_t(
    retstr,
    v12,
    *((const boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > **)&v10.f_ + 1),
    &v9.a1_.t_);
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 65: range 000000000BF5C9D9-000000000BF5CB5C
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *__fastcall boost::bind<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *retstr,
        int (*f)(common::minet::AServerMgr<GateserverSession> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),
        common::minet::AServerMgr<GateserverSession> *a1,
        __int64 a2,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<GateserverSession> *const *)(v7 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::list2(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::mf1(
    &v18,
    fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > **)&v18.f_
    + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 65: range 000000000BF6AB13-000000000BF6AC96
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *__fastcall boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *retstr,
        int (*f)(common::minet::AServerMgr<GateserverSession> *, common::minet::AServerSession *),
        common::minet::AServerMgr<GateserverSession> *a1,
        __int64 a2,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<GateserverSession> *const *)(v7 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::list2(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>::mf1(&v18, fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > **)&v18.f_
    + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 65: range 000000000BF5FCB7-000000000BF5FE3A
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *__fastcall boost::bind<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *retstr,
        int (*f)(common::minet::AServerMgr<HttpSession> *, boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >),
        common::minet::AServerMgr<HttpSession> *a1,
        __int64 a2,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<HttpSession> *const *)(v7 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::list2(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::mf1(
    &v18,
    fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > **)&v18.f_ + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 65: range 000000000BF6EB59-000000000BF6ECDC
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *__fastcall boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *retstr,
        int (*f)(common::minet::AServerMgr<HttpSession> *, common::minet::AServerSession *),
        common::minet::AServerMgr<HttpSession> *a1,
        __int64 a2,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,common::minet::AServerMgr<HttpSession>*,boost::arg<1>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<HttpSession> *const *)(v7 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::list2(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>::mf1(&v18, fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > **)&v18.f_ + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 65: range 000000000BF5D361-000000000BF5D517
boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *__fastcall boost::bind<void,common::minet::AServerMgr<GateserverSession>,unsigned short,common::minet::AServerMgr<GateserverSession>*,unsigned short>(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *retstr,
        void (*f)(common::minet::AServerMgr<GateserverSession> *, unsigned __int16),
        common::minet::AServerMgr<GateserverSession> *a1,
        __int64 a2,
        __int16 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  boost::_bi::value<short unsigned int> v11; // [rsp+36h] [rbp-AAh] BYREF
  boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1a; // [rsp+38h] [rbp-A8h] BYREF
  boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> v13; // [rsp+40h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF
  boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> v16; // 0:rsi.8

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 2 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v5 + 16) = boost::bind<void,common::minet::AServerMgr<GateserverSession>,unsigned short,common::minet::AServerMgr<GateserverSession>*,unsigned short>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -202116352;
  *(_QWORD *)(v5 + 64) = a2;
  *(_WORD *)(v5 + 48) = a5;
  boost::_bi::value<unsigned short>::value(&v11, (const unsigned __int16 *)(v5 + 48));
  boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<GateserverSession> *const *)(v5 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::list2(
    &v14,
    a1a,
    v11);
  boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>::mf1(&v13, f);
  v16.f_ = v13.f_;
  boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>::bind_t(
    retstr,
    v16,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > **)&v13.f_
    + 1),
    (unsigned __int64)&v14);
  if ( v15 == (char *)v5 )
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
  return retstr;
};

// Line 65: range 000000000BF6063F-000000000BF607F5
boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *__fastcall boost::bind<void,common::minet::AServerMgr<HttpSession>,unsigned short,common::minet::AServerMgr<HttpSession>*,unsigned short>(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *retstr,
        void (*f)(common::minet::AServerMgr<HttpSession> *, unsigned __int16),
        common::minet::AServerMgr<HttpSession> *a1,
        __int64 a2,
        __int16 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  boost::_bi::value<short unsigned int> v11; // [rsp+36h] [rbp-AAh] BYREF
  boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1a; // [rsp+38h] [rbp-A8h] BYREF
  boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> v13; // [rsp+40h] [rbp-A0h] BYREF
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > v14; // [rsp+50h] [rbp-90h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF
  boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> v16; // 0:rsi.8

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 2 5 a2:65 64 8 5 a1:65";
  *(_QWORD *)(v5 + 16) = boost::bind<void,common::minet::AServerMgr<HttpSession>,unsigned short,common::minet::AServerMgr<HttpSession>*,unsigned short>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234688015;
  v7[536862722] = -202116352;
  *(_QWORD *)(v5 + 64) = a2;
  *(_WORD *)(v5 + 48) = a5;
  boost::_bi::value<unsigned short>::value(&v11, (const unsigned __int16 *)(v5 + 48));
  boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<HttpSession> *const *)(v5 + 64));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::list2(
    &v14,
    a1a,
    v11);
  boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>::mf1(&v13, f);
  v16.f_ = v13.f_;
  boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>::bind_t(
    retstr,
    v16,
    *((const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > **)&v13.f_
    + 1),
    (unsigned __int64)&v14);
  if ( v15 == (char *)v5 )
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
  return retstr;
};

// Line 113: range 000000000BF6B3D2-000000000BF6B55C
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *__fastcall boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>,boost::arg<2>>(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *retstr,
        int (*f)(common::minet::AServerMgr<GateserverSession> *, common::minet::AServerSession *, unsigned int),
        common::minet::AServerMgr<GateserverSession> *a1,
        __int64 a2,
        boost::arg<2> a3,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  boost::arg<2> v10; // cl
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 1 6 a2:113 48 1 6 a3:113 64 8 6 a1:113";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<GateserverSession>*,boost::arg<1>,boost::arg<2>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 32) = a7;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<GateserverSession> *const *)(v7 + 64));
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::list3(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>::mf2(
    &v18,
    fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > **)&v18.f_
    + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 113: range 000000000BF6F260-000000000BF6F3EA
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *__fastcall boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<HttpSession>*,boost::arg<1>,boost::arg<2>>(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *retstr,
        int (*f)(common::minet::AServerMgr<HttpSession> *, common::minet::AServerSession *, unsigned int),
        common::minet::AServerMgr<HttpSession> *a1,
        __int64 a2,
        boost::arg<2> a3,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  boost::arg<2> v10; // cl
  __int64 v11; // r8
  __int64 v12; // r9
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>::F fa; // [rsp+0h] [rbp-C0h]
  boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1a; // [rsp+20h] [rbp-A0h] BYREF
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > v17; // [rsp+28h] [rbp-98h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> v20; // 0:rsi.8

  v7 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 1 6 a2:113 48 1 6 a3:113 64 8 6 a1:113";
  *(_QWORD *)(v7 + 16) = boost::bind<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int,common::minet::AServerMgr<HttpSession>*,boost::arg<1>,boost::arg<2>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = -202116352;
  *(_QWORD *)(v7 + 64) = a2;
  *(_BYTE *)(v7 + 32) = a7;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<HttpSession> *const *)(v7 + 64));
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::list3(
    &v17,
    a1a,
    (boost::arg<1>)a1a.t_,
    v10,
    v11,
    v12,
    (char)f);
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>::mf2(
    &v18,
    fa);
  v20.f_ = v18.f_;
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t(
    retstr,
    v20,
    *((const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > **)&v18.f_
    + 1),
    &v17.a1_.t_);
  if ( v19 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 113: range 000000000BF64EDF-000000000BF6509C
boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *__fastcall boost::bind<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *retstr,
        void (*f)(common::minet::AServerMgr<GateserverSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *),
        common::minet::AServerMgr<GateserverSession> *a1,
        boost::arg<1> (*a2)(void),
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *a3,
        __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1a; // [rsp+30h] [rbp-B0h] BYREF
  boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3a; // [rsp+38h] [rbp-A8h] BYREF
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> v15; // [rsp+40h] [rbp-A0h] BYREF
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[128]; // [rsp+60h] [rbp-80h] BYREF
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> v18; // 0:rsi.8

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 6 a1:113 64 8 6 a3:113";
  *(_QWORD *)(v6 + 16) = boost::bind<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<GateserverSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 32) = a2;
  *(_QWORD *)(v6 + 64) = a6;
  boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::value(
    &a3a,
    (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const *)(v6 + 64));
  boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<GateserverSession> *const *)(v6 + 32));
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3(
    &v16,
    a1a,
    (boost::arg<1> (*)(void))a3,
    a3a);
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::mf2(
    &v15,
    f);
  v18.f_ = v15.f_;
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t(
    retstr,
    v18,
    *((const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > **)&v15.f_
    + 1),
    (unsigned __int64)&v16);
  if ( v17 == (char *)v6 )
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
  return retstr;
};

// Line 113: range 000000000BF6705D-000000000BF6721A
boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *__fastcall boost::bind<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<HttpSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *retstr,
        void (*f)(common::minet::AServerMgr<HttpSession> *, const boost::system::error_code *, boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *),
        common::minet::AServerMgr<HttpSession> *a1,
        boost::arg<1> (*a2)(void),
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *a3,
        __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1a; // [rsp+30h] [rbp-B0h] BYREF
  boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3a; // [rsp+38h] [rbp-A8h] BYREF
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> v15; // [rsp+40h] [rbp-A0h] BYREF
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[128]; // [rsp+60h] [rbp-80h] BYREF
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> v18; // 0:rsi.8

  v6 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 6 a1:113 64 8 6 a3:113";
  *(_QWORD *)(v6 + 16) = boost::bind<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *,common::minet::AServerMgr<HttpSession>*,boost::arg<1> (*)(void),boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 32) = a2;
  *(_QWORD *)(v6 + 64) = a6;
  boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::value(
    &a3a,
    (boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const *)(v6 + 64));
  boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
    &a1a,
    (common::minet::AServerMgr<HttpSession> *const *)(v6 + 32));
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3(
    &v16,
    a1a,
    (boost::arg<1> (*)(void))a3,
    a3a);
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::mf2(
    &v15,
    f);
  v18.f_ = v15.f_;
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t(
    retstr,
    v18,
    *((const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > **)&v15.f_
    + 1),
    (unsigned __int64)&v16);
  if ( v17 == (char *)v6 )
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
  return retstr;
};
