// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/object_rep.hpp

// Line 56: range 000000000C61461E-000000000C6148D3
std::pair<void*,int> __cdecl luabind::detail::object_rep::get_instance(
        const luabind::detail::object_rep *const this,
        luabind::detail::class_id target)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  luabind::detail::instance_holder *m_instance; // r12
  luabind::detail::instance_holder *v6; // rax
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(luabind::detail::instance_holder *, const luabind::detail::cast_graph *, luabind::detail::class_id); // r14
  const luabind::detail::cast_graph *v9; // rcx
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF
  std::pair<void*,int> result; // 0:rax.12

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::object_rep::get_instance;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_instance )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    m_instance = this->m_instance;
    v6 = this->m_instance;
    if ( *(_BYTE *)(((unsigned __int64)this->m_instance >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (unsigned __int64)(v6->_vptr_instance_holder + 2);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = *(__int64 (__fastcall **)(luabind::detail::instance_holder *, const luabind::detail::cast_graph *, luabind::detail::class_id))v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_classrep >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = luabind::detail::class_rep::casts(this->m_classrep);
    result.first = (void *)v8(m_instance, v9, target);
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = -1;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 64) = 0LL;
    std::pair<void *,int>::pair<void *,int,true>(
      (std::pair<void*,int> *const)(v2 + 96),
      (void **)(v2 + 64),
      (int *)(v2 + 48));
    if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load16();
    result = *(std::pair<void*,int> *)(v2 + 96);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 63: range 000000000C6148D4-000000000C61492D
bool __cdecl luabind::detail::object_rep::is_const(const luabind::detail::object_rep *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_instance && luabind::detail::instance_holder::pointee_const(this->m_instance);
};
