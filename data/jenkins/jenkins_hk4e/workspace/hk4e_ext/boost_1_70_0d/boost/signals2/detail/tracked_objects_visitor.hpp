// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/tracked_objects_visitor.hpp

// Line 35: range 000000000BEFA7DC-000000000BEFA81A
void __cdecl boost::signals2::detail::tracked_objects_visitor::tracked_objects_visitor(
        boost::signals2::detail::tracked_objects_visitor *const this,
        boost::signals2::slot_base *slot)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->slot_ = slot;
};

// Line 38: range 000000000BF8F086-000000000BF8F0AF
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
    this,
    t,
    &v2);
};

// Line 38: range 000000000BF938F4-000000000BF9391D
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
    this,
    t,
    &v2);
};

// Line 38: range 000000000BF9138A-000000000BF913B3
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    t,
    &v2);
};

// Line 38: range 000000000BF94408-000000000BF94431
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    t,
    &v2);
};

// Line 38: range 000000000BFA68C4-000000000BFA68ED
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<common::minet::AServerMgr<GateserverSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<GateserverSession> *const *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<common::minet::AServerMgr<GateserverSession> *>(
    this,
    t,
    &v2);
};

// Line 38: range 000000000BFA8AA0-000000000BFA8AC9
void __cdecl boost::signals2::detail::tracked_objects_visitor::operator()<common::minet::AServerMgr<HttpSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<HttpSession> *const *t)
{
  mpl_::bool_<false> v2; // [rsp+1Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<common::minet::AServerMgr<HttpSession> *>(
    this,
    t,
    &v2);
};

// Line 49: range 000000000BF95316-000000000BF95343
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<false> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
    this,
    t,
    &v3);
};

// Line 49: range 000000000BF99A1E-000000000BF99A4B
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<false> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
    this,
    t,
    &v3);
};

// Line 49: range 000000000BF975BA-000000000BF975E7
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<false> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    t,
    &v3);
};

// Line 49: range 000000000BF9A0FA-000000000BF9A127
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<false> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    t,
    &v3);
};

// Line 49: range 000000000BFA9614-000000000BFA9641
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<common::minet::AServerMgr<GateserverSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<GateserverSession> *const *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<common::minet::AServerMgr<GateserverSession> *>(
    this,
    t,
    &v3);
};

// Line 49: range 000000000BFAA8C0-000000000BFAA8ED
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_reference_wrapper<common::minet::AServerMgr<HttpSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<HttpSession> *const *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<common::minet::AServerMgr<HttpSession> *>(
    this,
    t,
    &v3);
};

// Line 54: range 000000000BF9FCD0-000000000BF9FD21
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
    this,
    *t,
    &v3);
};

// Line 54: range 000000000BFA475C-000000000BFA47AD
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
    this,
    *t,
    &v3);
};

// Line 54: range 000000000BFA2046-000000000BFA2097
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    *t,
    &v3);
};

// Line 54: range 000000000BFA5AF6-000000000BFA5B47
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
    this,
    *t,
    &v3);
};

// Line 54: range 000000000BFAAFD8-000000000BFAB029
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<common::minet::AServerMgr<GateserverSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<GateserverSession> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<GateserverSession>>(
    this,
    *(const common::minet::AServerMgr<GateserverSession> **)t,
    &v3);
};

// Line 54: range 000000000BFABB16-000000000BFABB67
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<common::minet::AServerMgr<HttpSession> *>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        common::minet::AServerMgr<HttpSession> *const *t,
        const mpl_::bool_<true> *a3)
{
  mpl_::bool_<true> v3; // [rsp+2Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<HttpSession>>(
    this,
    *(const common::minet::AServerMgr<HttpSession> **)t,
    &v3);
};

// Line 59: range 000000000BF9A84C-000000000BF9A889
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+27h] [rbp-9h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *v4; // [rsp+28h] [rbp-8h] BYREF

  v4 = (boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *)boost::addressof<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *> const>(t);
  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *> const*>(
    this,
    (const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const *)&v4,
    &v3);
};

// Line 59: range 000000000BF9E614-000000000BF9E651
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+27h] [rbp-9h] BYREF
  boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *v4; // [rsp+28h] [rbp-8h] BYREF

  v4 = (boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *)boost::addressof<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *> const>(t);
  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *> const*>(
    this,
    (const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const *)&v4,
    &v3);
};

// Line 59: range 000000000BF9C94A-000000000BF9C987
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+27h] [rbp-9h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *v4; // [rsp+28h] [rbp-8h] BYREF

  v4 = (boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *)boost::addressof<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int> const>(t);
  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int> const*>(
    this,
    (const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const *)&v4,
    &v3);
};

// Line 59: range 000000000BF9F23C-000000000BF9F279
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<false> *a3)
{
  mpl_::bool_<true> v3; // [rsp+27h] [rbp-9h] BYREF
  boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *v4; // [rsp+28h] [rbp-8h] BYREF

  v4 = (boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *)boost::addressof<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int> const>(t);
  boost::signals2::detail::tracked_objects_visitor::m_visit_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int> const*>(
    this,
    (const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const *)&v4,
    &v3);
};

// Line 64: range 000000000BFA67EC-000000000BFA68C3
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *> const*>(
    this,
    (const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000000BFA89C8-000000000BFA8A9F
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *> const*>(
    this,
    (const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000000BFA7820-000000000BFA78F7
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int> const*>(
    this,
    (const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000000BFA8F9E-000000000BFA9075
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int> const*>(
    this,
    (const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000000BFABF82-000000000BFAC059
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<GateserverSession>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const common::minet::AServerMgr<GateserverSession> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<GateserverSession>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<common::minet::AServerMgr<GateserverSession> const*>(
    this,
    (const common::minet::AServerMgr<GateserverSession> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000000BFACB8E-000000000BFACC65
void __fastcall boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<HttpSession>>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const common::minet::AServerMgr<HttpSession> *t,
        const mpl_::bool_<true> *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  mpl_::bool_<false> v6; // [rsp+2Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 4 t:64";
  *(_QWORD *)(v3 + 16) = boost::signals2::detail::tracked_objects_visitor::m_visit_not_function_pointer<common::minet::AServerMgr<HttpSession>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = t;
  boost::signals2::detail::tracked_objects_visitor::m_visit_signal<common::minet::AServerMgr<HttpSession> const*>(
    this,
    (const common::minet::AServerMgr<HttpSession> *const *)(v3 + 32),
    &v6);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 78: range 000000000BFA95C6-000000000BFA9613
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 78: range 000000000BFAA872-000000000BFAA8BF
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 78: range 000000000BFA9AA0-000000000BFA9AED
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 78: range 000000000BFAA958-000000000BFAA9A5
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 78: range 000000000BFAD25E-000000000BFAD2AB
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<common::minet::AServerMgr<GateserverSession> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const common::minet::AServerMgr<GateserverSession> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 78: range 000000000BFAD828-000000000BFAD875
void __cdecl boost::signals2::detail::tracked_objects_visitor::m_visit_signal<common::minet::AServerMgr<HttpSession> const*>(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const common::minet::AServerMgr<HttpSession> *const *t,
        const mpl_::bool_<false> *a3)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  boost::signals2::detail::tracked_objects_visitor::add_if_trackable(this, *(const void **)t);
};

// Line 87: range 000000000BEFA81C-000000000BEFA82A
void __cdecl boost::signals2::detail::tracked_objects_visitor::add_if_trackable(
        const boost::signals2::detail::tracked_objects_visitor *const this,
        const void *a2)
{
  ;
};
