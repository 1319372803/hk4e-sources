// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/call_function.hpp

// Line 59: range 000000000C7B0942-000000000C7B0B0D
void __fastcall luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this,
        lua_State_0 *L,
        int params,
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >::function_t fun,
        const boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> args)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // dl
  char v14[80]; // [rsp+30h] [rbp-50h] BYREF

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 7 args:63";
  *(_QWORD *)(v5 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller;
  v8 = v5 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  *(boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *)(v5 + 32) = args;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  this->m_state = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    v8 = __asan_report_store4(&this->m_params);
  }
  this->m_params = params;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  this->m_fun = fun;
  v9 = *(unsigned __int8 *)(((unsigned __int64)&this->m_args >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 )
    v8 = __asan_report_store8();
  this->m_args.head = (boost::tuples::cons<const std::string*,boost::tuples::null_type>::stored_head_type)*((_QWORD *)v7 - 4);
  v10 = *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v9) = v10 != 0;
    v8 = __asan_report_store1(&this->m_called, v9);
  }
  this->m_called = 0;
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 59: range 000000001226E3CE-000000001226E5AD
void __fastcall luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this,
        lua_State_0 *L,
        int params,
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >::function_t fun,
        const boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> args)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  const std::string *v9; // rsi
  const unsigned int *v10; // rdi
  char v11; // dl
  char v16[80]; // [rsp+30h] [rbp-50h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 7 args:63";
  *(_QWORD *)(v5 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller;
  v8 = v5 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  *(boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *)(v5 + 32) = args;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  this->m_state = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    v8 = __asan_report_store4(&this->m_params);
  }
  this->m_params = params;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store8();
  this->m_fun = fun;
  if ( *(_WORD *)(((unsigned __int64)&this->m_args >> 3) + 0x7FFF8000) )
    v8 = __asan_report_store16();
  v9 = (const std::string *)*((_QWORD *)v7 - 4);
  v10 = (const unsigned int *)*((_QWORD *)v7 - 3);
  this->m_args.head = v9;
  this->m_args.tail.head = v10;
  v11 = *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    v8 = __asan_report_store1(&this->m_called, v9);
  }
  this->m_called = 0;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 59: range 000000000C7B9CFC-000000000C7B9E92
void __fastcall luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
        luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this,
        lua_State_0 *L,
        int params,
        luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >::function_t fun,
        const boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> args,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // cl
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 args:63";
  *(_QWORD *)(v7 + 16) = luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  this->m_state = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = __asan_report_store4(&this->m_params);
  }
  this->m_params = params;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  this->m_fun = fun;
  v10 = *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (((unsigned __int8)this + 25) & 7) >= v10 )
  {
    LOBYTE(L) = v10 != 0;
    v9 = __asan_report_store1(&this->m_called, L);
  }
  this->m_called = 0;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)(v9 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)(v9 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 000000000C6C6DDA-000000000C6C70EC
void __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  int *p_m_params; // rdi
  int v6; // ecx
  luabind::error *exception; // rdi
  int v8; // ecx
  int top; // [rsp+14h] [rbp-6Ch]
  lua_State_0 *L; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 7 pop:109";
  *(_QWORD *)(v1 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_called);
  }
  if ( !this->m_called )
  {
    v4 = ((_BYTE)this + 25) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) != 0
      && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->m_called, v4);
    }
    this->m_called = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    L = this->m_state;
    top = lua_gettop(this->m_state);
    luabind::detail::push_args_from_tuple<1>::apply(L, &this->m_args);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->m_fun(L, 0, 0) )
    {
      p_m_params = (int *)L;
      v6 = lua_gettop(L);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
      {
        p_m_params = &this->m_params;
        __asan_report_load4(&this->m_params);
      }
      if ( v6 != top - this->m_params + 1 )
      {
        __asan_handle_no_return(p_m_params);
        __assert_fail(
          "lua_gettop(L) == top - m_params + 1",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabin"
          "d/detail/call_function.hpp",
          0x5Eu,
          "luabind::detail::proxy_function_caller<Ret, Tuple>::~proxy_function_caller() [with Ret = luabind::adl::object;"
          " Tuple = boost::tuples::tuple<>]");
      }
      exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
      luabind::error::error(exception, L);
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'luabind::error,
        (void (__fastcall *)(void *))luabind::error::~error);
    }
    v8 = lua_gettop(L) - top;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_params);
    }
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v1 + 32), L, v8 + this->m_params);
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v1 + 32));
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 000000000C6C6520-000000000C6C6828
void __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int *p_m_params; // rdi
  int v6; // ecx
  luabind::error *exception; // rdi
  int v8; // ecx
  int top; // [rsp+14h] [rbp-6Ch]
  lua_State_0 *L; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 pop:109";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_called);
  if ( !this->m_called )
  {
    if ( *(char *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->m_called, v1);
    this->m_called = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    L = this->m_state;
    top = lua_gettop(this->m_state);
    luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::null_type>(L, &this->m_args);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->m_fun(L, 1, 0) )
    {
      p_m_params = (int *)L;
      v6 = lua_gettop(L);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
      {
        p_m_params = &this->m_params;
        __asan_report_load4(&this->m_params);
      }
      if ( v6 != top - this->m_params + 1 )
      {
        __asan_handle_no_return(p_m_params);
        __assert_fail(
          "lua_gettop(L) == top - m_params + 1",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabin"
          "d/detail/call_function.hpp",
          0x5Eu,
          "luabind::detail::proxy_function_caller<Ret, Tuple>::~proxy_function_caller() [with Ret = luabind::adl::object;"
          " Tuple = boost::tuples::tuple<const std::__cxx11::basic_string<char>*, boost::tuples::null_type, boost::tuples"
          "::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null"
          "_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type>]");
      }
      exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
      luabind::error::error(exception, L);
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'luabind::error,
        (void (__fastcall *)(void *))luabind::error::~error);
    }
    v8 = lua_gettop(L) - top;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_params);
    }
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), L, v8 + this->m_params);
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 0000000012244840-0000000012244B48
void __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int *p_m_params; // rdi
  int v6; // ecx
  luabind::error *exception; // rdi
  int v8; // ecx
  int top; // [rsp+14h] [rbp-6Ch]
  lua_State_0 *L; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 pop:109";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_called);
  if ( !this->m_called )
  {
    if ( *(char *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->m_called, v1);
    this->m_called = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    L = this->m_state;
    top = lua_gettop(this->m_state);
    luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>(
      L,
      &this->m_args);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->m_fun(L, 2, 0) )
    {
      p_m_params = (int *)L;
      v6 = lua_gettop(L);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
      {
        p_m_params = &this->m_params;
        __asan_report_load4(&this->m_params);
      }
      if ( v6 != top - this->m_params + 1 )
      {
        __asan_handle_no_return(p_m_params);
        __assert_fail(
          "lua_gettop(L) == top - m_params + 1",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabin"
          "d/detail/call_function.hpp",
          0x5Eu,
          "luabind::detail::proxy_function_caller<Ret, Tuple>::~proxy_function_caller() [with Ret = luabind::adl::object;"
          " Tuple = boost::tuples::tuple<const std::__cxx11::basic_string<char>*, const unsigned int*, boost::tuples::nul"
          "l_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type"
          ", boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type>]");
      }
      exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
      luabind::error::error(exception, L);
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'luabind::error,
        (void (__fastcall *)(void *))luabind::error::~error);
    }
    v8 = lua_gettop(L) - top;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_params);
    }
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), L, v8 + this->m_params);
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 82: range 000000000C6D4374-000000000C6D4686
void __cdecl luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller(
        luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  int *p_m_params; // rdi
  int v6; // ecx
  luabind::error *exception; // rdi
  int v8; // ecx
  int top; // [rsp+14h] [rbp-6Ch]
  lua_State_0 *L; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 7 pop:109";
  *(_QWORD *)(v1 + 16) = luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::~proxy_function_caller;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->m_called);
  }
  if ( !this->m_called )
  {
    v4 = ((_BYTE)this + 25) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) != 0
      && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->m_called, v4);
    }
    this->m_called = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    L = this->m_state;
    top = lua_gettop(this->m_state);
    luabind::detail::push_args_from_tuple<1>::apply(L, &this->m_args);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->m_fun(L, 0, 0) )
    {
      p_m_params = (int *)L;
      v6 = lua_gettop(L);
      if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
      {
        p_m_params = &this->m_params;
        __asan_report_load4(&this->m_params);
      }
      if ( v6 != top - this->m_params + 1 )
      {
        __asan_handle_no_return(p_m_params);
        __assert_fail(
          "lua_gettop(L) == top - m_params + 1",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabin"
          "d/detail/call_function.hpp",
          0x5Eu,
          "luabind::detail::proxy_function_caller<Ret, Tuple>::~proxy_function_caller() [with Ret = std::__cxx11::basic_s"
          "tring<char>; Tuple = boost::tuples::tuple<>]");
      }
      exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
      luabind::error::error(exception, L);
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'luabind::error,
        (void (__fastcall *)(void *))luabind::error::~error);
    }
    v8 = lua_gettop(L) - top;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_params);
    }
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v1 + 32), L, v8 + this->m_params);
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v1 + 32));
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 112: range 000000000C6C70EE-000000000C6C752E
luabind::adl::object __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // r12
  _DWORD *v5; // r13
  __int64 v6; // rsi
  void *p_m_params; // rdi
  int v8; // ecx
  luabind::error *exception; // rdi
  int v10; // ecx
  int v11; // edx
  luabind::cast_failed *v12; // rbx
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *thisa; // [rsp+0h] [rbp-C0h]
  int top; // [rsp+14h] [rbp-ACh]
  lua_State_0 *L; // [rsp+18h] [rbp-A8h]
  char v16[160]; // [rsp+20h] [rbp-A0h] BYREF
  luabind::adl::object result; // 0:rax.12

  thisa = v1;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 128);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 13 converter:114 64 8 9 <unknown> 96 16 7 pop:138";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  v6 = ((_BYTE)v1 + 25) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_called >> 3) + 0x7FFF8000) != 0
    && (char)v6 >= *(_BYTE *)(((unsigned __int64)&thisa->m_called >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->m_called, v6);
  }
  thisa->m_called = 1;
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  L = thisa->m_state;
  top = lua_gettop(thisa->m_state);
  luabind::detail::push_args_from_tuple<1>::apply(L, &thisa->m_args);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_fun >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( thisa->m_fun(L, 0, 1) )
  {
    p_m_params = L;
    v8 = lua_gettop(L);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      p_m_params = &thisa->m_params;
      __asan_report_load4(&thisa->m_params);
    }
    if ( v8 != top - thisa->m_params + 1 )
    {
      __asan_handle_no_return(p_m_params);
      __assert_fail(
        "lua_gettop(L) == top - m_params + 1",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/"
        "detail/call_function.hpp",
        0x7Cu,
        "luabind::detail::proxy_function_caller<Ret, Tuple>::operator Ret() [with Ret = luabind::adl::object; Tuple = boo"
        "st::tuples::tuple<>]");
    }
    exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
    luabind::error::error(exception, L);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'luabind::error,
      (void (__fastcall *)(void *))luabind::error::~error);
  }
  v10 = lua_gettop(L) - top;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->m_params);
  }
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 96), L, v10 + thisa->m_params);
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
         L,
         (luabind::detail::by_value<luabind::adl::object>)-1,
         v11) < 0 )
  {
    v12 = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
    luabind::type_id::type_id(
      (luabind::type_id *const)v4 - 8,
      (const std::type_info *)&`typeinfo for'luabind::adl::object);
    luabind::cast_failed::cast_failed(v12, L, (const luabind::type_id *)v4 - 8);
    *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) = -8;
    __asan_handle_no_return(v12);
    _cxa_throw(
      v12,
      (struct type_info *)&`typeinfo for'luabind::cast_failed,
      (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
  }
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)this,
    (lua_State_0 *)(v2 + 48),
    (luabind::detail::by_value<luabind::adl::object>)L,
    -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 96));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result.m_handle.m_index = -168430091;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 112: range 000000000C6C68A4-000000000C6C6CDF
luabind::adl::object __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // r12
  _DWORD *v5; // r13
  lua_State_0 *v6; // rdi
  int v7; // ecx
  luabind::error *exception; // rdi
  int v9; // ecx
  int v10; // edx
  luabind::cast_failed *v11; // rbx
  int top; // [rsp+14h] [rbp-ACh]
  lua_State_0 *L; // [rsp+18h] [rbp-A8h]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 128);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 13 converter:114 64 8 9 <unknown> 96 16 7 pop:138";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v1 + 32, v1);
  *(_BYTE *)(v1 + 32) = 1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  L = *(lua_State_0 **)v1;
  top = lua_gettop(*(lua_State_0 **)v1);
  luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::null_type>(
    L,
    (const boost::tuples::cons<const std::string*,boost::tuples::null_type> *)(v1 + 24));
  if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(lua_State_0 *, __int64, __int64))(v1 + 16))(L, 1LL, 1LL) )
  {
    v6 = L;
    v7 = lua_gettop(L);
    if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (lua_State_0 *)(v1 + 8);
      __asan_report_load4(v1 + 8);
    }
    if ( v7 != top - *(_DWORD *)(v1 + 8) + 1 )
    {
      __asan_handle_no_return(v6);
      __assert_fail(
        "lua_gettop(L) == top - m_params + 1",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/"
        "detail/call_function.hpp",
        0x7Cu,
        "luabind::detail::proxy_function_caller<Ret, Tuple>::operator Ret() [with Ret = luabind::adl::object; Tuple = boo"
        "st::tuples::tuple<const std::__cxx11::basic_string<char>*, boost::tuples::null_type, boost::tuples::null_type, b"
        "oost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tu"
        "ples::null_type, boost::tuples::null_type, boost::tuples::null_type>]");
    }
    exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
    luabind::error::error(exception, L);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'luabind::error,
      (void (__fastcall *)(void *))luabind::error::~error);
  }
  v9 = lua_gettop(L) - top;
  if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 8);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 96), L, v9 + *(_DWORD *)(v1 + 8));
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
         L,
         (luabind::detail::by_value<luabind::adl::object>)-1,
         v10) < 0 )
  {
    v11 = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
    luabind::type_id::type_id(
      (luabind::type_id *const)v4 - 8,
      (const std::type_info *)&`typeinfo for'luabind::adl::object);
    luabind::cast_failed::cast_failed(v11, L, (const luabind::type_id *)v4 - 8);
    *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) = -8;
    __asan_handle_no_return(v11);
    _cxa_throw(
      v11,
      (struct type_info *)&`typeinfo for'luabind::cast_failed,
      (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
  }
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)this,
    (lua_State_0 *)(v2 + 48),
    (luabind::detail::by_value<luabind::adl::object>)L,
    -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 96));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result.m_handle.m_index = -168430091;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 112: range 0000000012244B4A-0000000012244F85
luabind::adl::object __cdecl luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // r12
  _DWORD *v5; // r13
  lua_State_0 *v6; // rdi
  int v7; // ecx
  luabind::error *exception; // rdi
  int v9; // ecx
  int v10; // edx
  luabind::cast_failed *v11; // rbx
  int top; // [rsp+14h] [rbp-ACh]
  lua_State_0 *L; // [rsp+18h] [rbp-A8h]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 128);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 13 converter:114 64 8 9 <unknown> 96 16 7 pop:138";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator luabind::adl::object;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( *(char *)(((v1 + 40) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v1 + 40, v1);
  *(_BYTE *)(v1 + 40) = 1;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  L = *(lua_State_0 **)v1;
  top = lua_gettop(*(lua_State_0 **)v1);
  luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>(
    L,
    (const boost::tuples::cons<const std::string*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type> > *)(v1 + 24));
  if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(lua_State_0 *, __int64, __int64))(v1 + 16))(L, 2LL, 1LL) )
  {
    v6 = L;
    v7 = lua_gettop(L);
    if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (lua_State_0 *)(v1 + 8);
      __asan_report_load4(v1 + 8);
    }
    if ( v7 != top - *(_DWORD *)(v1 + 8) + 1 )
    {
      __asan_handle_no_return(v6);
      __assert_fail(
        "lua_gettop(L) == top - m_params + 1",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/"
        "detail/call_function.hpp",
        0x7Cu,
        "luabind::detail::proxy_function_caller<Ret, Tuple>::operator Ret() [with Ret = luabind::adl::object; Tuple = boo"
        "st::tuples::tuple<const std::__cxx11::basic_string<char>*, const unsigned int*, boost::tuples::null_type, boost:"
        ":tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples:"
        ":null_type, boost::tuples::null_type, boost::tuples::null_type>]");
    }
    exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
    luabind::error::error(exception, L);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'luabind::error,
      (void (__fastcall *)(void *))luabind::error::~error);
  }
  v9 = lua_gettop(L) - top;
  if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v1 + 8);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 96), L, v9 + *(_DWORD *)(v1 + 8));
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
         L,
         (luabind::detail::by_value<luabind::adl::object>)-1,
         v10) < 0 )
  {
    v11 = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
    luabind::type_id::type_id(
      (luabind::type_id *const)v4 - 8,
      (const std::type_info *)&`typeinfo for'luabind::adl::object);
    luabind::cast_failed::cast_failed(v11, L, (const luabind::type_id *)v4 - 8);
    *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) = -8;
    __asan_handle_no_return(v11);
    _cxa_throw(
      v11,
      (struct type_info *)&`typeinfo for'luabind::cast_failed,
      (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
  }
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)this,
    (lua_State_0 *)(v2 + 48),
    (luabind::detail::by_value<luabind::adl::object>)L,
    -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 96));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result.m_handle.m_index = -168430091;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 112: range 000000000C6D4688-000000000C6D4B12
std::string *__cdecl luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator std::string(
        std::string *retstr,
        luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // r12
  _DWORD *v5; // r13
  __int64 v6; // rsi
  int *p_m_params; // rdi
  int v8; // ecx
  luabind::error *exception; // rdi
  int v10; // ecx
  luabind::cast_failed *v11; // rbx
  int v12; // r8d
  int top; // [rsp+14h] [rbp-ACh]
  lua_State_0 *L; // [rsp+18h] [rbp-A8h]
  char v17[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 128);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 13 converter:114 64 8 9 <unknown> 96 16 7 pop:138";
  *(_QWORD *)(v2 + 16) = luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::operator std::string;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  v6 = ((_BYTE)this + 25) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) != 0
    && (char)v6 >= *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->m_called, v6);
  }
  this->m_called = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  L = this->m_state;
  top = lua_gettop(this->m_state);
  luabind::detail::push_args_from_tuple<1>::apply(L, &this->m_args);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_fun(L, 0, 1) )
  {
    p_m_params = (int *)L;
    v8 = lua_gettop(L);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
    {
      p_m_params = &this->m_params;
      __asan_report_load4(&this->m_params);
    }
    if ( v8 != top - this->m_params + 1 )
    {
      __asan_handle_no_return(p_m_params);
      __assert_fail(
        "lua_gettop(L) == top - m_params + 1",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/"
        "detail/call_function.hpp",
        0x7Cu,
        "luabind::detail::proxy_function_caller<Ret, Tuple>::operator Ret() [with Ret = std::__cxx11::basic_string<char>;"
        " Tuple = boost::tuples::tuple<>]");
    }
    exception = (luabind::error *)__cxa_allocate_exception(0x10uLL);
    luabind::error::error(exception, L);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'luabind::error,
      (void (__fastcall *)(void *))luabind::error::~error);
  }
  v10 = lua_gettop(L) - top;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_params);
  }
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 96), L, v10 + this->m_params);
  luabind::detail::decorated_type<std::string>::get();
  if ( luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
         (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v2 + 48),
         L,
         (luabind::detail::by_value<std::string >)-1,
         (int)L) < 0 )
  {
    v11 = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
    luabind::type_id::type_id((luabind::type_id *const)v4 - 8, (const std::type_info *)&`typeinfo for'std::string);
    luabind::cast_failed::cast_failed(v11, L, (const luabind::type_id *)v4 - 8);
    *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) = -8;
    __asan_handle_no_return(v11);
    _cxa_throw(
      v11,
      (struct type_info *)&`typeinfo for'luabind::cast_failed,
      (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
  }
  luabind::detail::decorated_type<std::string>::get();
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
    retstr,
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v2 + 48),
    L,
    (luabind::detail::by_value<std::string >)-1,
    v12);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 96));
  if ( v17 == (char *)v2 )
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
  return retstr;
};

// Line 331: range 000000000C6C62CA-000000000C6C64A4
boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *__cdecl luabind::call_function<luabind::adl::object,std::string>(
        boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *retstr,
        lua_State_0 *L,
        const char *name,
        const std::string *a0)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *v10; // [rsp+18h] [rbp-88h]
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v10 = retstr;
  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    retstr = (boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *)96;
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 8 args:338 64 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = luabind::call_function<luabind::adl::object,std::string>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( !name )
  {
    __asan_handle_no_return(retstr);
    __assert_fail(
      "name && \"luabind::call_function() expects a function name\"",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/de"
      "tail/call_function.hpp",
      0x14Du,
      "typename boost::mpl::if_<boost::is_void<T>, luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const"
      " A0*> >, luabind::detail::proxy_function_caller<Ret, boost::tuples::tuple<const A0*> > >::type luabind::call_funct"
      "ion(lua_State*, const char*, const A0&) [with Ret = luabind::adl::object; A0 = std::__cxx11::basic_string<char>; t"
      "ypename boost::mpl::if_<boost::is_void<T>, luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const "
      "A0*> >, luabind::detail::proxy_function_caller<Ret, boost::tuples::tuple<const A0*> > >::type = luabind::detail::p"
      "roxy_function_caller<luabind::adl::object, boost::tuples::tuple<const std::__cxx11::basic_string<char>*, boost::tu"
      "ples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null"
      "_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type> >; "
      "lua_State = lua_State]");
  }
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 64) = a0;
  boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple(
    (boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *const)(v4 + 32),
    (boost::tuples::access_traits<const std::string*>::parameter_type)(v4 + 64));
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  lua_getglobal(L, name);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
    v10,
    L,
    1,
    luabind::detail::pcall,
    *(const boost::tuples::tuple<const std::string*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *)(v4 + 32));
  if ( v11 == (char *)v4 )
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
  return v10;
};

// Line 353: range 000000000C6C6CE0-000000000C6C6DD8
boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *__cdecl luabind::call_function<luabind::adl::object>(
        boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *retstr,
        const luabind::adl::object *obj)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  lua_State_0 *v5; // rdx
  lua_State_0 *v6; // rsi
  boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> v7; // r8
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 8 args:357";
  *(_QWORD *)(v2 + 16) = luabind::call_function<luabind::adl::object>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = luabind::adl::object::interpreter(obj);
  luabind::adl::object::push(obj, v5);
  v6 = luabind::adl::object::interpreter(obj);
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
    retstr,
    v6,
    1,
    luabind::detail::pcall,
    v7);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 353: range 000000001224461C-000000001224483F
boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *__cdecl luabind::call_function<luabind::adl::object,std::string,unsigned int>(
        boost::mpl::if_<boost::is_void<luabind::adl::object>,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *retstr,
        const luabind::adl::object *obj,
        const std::string *a0,
        const unsigned int *a1)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  lua_State_0 *v7; // rdx
  lua_State_0 *v8; // rsi
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 9 <unknown> 64 8 9 <unknown> 96 16 8 args:359";
  *(_QWORD *)(v4 + 16) = luabind::call_function<luabind::adl::object,std::string,unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 64) = a1;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v4 + 32) = a0;
  boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>::tuple(
    (boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *const)(v4 + 96),
    (boost::tuples::access_traits<const std::string*>::parameter_type)(v4 + 32),
    (boost::tuples::access_traits<unsigned int const*>::parameter_type)(v4 + 64));
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  v7 = luabind::adl::object::interpreter(obj);
  luabind::adl::object::push(obj, v7);
  v8 = luabind::adl::object::interpreter(obj);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<std::string const*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
    retstr,
    v8,
    1,
    luabind::detail::pcall,
    *(const boost::tuples::tuple<const std::string*,unsigned int const*,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> *)(v4 + 96));
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 353: range 000000000C6D427A-000000000C6D4372
boost::mpl::if_<boost::is_void<std::string >,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *__cdecl luabind::call_function<std::string>(
        boost::mpl::if_<boost::is_void<std::string >,luabind::detail::proxy_function_void_caller<boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >,luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > >::type *retstr,
        const luabind::adl::object *obj)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  lua_State_0 *v5; // rdx
  lua_State_0 *v6; // rsi
  boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> v7; // r8
  __int64 v8; // r9
  char obja; // [rsp+0h] [rbp-70h]
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  obja = (char)obj;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 8 args:357";
  *(_QWORD *)(v2 + 16) = luabind::call_function<std::string>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = luabind::adl::object::interpreter(obj);
  luabind::adl::object::push(obj, v5);
  v6 = luabind::adl::object::interpreter(obj);
  luabind::detail::proxy_function_caller<std::string,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
    retstr,
    v6,
    1,
    luabind::detail::pcall,
    v7,
    v8,
    obja);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 540: range 000000000C7B0CAA-000000000C7B0E40
void __fastcall luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller(
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> > *const this,
        lua_State_0 *L,
        int params,
        luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> >::function_t fun,
        const boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> args,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // cl
  char v13[80]; // [rsp+20h] [rbp-50h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 args:63";
  *(_QWORD *)(v7 + 16) = luabind::detail::proxy_function_caller<luabind::adl::object,boost::tuples::tuple<boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::proxy_function_caller;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  this->m_state = L;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_params >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = __asan_report_store4(&this->m_params);
  }
  this->m_params = params;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_fun >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  this->m_fun = fun;
  v10 = *(_BYTE *)(((unsigned __int64)&this->m_called >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (((unsigned __int8)this + 25) & 7) >= v10 )
  {
    LOBYTE(L) = v10 != 0;
    v9 = __asan_report_store1(&this->m_called, L);
  }
  this->m_called = 0;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)(v9 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)(v9 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
