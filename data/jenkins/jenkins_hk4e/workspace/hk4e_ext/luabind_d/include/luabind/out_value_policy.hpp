// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/luabind_d/include/luabind/out_value_policy.hpp

// Line 204: range 00000000009DE7FA-00000000009DE856
int luabind::detail::pure_out_value_converter<16,luabind::detail::null_type>::consumed_args(
        const luabind::detail::pure_out_value_converter<16,luabind::detail::null_type> *const this,
        ...)
{
  return 0;
};

// Line 204: range 00000000009DC618-00000000009DC674
int luabind::detail::pure_out_value_converter<24,luabind::detail::null_type>::consumed_args(
        const luabind::detail::pure_out_value_converter<24,luabind::detail::null_type> *const this,
        ...)
{
  return 0;
};

// Line 204: range 00000000009DD564-00000000009DD5C0
int luabind::detail::pure_out_value_converter<32,luabind::detail::null_type>::consumed_args(
        const luabind::detail::pure_out_value_converter<32,luabind::detail::null_type> *const this,
        ...)
{
  return 0;
};

// Line 204: range 00000000009DD760-00000000009DD7BC
int luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::consumed_args(
        const luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *const this,
        ...)
{
  return 0;
};

// Line 204: range 00000000009DD962-00000000009DD9BE
int luabind::detail::pure_out_value_converter<8,luabind::detail::null_type>::consumed_args(
        const luabind::detail::pure_out_value_converter<8,luabind::detail::null_type> *const this,
        ...)
{
  return 0;
};

// Line 210: range 00000000009DD9DE-00000000009DDA37
double *__cdecl luabind::detail::pure_out_value_converter<8,luabind::detail::null_type>::apply<double>(
        luabind::detail::pure_out_value_converter<8,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<double> a3,
        int a4)
{
  unsigned __int64 v4; // rax

  v4 = (unsigned __int64)operator new(8uLL, this);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)v4 = 0LL;
  return (double *)this;
};

// Line 210: range 00000000009DE8D0-00000000009DE941
int *__cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::apply<int>(
        luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<int> a3,
        int a4)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // rdx

  v4 = (unsigned __int64)operator new(4uLL, this);
  v5 = (_DWORD *)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v4);
  *v5 = 0;
  return (int *)this->m_storage;
};

// Line 210: range 00000000009DE896-00000000009DE8CF
luabind::adl::object *__cdecl luabind::detail::pure_out_value_converter<16,luabind::detail::null_type>::apply<luabind::adl::object>(
        luabind::detail::pure_out_value_converter<16,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<luabind::adl::object> a3,
        int a4)
{
  luabind::adl::object *v4; // rax

  v4 = (luabind::adl::object *)operator new(0x10uLL, this);
  luabind::adl::object::object(v4);
  return (luabind::adl::object *)this;
};

// Line 210: range 00000000009DD5E0-00000000009DD619
std::string *__cdecl luabind::detail::pure_out_value_converter<32,luabind::detail::null_type>::apply<std::string>(
        luabind::detail::pure_out_value_converter<32,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<std::string > a3,
        int a4)
{
  std::string *v4; // rax

  v4 = (std::string *)operator new(0x20uLL, this);
  std::string::basic_string(v4);
  return (std::string *)this;
};

// Line 210: range 00000000009DC878-00000000009DC92F
std::vector<unsigned int> *__cdecl luabind::detail::pure_out_value_converter<24,luabind::detail::null_type>::apply<std::vector<unsigned int>>(
        luabind::detail::pure_out_value_converter<24,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<std::vector<unsigned int> > a3,
        int a4)
{
  unsigned __int64 v4; // rax

  v4 = (unsigned __int64)operator new(0x18uLL, this);
  if ( *(char *)((v4 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 23) & 7) >= *(_BYTE *)(((v4 + 23) >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_store_n(v4, 24LL);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)v4);
  return (std::vector<unsigned int> *)this;
};

// Line 210: range 00000000009DD7DC-00000000009DD84D
unsigned int *__cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::apply<unsigned int>(
        luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *const this,
        lua_State_0 *a2,
        luabind::detail::by_reference<unsigned int> a3,
        int a4)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // rdx

  v4 = (unsigned __int64)operator new(4uLL, this);
  v5 = (_DWORD *)v4;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v4);
  *v5 = 0;
  return (unsigned int *)this;
};

// Line 223: range 00000000009DE864-00000000009DE875
int __cdecl luabind::detail::pure_out_value_converter<16,luabind::detail::null_type>::match<luabind::adl::object>(
        lua_State_0 *a1,
        luabind::detail::by_reference<luabind::adl::object> a2,
        int a3)
{
  return 0;
};

// Line 223: range 00000000009DC802-00000000009DC813
int __cdecl luabind::detail::pure_out_value_converter<24,luabind::detail::null_type>::match<std::vector<unsigned int>>(
        lua_State_0 *a1,
        luabind::detail::by_reference<std::vector<unsigned int> > a2,
        int a3)
{
  return 0;
};

// Line 223: range 00000000009DD5CE-00000000009DD5DF
int __cdecl luabind::detail::pure_out_value_converter<32,luabind::detail::null_type>::match<std::string>(
        lua_State_0 *a1,
        luabind::detail::by_reference<std::string > a2,
        int a3)
{
  return 0;
};

// Line 223: range 00000000009DE883-00000000009DE894
int __cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::match<int>(
        lua_State_0 *a1,
        luabind::detail::by_reference<int> a2,
        int a3)
{
  return 0;
};

// Line 223: range 00000000009DD7CA-00000000009DD7DB
int __cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::match<unsigned int>(
        lua_State_0 *a1,
        luabind::detail::by_reference<unsigned int> a2,
        int a3)
{
  return 0;
};

// Line 223: range 00000000009DD9CC-00000000009DD9DD
int __cdecl luabind::detail::pure_out_value_converter<8,luabind::detail::null_type>::match<double>(
        lua_State_0 *a1,
        luabind::detail::by_reference<double> a2,
        int a3)
{
  return 0;
};

// Line 229: range 00000000009DE942-00000000009DEA27
void __cdecl luabind::detail::pure_out_value_converter<16,luabind::detail::null_type>::converter_postcall<luabind::adl::object>(
        luabind::detail::pure_out_value_converter<16,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<luabind::adl::object> a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<16,luabind::detail::null_type>::converter_postcall<luabind::adl::object>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  luabind::detail::value_wrapper_converter<luabind::adl::object>::apply<luabind::adl::object>(
    (luabind::detail::value_wrapper_converter<luabind::adl::object> *const)(v4 + 32),
    L,
    (const luabind::adl::object *)this);
  luabind::adl::object::~object((luabind::adl::object *const)this);
  if ( v7 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 229: range 00000000009DC942-00000000009DCA27
void __cdecl luabind::detail::pure_out_value_converter<24,luabind::detail::null_type>::converter_postcall<std::vector<unsigned int>>(
        luabind::detail::pure_out_value_converter<24,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<std::vector<unsigned int> > a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<24,luabind::detail::null_type>::converter_postcall<std::vector<unsigned int>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void>>::apply(
    (luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> > *const)(v4 + 32),
    L,
    (luabind::native_converter_base<std::vector<unsigned int>,luabind::default_converter<std::vector<unsigned int>,void> >::param_type)this);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)this);
  if ( v7 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 229: range 00000000009DD61A-00000000009DD6FF
void __cdecl luabind::detail::pure_out_value_converter<32,luabind::detail::null_type>::converter_postcall<std::string>(
        luabind::detail::pure_out_value_converter<32,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<std::string > a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<32,luabind::detail::null_type>::converter_postcall<std::string>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  luabind::native_converter_base<std::string,luabind::default_converter<std::string,void>>::apply(
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> > *const)(v4 + 32),
    L,
    (luabind::native_converter_base<std::string,luabind::default_converter<std::string,void> >::param_type)this);
  std::string::~string((std::string *const)this);
  if ( v7 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 229: range 00000000009DEA28-00000000009DEB3A
void __cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::converter_postcall<int>(
        luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<int> a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *v6; // rdi
  unsigned __int64 v7; // r12
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::converter_postcall<int>;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v6 = this;
    __asan_report_load4(this);
  }
  luabind::native_converter_base<int,luabind::default_converter<int,void>>::apply(
    (luabind::native_converter_base<int,luabind::default_converter<int,void> > *const)&v6[-8],
    L,
    (luabind::native_converter_base<int,luabind::default_converter<int,void> >::param_type)*this);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 229: range 00000000009DD84E-00000000009DD960
void __cdecl luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::converter_postcall<unsigned int>(
        luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<unsigned int> a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *v6; // rdi
  unsigned __int64 v7; // r12
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (luabind::detail::pure_out_value_converter<4,luabind::detail::null_type> *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<4,luabind::detail::null_type>::converter_postcall<unsigned int>;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v6 = this;
    __asan_report_load4(this);
  }
  luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void>>::apply(
    (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> > *const)&v6[-8],
    L,
    (luabind::native_converter_base<unsigned int,luabind::default_converter<unsigned int,void> >::param_type)*this);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 229: range 00000000009DDA38-00000000009DDB3A
void __cdecl luabind::detail::pure_out_value_converter<8,luabind::detail::null_type>::converter_postcall<double>(
        luabind::detail::pure_out_value_converter<8,luabind::detail::null_type> *const this,
        lua_State_0 *L,
        luabind::detail::by_reference<double> a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // r12
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 13 converter:232";
  *(_QWORD *)(v4 + 16) = luabind::detail::pure_out_value_converter<8,luabind::detail::null_type>::converter_postcall<double>;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  luabind::native_converter_base<double,luabind::default_converter<double,void>>::apply(
    (luabind::native_converter_base<double,luabind::default_converter<double,void> > *const)v6 - 32,
    L,
    *(luabind::native_converter_base<double,luabind::default_converter<double,void> >::param_type *)this);
  if ( v8 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 285: range 00000000009E06B5-00000000009E06C3
void __cdecl luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>::postcall(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};

// Line 285: range 00000000009E0795-00000000009E07A3
void __cdecl luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>::postcall(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};

// Line 285: range 00000000009E1181-00000000009E118F
void __cdecl luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>::postcall(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};

// Line 285: range 00000000009E11D8-00000000009E11E6
void __cdecl luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>::postcall(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};

// Line 285: range 00000000009E1190-00000000009E119E
void __cdecl luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>::postcall(
        lua_State_0 *a1,
        const luabind::index_map *a2)
{
  ;
};

// Line 323: range 000000000053A7BC-000000000053A7C1
luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type> __cdecl luabind::pure_out_value<2>(
        boost::arg<2> a1)
{
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<2,luabind::detail::null_type>,luabind::detail::null_type> result; // al

  return result;
};

// Line 323: range 000000000053A2A4-000000000053A2A9
luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> __cdecl luabind::pure_out_value<3>(
        boost::arg<3> a1)
{
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<3,luabind::detail::null_type>,luabind::detail::null_type> result; // al

  return result;
};

// Line 323: range 000000000053945C-0000000000539461
luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type> __cdecl luabind::pure_out_value<4>(
        boost::arg<4> a1)
{
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<4,luabind::detail::null_type>,luabind::detail::null_type> result; // al

  return result;
};

// Line 323: range 0000000000539462-0000000000539467
luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type> __cdecl luabind::pure_out_value<5>(
        boost::arg<5> a1)
{
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<5,luabind::detail::null_type>,luabind::detail::null_type> result; // al

  return result;
};

// Line 323: range 00000000005397C8-00000000005397CD
luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>,luabind::detail::null_type> __cdecl luabind::pure_out_value<6>(
        boost::arg<6> a1)
{
  luabind::detail::policy_cons<luabind::detail::pure_out_value_policy<6,luabind::detail::null_type>,luabind::detail::null_type> result; // al

  return result;
};
