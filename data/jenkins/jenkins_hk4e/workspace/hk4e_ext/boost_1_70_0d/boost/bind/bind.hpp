// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/bind/bind.hpp

// Line 122: range 000000000BF6CAA4-000000000BF6CB06
void __cdecl boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::value(
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this,
        boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *const *t)
{
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8(t);
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->t_ = v2;
};

// Line 122: range 000000000BF644EA-000000000BF6454C
void __cdecl boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::value(
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *const this,
        common::minet::AServerMgr<GateserverSession> *const *t)
{
  common::minet::AServerMgr<GateserverSession> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8(t);
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->t_ = v2;
};

// Line 122: range 000000000BF669B8-000000000BF66A1A
void __cdecl boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::value(
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *const this,
        common::minet::AServerMgr<HttpSession> *const *t)
{
  common::minet::AServerMgr<HttpSession> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8(t);
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->t_ = v2;
};

// Line 122: range 000000000BF65128-000000000BF651B7
void __cdecl boost::_bi::value<unsigned short>::value(
        boost::_bi::value<short unsigned int> *const this,
        const unsigned __int16 *t)
{
  unsigned __int16 v2; // cx

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)t & 7) + 1) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(t);
  }
  v2 = *t;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 1) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(this);
  }
  this->t_ = v2;
};

// Line 124: range 000000000BFAE2CE-000000000BFAE2DB
boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **__cdecl boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::get(
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *const this)
{
  return &this->t_;
};

// Line 124: range 000000000BF98E2E-000000000BF98E3B
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *const this)
{
  return &this->t_;
};

// Line 124: range 000000000BF9A13C-000000000BF9A149
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *const this)
{
  return &this->t_;
};

// Line 124: range 000000000BFB3830-000000000BFB383D
unsigned __int16 *__cdecl boost::_bi::value<unsigned short>::get(boost::_bi::value<short unsigned int> *const this)
{
  return &this->t_;
};

// Line 125: range 000000000BF9FD22-000000000BF9FD2F
common::minet::AServerMgr<GateserverSession> *const *__cdecl boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(
        const boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *const this)
{
  return &this->t_;
};

// Line 125: range 000000000BFA47AE-000000000BFA47BB
common::minet::AServerMgr<HttpSession> *const *__cdecl boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(
        const boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *const this)
{
  return &this->t_;
};

// Line 152: range 000000000BF2E817-000000000BF2E828
boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *__cdecl boost::_bi::unwrapper<boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>>::unwrap(
        boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFAC43C-000000000BFAC44D
boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::unwrap(
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BF929CE-000000000BF929DF
boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>::unwrap(
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFACC66-000000000BFACC77
boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::unwrap(
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BF945E8-000000000BF945F9
boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>::unwrap(
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFB3311-000000000BFB3322
boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>>::unwrap(
        boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFB31A5-000000000BFB31B6
boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>>::unwrap(
        boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFA1E42-000000000BFA1E53
boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>::unwrap(
        boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFA597C-000000000BFA598D
boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>::unwrap(
        boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFADBF0-000000000BFADC01
boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::unwrap(
        boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *f,
        __int64 a2)
{
  return f;
};

// Line 152: range 000000000BFADE3C-000000000BFADE4D
boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *__cdecl boost::_bi::unwrapper<boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::unwrap(
        boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *f,
        __int64 a2)
{
  return f;
};

// Line 174: range 000000000BEFA07A-000000000BEFA084
void __cdecl boost::_bi::list0::list0(boost::_bi::list0 *const this)
{
  ;
};

// Line 176: range 000000000BFB3324-000000000BFB3341
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::list0::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::list0 *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 176: range 000000000BFB31B8-000000000BFB31D5
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::list0::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::list0 *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 176: range 000000000BFB31D6-000000000BFB31F3
unsigned __int16 *__cdecl boost::_bi::list0::operator[]<unsigned short>(
        const boost::_bi::list0 *const this,
        boost::_bi::value<short unsigned int> *v)
{
  return boost::_bi::value<unsigned short>::get(v);
};

// Line 180: range 000000000BF2E82A-000000000BF2E86B
boost::shared_mutex::state_data *__cdecl boost::_bi::list0::operator[]<boost::shared_mutex::state_data>(
        const boost::_bi::list0 *const this,
        const boost::reference_wrapper<boost::shared_mutex::state_data> *v)
{
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    __asan_report_load8(v);
  return v->t_;
};

// Line 231: range 000000000BF18934-000000000BF18A03
void __fastcall boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>::list1(
        boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > *const this,
        boost::reference_wrapper<boost::shared_mutex::state_data> a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a1:231";
  *(_QWORD *)(v2 + 16) = boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>::list1;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(boost::reference_wrapper<boost::shared_mutex::state_data> *)(v2 + 32) = a1;
  boost::_bi::storage1<boost::reference_wrapper<boost::shared_mutex::state_data>>::storage1(
    this,
    *(boost::reference_wrapper<boost::shared_mutex::state_data> *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 247: range 000000000BF25B68-000000000BF25BB9
// local variable allocation has failed, the output may be wrong!
bool __cdecl boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>::operator()<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list0>(
        boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > *const this,
        boost::_bi::type<bool> a2,
        boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *f,
        boost::_bi::list0 *a,
        __int64 a5)
{
  boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *v5; // rbx
  boost::shared_mutex::state_data *v6; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>>::unwrap(
         (boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::list0::operator[]<boost::shared_mutex::state_data>((const boost::_bi::list0 *const)f, &this->a1_);
  return boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::operator()(v5, v6);
};

// Line 289: range 000000000BF651B8-000000000BF652D0
void __fastcall boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::list2(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::_bi::value<short unsigned int> a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 2 6 a2:289 64 8 6 a1:289";
  *(_QWORD *)(v3 + 16) = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::list2;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 64) = a1;
  *(boost::_bi::value<short unsigned int> *)(v3 + 48) = a2;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v3 + 64),
    *(boost::_bi::value<short unsigned int> *)(v3 + 48));
  if ( v7 == (char *)v3 )
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

// Line 289: range 000000000BF6454E-000000000BF64651
void __fastcall boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::list2(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> a2,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 6 a2:289 64 8 6 a1:289";
  *(_QWORD *)(v7 + 16) = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::list2;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64) = a1;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64),
    (boost::arg<1>)this);
  if ( v10 == (char *)v7 )
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
};

// Line 289: range 000000000BF672A6-000000000BF673BE
void __fastcall boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::list2(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::_bi::value<short unsigned int> a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 2 6 a2:289 64 8 6 a1:289";
  *(_QWORD *)(v3 + 16) = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::list2;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 64) = a1;
  *(boost::_bi::value<short unsigned int> *)(v3 + 48) = a2;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v3 + 64),
    *(boost::_bi::value<short unsigned int> *)(v3 + 48));
  if ( v7 == (char *)v3 )
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

// Line 289: range 000000000BF66A1C-000000000BF66B1F
void __fastcall boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::list2(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> a2,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 1 6 a2:289 64 8 6 a1:289";
  *(_QWORD *)(v7 + 16) = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::list2;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64) = a1;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::storage2(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64),
    (boost::arg<1>)this);
  if ( v10 == (char *)v7 )
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
};

// Line 307: range 000000000BFAB6DA-000000000BFAB7A8
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *f,
        boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *v5; // rbx
  const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *v6; // rax
  common::minet::AServerMgr<GateserverSession> **v7; // rax
  int v8; // ebx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > p_a1; // [rsp+20h] [rbp-40h] BYREF

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[](
         (const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::a2_);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(
    &p_a1,
    v6);
  v7 = boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
         (const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v7);
  v8 = boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::operator()(
         v5,
         *v7,
         &p_a1);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&p_a1);
  return v8;
};

// Line 307: range 000000000BF8BCD2-000000000BF8BD86
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<GateserverSession*&>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *f,
        boost::_bi::rrlist1<GateserverSession*&> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *v5; // r12
  GateserverSession **v6; // rax
  common::minet::AServerSession *v7; // rbx
  common::minet::AServerMgr<GateserverSession> **v8; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<GateserverSession *&>::operator[](
         (const boost::_bi::rrlist1<GateserverSession*&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<GateserverSession *&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
         (const boost::_bi::rrlist1<GateserverSession*&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8);
  return boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>::operator()(
           v5,
           *v8,
           v7);
};

// Line 307: range 000000000BF9A5FA-000000000BF9A6AE
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<common::minet::AServerSession *>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *f,
        boost::_bi::rrlist1<common::minet::AServerSession*> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *v5; // r12
  common::minet::AServerSession **v6; // rax
  common::minet::AServerSession *v7; // rbx
  common::minet::AServerMgr<GateserverSession> **v8; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<common::minet::AServerSession *>::operator[](
         (const boost::_bi::rrlist1<common::minet::AServerSession*> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<common::minet::AServerSession *>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
         (const boost::_bi::rrlist1<common::minet::AServerSession*> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8);
  return boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>::operator()(
           v5,
           *v8,
           v7);
};

// Line 307: range 000000000BFABC1A-000000000BFABCE8
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *f,
        boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *v5; // rbx
  const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *v6; // rax
  common::minet::AServerMgr<HttpSession> **v7; // rax
  int v8; // ebx
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > p_a1; // [rsp+20h] [rbp-40h] BYREF

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[](
         (const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::a2_);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>>(
    &p_a1,
    v6);
  v7 = boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
         (const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v7);
  v8 = boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>::operator()(
         v5,
         *v7,
         &p_a1);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&p_a1);
  return v8;
};

// Line 307: range 000000000BF8DD5A-000000000BF8DE0E
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<HttpSession*&>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *f,
        boost::_bi::rrlist1<HttpSession*&> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *v5; // r12
  common::minet::AServerSession **v6; // rax
  common::minet::AServerSession *v7; // rbx
  common::minet::AServerMgr<HttpSession> **v8; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<HttpSession *&>::operator[](
         (const boost::_bi::rrlist1<HttpSession*&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<HttpSession *&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
         (const boost::_bi::rrlist1<HttpSession*&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8);
  return boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>::operator()(
           v5,
           *v8,
           v7);
};

// Line 307: range 000000000BF9E3C2-000000000BF9E476
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<common::minet::AServerSession *>>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *f,
        boost::_bi::rrlist1<common::minet::AServerSession*> *a,
        __int64 a5)
{
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *v5; // r12
  common::minet::AServerSession **v6; // rax
  common::minet::AServerSession *v7; // rbx
  common::minet::AServerMgr<HttpSession> **v8; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>::unwrap(
         (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<common::minet::AServerSession *>::operator[](
         (const boost::_bi::rrlist1<common::minet::AServerSession*> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<common::minet::AServerSession *>::operator[]<common::minet::AServerMgr<HttpSession> *>(
         (const boost::_bi::rrlist1<common::minet::AServerSession*> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8);
  return boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>::operator()(
           v5,
           *v8,
           v7);
};

// Line 317: range 000000000BFB2828-000000000BFB28F9
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::operator()<boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list0>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::type<void> a2,
        boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *f,
        boost::_bi::list0 *a,
        int a5)
{
  boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *v5; // r12
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rdx
  unsigned __int16 v8; // bx
  common::minet::AServerMgr<GateserverSession> **v9; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>>::unwrap(
         (boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::list0::operator[]<unsigned short>((const boost::_bi::list0 *const)f, &this->a2_);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v6);
  }
  v8 = *v7;
  v9 = boost::_bi::list0::operator[]<common::minet::AServerMgr<GateserverSession> *>(
         (const boost::_bi::list0 *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>::operator()(v5, *v9, v8);
};

// Line 317: range 000000000BFB2756-000000000BFB2827
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::operator()<boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list0>(
        boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > *const this,
        boost::_bi::type<void> a2,
        boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *f,
        boost::_bi::list0 *a,
        int a5)
{
  boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *v5; // r12
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rdx
  unsigned __int16 v8; // bx
  common::minet::AServerMgr<HttpSession> **v9; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>>::unwrap(
         (boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::list0::operator[]<unsigned short>((const boost::_bi::list0 *const)f, &this->a2_);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(v6);
  }
  v8 = *v7;
  v9 = boost::_bi::list0::operator[]<common::minet::AServerMgr<HttpSession> *>(
         (const boost::_bi::list0 *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>::operator()(v5, *v9, v8);
};

// Line 347: range 000000000BF89338-000000000BF8935D
void __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 347: range 000000000BF8D55E-000000000BF8D583
void __cdecl boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 366: range 000000000BF6CB08-000000000BF6CC2B
void __fastcall boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> (*a2)(void),
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 a1:366 64 8 6 a3:366";
  *(_QWORD *)(v4 + 16) = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v4 + 32) = a1;
  *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64) = a3;
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v4 + 32),
    a2,
    *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 366: range 000000000BF72720-000000000BF7282A
void __fastcall boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::list3(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> a1,
        boost::arg<1> a2,
        boost::arg<2> a3,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 1 6 a2:366 48 1 6 a3:366 64 8 6 a1:366";
  *(_QWORD *)(v7 + 16) = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::list3;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64) = a1;
  *(_BYTE *)(v7 + 32) = a7;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::storage3(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *)(v7 + 64),
    (boost::arg<1>)this,
    a3);
  if ( v10 == (char *)v7 )
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
};

// Line 366: range 000000000BF70018-000000000BF7013B
void __fastcall boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> (*a2)(void),
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 6 a1:366 64 8 6 a3:366";
  *(_QWORD *)(v4 + 16) = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::list3;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v4 + 32) = a1;
  *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64) = a3;
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::storage3(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v4 + 32),
    a2,
    *(boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v4 + 64));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 366: range 000000000BF75102-000000000BF7520C
void __fastcall boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::list3(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> a1,
        boost::arg<1> a2,
        boost::arg<2> a3,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10[128]; // [rsp+10h] [rbp-80h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 1 6 a2:366 48 1 6 a3:366 64 8 6 a1:366";
  *(_QWORD *)(v7 + 16) = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::list3;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = -202116352;
  *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64) = a1;
  *(_BYTE *)(v7 + 32) = a7;
  *(_BYTE *)(v7 + 48) = a7;
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::storage3(
    this,
    *(boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *)(v7 + 64),
    (boost::arg<1>)this,
    a3);
  if ( v10 == (char *)v7 )
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
};

// Line 386: range 000000000BF9C69E-000000000BF9C7AC
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::operator()<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>>(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *f,
        boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *a,
        __int64 a5)
{
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *v5; // r13
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  unsigned int v8; // r12d
  common::minet::AServerSession **v9; // rax
  common::minet::AServerSession *v10; // rbx
  common::minet::AServerMgr<GateserverSession> **v11; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>::unwrap(
         (boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
         (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
         boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::a3_);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
         (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  v10 = *v9;
  v11 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
          (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
          &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v11);
  return boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>::operator()(
           v5,
           *v11,
           v10,
           v8);
};

// Line 386: range 000000000BF9EF90-000000000BF9F09E
// local variable allocation has failed, the output may be wrong!
int __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::operator()<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>>(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::_bi::type<int> a2,
        boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *f,
        boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *a,
        __int64 a5)
{
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *v5; // r13
  unsigned int *v6; // rax
  unsigned int *v7; // rdx
  unsigned int v8; // r12d
  common::minet::AServerSession **v9; // rax
  common::minet::AServerSession *v10; // rbx
  common::minet::AServerMgr<HttpSession> **v11; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>::unwrap(
         (boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
         (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
         boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::a3_);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
         (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::a2_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  v10 = *v9;
  v11 = boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[]<common::minet::AServerMgr<HttpSession> *>(
          (const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)f,
          &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v11);
  return boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>::operator()(
           v5,
           *v11,
           v10,
           v8);
};

// Line 396: range 000000000BFAD752-000000000BFAD827
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::operator()<boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::rrlist1<boost::system::error_code const&>>(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::type<void> a2,
        boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *f,
        boost::_bi::rrlist1<const boost::system::error_code&> *a,
        int a5)
{
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v5; // r12
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **v6; // rax
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v7; // rbx
  const boost::system::error_code *v8; // r13
  common::minet::AServerMgr<GateserverSession> **v9; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::unwrap(
         (boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         &this->a3_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[](
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void)>::a2_);
  v9 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::operator()(
    v5,
    *v9,
    v8,
    v7);
};

// Line 396: range 000000000BFAD8E8-000000000BFAD9BD
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::operator()<boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::rrlist1<boost::system::error_code const&>>(
        boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *const this,
        boost::_bi::type<void> a2,
        boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *f,
        boost::_bi::rrlist1<const boost::system::error_code&> *a,
        int a5)
{
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v5; // r12
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **v6; // rax
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v7; // rbx
  const boost::system::error_code *v8; // r13
  common::minet::AServerMgr<HttpSession> **v9; // rax

  v5 = boost::_bi::unwrapper<boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::unwrap(
         (boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)a2.gap0[0],
         0LL);
  v6 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         &this->a3_);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v7 = *v6;
  v8 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[](
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         boost::_bi::storage2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void)>::a2_);
  v9 = boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
         (const boost::_bi::rrlist1<const boost::system::error_code&> *const)f,
         &this->a1_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v9);
  boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::operator()(
    v5,
    *v9,
    v8,
    v7);
};

// Line 406: range 000000000BF8AA20-000000000BF8AA45
void __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 406: range 000000000BF8DA8A-000000000BF8DAAF
void __cdecl boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::_bi::storage3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    this,
    v);
};

// Line 878: range 000000000BF8BC92-000000000BF8BCD0
void __cdecl boost::_bi::rrlist1<GateserverSession *&>::rrlist1(
        boost::_bi::rrlist1<GateserverSession*&> *const this,
        GateserverSession **a1)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
};

// Line 878: range 000000000BF8DD1A-000000000BF8DD58
void __cdecl boost::_bi::rrlist1<HttpSession *&>::rrlist1(
        boost::_bi::rrlist1<HttpSession*&> *const this,
        HttpSession **a1)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
};

// Line 878: range 000000000BFAB69A-000000000BFAB6D8
void __cdecl boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::rrlist1(
        boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *a1)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
};

// Line 878: range 000000000BFAD712-000000000BFAD750
void __cdecl boost::_bi::rrlist1<boost::system::error_code const&>::rrlist1(
        boost::_bi::rrlist1<const boost::system::error_code&> *const this,
        const boost::system::error_code *a1)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
};

// Line 878: range 000000000BF9A5BA-000000000BF9A5F8
void __cdecl boost::_bi::rrlist1<common::minet::AServerSession *>::rrlist1(
        boost::_bi::rrlist1<common::minet::AServerSession*> *const this,
        common::minet::AServerSession **a1)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
};

// Line 882: range 000000000BF92A1C-000000000BF92A5D
GateserverSession **__cdecl boost::_bi::rrlist1<GateserverSession *&>::operator[](
        const boost::_bi::rrlist1<GateserverSession*&> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<GateserverSession *&>(this->a1_);
};

// Line 882: range 000000000BF94636-000000000BF94677
HttpSession **__cdecl boost::_bi::rrlist1<HttpSession *&>::operator[](
        const boost::_bi::rrlist1<HttpSession*&> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<HttpSession *&>(this->a1_);
};

// Line 882: range 000000000BF9FC80-000000000BF9FCC1
common::minet::AServerSession **__cdecl boost::_bi::rrlist1<common::minet::AServerSession *>::operator[](
        const boost::_bi::rrlist1<common::minet::AServerSession*> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<common::minet::AServerSession *>(this->a1_);
};

// Line 882: range 000000000BFAC46C-000000000BFAC4AD
const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *__cdecl boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[](
        const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>((std::remove_reference<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&>::type *)this->a1_);
};

// Line 882: range 000000000BFADC3E-000000000BFADC7F
const boost::system::error_code *__cdecl boost::_bi::rrlist1<boost::system::error_code const&>::operator[](
        const boost::_bi::rrlist1<const boost::system::error_code&> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<boost::system::error_code const&>((std::remove_reference<const boost::system::error_code&>::type *)this->a1_);
};

// Line 884: range 000000000BFADC80-000000000BFADC9D
boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **__cdecl boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>(
        const boost::_bi::rrlist1<const boost::system::error_code&> *const this,
        boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *v)
{
  return boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>::get(v);
};

// Line 884: range 000000000BF929E0-000000000BF929FD
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::rrlist1<GateserverSession *&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::rrlist1<GateserverSession*&> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 884: range 000000000BFAC44E-000000000BFAC46B
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 884: range 000000000BFADC02-000000000BFADC1F
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::rrlist1<const boost::system::error_code&> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 884: range 000000000BF9FC62-000000000BF9FC7F
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::rrlist1<common::minet::AServerSession *>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::rrlist1<common::minet::AServerSession*> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 884: range 000000000BF945FA-000000000BF94617
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::rrlist1<HttpSession *&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::rrlist1<HttpSession*&> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 884: range 000000000BFACC78-000000000BFACC95
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 884: range 000000000BFADE4E-000000000BFADE6B
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::rrlist1<boost::system::error_code const&>::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::rrlist1<const boost::system::error_code&> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 884: range 000000000BFA4730-000000000BFA474D
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::rrlist1<common::minet::AServerSession *>::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::rrlist1<common::minet::AServerSession*> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 912: range 000000000BF9C62A-000000000BF9C69D
void __cdecl boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::rrlist2(
        boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const this,
        common::minet::AServerSession **a1,
        unsigned int *a2)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a1_ = a1;
  if ( *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->a2_ = a2;
};

// Line 917: range 000000000BFA1E72-000000000BFA1EB3
common::minet::AServerSession **__cdecl boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
        const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const this,
        boost::arg<1> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return std::forward<common::minet::AServerSession *>(this->a1_);
};

// Line 918: range 000000000BFA1ED2-000000000BFA1F18
unsigned int *__cdecl boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[](
        const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const this,
        boost::arg<2> (*a2)(void))
{
  if ( *(_BYTE *)(((unsigned __int64)&this->a2_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->a2_);
  return std::forward<unsigned int>(this->a2_);
};

// Line 920: range 000000000BFA1E54-000000000BFA1E71
common::minet::AServerMgr<GateserverSession> **__cdecl boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[]<common::minet::AServerMgr<GateserverSession> *>(
        const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(v);
};

// Line 920: range 000000000BFA598E-000000000BFA59AB
common::minet::AServerMgr<HttpSession> **__cdecl boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::operator[]<common::minet::AServerMgr<HttpSession> *>(
        const boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *v)
{
  return boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(v);
};

// Line 1287: range 000000000BF18A04-000000000BF18B59
void __fastcall boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::bind_t(
        boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *const this,
        boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> f,
        const boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > *l,
        boost::shared_mutex::state_data **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF64652-000000000BF647A7
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *l,
        common::minet::AServerMgr<GateserverSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF71DDC-000000000BF71F31
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > *l,
        common::minet::AServerMgr<GateserverSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF66B20-000000000BF66C75
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *l,
        common::minet::AServerMgr<HttpSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF74BCA-000000000BF74D1F
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > *l,
        common::minet::AServerMgr<HttpSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF7282C-000000000BF72981
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> f,
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > *l,
        common::minet::AServerMgr<GateserverSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF7520E-000000000BF75363
void __fastcall boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> f,
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > *l,
        common::minet::AServerMgr<HttpSession> **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v12[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)a4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a4);
  this->l_.a1_.t_ = *a4;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF652D2-000000000BF65431
void __fastcall boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>::bind_t(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *const this,
        boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > *l,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_WORD *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  if ( *(_WORD *)((a4 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16();
  v9 = *(_QWORD *)(a4 + 8);
  this->l_.a1_.t_ = *(common::minet::AServerMgr<GateserverSession> **)a4;
  *(_QWORD *)&this->l_.a2_.t_ = v9;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF673C0-000000000BF6751F
void __fastcall boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>::bind_t(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *const this,
        boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> f,
        const boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > *l,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_WORD *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  if ( *(_WORD *)((a4 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16();
  v9 = *(_QWORD *)(a4 + 8);
  this->l_.a1_.t_ = *(common::minet::AServerMgr<HttpSession> **)a4;
  *(_QWORD *)&this->l_.a2_.t_ = v9;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF6CC2C-000000000BF6CD8B
void __fastcall boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *const this,
        boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> f,
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *l,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v9; // rdi
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_WORD *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  if ( *(_WORD *)((a4 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16();
  v9 = *(boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)(a4 + 8);
  this->l_.a1_.t_ = *(common::minet::AServerMgr<GateserverSession> **)a4;
  this->l_.a3_.t_ = v9;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1287: range 000000000BF7013C-000000000BF7029B
void __fastcall boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *const this,
        boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> f,
        const boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > *l,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *v9; // rdi
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 f:1287";
  *(_QWORD *)(v4 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::bind_t;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = f.f_;
  *(_QWORD *)(v4 + 40) = l;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  v8 = *((_QWORD *)v6 - 3);
  this->f_.f_ = (boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>::F)*((_QWORD *)v6 - 4);
  *((_QWORD *)&this->f_.f_ + 1) = v8;
  if ( *(_WORD *)(((unsigned __int64)&this->l_ >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store16();
  if ( *(_WORD *)((a4 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load16();
  v9 = *(boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> **)(a4 + 8);
  this->l_.a1_.t_ = *(common::minet::AServerMgr<HttpSession> **)a4;
  this->l_.a3_.t_ = v9;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)(v7 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)(v7 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1291: range 000000000BF18B5A-000000000BF18C36
boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > >::result_type __cdecl boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::operator()(
        boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // r8
  boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > >::result_type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 6 a:1293";
  *(_QWORD *)(v1 + 16) = boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::operator();
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::_bi::list0::list0((boost::_bi::list0 *const)(v1 + 32));
  result = boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>::operator()<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list0>(
             &this->l_,
             (boost::_bi::type<bool>)this,
             (boost::_mfi::cmf0<bool,boost::shared_mutex::state_data> *)(v1 + 32),
             0LL,
             v4);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1291: range 000000000BFB1D92-000000000BFB1E6E
void __cdecl boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>::operator()(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<short unsigned int> > > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r8d
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 6 a:1293";
  *(_QWORD *)(v1 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::_bi::value<unsigned short>>>::operator();
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::_bi::list0::list0((boost::_bi::list0 *const)(v1 + 32));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::_bi::value<unsigned short>>::operator()<boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,unsigned short>,boost::_bi::list0>(
    &this->l_,
    (boost::_bi::type<void>)this,
    (boost::_mfi::mf1<void,common::minet::AServerMgr<GateserverSession>,short unsigned int> *)(v1 + 32),
    0LL,
    v4);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1291: range 000000000BFB1CB4-000000000BFB1D90
void __cdecl boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>::operator()(
        boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<short unsigned int> > > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r8d
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 6 a:1293";
  *(_QWORD *)(v1 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::_bi::value<unsigned short>>>::operator();
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::_bi::list0::list0((boost::_bi::list0 *const)(v1 + 32));
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::_bi::value<unsigned short>>::operator()<boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,unsigned short>,boost::_bi::list0>(
    &this->l_,
    (boost::_bi::type<void>)this,
    (boost::_mfi::mf1<void,common::minet::AServerMgr<HttpSession>,short unsigned int> *)(v1 + 32),
    0LL,
    v4);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1303: range 000000000BFAA17E-000000000BFAA265
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::rrlist1(
    (boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)(v2 + 32),
    a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BF8538C-000000000BF85473
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<GateserverSession*&>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        GateserverSession **a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<GateserverSession*&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<GateserverSession *&>::rrlist1((boost::_bi::rrlist1<GateserverSession*&> *const)(v2 + 32), a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<GateserverSession*&>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BF950DA-000000000BF951C1
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        common::minet::AServerSession **a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<common::minet::AServerSession *>::rrlist1(
    (boost::_bi::rrlist1<common::minet::AServerSession*> *const)(v2 + 32),
    a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<common::minet::AServerSession *>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BFAA9A6-000000000BFAAA8D
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> > *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > >,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>::rrlist1(
    (boost::_bi::rrlist1<const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::io_context::strand> >&> *const)(v2 + 32),
    a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>,boost::_bi::rrlist1<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::io_context::strand>> const&>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > > *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BF87C36-000000000BF87D1D
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<HttpSession*&>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        HttpSession **a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<HttpSession*&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<HttpSession *&>::rrlist1((boost::_bi::rrlist1<HttpSession*&> *const)(v2 + 32), a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<HttpSession*&>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BF997E2-000000000BF998C9
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        common::minet::AServerSession **a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<common::minet::AServerSession *>::rrlist1(
    (boost::_bi::rrlist1<common::minet::AServerSession*> *const)(v2 + 32),
    a1);
  result = boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::operator()<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::rrlist1<common::minet::AServerSession *>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *)(v2 + 32),
             0LL,
             v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1303: range 000000000BFACAA6-000000000BFACB8D
void __cdecl boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *const this,
        const boost::system::error_code *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r8d
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<boost::system::error_code const&>::rrlist1(
    (boost::_bi::rrlist1<const boost::system::error_code&> *const)(v2 + 32),
    a1);
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::operator()<boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::rrlist1<boost::system::error_code const&>>(
    &this->l_,
    (boost::_bi::type<void>)this,
    (boost::_mfi::mf2<void,common::minet::AServerMgr<GateserverSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v2 + 32),
    0LL,
    v5);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1303: range 000000000BFAD176-000000000BFAD25D
void __cdecl boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>(
        boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> > > *const this,
        const boost::system::error_code *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r8d
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a:1305";
  *(_QWORD *)(v2 + 16) = boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>>::operator()<boost::system::error_code const&>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::_bi::rrlist1<boost::system::error_code const&>::rrlist1(
    (boost::_bi::rrlist1<const boost::system::error_code&> *const)(v2 + 32),
    a1);
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1> (*)(void),boost::_bi::value<boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>>::operator()<boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,boost::system::error_code const&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor> *>,boost::_bi::rrlist1<boost::system::error_code const&>>(
    &this->l_,
    (boost::_bi::type<void>)this,
    (boost::_mfi::mf2<void,common::minet::AServerMgr<HttpSession>,const boost::system::error_code&,boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::executor>*> *)(v2 + 32),
    0LL,
    v5);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1315: range 000000000BF97376-000000000BF97465
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        common::minet::AServerSession **a1,
        unsigned int *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > >::result_type result; // eax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 a:1317";
  *(_QWORD *)(v3 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::rrlist2(
    (boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)(v3 + 32),
    a1,
    a2);
  result = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::operator()<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)(v3 + 32),
             0LL,
             v6);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1315: range 000000000BF99EB6-000000000BF99FA5
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > >::result_type __cdecl boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        common::minet::AServerSession **a1,
        unsigned int *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r8
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > >::result_type result; // eax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 a:1317";
  *(_QWORD *)(v3 + 16) = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>::rrlist2(
    (boost::_bi::rrlist2<common::minet::AServerSession*,unsigned int> *const)(v3 + 32),
    a1,
    a2);
  result = boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::operator()<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::rrlist2<common::minet::AServerSession *,unsigned int>>(
             &this->l_,
             (boost::_bi::type<int>)this,
             (boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)(v3 + 32),
             0LL,
             v6);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1423: range 000000000BF83C02-000000000BF83C43
void __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
    v,
    &this->f_,
    0LL);
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    &this->l_,
    v);
};

// Line 1423: range 000000000BF87704-000000000BF87745
void __cdecl boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
    v,
    &this->f_,
    0LL);
  boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    &this->l_,
    v);
};

// Line 1423: range 000000000BF84870-000000000BF848B1
void __cdecl boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
    v,
    &this->f_,
    0LL);
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    &this->l_,
    v);
};

// Line 1423: range 000000000BF87872-000000000BF878B3
void __cdecl boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *const this,
        boost::signals2::detail::tracked_objects_visitor *v)
{
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
    v,
    &this->f_,
    0LL);
  boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession> *>,boost::arg<1>,boost::arg<2>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    &this->l_,
    v);
};

// Line 1817: range 000000000BF9A88A-000000000BF9A8C2
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<GateserverSession> *>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::value<common::minet::AServerMgr<GateserverSession>*> *t,
        int a3)
{
  common::minet::AServerMgr<GateserverSession> *const *v3; // rcx

  v3 = boost::_bi::value<common::minet::AServerMgr<GateserverSession> *>::get(t);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<GateserverSession> *>(
    v,
    v3,
    0LL);
};

// Line 1817: range 000000000BF9E652-000000000BF9E68A
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<HttpSession> *>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::value<common::minet::AServerMgr<HttpSession>*> *t,
        int a3)
{
  common::minet::AServerMgr<HttpSession> *const *v3; // rcx

  v3 = boost::_bi::value<common::minet::AServerMgr<HttpSession> *>::get(t);
  boost::visit_each<boost::signals2::detail::tracked_objects_visitor,common::minet::AServerMgr<HttpSession> *>(
    v,
    v3,
    0LL);
};

// Line 1823: range 000000000BF7D41A-000000000BF7D442
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *t,
        int a3)
{
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    t,
    v);
};

// Line 1823: range 000000000BF80B3A-000000000BF80B62
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *t,
        int a3)
{
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    t,
    v);
};

// Line 1823: range 000000000BF7E5FE-000000000BF7E626
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *t,
        int a3)
{
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    t,
    v);
};

// Line 1823: range 000000000BF81646-000000000BF8166E
void __cdecl boost::_bi::visit_each<boost::signals2::detail::tracked_objects_visitor,int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>(
        boost::signals2::detail::tracked_objects_visitor *v,
        const boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *t,
        int a3)
{
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::accept<boost::signals2::detail::tracked_objects_visitor>(
    t,
    v);
};
