// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/utf8_v2_3_2/source/utf8/checked.h

// Line 37: range 000000000E9FD500-000000000E9FD54D
void __cdecl utf8::exception::~exception(utf8::exception *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'utf8::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *this = (utf8::exception)v1;
  std::exception::~exception((std::exception *)this);
};

// Line 37: range 000000000E9FD54E-000000000E9FD578
void __cdecl utf8::exception::~exception(utf8::exception *const this)
{
  utf8::exception::~exception(this);
  operator delete(this, 8uLL);
};

// Line 41: range 000000000E9FD9E2-000000000E9FDA2F
void __cdecl utf8::invalid_code_point::~invalid_code_point(utf8::invalid_code_point *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'utf8::invalid_code_point + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->utf8::exception = (utf8::exception)v1;
  utf8::exception::~exception(this);
};

// Line 41: range 000000000E9FDA30-000000000E9FDA5A
void __cdecl utf8::invalid_code_point::~invalid_code_point(utf8::invalid_code_point *const this)
{
  utf8::invalid_code_point::~invalid_code_point(this);
  operator delete(this, 0x10uLL);
};

// Line 44: range 000000000E9FD57A-000000000E9FD607
void __cdecl utf8::invalid_code_point::invalid_code_point(utf8::invalid_code_point *const this, utf8::uint32_t cp)
{
  __int64 *v2; // rdx

  utf8::exception::exception(this);
  v2 = &`vtable for'utf8::invalid_code_point + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->utf8::exception = (utf8::exception)v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cp);
  }
  this->cp = cp;
};

// Line 45: range 000000000E9FD608-000000000E9FD618
const char *__cdecl utf8::invalid_code_point::what(const utf8::invalid_code_point *const this)
{
  return "Invalid code point";
};

// Line 49: range 000000000E9FD9B6-000000000E9FD9E0
void __cdecl utf8::invalid_utf8::~invalid_utf8(utf8::invalid_utf8 *const this)
{
  utf8::invalid_utf8::~invalid_utf8(this);
  operator delete(this, 0x10uLL);
};

// Line 49: range 000000000E9FD968-000000000E9FD9B5
void __cdecl utf8::invalid_utf8::~invalid_utf8(utf8::invalid_utf8 *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'utf8::invalid_utf8 + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->utf8::exception = (utf8::exception)v1;
  utf8::exception::~exception(this);
};

// Line 52: range 000000000E9FD61A-000000000E9FD6AA
void __cdecl utf8::invalid_utf8::invalid_utf8(utf8::invalid_utf8 *const this, utf8::uint8_t u)
{
  __int64 *v2; // rdx

  utf8::exception::exception(this);
  v2 = &`vtable for'utf8::invalid_utf8 + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->utf8::exception = (utf8::exception)v2;
  if ( *(char *)(((unsigned __int64)&this->u8 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->u8);
  this->u8 = u;
};

// Line 53: range 000000000E9FD6AC-000000000E9FD6BC
const char *__cdecl utf8::invalid_utf8::what(const utf8::invalid_utf8 *const this)
{
  return "Invalid UTF-8";
};

// Line 65: range 000000000E9FD8A0-000000000E9FD8ED
void __cdecl utf8::not_enough_room::not_enough_room(utf8::not_enough_room *const this)
{
  __int64 *v1; // rdx

  utf8::exception::exception(this);
  v1 = &`vtable for'utf8::not_enough_room + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *this = (utf8::not_enough_room)v1;
};

// Line 65: range 000000000E9FD8EE-000000000E9FD93B
void __cdecl utf8::not_enough_room::~not_enough_room(utf8::not_enough_room *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'utf8::not_enough_room + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *this = (utf8::not_enough_room)v1;
  utf8::exception::~exception(this);
};

// Line 65: range 000000000E9FD93C-000000000E9FD966
void __cdecl utf8::not_enough_room::~not_enough_room(utf8::not_enough_room *const this)
{
  utf8::not_enough_room::~not_enough_room(this);
  operator delete(this, 8uLL);
};

// Line 67: range 000000000E9FD6BE-000000000E9FD6CE
const char *__cdecl utf8::not_enough_room::what(const utf8::not_enough_room *const this)
{
  return (const char *)&off_1BF48120;
};

// Line 137: range 000000000E9FDA5B-000000000E9FDD57
__int64 __fastcall utf8::next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > *it,
        __gnu_cxx::__normal_iterator<char const*,std::string > end)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // r12
  _DWORD *v5; // r13
  int v6; // eax
  utf8::not_enough_room *v7; // rax
  utf8::not_enough_room *v8; // rbx
  utf8::invalid_utf8 *v9; // rbx
  utf8::uint8_t *v10; // rax
  utf8::uint8_t *v11; // rdx
  utf8::invalid_code_point *exception; // rbx
  __int64 result; // rax
  char v14[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 cp:139 64 8 7 end:137";
  *(_QWORD *)(v2 + 16) = utf8::next<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 64) = end;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  v6 = utf8::internal::validate_next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
         it,
         *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 64),
         (utf8::uint32_t *)(v2 + 48));
  if ( v6 == 5 )
  {
    exception = (utf8::invalid_code_point *)__cxa_allocate_exception(0x10uLL);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v4 - 48);
    }
    utf8::invalid_code_point::invalid_code_point(exception, *((_DWORD *)v4 - 12));
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'utf8::invalid_code_point,
      (void (__fastcall *)(void *))utf8::invalid_code_point::~invalid_code_point);
  }
  if ( v6 <= 5 )
  {
    if ( v6 >= 2 )
    {
      v9 = (utf8::invalid_utf8 *)__cxa_allocate_exception(0x10uLL);
      v10 = (utf8::uint8_t *)__gnu_cxx::__normal_iterator<char const*,std::string>::operator*(it);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v10);
      }
      utf8::invalid_utf8::invalid_utf8(v9, *v11);
      __asan_handle_no_return(v9);
      _cxa_throw(
        v9,
        (struct type_info *)&`typeinfo for'utf8::invalid_utf8,
        (void (__fastcall *)(void *))utf8::invalid_utf8::~invalid_utf8);
    }
    if ( v6 == 1 )
    {
      v7 = (utf8::not_enough_room *)__cxa_allocate_exception(8uLL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7);
      *v8 = 0LL;
      utf8::not_enough_room::not_enough_room(v8);
      __asan_handle_no_return(v8);
      _cxa_throw(
        v8,
        (struct type_info *)&`typeinfo for'utf8::not_enough_room,
        (void (__fastcall *)(void *))utf8::not_enough_room::~not_enough_room);
    }
  }
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(unsigned int *)(v2 + 48);
  if ( v14 == (char *)v2 )
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
  return result;
};

// Line 209: range 000000000E9FD4B2-000000000E9FD4FF
void __cdecl utf8::exception::exception(utf8::exception *const this)
{
  __int64 *v1; // rdx

  std::exception::exception((std::exception *const)this);
  v1 = &`vtable for'utf8::exception + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *this = (utf8::exception)v1;
};
