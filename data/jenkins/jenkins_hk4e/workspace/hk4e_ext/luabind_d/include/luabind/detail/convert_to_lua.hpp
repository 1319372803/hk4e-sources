// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/convert_to_lua.hpp

// Line 39: range 000000000C9797B4-000000000C9797C1
const std::string *__cdecl luabind::detail::unwrap_ref<false>::get<std::string>(const std::string *r)
{
  return r;
};

// Line 39: range 00000000122CD32C-00000000122CD339
const unsigned int *__cdecl luabind::detail::unwrap_ref<false>::get<unsigned int>(const unsigned int *r)
{
  return r;
};

// Line 64: range 000000000C875694-000000000C87576E
void __cdecl luabind::detail::convert_to_lua<std::string>(lua_State_0 *L, const std::string *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 12 converter:71";
  *(_QWORD *)(v2 + 16) = luabind::detail::convert_to_lua<std::string>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = luabind::detail::unwrap_ref<false>::get<std::string>(v);
  luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v2 + 32),
    L,
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

// Line 64: range 00000000122B9B9E-00000000122B9CB1
void __cdecl luabind::detail::convert_to_lua<unsigned int>(lua_State_0 *L, const unsigned int *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::param_type *v5; // rax
  luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::param_type *v6; // rdx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 12 converter:71";
  *(_QWORD *)(v2 + 16) = luabind::detail::convert_to_lua<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::param_type *)luabind::detail::unwrap_ref<false>::get<unsigned int>(v);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
    (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v2 + 32),
    L,
    *v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
