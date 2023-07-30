// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/async_base.hpp

// Line 23: range 000000000C718CA9-000000000C718DA8
void __cdecl boost::beast::detail::stable_base::destroy_list(boost::beast::detail::stable_base **list)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  boost::beast::detail::stable_base *v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  boost::beast::detail::stable_base *next; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)list >> 3) + 0x7FFF8000) )
      __asan_report_load8(list, v1);
    if ( !*list )
      break;
    v2 = (__int64)*list;
    if ( *(_BYTE *)(((unsigned __int64)&(*list)->next_ >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(&(*list)->next_, v1);
    next = *(boost::beast::detail::stable_base **)(v2 + 8);
    v3 = *list;
    v4 = *list;
    v5 = *(unsigned __int8 *)(((unsigned __int64)*list >> 3) + 0x7FFF8000);
    if ( (_BYTE)v5 )
      v4 = (_QWORD *)__asan_report_load8(*list, v5);
    v6 = *v4 + 16LL;
    v1 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v1 )
      v6 = __asan_report_load8(v6, v1);
    (*(void (__fastcall **)(boost::beast::detail::stable_base *))v6)(v3);
    if ( *(_BYTE *)(((unsigned __int64)list >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *list = next;
  }
};

// Line 36: range 000000000C78EDBE-000000000C78EE30
void __cdecl boost::beast::detail::stable_base::stable_base(boost::beast::detail::stable_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::beast::detail::stable_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_stable_base = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->next_ = 0LL;
};

// Line 37: range 000000000C78EE32-000000000C78EE73
void __cdecl boost::beast::detail::stable_base::~stable_base(boost::beast::detail::stable_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::beast::detail::stable_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_stable_base = v1;
};

// Line 37: range 000000000C78EE74-000000000C78EE9E
void __cdecl boost::beast::detail::stable_base::~stable_base(boost::beast::detail::stable_base *const this)
{
  boost::beast::detail::stable_base::~stable_base(this);
  operator delete(this, 0x10uLL);
};
