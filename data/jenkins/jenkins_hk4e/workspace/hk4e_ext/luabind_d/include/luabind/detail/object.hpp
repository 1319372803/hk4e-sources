// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/object.hpp

// Line 63: range 000000000CBEA415-000000000CBEA513
void __cdecl luabind::detail::push_aux<char const* const,luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const char *const *value,
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char **v6; // rax
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<char const* const,luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = (const char **)boost::implicit_cast<char const* const&>(value);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::default_converter<char const*,void>::apply(
    (luabind::default_converter<char const*,void> *const)(v3 + 32),
    interpreter,
    *v6);
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

// Line 63: range 000000000CA15343-000000000CA15421
void __cdecl luabind::detail::push_aux<char const[10],luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const char (*value)[10],
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<char const[10],luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = (const char *)boost::implicit_cast<char const(&)[10]>(value);
  luabind::default_converter<char const*,void>::apply(
    (luabind::default_converter<char const*,void> *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 63: range 000000000CA150FD-000000000CA151DB
void __cdecl luabind::detail::push_aux<char const[5],luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const char (*value)[5],
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<char const[5],luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = (const char *)boost::implicit_cast<char const(&)[5]>(value);
  luabind::default_converter<char const*,void>::apply(
    (luabind::default_converter<char const*,void> *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 63: range 000000000CA15264-000000000CA15342
void __cdecl luabind::detail::push_aux<char const[6],luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const char (*value)[6],
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<char const[6],luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = (const char *)boost::implicit_cast<char const(&)[6]>(value);
  luabind::default_converter<char const*,void>::apply(
    (luabind::default_converter<char const*,void> *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 63: range 000000000CA1501E-000000000CA150FC
void __cdecl luabind::detail::push_aux<char const[8],luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const char (*value)[8],
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const char *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<char const[8],luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = (const char *)boost::implicit_cast<char const(&)[8]>(value);
  luabind::default_converter<char const*,void>::apply(
    (luabind::default_converter<char const*,void> *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 63: range 000000000CBE9DF5-000000000CBE9ED3
void __cdecl luabind::detail::push_aux<luabind::adl::object const,luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const luabind::adl::object *value,
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const luabind::adl::object *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<luabind::adl::object const,luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = boost::implicit_cast<luabind::adl::object const&>(value);
  luabind::detail::value_wrapper_converter<luabind::adl::object const>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<const luabind::adl::object> *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 63: range 000000000C97AA80-000000000C97AB5E
void __cdecl luabind::detail::push_aux<std::string const,luabind::detail::default_policy>(
        lua_State_0 *interpreter,
        const std::string *value,
        luabind::detail::default_policy *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::string *v6; // rdx
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 5 cv:73";
  *(_QWORD *)(v3 + 16) = luabind::detail::push_aux<std::string const,luabind::detail::default_policy>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  v6 = boost::implicit_cast<std::string const&>(value);
  luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v3 + 32),
    interpreter,
    v6);
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

// Line 75: range 000000000C7ACFAC-000000000C7AD482
void __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>(
        luabind::detail::basic_iterator<luabind::detail::basic_access> *const this,
        const luabind::adl::object *value_wrapper)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  lua_State_0 *v5; // rax
  char v6[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 7 pop:480 64 16 7 pop:486 96 16 9 <unknown> 128 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator<luabind::adl::object>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  v5 = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(value_wrapper);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v5 = (lua_State_0 *)__asan_report_store8();
  this->m_interpreter = v5;
  luabind::handle::handle(&this->m_table);
  luabind::handle::handle(&this->m_key);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), this->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(this->m_interpreter, value_wrapper);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushnil(this->m_interpreter);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( lua_next(this->m_interpreter, -2) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 64), this->m_interpreter, 2);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    luabind::handle::handle((luabind::handle *const)(v2 + 96), this->m_interpreter, -2);
    luabind::handle::swap((luabind::handle *const)(v2 + 96), &this->m_key);
    luabind::handle::~handle((luabind::handle *const)(v2 + 96));
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    luabind::handle::handle((luabind::handle *const)(v2 + 128), this->m_interpreter, -1);
    luabind::handle::swap((luabind::handle *const)(v2 + 128), &this->m_table);
    luabind::handle::~handle((luabind::handle *const)(v2 + 128));
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_interpreter = 0LL;
  }
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 77: range 000000000CAF28E0-000000000CAF292D
bool __cdecl __noreturn luabind::detail::throw_error_policy<bool>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 80: range 000000000CB90CE3-000000000CB910CC
std::string *__cdecl luabind::detail::object_cast_aux<std::string,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
        std::string *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        std::string *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::string > *a5,
        std::string *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::string,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(retstr, 0LL, (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::string>::get();
  if ( luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
         (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::string >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 96), (const std::type_info *)&`typeinfo for'std::string);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
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
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::string >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 84: range 000000000CBE9DC6-000000000CBE9DF4
void __cdecl luabind::detail::push<char const* const,luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const char *const *value,
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<char const* const,luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000C97AEF3-000000000C97AF21
void __cdecl luabind::detail::push<char const[10],luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const char (*value)[10],
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<char const[10],luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000C97AA51-000000000C97AA7F
void __cdecl luabind::detail::push<char const[5],luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const char (*value)[5],
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<char const[5],luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000C97AEC4-000000000C97AEF2
void __cdecl luabind::detail::push<char const[6],luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const char (*value)[6],
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<char const[6],luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000C97AA22-000000000C97AA50
void __cdecl luabind::detail::push<char const[8],luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const char (*value)[8],
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<char const[8],luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000CBE9102-000000000CBE9130
void __cdecl luabind::detail::push<luabind::adl::object const,luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const luabind::adl::object *value,
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<luabind::adl::object const,luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 84: range 000000000C8774A4-000000000C8774D2
void __cdecl luabind::detail::push<std::string const,luabind::detail::null_type>(
        lua_State_0 *interpreter,
        const std::string *value,
        const luabind::detail::null_type *a3)
{
  luabind::detail::push_aux<std::string const,luabind::detail::default_policy>(interpreter, value, 0LL);
};

// Line 95: range 000000000CBE9036-000000000CBE9101
void __cdecl luabind::detail::push<char const* const>(lua_State_0 *interpreter, const char *const *value)
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<char const* const>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<char const* const,luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000C878509-000000000C8785D4
void __cdecl luabind::detail::push<char const[10]>(lua_State_0 *interpreter, const char (*value)[10])
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<char const[10]>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<char const[10],luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000C877382-000000000C87744D
void __cdecl luabind::detail::push<char const[5]>(lua_State_0 *interpreter, const char (*value)[5])
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<char const[5]>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<char const[5],luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000C87843D-000000000C878508
void __cdecl luabind::detail::push<char const[6]>(lua_State_0 *interpreter, const char (*value)[6])
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<char const[6]>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<char const[6],luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000C8772B6-000000000C877381
void __cdecl luabind::detail::push<char const[8]>(lua_State_0 *interpreter, const char (*value)[8])
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<char const[8]>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<char const[8],luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000CBE8578-000000000CBE8643
void __cdecl luabind::detail::push<luabind::adl::object const>(
        lua_State_0 *interpreter,
        const luabind::adl::object *value)
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<luabind::adl::object const>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<luabind::adl::object const,luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 95: range 000000000C7B308B-000000000C7B3156
void __cdecl luabind::detail::push<std::string const>(lua_State_0 *interpreter, const std::string *value)
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
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push<std::string const>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  luabind::detail::push<std::string const,luabind::detail::null_type>(
    interpreter,
    value,
    (const luabind::detail::null_type *)(v2 + 32));
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

// Line 105: range 000000000C96C4D2-000000000C96C76C
int __cdecl luabind::detail::object_cast_aux<int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<int> *a4,
        int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // r14d
  int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<int>::get();
  if ( luabind::native_converter_base<int,luabind::default_converter<int,void>>::match(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'int);
    luabind::detail::throw_error_policy<int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<int>::get();
  v8 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 109: range 000000000C976A72-000000000C976D0C
unsigned int __cdecl luabind::detail::object_cast_aux<unsigned int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        unsigned int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<unsigned int> *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  unsigned int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<unsigned int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<unsigned int>::get();
  if ( luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::match(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'unsigned int);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<unsigned int>::get();
  v8 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 115: range 000000000C864906-000000000C864934
int __cdecl luabind::object_cast<int,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 138: range 000000000CB791E9-000000000CB79288
std::string *__cdecl luabind::object_cast<std::string,luabind::adl::index_proxy<luabind::adl::object>>(
        std::string *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  luabind::detail::object_cast_aux<std::string,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 138: range 000000000C8706B5-000000000C8706E3
unsigned int __cdecl luabind::object_cast<unsigned int,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<unsigned int,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 151: range 000000000CA0A96F-000000000CA0A9BC
int __cdecl __noreturn luabind::detail::throw_error_policy<int>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 226: range 000000000C6D3D63-000000000C6D3FC5
std::ostream *__cdecl luabind::adl::operator<<<luabind::adl::object>(
        std::ostream *os,
        const luabind::adl::object_interface<luabind::adl::object> *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::ostream_iterator<char,char,std::char_traits<char> > *v5; // rdi
  std::ostream *result; // rax
  lua_State_0 *interpreter; // [rsp+18h] [rbp-C8h]
  const char *p; // [rsp+20h] [rbp-C0h]
  std::size_t len; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 7 pop:232 64 16 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::adl::operator<<<luabind::adl::object>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter((const luabind::adl::object *)v);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), interpreter, 1);
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, (const luabind::adl::object *)v);
  p = lua_tolstring(interpreter, -1, 0LL);
  len = lua_rawlen(interpreter, -1);
  std::ostream_iterator<char,char,std::char_traits<char>>::ostream_iterator(
    (std::ostream_iterator<char,char,std::char_traits<char> > *const)(v2 + 64),
    os);
  v5 = (std::ostream_iterator<char,char,std::char_traits<char> > *)&p[len];
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
  {
    v5 = (std::ostream_iterator<char,char,std::char_traits<char> > *)(v2 + 96);
    __asan_report_store16();
  }
  std::copy<char const*,std::ostream_iterator<char,char,std::char_traits<char>>>((const char *)(v2 + 96), p, v5);
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  result = os;
  if ( v11 == (char *)v2 )
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

// Line 284: range 000000000C7B3080-000000000C7B308A
void __cdecl luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>>::~object_interface(
        luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > > *const this)
{
  ;
};

// Line 284: range 000000000C7B0F6C-000000000C7B0F76
void __cdecl luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::object>>::~object_interface(
        luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::object> > *const this)
{
  ;
};

// Line 284: range 000000000C87078E-000000000C870798
void __cdecl luabind::adl::object_interface<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::~object_interface(
        luabind::adl::object_interface<luabind::adl::iterator_proxy<luabind::detail::basic_access> > *const this)
{
  ;
};

// Line 284: range 000000000C65221E-000000000C652228
void __cdecl luabind::adl::object_interface<luabind::adl::object>::~object_interface(
        luabind::adl::object_interface<luabind::adl::object> *const this)
{
  ;
};

// Line 359: range 000000000CA1281A-000000000CA12988
void __cdecl luabind::adl::iterator_proxy<luabind::detail::basic_access>::iterator_proxy(
        luabind::adl::iterator_proxy<luabind::detail::basic_access> *const this,
        lua_State_0 *interpreter,
        const luabind::handle *table,
        const luabind::handle *key)
{
  int v4; // ecx
  int v5; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_table_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_table_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_table_index);
  }
  this->m_table_index = v4;
  v5 = this->m_table_index + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v5;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::handle::push(table, this->m_interpreter);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::handle::push(key, this->m_interpreter);
};

// Line 376: range 000000000C7AD63A-000000000C7AD695
void __cdecl luabind::adl::iterator_proxy<luabind::detail::basic_access>::~iterator_proxy(
        luabind::adl::iterator_proxy<luabind::detail::basic_access> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_interpreter )
    lua_settop(this->m_interpreter, -3);
  luabind::adl::object_interface<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::~object_interface((luabind::adl::object_interface<luabind::adl::iterator_proxy<luabind::detail::basic_access> > *const)this);
};

// Line 411: range 000000000CA1298A-000000000CA129BF
lua_State_0 *__cdecl luabind::adl::iterator_proxy<luabind::detail::basic_access>::interpreter(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_interpreter;
};

// Line 417: range 000000000CA129C0-000000000CA12B04
void __cdecl luabind::adl::iterator_proxy<luabind::detail::basic_access>::push(
        luabind::adl::iterator_proxy<luabind::detail::basic_access> *const this,
        lua_State_0 *interpreter)
{
  int m_key_index; // edx
  int m_table_index; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( interpreter != this->m_interpreter )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "interpreter == m_interpreter",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/object.hpp",
      0x1A3u,
      "void luabind::adl::iterator_proxy<AccessPolicy>::push(lua_State*) [with AccessPolicy = luabind::detail::basic_acce"
      "ss; lua_State = lua_State]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_key_index);
  }
  m_key_index = this->m_key_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushvalue(this->m_interpreter, m_key_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_table_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_table_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_table_index);
  }
  m_table_index = this->m_table_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::basic_access::get(this->m_interpreter, m_table_index);
};

// Line 441: range 000000000C614D9B-000000000C614DBD
void __cdecl luabind::detail::basic_access::get(lua_State_0 *interpreter, int table)
{
  lua_gettable(interpreter, table);
};

// Line 461: range 000000000C6C08AA-000000000C6C08D8
void __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::~basic_iterator(
        luabind::detail::basic_iterator<luabind::detail::basic_access> *const this)
{
  luabind::handle::~handle(&this->m_key);
  luabind::handle::~handle(&this->m_table);
};

// Line 470: range 000000000C7AD484-000000000C7AD4DE
void __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::basic_iterator(
        luabind::detail::basic_iterator<luabind::detail::basic_access> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = 0LL;
  luabind::handle::handle(&this->m_table);
  luabind::handle::handle(&this->m_key);
};

// Line 503: range 000000000C976FB4-000000000C977341
void __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::increment(
        luabind::detail::basic_iterator<luabind::detail::basic_access> *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  luabind::handle *p_m_table; // rdx
  luabind::handle *p_m_key; // rdx
  luabind::handle *v6; // rcx
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 7 pop:508 64 16 9 <unknown> 96 16 9 <unknown>";
  *(_QWORD *)(v1 + 16) = luabind::detail::basic_iterator<luabind::detail::basic_access>::increment;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  p_m_table = &this->m_table;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::handle::push(p_m_table, this->m_interpreter);
  p_m_key = &this->m_key;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::handle::push(p_m_key, this->m_interpreter);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v1 + 32), this->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( lua_next(this->m_interpreter, -2) )
  {
    v6 = &this->m_key;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    luabind::handle::replace(v6, this->m_interpreter, -2);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    lua_settop(this->m_interpreter, -3);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->m_interpreter = 0LL;
    luabind::handle::handle((luabind::handle *const)(v1 + 64));
    luabind::handle::swap((luabind::handle *const)(v1 + 64), &this->m_table);
    luabind::handle::~handle((luabind::handle *const)(v1 + 64));
    *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -1800;
    *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
    luabind::handle::handle((luabind::handle *const)(v1 + 96));
    luabind::handle::swap((luabind::handle *const)(v1 + 96), &this->m_key);
    luabind::handle::~handle((luabind::handle *const)(v1 + 96));
    *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -1800;
  }
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 523: range 000000000C976D0E-000000000C976FB2
bool __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::equal(
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *const this,
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r14
  lua_State_0 *m_interpreter; // rcx
  luabind::handle *p_m_key; // rdx
  luabind::handle *v8; // rdx
  bool result; // al
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 pop:531";
  *(_QWORD *)(v2 + 16) = luabind::detail::basic_iterator<luabind::detail::basic_access>::equal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_interpreter )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( other->m_interpreter )
  {
LABEL_31:
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    m_interpreter = this->m_interpreter;
    if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( m_interpreter == other->m_interpreter )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), this->m_interpreter, 2);
      p_m_key = &this->m_key;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      luabind::handle::push(p_m_key, this->m_interpreter);
      v8 = &other->m_key;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      luabind::handle::push(v8, this->m_interpreter);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = lua_compare(this->m_interpreter, -2, -1, 0) != 0;
      luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 1;
  }
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 534: range 000000000C8758C4-000000000C8758F9
lua_State_0 *__cdecl luabind::adl::index_proxy<luabind::adl::object>::interpreter(
        const luabind::adl::index_proxy<luabind::adl::object> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_interpreter;
};

// Line 537: range 000000000C977342-000000000C97739C
luabind::adl::iterator_proxy<luabind::detail::basic_access> __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::dereference(
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *const this)
{
  unsigned __int64 v1; // rsi
  const luabind::handle *v2; // rcx
  const luabind::handle *v3; // rdx
  luabind::adl::iterator_proxy<luabind::detail::basic_access> v4; // rax

  v2 = (const luabind::handle *)(v1 + 24);
  v3 = (const luabind::handle *)(v1 + 8);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::adl::iterator_proxy<luabind::detail::basic_access>::iterator_proxy(
    (luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)this,
    *(lua_State_0 **)v1,
    v3,
    v2);
  v4.m_interpreter = (lua_State_0 *)this;
  return v4;
};

// Line 594: range 000000000C7B9A0A-000000000C7B9B25
void __cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::index_proxy<char [10]>(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this,
        const luabind::adl::index_proxy<luabind::adl::object> *next,
        lua_State_0 *interpreter,
        const char (*key)[10])
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const[10]>(this->m_interpreter, key);
};

// Line 594: range 000000000C7B2A5E-000000000C7B2B79
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [5]>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *next,
        lua_State_0 *interpreter,
        const char (*key)[5])
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const[5]>(this->m_interpreter, key);
};

// Line 594: range 000000000C7B98EE-000000000C7B9A09
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [6]>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *next,
        lua_State_0 *interpreter,
        const char (*key)[6])
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const[6]>(this->m_interpreter, key);
};

// Line 594: range 000000000C7B2942-000000000C7B2A5D
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [8]>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *next,
        lua_State_0 *interpreter,
        const char (*key)[8])
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const[8]>(this->m_interpreter, key);
};

// Line 594: range 000000000CBE845C-000000000CBE8577
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char const*>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *next,
        lua_State_0 *interpreter,
        const char *const *key)
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const* const>(this->m_interpreter, key);
};

// Line 594: range 000000000C7B0E50-000000000C7B0F6B
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::index_proxy<std::string>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *next,
        lua_State_0 *interpreter,
        const std::string *key)
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<std::string const>(this->m_interpreter, key);
};

// Line 610: range 000000000C6C87C6-000000000C6C8821
void __cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::~index_proxy(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_interpreter )
    lua_settop(this->m_interpreter, -2);
  luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>>::~object_interface((luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > > *const)this);
};

// Line 610: range 000000000C6C7574-000000000C6C75CF
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::~index_proxy(
        luabind::adl::index_proxy<luabind::adl::object> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->m_interpreter )
    lua_settop(this->m_interpreter, -2);
  luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::object>>::~object_interface((luabind::adl::object_interface<luabind::adl::index_proxy<luabind::adl::object> > *const)this);
};

// Line 614: range 000000000C6C75D0-000000000C6C77E9
luabind::adl::object __cdecl luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object(
        luabind::adl::index_proxy<luabind::adl::object> *const this)
{
  luabind::adl::index_proxy<luabind::adl::object> *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 7 pop:920 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::adl::index_proxy<luabind::adl::object>::operator luabind::adl::object;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), v1->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::adl::index_proxy<luabind::adl::object>::push(v1, v1->m_interpreter);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::from_stack::from_stack((luabind::from_stack *const)(v2 + 64), v1->m_interpreter, -1);
  luabind::adl::object::object((luabind::adl::object *const)this, (const luabind::from_stack *)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 632: range 000000000C6C8822-000000000C6C8A82
luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> >::this_type *__cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator=<std::string>(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const luabind::adl::index_proxy<luabind::adl::object> *m_next; // rdx
  int m_key_index; // edx
  luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> >::this_type *result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 pop:635";
  *(_QWORD *)(v2 + 16) = luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator=<std::string>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_next = this->m_next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    this->m_interpreter,
    m_next);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), this->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_key_index);
  }
  m_key_index = this->m_key_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushvalue(this->m_interpreter, m_key_index);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<std::string const>(this->m_interpreter, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_settable(this->m_interpreter, -3);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  result = this;
  if ( v8 == (char *)v2 )
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

// Line 632: range 000000000CBE3AE0-000000000CBE3D40
luabind::adl::index_proxy<luabind::adl::object>::this_type *__cdecl luabind::adl::index_proxy<luabind::adl::object>::operator=<luabind::adl::object>(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const luabind::adl::object *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const luabind::adl::object *m_next; // rdx
  int m_key_index; // edx
  luabind::adl::index_proxy<luabind::adl::object>::this_type *result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 pop:635";
  *(_QWORD *)(v2 + 16) = luabind::adl::index_proxy<luabind::adl::object>::operator=<luabind::adl::object>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_next = this->m_next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(this->m_interpreter, m_next);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), this->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_key_index);
  }
  m_key_index = this->m_key_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushvalue(this->m_interpreter, m_key_index);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<luabind::adl::object const>(this->m_interpreter, value);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_settable(this->m_interpreter, -3);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  result = this;
  if ( v8 == (char *)v2 )
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

// Line 637: range 000000000CA0AA3A-000000000CA0AA68
bool __cdecl luabind::object_cast<bool,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<bool,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<bool>,bool>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 637: range 000000000C7B9F77-000000000C7B9FA5
float __cdecl luabind::object_cast<float,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<float,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 655: range 000000000C6D400A-000000000C6D405F
luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *__cdecl luabind::adl::index_proxy<luabind::adl::object>::operator[]<char [10]>(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *retstr,
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const char (*key)[10])
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::index_proxy<char [10]>(
    retstr,
    this,
    this->m_interpreter,
    key);
  return retstr;
};

// Line 655: range 000000000C6C8770-000000000C6C87C5
luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *__cdecl luabind::adl::index_proxy<luabind::adl::object>::operator[]<char [5]>(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *retstr,
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        const char (*key)[5])
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::index_proxy<char [5]>(
    retstr,
    this,
    this->m_interpreter,
    key);
  return retstr;
};

// Line 657: range 000000000C8785E4-000000000C87888E
float __cdecl luabind::detail::object_cast_aux<float,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        float *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<float> *a4,
        float *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  float result; // xmm0_4
  luabind::native_converter_base<float,luabind::default_converter<float,void> >::value_type v9; // [rsp+4h] [rbp-FCh]
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v11[192]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<float,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<float>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<float>::get();
  if ( luabind::native_converter_base<float,luabind::default_converter<float,void>>::match(
         (luabind::native_converter_base<float,luabind::default_converter<float,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<float>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'float);
    luabind::detail::throw_error_policy<float>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<float>::get();
  v9 = luabind::native_converter_base<float,luabind::default_converter<float,void>>::apply(
         (luabind::native_converter_base<float,luabind::default_converter<float,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<float>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 678: range 000000000CA87E83-000000000CA8811D
bool __cdecl luabind::detail::object_cast_aux<bool,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<bool>,bool>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        bool *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<bool> *a4,
        bool *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool v8; // r14
  bool result; // al
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<bool,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<bool>,bool>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<bool>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<bool>::get();
  if ( luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::match(
         (luabind::native_converter_base<bool,luabind::default_converter<bool,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<bool>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'bool);
    luabind::detail::throw_error_policy<bool>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<bool>::get();
  v8 = luabind::native_converter_base<bool,luabind::default_converter<bool,void>>::apply(
         (luabind::native_converter_base<bool,luabind::default_converter<bool,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<bool>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 700: range 000000000C7B1167-000000000C7B118C
void __cdecl luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
        lua_State_0 *interpreter,
        const luabind::adl::index_proxy<luabind::adl::object> *proxy)
{
  luabind::adl::index_proxy<luabind::adl::object>::push(
    (luabind::adl::index_proxy<luabind::adl::object> *const)proxy,
    interpreter);
};

// Line 717: range 000000000C97739D-000000000C9773B6
lua_State_0 *__cdecl luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *p)
{
  return luabind::adl::iterator_proxy<luabind::detail::basic_access>::interpreter(p);
};

// Line 735: range 000000000C64782C-000000000C647854
luabind::adl::object *__cdecl luabind::adl::object::operator=(
        luabind::adl::object *const this,
        const luabind::adl::object *a2)
{
  luabind::handle::operator=(&this->m_handle, &a2->m_handle);
  return this;
};

// Line 735: range 000000000C6478FE-000000000C647926
luabind::adl::object *__cdecl luabind::adl::object::operator=(
        luabind::adl::object *const this,
        luabind::adl::object *a2)
{
  luabind::handle::operator=(&this->m_handle, &a2->m_handle);
  return this;
};

// Line 735: range 000000000C614FA1-000000000C615141
luabind::adl::object __cdecl luabind::newtable(lua_State_0 *interpreter)
{
  lua_State_0 *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 pop:1215 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::newtable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  lua_createtable(v1, 0, 0);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), v1, 1);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v2 + 64), v1, -1);
  luabind::adl::object::object((luabind::adl::object *const)interpreter, (const luabind::from_stack *)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.m_handle.m_interpreter = interpreter;
  return result;
};

// Line 735: range 000000000C6478B4-000000000C6478FC
void __cdecl luabind::adl::object::object(luabind::adl::object *const this, const luabind::adl::object *a2)
{
  luabind::handle::handle(&this->m_handle, &a2->m_handle);
};

// Line 735: range 00000000122FCFD8-00000000122FD020
void __cdecl luabind::adl::object::object(luabind::adl::object *const this, luabind::adl::object *a2)
{
  luabind::handle::handle(&this->m_handle, &a2->m_handle);
};

// Line 735: range 000000000C614F7A-000000000C614FA0
void __cdecl luabind::adl::object::~object(luabind::adl::object *const this)
{
  luabind::handle::~handle(&this->m_handle);
  luabind::adl::object_interface<luabind::adl::object>::~object_interface((luabind::adl::object_interface<luabind::adl::object> *const)this);
};

// Line 738: range 000000000C614DBE-000000000C614DD8
void __cdecl luabind::adl::object::object(luabind::adl::object *const this)
{
  luabind::handle::handle(&this->m_handle);
};

// Line 741: range 000000000C614DDA-000000000C614E22
void __cdecl luabind::adl::object::object(luabind::adl::object *const this, const luabind::handle *other)
{
  luabind::handle::handle(&this->m_handle, other);
};

// Line 745: range 000000000C614E24-000000000C614ECC
void __cdecl luabind::adl::object::object(luabind::adl::object *const this, const luabind::from_stack *stack_reference)
{
  luabind::adl::object *v2; // rcx
  int index; // edx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&stack_reference->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&stack_reference->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&stack_reference->index);
  }
  index = stack_reference->index;
  if ( *(_BYTE *)(((unsigned __int64)stack_reference >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::handle::handle(&v2->m_handle, stack_reference->interpreter, index);
};

// Line 771: range 000000000C6C868C-000000000C6C86CE
luabind::adl::index_proxy<luabind::adl::object> *__cdecl luabind::adl::object::operator[]<char [5]>(
        luabind::adl::index_proxy<luabind::adl::object> *retstr,
        const luabind::adl::object *const this,
        const char (*key)[5])
{
  lua_State_0 *v3; // rdi

  v3 = luabind::handle::interpreter(&this->m_handle);
  luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [5]>(retstr, this, v3, key);
  return retstr;
};

// Line 771: range 000000000C6D3FC6-000000000C6D4008
luabind::adl::index_proxy<luabind::adl::object> *__cdecl luabind::adl::object::operator[]<char [6]>(
        luabind::adl::index_proxy<luabind::adl::object> *retstr,
        const luabind::adl::object *const this,
        const char (*key)[6])
{
  lua_State_0 *v3; // rdi

  v3 = luabind::handle::interpreter(&this->m_handle);
  luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [6]>(retstr, this, v3, key);
  return retstr;
};

// Line 771: range 000000000C6C8648-000000000C6C868A
luabind::adl::index_proxy<luabind::adl::object> *__cdecl luabind::adl::object::operator[]<char [8]>(
        luabind::adl::index_proxy<luabind::adl::object> *retstr,
        const luabind::adl::object *const this,
        const char (*key)[8])
{
  lua_State_0 *v3; // rdi

  v3 = luabind::handle::interpreter(&this->m_handle);
  luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char [8]>(retstr, this, v3, key);
  return retstr;
};

// Line 771: range 000000000CBE38BA-000000000CBE38FC
luabind::adl::index_proxy<luabind::adl::object> *__cdecl luabind::adl::object::operator[]<char const*>(
        luabind::adl::index_proxy<luabind::adl::object> *retstr,
        const luabind::adl::object *const this,
        const char *const *key)
{
  lua_State_0 *v3; // rdi

  v3 = luabind::handle::interpreter(&this->m_handle);
  luabind::adl::index_proxy<luabind::adl::object>::index_proxy<char const*>(retstr, this, v3, key);
  return retstr;
};

// Line 771: range 000000000C6C7530-000000000C6C7572
luabind::adl::index_proxy<luabind::adl::object> *__cdecl luabind::adl::object::operator[]<std::string>(
        luabind::adl::index_proxy<luabind::adl::object> *retstr,
        const luabind::adl::object *const this,
        const std::string *key)
{
  lua_State_0 *v3; // rdi

  v3 = luabind::handle::interpreter(&this->m_handle);
  luabind::adl::index_proxy<luabind::adl::object>::index_proxy<std::string>(retstr, this, v3, key);
  return retstr;
};

// Line 788: range 000000000C614ECE-000000000C614EF3
void __cdecl luabind::adl::object::push(const luabind::adl::object *const this, lua_State_0 *interpreter)
{
  luabind::handle::push(&this->m_handle, interpreter);
};

// Line 793: range 000000000C614EF4-000000000C614F0D
lua_State_0 *__cdecl luabind::adl::object::interpreter(const luabind::adl::object *const this)
{
  return luabind::handle::interpreter(&this->m_handle);
};

// Line 798: range 000000000C614F0E-000000000C614F2D
bool __cdecl luabind::adl::object::is_valid(const luabind::adl::object *const this)
{
  return luabind::handle::interpreter(&this->m_handle) != 0LL;
};

// Line 868: range 000000000C614F2E-000000000C614F47
lua_State_0 *__cdecl luabind::value_wrapper_traits<luabind::adl::object>::interpreter(
        const luabind::adl::object *value)
{
  return luabind::adl::object::interpreter(value);
};

// Line 873: range 000000000C614F48-000000000C614F6D
void __cdecl luabind::value_wrapper_traits<luabind::adl::object>::unwrap(
        lua_State_0 *interpreter,
        const luabind::adl::object *value)
{
  luabind::adl::object::push(value, interpreter);
};

// Line 878: range 000000000C614F6E-000000000C614F78
__int64 luabind::value_wrapper_traits<luabind::adl::object>::check()
{
  return 1LL;
};

// Line 896: range 000000000CBD29CA-000000000CBD2A17
unsigned __int64 __cdecl __noreturn luabind::detail::throw_error_policy<unsigned long>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 906: range 000000000C7B9B26-000000000C7B9CFA
void __cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::push(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this,
        lua_State_0 *interpreter)
{
  const luabind::adl::index_proxy<luabind::adl::object> *m_next; // rdx
  int m_key_index; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( interpreter != this->m_interpreter )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "interpreter == m_interpreter",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/object.hpp",
      0x38Cu,
      "void luabind::adl::index_proxy<Next>::push(lua_State*) [with Next = luabind::adl::index_proxy<luabind::adl::object"
      ">; lua_State = lua_State]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_next = this->m_next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    this->m_interpreter,
    m_next);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_key_index);
  }
  m_key_index = this->m_key_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushvalue(this->m_interpreter, m_key_index);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_gettable(this->m_interpreter, -2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_rotate(this->m_interpreter, -2, -1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_settop(this->m_interpreter, -2);
};

// Line 906: range 000000000C7B0F78-000000000C7B114C
void __cdecl luabind::adl::index_proxy<luabind::adl::object>::push(
        luabind::adl::index_proxy<luabind::adl::object> *const this,
        lua_State_0 *interpreter)
{
  const luabind::adl::object *m_next; // rdx
  int m_key_index; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( interpreter != this->m_interpreter )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "interpreter == m_interpreter",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/luabind/../luabind_d/include/luabind/detail/object.hpp",
      0x38Cu,
      "void luabind::adl::index_proxy<Next>::push(lua_State*) [with Next = luabind::adl::object; lua_State = lua_State]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m_next = this->m_next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(this->m_interpreter, m_next);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_key_index);
  }
  m_key_index = this->m_key_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_pushvalue(this->m_interpreter, m_key_index);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_gettable(this->m_interpreter, -2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_rotate(this->m_interpreter, -2, -1);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  lua_settop(this->m_interpreter, -2);
};

// Line 915: range 000000000C7B114D-000000000C7B1166
lua_State_0 *__cdecl luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(
        const luabind::adl::index_proxy<luabind::adl::object> *proxy)
{
  return luabind::adl::index_proxy<luabind::adl::object>::interpreter(proxy);
};

// Line 918: range 000000000C6D4060-000000000C6D4279
luabind::adl::object __cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator luabind::adl::object(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this)
{
  luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 7 pop:920 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::operator luabind::adl::object;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), v1->m_interpreter, 1);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::push(v1, v1->m_interpreter);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::from_stack::from_stack((luabind::from_stack *const)(v2 + 64), v1->m_interpreter, -1);
  luabind::adl::object::object((luabind::adl::object *const)this, (const luabind::from_stack *)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 935: range 000000000C7AE182-000000000C7AE1AE
luabind::adl::object __cdecl luabind::detail::basic_iterator<luabind::detail::basic_access>::key(
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *const this)
{
  __int64 v1; // rsi
  luabind::adl::object result; // 0:rax.12

  luabind::adl::object::object((luabind::adl::object *const)this, (const luabind::handle *)(v1 + 24));
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 950: range 00000000122D8442-00000000122D8836
boost::optional<luabind::adl::object> *__cdecl luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<luabind::adl::object>,boost::optional<luabind::adl::object>>(
        boost::optional<luabind::adl::object> *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        luabind::adl::object *a3,
        luabind::detail::null_type *a4,
        luabind::detail::nothrow_error_policy<luabind::adl::object> *a5,
        boost::optional<luabind::adl::object> *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // edx
  lua_State_0 *interpreter; // [rsp+38h] [rbp-E8h]
  char v12[224]; // [rsp+40h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969 160 16 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<luabind::adl::object>,boost::optional<luabind::adl::object>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -219021312;
  v8[536862725] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( interpreter )
  {
    luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
      interpreter,
      value_wrapper);
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
    luabind::detail::decorated_type<luabind::adl::object>::get();
    if ( luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
           interpreter,
           (luabind::detail::by_value<luabind::adl::object>)-1,
           v9) >= 0 )
    {
      luabind::detail::decorated_type<luabind::adl::object>::get();
      if ( *(_WORD *)(((v6 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
        (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)(v6 + 160),
        (lua_State_0 *)(v6 + 48),
        (luabind::detail::by_value<luabind::adl::object>)interpreter,
        -1);
      boost::optional<luabind::adl::object>::optional(
        retstr,
        (boost::optional<luabind::adl::object>::rval_reference_type)(v6 + 160));
      luabind::adl::object::~object((luabind::adl::object *const)(v6 + 160));
      *(_WORD *)(((v6 + 160) >> 3) + 0x7FFF8000) = -1800;
    }
    else
    {
      luabind::type_id::type_id(
        (luabind::type_id *const)(v6 + 96),
        (const std::type_info *)&`typeinfo for'luabind::adl::object);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      luabind::detail::nothrow_error_policy<luabind::adl::object>::handle_error(
        retstr,
        interpreter,
        (const luabind::type_id *)(v6 + 96));
      *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  }
  else
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::nothrow_error_policy<luabind::adl::object>::handle_error(
      retstr,
      0LL,
      (const luabind::type_id *)(v6 + 64));
  }
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 950: range 000000001230EC15-000000001230F078
boost::optional<std::string > *__cdecl luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<std::string>,boost::optional<std::string>>(
        boost::optional<std::string > *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        std::string *a3,
        luabind::detail::null_type *a4,
        luabind::detail::nothrow_error_policy<std::string > *a5,
        boost::optional<std::string > *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-108h]
  char v12[256]; // [rsp+40h] [rbp-100h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969 160 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<std::string>,boost::optional<std::string>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -219021312;
  v8[536862726] = -202116109;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( interpreter )
  {
    luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
      interpreter,
      value_wrapper);
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
    luabind::detail::decorated_type<std::string>::get();
    if ( luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
           (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
           interpreter,
           (luabind::detail::by_value<std::string >)-1,
           (int)interpreter) >= 0 )
    {
      luabind::detail::decorated_type<std::string>::get();
      if ( *(char *)(((v6 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 96 + 31) & 7) >= *(_BYTE *)(((v6 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 160, 32LL);
      }
      luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
        (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::value_type *)(v6 + 160),
        (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
        interpreter,
        (luabind::detail::by_value<std::string >)-1,
        v9);
      boost::optional<std::string>::optional(retstr, (boost::optional<std::string >::rval_reference_type)(v6 + 160));
      std::string::~string((void *)(v6 + 160));
      *(_DWORD *)(((v6 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      luabind::type_id::type_id((luabind::type_id *const)(v6 + 96), (const std::type_info *)&`typeinfo for'std::string);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 40LL);
      }
      luabind::detail::nothrow_error_policy<std::string>::handle_error(
        retstr,
        interpreter,
        (const luabind::type_id *)(v6 + 96));
      *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  }
  else
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 40LL);
    }
    luabind::detail::nothrow_error_policy<std::string>::handle_error(retstr, 0LL, (const luabind::type_id *)(v6 + 64));
  }
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 950: range 00000000122DC6DB-00000000122DCA2B
boost::optional<unsigned int> __cdecl luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<unsigned int>,boost::optional<unsigned int>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        unsigned int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::nothrow_error_policy<unsigned int> *a4,
        boost::optional<unsigned int> *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  boost::optional<unsigned int> v8; // r14
  luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::value_type v9; // edx
  lua_State_0 *interpreter; // [rsp+38h] [rbp-F8h]
  char v11[240]; // [rsp+40h] [rbp-F0h] BYREF
  boost::optional<unsigned int> result; // 0:al.1,4:rax^4.4

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 1 6 cv:976 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<unsigned int>,boost::optional<unsigned int>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( interpreter )
  {
    luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
      interpreter,
      value_wrapper);
    luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 160), interpreter, 1);
    luabind::detail::decorated_type<unsigned int>::get();
    if ( luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::match(
           (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 32),
           interpreter,
           (luabind::detail::by_value<unsigned int>)-1,
           (int)interpreter) >= 0 )
    {
      luabind::detail::decorated_type<unsigned int>::get();
      v9 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
             (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 32),
             interpreter,
             (luabind::detail::by_value<unsigned int>)-1,
             (int)interpreter);
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48);
      *(_DWORD *)(v5 + 48) = v9;
      boost::optional<unsigned int>::optional(
        (boost::optional<unsigned int> *const)(v5 + 128),
        (boost::optional<unsigned int>::rval_reference_type)(v5 + 48));
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = *(boost::optional<unsigned int> *)(v5 + 128);
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'unsigned int);
      v8 = luabind::detail::nothrow_error_policy<unsigned int>::handle_error(
             interpreter,
             (const luabind::type_id *)(v5 + 96));
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 160));
  }
  else
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    v8 = luabind::detail::nothrow_error_policy<unsigned int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 950: range 00000000122C5298-00000000122C5519
data::EventType __cdecl luabind::detail::object_cast_aux<data::EventType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::EventType>,data::EventType>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::EventType *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::EventType> *a4,
        data::EventType *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::EventType v9; // r14d
  data::EventType result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::EventType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::EventType>,data::EventType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::EventType>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::EventType>::get();
  if ( luabind::detail::enum_converter::match<data::EventType>(
         interpreter,
         (luabind::detail::by_value<data::EventType>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::EventType);
    luabind::detail::throw_error_policy<data::EventType>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::EventType>::get();
  v9 = luabind::detail::enum_converter::apply<data::EventType>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::EventType>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 00000000122AE5BE-00000000122AE83F
data::GadgetState __cdecl luabind::detail::object_cast_aux<data::GadgetState,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetState>,data::GadgetState>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::GadgetState *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::GadgetState> *a4,
        data::GadgetState *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::GadgetState v9; // r14d
  data::GadgetState result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::GadgetState,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetState>,data::GadgetState>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::GadgetState>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::GadgetState>::get();
  if ( luabind::detail::enum_converter::match<data::GadgetState>(
         interpreter,
         (luabind::detail::by_value<data::GadgetState>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::GadgetState);
    luabind::detail::throw_error_policy<data::GadgetState>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::GadgetState>::get();
  v9 = luabind::detail::enum_converter::apply<data::GadgetState>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::GadgetState>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 00000000122D6C31-00000000122D6EB2
data::GadgetType __cdecl luabind::detail::object_cast_aux<data::GadgetType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetType>,data::GadgetType>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::GadgetType *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::GadgetType> *a4,
        data::GadgetType *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::GadgetType v9; // r14d
  data::GadgetType result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::GadgetType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetType>,data::GadgetType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::GadgetType>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::GadgetType>::get();
  if ( luabind::detail::enum_converter::match<data::GadgetType>(
         interpreter,
         (luabind::detail::by_value<data::GadgetType>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::GadgetType);
    luabind::detail::throw_error_policy<data::GadgetType>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::GadgetType>::get();
  v9 = luabind::detail::enum_converter::apply<data::GadgetType>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::GadgetType>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 0000000012309373-00000000123095F4
data::PlatformRotType __cdecl luabind::detail::object_cast_aux<data::PlatformRotType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::PlatformRotType>,data::PlatformRotType>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::PlatformRotType *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::PlatformRotType> *a4,
        data::PlatformRotType *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::PlatformRotType v9; // r14d
  data::PlatformRotType result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::PlatformRotType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::PlatformRotType>,data::PlatformRotType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::PlatformRotType>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::PlatformRotType>::get();
  if ( luabind::detail::enum_converter::match<data::PlatformRotType>(
         interpreter,
         (luabind::detail::by_value<data::PlatformRotType>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::PlatformRotType);
    luabind::detail::throw_error_policy<data::PlatformRotType>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::PlatformRotType>::get();
  v9 = luabind::detail::enum_converter::apply<data::PlatformRotType>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::PlatformRotType>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 00000000122AB25A-00000000122AB4DB
data::RegionShape __cdecl luabind::detail::object_cast_aux<data::RegionShape,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::RegionShape>,data::RegionShape>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::RegionShape *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::RegionShape> *a4,
        data::RegionShape *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::RegionShape v9; // r14d
  data::RegionShape result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::RegionShape,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::RegionShape>,data::RegionShape>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::RegionShape>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::RegionShape>::get();
  if ( luabind::detail::enum_converter::match<data::RegionShape>(
         interpreter,
         (luabind::detail::by_value<data::RegionShape>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::RegionShape);
    luabind::detail::throw_error_policy<data::RegionShape>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::RegionShape>::get();
  v9 = luabind::detail::enum_converter::apply<data::RegionShape>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::RegionShape>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 0000000012254B14-0000000012254D95
data::VisionLevelType __cdecl luabind::detail::object_cast_aux<data::VisionLevelType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::VisionLevelType>,data::VisionLevelType>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        data::VisionLevelType *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<data::VisionLevelType> *a4,
        data::VisionLevelType *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  data::VisionLevelType v9; // r14d
  data::VisionLevelType result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<data::VisionLevelType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::VisionLevelType>,data::VisionLevelType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<data::VisionLevelType>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<data::VisionLevelType>::get();
  if ( luabind::detail::enum_converter::match<data::VisionLevelType>(
         interpreter,
         (luabind::detail::by_value<data::VisionLevelType>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'data::VisionLevelType);
    luabind::detail::throw_error_policy<data::VisionLevelType>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<data::VisionLevelType>::get();
  v9 = luabind::detail::enum_converter::apply<data::VisionLevelType>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<data::VisionLevelType>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 0000000012275DCB-0000000012276075
double __cdecl luabind::detail::object_cast_aux<double,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<double>,double>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        double *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<double> *a4,
        double *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  double result; // xmm0_8
  luabind::native_converter_base<double,luabind::default_converter<double,void> >::value_type v9; // [rsp+0h] [rbp-100h]
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v11[192]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<double,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<double>,double>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<double>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<double>::get();
  if ( luabind::native_converter_base<double,luabind::default_converter<double,void>>::match(
         (luabind::native_converter_base<double,luabind::default_converter<double,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<double>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'double);
    luabind::detail::throw_error_policy<double>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<double>::get();
  v9 = luabind::native_converter_base<double,luabind::default_converter<double,void>>::apply(
         (luabind::native_converter_base<double,luabind::default_converter<double,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<double>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 000000000C87205E-000000000C872308
float __cdecl luabind::detail::object_cast_aux<float,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        float *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<float> *a4,
        float *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  float result; // xmm0_4
  luabind::native_converter_base<float,luabind::default_converter<float,void> >::value_type v9; // [rsp+4h] [rbp-FCh]
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v11[192]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<float,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<float>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<float>::get();
  if ( luabind::native_converter_base<float,luabind::default_converter<float,void>>::match(
         (luabind::native_converter_base<float,luabind::default_converter<float,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<float>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'float);
    luabind::detail::throw_error_policy<float>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<float>::get();
  v9 = luabind::native_converter_base<float,luabind::default_converter<float,void>>::apply(
         (luabind::native_converter_base<float,luabind::default_converter<float,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<float>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 000000001226B641-000000001226B8DB
int __cdecl luabind::detail::object_cast_aux<int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<int> *a4,
        int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // r14d
  int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<int>::get();
  if ( luabind::native_converter_base<int,luabind::default_converter<int,void>>::match(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'int);
    luabind::detail::throw_error_policy<int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<int>::get();
  v8 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 00000000122552A1-000000001225553B
int __cdecl luabind::detail::object_cast_aux<int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
        const luabind::adl::object *value_wrapper,
        int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<int> *a4,
        int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // r14d
  int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<int>::get();
  if ( luabind::native_converter_base<int,luabind::default_converter<int,void>>::match(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'int);
    luabind::detail::throw_error_policy<int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<int>::get();
  v8 = luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
         (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 000000000C870799-000000000C870A98
luabind::adl::object __cdecl luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<luabind::adl::object>,luabind::adl::object>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        luabind::adl::object *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<luabind::adl::object> *a4,
        luabind::adl::object *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v10[192]; // [rsp+40h] [rbp-C0h] BYREF
  luabind::adl::object result; // 0:rax.12

  v5 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<luabind::adl::object>,luabind::adl::object>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>((const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)a2);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(_WORD *)(((unsigned __int64)value_wrapper >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::detail::throw_error_policy<luabind::adl::object>::handle_error((lua_State_0 *)value_wrapper, 0LL);
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    (const luabind::adl::iterator_proxy<luabind::detail::basic_access> *)a2);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( luabind::detail::value_wrapper_converter<luabind::adl::object>::match<luabind::adl::object>(
         interpreter,
         (luabind::detail::by_value<luabind::adl::object>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'luabind::adl::object);
    if ( *(_WORD *)(((unsigned __int64)value_wrapper >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    luabind::detail::throw_error_policy<luabind::adl::object>::handle_error(
      (lua_State_0 *)value_wrapper,
      (const luabind::type_id *)interpreter);
  }
  luabind::detail::decorated_type<luabind::adl::object>::get();
  if ( *(_WORD *)(((unsigned __int64)value_wrapper >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)value_wrapper,
    (lua_State_0 *)(v5 + 48),
    (luabind::detail::by_value<luabind::adl::object>)interpreter,
    -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  if ( v10 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    result.m_handle.m_index = -168430091;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)value_wrapper;
  return result;
};

// Line 950: range 000000001230F53D-000000001230F7BE
proto::GadgetBornType __cdecl luabind::detail::object_cast_aux<proto::GadgetBornType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GadgetBornType>,proto::GadgetBornType>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        proto::GadgetBornType *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<proto::GadgetBornType> *a4,
        proto::GadgetBornType *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  proto::GadgetBornType v9; // r14d
  proto::GadgetBornType result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<proto::GadgetBornType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GadgetBornType>,proto::GadgetBornType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<proto::GadgetBornType>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<proto::GadgetBornType>::get();
  if ( luabind::detail::enum_converter::match<proto::GadgetBornType>(
         interpreter,
         (luabind::detail::by_value<proto::GadgetBornType>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'proto::GadgetBornType);
    luabind::detail::throw_error_policy<proto::GadgetBornType>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<proto::GadgetBornType>::get();
  v9 = luabind::detail::enum_converter::apply<proto::GadgetBornType>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<proto::GadgetBornType>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 00000000122E5750-00000000122E59D1
proto::GroupLoadStrategy __cdecl luabind::detail::object_cast_aux<proto::GroupLoadStrategy,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GroupLoadStrategy>,proto::GroupLoadStrategy>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        proto::GroupLoadStrategy *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<proto::GroupLoadStrategy> *a4,
        proto::GroupLoadStrategy *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  proto::GroupLoadStrategy v9; // r14d
  proto::GroupLoadStrategy result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<proto::GroupLoadStrategy,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GroupLoadStrategy>,proto::GroupLoadStrategy>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<proto::GroupLoadStrategy>::handle_error(
      0LL,
      (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<proto::GroupLoadStrategy>::get();
  if ( luabind::detail::enum_converter::match<proto::GroupLoadStrategy>(
         interpreter,
         (luabind::detail::by_value<proto::GroupLoadStrategy>)-1,
         v8) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v5 + 96),
      (const std::type_info *)&`typeinfo for'proto::GroupLoadStrategy);
    luabind::detail::throw_error_policy<proto::GroupLoadStrategy>::handle_error(
      interpreter,
      (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<proto::GroupLoadStrategy>::get();
  v9 = luabind::detail::enum_converter::apply<proto::GroupLoadStrategy>(
         (luabind::detail::enum_converter *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<proto::GroupLoadStrategy>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v9;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 0000000012256444-000000001225682D
std::string *__cdecl luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
        std::string *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        std::string *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::string > *a5,
        std::string *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(retstr, 0LL, (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::string>::get();
  if ( luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
         (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::string >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 96), (const std::type_info *)&`typeinfo for'std::string);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
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
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::string >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 950: range 000000000C7B2B7A-000000000C7B2F63
std::string *__cdecl luabind::detail::object_cast_aux<std::string,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
        std::string *retstr,
        const luabind::adl::object *value_wrapper,
        std::string *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::string > *a5,
        std::string *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::string,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(retstr, 0LL, (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::string>::get();
  if ( luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::match(
         (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::string >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 96), (const std::type_info *)&`typeinfo for'std::string);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    luabind::detail::throw_error_policy<std::string>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
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
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::string >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 950: range 000000001225FDE7-00000000122601D0
std::vector<luabind::adl::object> *__cdecl luabind::detail::object_cast_aux<std::vector<luabind::adl::object>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>,std::vector<luabind::adl::object>>(
        std::vector<luabind::adl::object> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        std::vector<luabind::adl::object> *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::vector<luabind::adl::object> > *a5,
        std::vector<luabind::adl::object> *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::vector<luabind::adl::object>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>,std::vector<luabind::adl::object>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>::handle_error(
      retstr,
      0LL,
      (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::vector<luabind::adl::object>>::get();
  if ( luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::match(
         (luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::vector<luabind::adl::object> >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v6 + 96),
      (const std::type_info *)&`typeinfo for'std::vector<luabind::adl::object>);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
  }
  luabind::detail::decorated_type<std::vector<luabind::adl::object>>::get();
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void>>::apply(
    retstr,
    (luabind::native_converter_base<std::vector<luabind::adl::object>,luabind::default_converter<std::vector<luabind::adl::object>,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::vector<luabind::adl::object> >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 950: range 0000000012309B71-0000000012309F5A
std::vector<std::string> *__cdecl luabind::detail::object_cast_aux<std::vector<std::string>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<std::string>>,std::vector<std::string>>(
        std::vector<std::string> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        std::vector<std::string> *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::vector<std::string> > *a5,
        std::vector<std::string> *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::vector<std::string>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<std::string>>,std::vector<std::string>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<std::string>>::handle_error(
      retstr,
      0LL,
      (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::vector<std::string>>::get();
  if ( luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::match(
         (luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::vector<std::string> >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v6 + 96),
      (const std::type_info *)&`typeinfo for'std::vector<std::string>);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<std::string>>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
  }
  luabind::detail::decorated_type<std::vector<std::string>>::get();
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void>>::apply(
    retstr,
    (luabind::native_converter_base<std::vector<std::string>,luabind::default_converter<std::vector<std::string>,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::vector<std::string> >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 950: range 0000000012264A65-0000000012264E4E
std::vector<unsigned int> *__cdecl luabind::detail::object_cast_aux<std::vector<unsigned int>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<unsigned int>>,std::vector<unsigned int>>(
        std::vector<unsigned int> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        std::vector<unsigned int> *a3,
        luabind::detail::null_type *a4,
        luabind::detail::throw_error_policy<std::vector<unsigned int> > *a5,
        std::vector<unsigned int> *a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r8d
  lua_State_0 *interpreter; // [rsp+38h] [rbp-C8h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v6 + 16) = luabind::detail::object_cast_aux<std::vector<unsigned int>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<unsigned int>>,std::vector<unsigned int>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v6 + 64), (const std::type_info *)&`typeinfo for'void);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<unsigned int>>::handle_error(
      retstr,
      0LL,
      (const luabind::type_id *)(v6 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v6 + 128), interpreter, 1);
  luabind::detail::decorated_type<std::vector<unsigned int>>::get();
  if ( luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::match(
         (luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const)(v6 + 48),
         interpreter,
         (luabind::detail::by_value<std::vector<unsigned int> >)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id(
      (luabind::type_id *const)(v6 + 96),
      (const std::type_info *)&`typeinfo for'std::vector<unsigned int>);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    luabind::detail::throw_error_policy<std::vector<unsigned int>>::handle_error(
      retstr,
      interpreter,
      (const luabind::type_id *)(v6 + 96));
  }
  luabind::detail::decorated_type<std::vector<unsigned int>>::get();
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::apply(
    retstr,
    (luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const)(v6 + 48),
    interpreter,
    (luabind::detail::by_value<std::vector<unsigned int> >)-1,
    v9);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v6 + 128));
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 950: range 000000000C871DC3-000000000C87205D
unsigned int __cdecl luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper,
        unsigned int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<unsigned int> *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  unsigned int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::interpreter<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<unsigned int>::get();
  if ( luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::match(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'unsigned int);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<unsigned int>::get();
  v8 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 950: range 000000001225AB59-000000001225ADF3
unsigned int __cdecl luabind::detail::object_cast_aux<unsigned int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
        const luabind::adl::object *value_wrapper,
        unsigned int *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<unsigned int> *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  unsigned int result; // eax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<unsigned int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<unsigned int>::get();
  if ( luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::match(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'unsigned int);
    luabind::detail::throw_error_policy<unsigned int>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<unsigned int>::get();
  v8 = luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
         (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<unsigned int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 986: range 000000000C7B2F64-000000000C7B307F
void __cdecl luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object>>::index_proxy<char [5]>(
        luabind::adl::index_proxy<luabind::adl::index_proxy<luabind::adl::object> > *const this,
        const luabind::adl::index_proxy<luabind::adl::object> *next,
        lua_State_0 *interpreter,
        const char (*key)[5])
{
  int v4; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_interpreter = interpreter;
  v4 = lua_gettop(interpreter) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_key_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_key_index);
  }
  this->m_key_index = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_next = next;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::push<char const[5]>(this->m_interpreter, key);
};

// Line 996: range 00000000122D5AEF-00000000122D5B3C
data::EventType __cdecl __noreturn luabind::detail::throw_error_policy<data::EventType>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 00000000122C697A-00000000122C69C7
data::GadgetState __cdecl __noreturn luabind::detail::throw_error_policy<data::GadgetState>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 00000000122E4A06-00000000122E4A53
data::GadgetType __cdecl __noreturn luabind::detail::throw_error_policy<data::GadgetType>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000001230AB6E-000000001230ABBB
data::PlatformRotType __cdecl __noreturn luabind::detail::throw_error_policy<data::PlatformRotType>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 00000000122C4D32-00000000122C4D7F
data::RegionShape __cdecl __noreturn luabind::detail::throw_error_policy<data::RegionShape>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 0000000012283546-0000000012283593
data::VisionLevelType __cdecl __noreturn luabind::detail::throw_error_policy<data::VisionLevelType>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000001229FB90-000000001229FBDD
double __cdecl __noreturn luabind::detail::throw_error_policy<double>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000000C978414-000000000C978461
float __cdecl __noreturn luabind::detail::throw_error_policy<float>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000000C9773B7-000000000C977408
luabind::adl::object __cdecl __noreturn luabind::detail::throw_error_policy<luabind::adl::object>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  const luabind::type_id *v2; // rdx
  luabind::cast_failed *exception; // rdi
  const luabind::type_id *type_infoa; // [rsp+8h] [rbp-28h]

  type_infoa = v2;
  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, (lua_State_0 *)type_info, type_infoa);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000001230FD94-000000001230FDE1
proto::GadgetBornType __cdecl __noreturn luabind::detail::throw_error_policy<proto::GadgetBornType>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 00000000122F154E-00000000122F159B
proto::GroupLoadStrategy __cdecl __noreturn luabind::detail::throw_error_policy<proto::GroupLoadStrategy>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000000C87744E-000000000C87749F
std::string *__cdecl __noreturn luabind::detail::throw_error_policy<std::string>::handle_error(
        std::string *retstr,
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000001228D370-000000001228D3C1
std::vector<luabind::adl::object> *__cdecl __noreturn luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>::handle_error(
        std::vector<luabind::adl::object> *retstr,
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000001230B177-000000001230B1C8
std::vector<std::string> *__cdecl __noreturn luabind::detail::throw_error_policy<std::vector<std::string>>::handle_error(
        std::vector<std::string> *retstr,
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 0000000012292C8E-0000000012292CDF
std::vector<unsigned int> *__cdecl __noreturn luabind::detail::throw_error_policy<std::vector<unsigned int>>::handle_error(
        std::vector<unsigned int> *retstr,
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 996: range 000000000C978349-000000000C978396
unsigned int __cdecl __noreturn luabind::detail::throw_error_policy<unsigned int>::handle_error(
        lua_State_0 *interpreter,
        const luabind::type_id *type_info)
{
  luabind::cast_failed *exception; // rdi

  exception = (luabind::cast_failed *)__cxa_allocate_exception(0x18uLL);
  luabind::cast_failed::cast_failed(exception, interpreter, type_info);
  __asan_handle_no_return(exception);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'luabind::cast_failed,
    (void (__fastcall *)(void *))luabind::cast_failed::~cast_failed);
};

// Line 999: range 000000000C97740D-000000000C977432
void __cdecl luabind::value_wrapper_traits<luabind::adl::iterator_proxy<luabind::detail::basic_access>>::unwrap<luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        lua_State_0 *interpreter,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *p)
{
  luabind::adl::iterator_proxy<luabind::detail::basic_access>::push(
    (luabind::adl::iterator_proxy<luabind::detail::basic_access> *const)p,
    interpreter);
};

// Line 1019: range 00000000122E5CEE-00000000122E5D13
boost::optional<luabind::adl::object> *__cdecl luabind::detail::nothrow_error_policy<luabind::adl::object>::handle_error(
        boost::optional<luabind::adl::object> *retstr,
        lua_State_0 *a2,
        const luabind::type_id *a3)
{
  boost::optional<luabind::adl::object>::optional(retstr);
  return retstr;
};

// Line 1019: range 000000001230FC23-000000001230FC48
boost::optional<std::string > *__cdecl luabind::detail::nothrow_error_policy<std::string>::handle_error(
        boost::optional<std::string > *retstr,
        lua_State_0 *a2,
        const luabind::type_id *a3)
{
  boost::optional<std::string>::optional(retstr);
  return retstr;
};

// Line 1019: range 00000000122ECA26-00000000122ECB0E
boost::optional<unsigned int> __cdecl luabind::detail::nothrow_error_policy<unsigned int>::handle_error(
        lua_State_0 *a1,
        const luabind::type_id *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF
  boost::optional<unsigned int> result; // 0:al.1,4:rax^4.4

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::nothrow_error_policy<unsigned int>::handle_error;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::optional<unsigned int>::optional((boost::optional<unsigned int> *const)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(boost::optional<unsigned int> *)(v2 + 32);
  if ( v5 == (char *)v2 )
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

// Line 1028: range 00000000122ABB12-00000000122ABB40
data::EventType __cdecl luabind::object_cast<data::EventType,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::EventType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::EventType>,data::EventType>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 000000001228AD30-000000001228AD5E
data::GadgetState __cdecl luabind::object_cast<data::GadgetState,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::GadgetState,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetState>,data::GadgetState>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 00000000122C6A3F-00000000122C6A6D
data::GadgetType __cdecl luabind::object_cast<data::GadgetType,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::GadgetType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::GadgetType>,data::GadgetType>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 0000000012306B1D-0000000012306B4B
data::PlatformRotType __cdecl luabind::object_cast<data::PlatformRotType,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::PlatformRotType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::PlatformRotType>,data::PlatformRotType>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 0000000012286280-00000000122862AE
data::RegionShape __cdecl luabind::object_cast<data::RegionShape,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::RegionShape,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::RegionShape>,data::RegionShape>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 0000000012232D64-0000000012232D92
data::VisionLevelType __cdecl luabind::object_cast<data::VisionLevelType,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<data::VisionLevelType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<data::VisionLevelType>,data::VisionLevelType>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 000000001224C8DD-000000001224C90B
double __cdecl luabind::object_cast<double,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  return luabind::detail::object_cast_aux<double,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<double>,double>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 000000000C7AE1AF-000000000C7AE1DD
float __cdecl luabind::object_cast<float,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  return luabind::detail::object_cast_aux<float,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<float>,float>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 00000000122428C3-00000000122428F1
int __cdecl luabind::object_cast<int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  return luabind::detail::object_cast_aux<int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 00000000122332D7-0000000012233305
int __cdecl luabind::object_cast<int,luabind::adl::object>(const luabind::adl::object *value_wrapper)
{
  return luabind::detail::object_cast_aux<int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<int>,int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 000000000C7AD696-000000000C7AD6F3
luabind::adl::object __cdecl luabind::object_cast<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  luabind::adl::object *v1; // rsi
  luabind::adl::object result; // 0:rax.12

  if ( *(_WORD *)(((unsigned __int64)value_wrapper >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<luabind::adl::object>,luabind::adl::object>(
             value_wrapper,
             v1,
             0LL,
             0LL,
             0LL);
  result.m_handle.m_interpreter = (lua_State_0 *)value_wrapper;
  return result;
};

// Line 1028: range 000000001230E74A-000000001230E778
proto::GadgetBornType __cdecl luabind::object_cast<proto::GadgetBornType,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<proto::GadgetBornType,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GadgetBornType>,proto::GadgetBornType>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 00000000122D80C5-00000000122D80F3
proto::GroupLoadStrategy __cdecl luabind::object_cast<proto::GroupLoadStrategy,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<proto::GroupLoadStrategy,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<proto::GroupLoadStrategy>,proto::GroupLoadStrategy>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 0000000012233C85-0000000012233D24
std::string *__cdecl luabind::object_cast<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        std::string *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1028: range 000000000C6C86CF-000000000C6C876E
std::string *__cdecl luabind::object_cast<std::string,luabind::adl::object>(
        std::string *retstr,
        const luabind::adl::object *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  luabind::detail::object_cast_aux<std::string,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<std::string>,std::string>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1028: range 000000001223A2B7-000000001223A356
std::vector<luabind::adl::object> *__cdecl luabind::object_cast<std::vector<luabind::adl::object>,luabind::adl::index_proxy<luabind::adl::object>>(
        std::vector<luabind::adl::object> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::detail::object_cast_aux<std::vector<luabind::adl::object>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<luabind::adl::object>>,std::vector<luabind::adl::object>>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1028: range 00000000123070FF-000000001230719E
std::vector<std::string> *__cdecl luabind::object_cast<std::vector<std::string>,luabind::adl::index_proxy<luabind::adl::object>>(
        std::vector<std::string> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::detail::object_cast_aux<std::vector<std::string>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<std::string>>,std::vector<std::string>>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1028: range 000000001223F1EB-000000001223F28A
std::vector<unsigned int> *__cdecl luabind::object_cast<std::vector<unsigned int>,luabind::adl::index_proxy<luabind::adl::object>>(
        std::vector<unsigned int> *retstr,
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::detail::object_cast_aux<std::vector<unsigned int>,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<std::vector<unsigned int>>,std::vector<unsigned int>>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1028: range 000000000C7AE153-000000000C7AE181
unsigned int __cdecl luabind::object_cast<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  return luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1028: range 00000000122368B1-00000000122368DF
unsigned int __cdecl luabind::object_cast<unsigned int,luabind::adl::object>(const luabind::adl::object *value_wrapper)
{
  return luabind::detail::object_cast_aux<unsigned int,luabind::adl::object,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned int>,unsigned int>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1052: range 00000000122C9662-00000000122C9701
boost::optional<luabind::adl::object> *__cdecl luabind::object_cast_nothrow<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        boost::optional<luabind::adl::object> *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  luabind::detail::object_cast_aux<luabind::adl::object,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<luabind::adl::object>,boost::optional<luabind::adl::object>>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1052: range 000000001230DFB9-000000001230E058
boost::optional<std::string > *__cdecl luabind::object_cast_nothrow<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        boost::optional<std::string > *retstr,
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->m_storage.dummy_.aligner_ + 31) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 40LL);
  }
  luabind::detail::object_cast_aux<std::string,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<std::string>,boost::optional<std::string>>(
    retstr,
    value_wrapper,
    0LL,
    0LL,
    0LL,
    0LL);
  return retstr;
};

// Line 1052: range 00000000122CB178-00000000122CB1A6
boost::optional<unsigned int> __cdecl luabind::object_cast_nothrow<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>>(
        const luabind::adl::iterator_proxy<luabind::detail::basic_access> *value_wrapper)
{
  return luabind::detail::object_cast_aux<unsigned int,luabind::adl::iterator_proxy<luabind::detail::basic_access>,luabind::detail::null_type,luabind::detail::nothrow_error_policy<unsigned int>,boost::optional<unsigned int>>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1089: range 000000001226E5AE-000000001226E61C
void __cdecl luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>(
        lua_State_0 *L,
        const boost::tuples::cons<const std::string*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type> > *x)
{
  const std::string **head; // rax
  const boost::tuples::cons<unsigned int const*,boost::tuples::null_type> *tail; // rdx

  head = (const std::string **)boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::get_head(x);
  if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::convert_to_lua<std::string>(L, *head);
  tail = boost::tuples::cons<std::string const*,boost::tuples::cons<unsigned int const*,boost::tuples::null_type>>::get_tail(x);
  luabind::detail::push_args_from_tuple<2>::apply<unsigned int const*,boost::tuples::null_type>(L, tail);
};

// Line 1089: range 000000000C7B0B0E-000000000C7B0C23
void __cdecl luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::null_type>(
        lua_State_0 *L,
        const boost::tuples::cons<const std::string*,boost::tuples::null_type> *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string **head; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push_args_from_tuple<1>::apply<std::string const*,boost::tuples::null_type>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  head = (const std::string **)boost::tuples::cons<std::string const*,boost::tuples::null_type>::get_head(x);
  if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::convert_to_lua<std::string>(L, *head);
  boost::tuples::cons<std::string const*,boost::tuples::null_type>::get_tail(x);
  luabind::detail::push_args_from_tuple<2>::apply(L, (const boost::tuples::null_type *)(v2 + 32));
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

// Line 1089: range 000000001229A44C-000000001229A561
void __cdecl luabind::detail::push_args_from_tuple<2>::apply<unsigned int const*,boost::tuples::null_type>(
        lua_State_0 *L,
        const boost::tuples::cons<unsigned int const*,boost::tuples::null_type> *x)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const unsigned int **head; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::detail::push_args_from_tuple<2>::apply<unsigned int const*,boost::tuples::null_type>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  head = (const unsigned int **)boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::get_head(x);
  if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  luabind::detail::convert_to_lua<unsigned int>(L, *head);
  boost::tuples::cons<unsigned int const*,boost::tuples::null_type>::get_tail(x);
  luabind::detail::push_args_from_tuple<3>::apply(L, (const boost::tuples::null_type *)(v2 + 32));
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

// Line 1098: range 000000000C7B0E41-000000000C7B0E4F
void __cdecl luabind::detail::push_args_from_tuple<1>::apply(lua_State_0 *a1, const boost::tuples::null_type *a2)
{
  ;
};

// Line 1098: range 000000000C87577A-000000000C875788
void __cdecl luabind::detail::push_args_from_tuple<2>::apply(lua_State_0 *a1, const boost::tuples::null_type *a2)
{
  ;
};

// Line 1098: range 00000000122B9CBC-00000000122B9CCA
void __cdecl luabind::detail::push_args_from_tuple<3>::apply(lua_State_0 *a1, const boost::tuples::null_type *a2)
{
  ;
};

// Line 1221: range 000000000C615142-000000000C6152E2
luabind::adl::object __cdecl luabind::globals(lua_State_0 *interpreter)
{
  lua_State_0 *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 pop:1223 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::globals;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  lua_rawgeti(v1, -1001000, 2LL);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), v1, 1);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v2 + 64), v1, -1);
  luabind::adl::object::object((luabind::adl::object *const)interpreter, (const luabind::from_stack *)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.m_handle.m_interpreter = interpreter;
  return result;
};

// Line 1296: range 000000000C6C77EA-000000000C6C7927
int __cdecl luabind::type<luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r14d
  int result; // eax
  lua_State_0 *interpreter; // [rsp+18h] [rbp-78h]
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 pop:1303";
  *(_QWORD *)(v1 + 16) = luabind::type<luabind::adl::index_proxy<luabind::adl::object>>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value);
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v1 + 32), interpreter, 1);
  v4 = lua_type(interpreter, -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v1 + 32));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 1296: range 000000000C6C550D-000000000C6C564A
int __cdecl luabind::type<luabind::adl::object>(const luabind::adl::object *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r14d
  int result; // eax
  lua_State_0 *interpreter; // [rsp+18h] [rbp-78h]
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 8 pop:1303";
  *(_QWORD *)(v1 + 16) = luabind::type<luabind::adl::object>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(value);
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, value);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v1 + 32), interpreter, 1);
  v4 = lua_type(interpreter, -1);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v1 + 32));
  result = v4;
  if ( v7 == (char *)v1 )
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

// Line 1310: range 000000000CBD2340-000000000CBD25DA
unsigned __int64 __cdecl luabind::detail::object_cast_aux<unsigned long,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned long>,unsigned long>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper,
        unsigned __int64 *a2,
        luabind::detail::null_type *a3,
        luabind::detail::throw_error_policy<long unsigned int> *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 result; // rax
  lua_State_0 *interpreter; // [rsp+38h] [rbp-D8h]
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 6 cv:976 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 pop:969";
  *(_QWORD *)(v5 + 16) = luabind::detail::object_cast_aux<unsigned long,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned long>,unsigned long>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::interpreter<luabind::adl::object>(value_wrapper);
  if ( !interpreter )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 64), (const std::type_info *)&`typeinfo for'void);
    luabind::detail::throw_error_policy<unsigned long>::handle_error(0LL, (const luabind::type_id *)(v5 + 64));
  }
  luabind::value_wrapper_traits<luabind::adl::index_proxy<luabind::adl::object>>::unwrap<luabind::adl::object>(
    interpreter,
    value_wrapper);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v5 + 128), interpreter, 1);
  luabind::detail::decorated_type<unsigned long>::get();
  if ( luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::match(
         (luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<long unsigned int>)-1,
         (int)interpreter) < 0 )
  {
    luabind::type_id::type_id((luabind::type_id *const)(v5 + 96), (const std::type_info *)&`typeinfo for'unsigned long);
    luabind::detail::throw_error_policy<unsigned long>::handle_error(interpreter, (const luabind::type_id *)(v5 + 96));
  }
  luabind::detail::decorated_type<unsigned long>::get();
  v8 = luabind::native_converter_base<unsigned long,luabind::default_converter<unsigned long,void>>::apply(
         (luabind::native_converter_base<long unsigned int,luabind::default_converter<long unsigned int,void> > *const)(v5 + 48),
         interpreter,
         (luabind::detail::by_value<long unsigned int>)-1,
         (int)interpreter);
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v5 + 128));
  result = v8;
  if ( v11 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1321: range 000000000CBD1BA6-000000000CBD1BD4
unsigned __int64 __cdecl luabind::object_cast<unsigned long,luabind::adl::index_proxy<luabind::adl::object>>(
        const luabind::adl::index_proxy<luabind::adl::object> *value_wrapper)
{
  return luabind::detail::object_cast_aux<unsigned long,luabind::adl::index_proxy<luabind::adl::object>,luabind::detail::null_type,luabind::detail::throw_error_policy<unsigned long>,unsigned long>(
           value_wrapper,
           0LL,
           0LL,
           0LL,
           0LL);
};

// Line 1386: range 000000000CBE38FD-000000000CBE3ADF
luabind::adl::object __cdecl luabind::property<luabind::adl::object>(const luabind::adl::object *get)
{
  const luabind::adl::object *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  lua_State_0 *interpreter; // [rsp+18h] [rbp-88h]
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF
  luabind::adl::object result; // 0:rax.12

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 8 pop:1396 64 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = luabind::property<luabind::adl::object>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  interpreter = luabind::value_wrapper_traits<luabind::adl::object>::interpreter(v1);
  luabind::value_wrapper_traits<luabind::adl::object>::unwrap(interpreter, v1);
  lua_pushnil(interpreter);
  lua_pushcclosure(interpreter, luabind::detail::property_tag, 2);
  luabind::detail::stack_pop::stack_pop((luabind::detail::stack_pop *const)(v2 + 32), interpreter, 1);
  luabind::from_stack::from_stack((luabind::from_stack *const)(v2 + 64), interpreter, -1);
  luabind::adl::object::object((luabind::adl::object *const)get, (const luabind::from_stack *)(v2 + 64));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  luabind::detail::stack_pop::~stack_pop((luabind::detail::stack_pop *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result.m_handle.m_interpreter = (lua_State_0 *)get;
  return result;
};
