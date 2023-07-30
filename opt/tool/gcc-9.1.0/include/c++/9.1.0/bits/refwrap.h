// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/refwrap.h

// Line 74: range 000000000F7F1382-000000000F7F146D
std::reference_wrapper<luabind::adl::object> __cdecl std::ref<luabind::adl::object>(luabind::adl::object *__t)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::reference_wrapper<luabind::adl::object> result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = std::ref<luabind::adl::object>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::reference_wrapper<luabind::adl::object>::reference_wrapper<luabind::adl::object&,void,luabind::adl::object*>(
    (std::reference_wrapper<luabind::adl::object> *const)(v1 + 32),
    __t);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 32);
  result._M_data = *(luabind::adl::object **)(v1 + 32);
  if ( v5 == (char *)v1 )
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

// Line 300: range 000000000F8B9DB6-000000000F8B9DCF
luabind::adl::object *__cdecl std::reference_wrapper<luabind::adl::object>::_S_fun(luabind::adl::object *__r)
{
  return std::__addressof<luabind::adl::object>(__r);
};

// Line 315: range 000000000F84D788-000000000F84D7D6
void __cdecl std::reference_wrapper<luabind::adl::object>::reference_wrapper<luabind::adl::object&,void,luabind::adl::object*>(
        std::reference_wrapper<luabind::adl::object> *const this,
        luabind::adl::object *__uref)
{
  luabind::adl::object *v2; // rax
  luabind::adl::object *v3; // rax

  v2 = std::forward<luabind::adl::object &>(__uref);
  v3 = std::reference_wrapper<luabind::adl::object>::_S_fun(v2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_M_data = v3;
};

// Line 325: range 000000000F7F148E-000000000F7F14A7
luabind::adl::object *__cdecl std::reference_wrapper<luabind::adl::object>::operator luabind::adl::object&(
        const std::reference_wrapper<luabind::adl::object> *const this)
{
  return std::reference_wrapper<luabind::adl::object>::get(this);
};

// Line 329: range 000000000F84D7D8-000000000F84D80D
luabind::adl::object *__cdecl std::reference_wrapper<luabind::adl::object>::get(
        const std::reference_wrapper<luabind::adl::object> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->_M_data;
};
