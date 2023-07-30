// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/foreign_ptr.hpp

// Line 87: range 000000000BEFA2B2-000000000BEFA36C
void __cdecl boost::signals2::detail::foreign_void_shared_ptr::foreign_void_shared_ptr(
        boost::signals2::detail::foreign_void_shared_ptr *const this,
        const boost::signals2::detail::foreign_void_shared_ptr *other)
{
  boost::signals2::detail::foreign_shared_ptr_impl_base *p; // rdx
  boost::signals2::detail::foreign_shared_ptr_impl_base *v3; // rax
  unsigned __int64 v4; // rax
  boost::signals2::detail::foreign_shared_ptr_impl_base *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = other->_p;
  v3 = other->_p;
  if ( *(_BYTE *)(((unsigned __int64)other->_p >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(v3->_vptr_foreign_shared_ptr_impl_base + 2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (boost::signals2::detail::foreign_shared_ptr_impl_base *)(*(__int64 (__fastcall **)(boost::signals2::detail::foreign_shared_ptr_impl_base *))v4)(p);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = (boost::signals2::detail::foreign_shared_ptr_impl_base *)__asan_report_store8();
  this->_p = v5;
};

// Line 94: range 000000000BEFA36E-000000000BEFA3F9
void __cdecl boost::signals2::detail::foreign_void_shared_ptr::~foreign_void_shared_ptr(
        boost::signals2::detail::foreign_void_shared_ptr *const this)
{
  boost::signals2::detail::foreign_shared_ptr_impl_base *p; // rax
  unsigned __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p = this->_p;
  if ( this->_p )
  {
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (unsigned __int64)(p->_vptr_foreign_shared_ptr_impl_base + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*(void (__fastcall **)(boost::signals2::detail::foreign_shared_ptr_impl_base *))v2)(p);
  }
};

// Line 142: range 000000000BEFA47E-000000000BEFA498
void __cdecl boost::signals2::detail::foreign_void_weak_ptr::~foreign_void_weak_ptr(
        boost::signals2::detail::foreign_void_weak_ptr *const this)
{
  boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::~scoped_ptr(&this->_p);
};

// Line 147: range 000000000BEFA3FA-000000000BEFA47D
void __cdecl boost::signals2::detail::foreign_void_weak_ptr::foreign_void_weak_ptr(
        boost::signals2::detail::foreign_void_weak_ptr *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *other)
{
  boost::signals2::detail::foreign_weak_ptr_impl_base *v2; // rax
  unsigned __int64 v3; // rdx
  boost::signals2::detail::foreign_weak_ptr_impl_base *v4; // rax

  v2 = boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::operator->(&other->_p);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(v2->_vptr_foreign_weak_ptr_impl_base + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (boost::signals2::detail::foreign_weak_ptr_impl_base *)(*(__int64 (__fastcall **)(boost::signals2::detail::foreign_weak_ptr_impl_base *))v3)(v2);
  boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::scoped_ptr(&this->_p, v4);
};

// Line 164: range 000000000BEFA49A-000000000BEFA534
boost::signals2::detail::foreign_void_shared_ptr __cdecl boost::signals2::detail::foreign_void_weak_ptr::lock(
        const boost::signals2::detail::foreign_void_weak_ptr *const this)
{
  const boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base> *v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  void (__fastcall *v4)(const boost::signals2::detail::foreign_void_weak_ptr *const, unsigned __int64); // rcx

  v2 = (unsigned __int64)boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::operator->(v1);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)v2 + 16LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(void (__fastcall **)(const boost::signals2::detail::foreign_void_weak_ptr *const, unsigned __int64))v3;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  v4(this, v2);
  return (boost::signals2::detail::foreign_void_shared_ptr)this;
};

// Line 168: range 000000000BEFA536-000000000BEFA59F
bool __cdecl boost::signals2::detail::foreign_void_weak_ptr::expired(
        const boost::signals2::detail::foreign_void_weak_ptr *const this)
{
  boost::signals2::detail::foreign_weak_ptr_impl_base *v1; // rax
  unsigned __int64 v2; // rdx

  v1 = boost::scoped_ptr<boost::signals2::detail::foreign_weak_ptr_impl_base>::operator->(&this->_p);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(v1->_vptr_foreign_weak_ptr_impl_base + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (*(__int64 (__fastcall **)(boost::signals2::detail::foreign_weak_ptr_impl_base *))v2)(v1);
};
