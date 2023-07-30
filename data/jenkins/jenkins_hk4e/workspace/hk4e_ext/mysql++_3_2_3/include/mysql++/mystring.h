// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/mystring.h

// Line 167: range 000000000C61B3DE-000000000C61B3F8
void __cdecl mysqlpp::String::String(mysqlpp::String *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::RefCountedPointer(&this->buffer_);
};

// Line 179: range 000000000C61B3FA-000000000C61B41F
void __cdecl mysqlpp::String::String(mysqlpp::String *const this, const mysqlpp::String *other)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::RefCountedPointer(
    &this->buffer_,
    &other->buffer_);
};

// Line 298: range 000000000C657048-000000000C65707F
float __cdecl mysqlpp::String::conv<float>(const mysqlpp::String *const this, float a2)
{
  const char *v2; // rdx

  v2 = std::type_info::name((const std::type_info *const)&`typeinfo for'float);
  return mysqlpp::String::do_conv<double>(this, v2);
};

// Line 298: range 000000000C7C486C-000000000C7C4989
mysqlpp::tiny_int<signed char> __cdecl mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>(
        const mysqlpp::String *const this,
        mysqlpp::tiny_int<signed char> a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *v5; // rdx
  mysqlpp::tiny_int<signed char>::value_type v6; // al
  mysqlpp::tiny_int<signed char> result; // al
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::String::conv<mysqlpp::tiny_int<signed char>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = std::type_info::name((const std::type_info *const)&`typeinfo for'mysqlpp::tiny_int<signed char>);
  v6 = mysqlpp::String::do_conv<unsigned long>(this, v5);
  mysqlpp::tiny_int<signed char>::tiny_int((mysqlpp::tiny_int<signed char> *const)(v2 + 32), v6);
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v2 + 32);
  result.value_ = *(_BYTE *)(v2 + 32);
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

// Line 298: range 000000000C657016-000000000C657047
unsigned int __cdecl mysqlpp::String::conv<unsigned int>(const mysqlpp::String *const this, unsigned int a2)
{
  const char *v2; // rdx

  v2 = std::type_info::name((const std::type_info *const)&`typeinfo for'unsigned int);
  return mysqlpp::String::do_conv<unsigned long>(this, v2);
};

// Line 481: range 000000000C61B420-000000000C61B448
mysqlpp::String *__cdecl mysqlpp::String::operator=(mysqlpp::String *const this, const mysqlpp::String *other)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::operator=(
    &this->buffer_,
    &other->buffer_);
  return this;
};

// Line 611: range 000000000C714DDA-000000000C71554C
double __cdecl mysqlpp::String::do_conv<double>(const mysqlpp::String *const this, const char *type_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // r14
  const char *v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  void *v12; // rsi
  int v13; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v17; // al
  char v18; // al
  mysqlpp::BadConversion *exception; // r12
  size_t v20; // r13
  const char *v21; // rdx
  double result; // xmm0_8
  double v23; // [rsp+8h] [rbp-288h]
  char v25[624]; // [rsp+20h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 5 c:620 48 8 9 <unknown> 80 8 7 num:617 112 392 7 buf:614";
  *(_QWORD *)(v2 + 16) = mysqlpp::String::do_conv<double>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::operator void const*(&this->buffer_) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 112);
    v5 = mysqlpp::String::length(this);
    v6 = mysqlpp::String::data(this);
    std::ostream::write((std::ostream *)(v2 + 128), v6, v5);
    v7 = std::locale::classic((std::locale *)(v2 + 128));
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    std::ios::imbue(v2 + 48, v2 + 240, v7);
    std::locale::~locale((std::locale *)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v2 + 80) = 0LL;
    v8 = std::istream::operator>>(v2 + 112, v2 + 80);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = *(_QWORD *)v8 - 24LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (unsigned __int8)std::ios::operator bool(*(_QWORD *)v9 + v8) )
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
      v10 = std::operator>><char,std::char_traits<char>>(v2 + 112, v2 + 32);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = *(_QWORD *)v10 - 24LL;
      v12 = (void *)*(unsigned __int8 *)((v11 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 )
        __asan_report_load8();
      if ( (unsigned __int8)std::ios::operator!(*(_QWORD *)v11 + v10) )
      {
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = *(double *)(v2 + 80);
        v13 = 0;
      }
      else
      {
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v2 + 32);
        if ( *(_BYTE *)(v2 + 32) != 46 )
          goto LABEL_54;
        v12 = &`typeinfo for'float;
        if ( !std::type_info::operator!=(
                (const std::type_info *const)&`typeinfo for'double,
                (const std::type_info *)&`typeinfo for'float) )
          goto LABEL_54;
        v12 = &`typeinfo for'double;
        if ( !std::type_info::operator!=(
                (const std::type_info *const)&`typeinfo for'double,
                (const std::type_info *)&`typeinfo for'double) )
          goto LABEL_54;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v2 + 32, v12);
        *(_BYTE *)(v2 + 32) = 48;
        do
        {
          v15 = std::operator>><char,std::char_traits<char>>(v2 + 112, v2 + 32);
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v16 = *(_QWORD *)v15 - 24LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( !(unsigned __int8)std::ios::operator bool(*(_QWORD *)v16 + v15) )
            goto LABEL_42;
          if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(v2 + 32);
          if ( *(_BYTE *)(v2 + 32) == 48 )
            v17 = 1;
          else
LABEL_42:
            v17 = 0;
        }
        while ( v17 );
        if ( !(unsigned __int8)std::ios::eof(v2 + 240) )
          goto LABEL_49;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v2 + 32);
        if ( *(_BYTE *)(v2 + 32) == 48 )
          v18 = 1;
        else
LABEL_49:
          v18 = 0;
        if ( v18 )
        {
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v23 = *(double *)(v2 + 80);
          v13 = 0;
        }
        else
        {
LABEL_54:
          v13 = 1;
        }
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v13 != 1 )
      {
LABEL_62:
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 112);
        goto LABEL_64;
      }
    }
    else if ( (unsigned __int8)std::ios::eof(v2 + 240) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = *(double *)(v2 + 80);
      goto LABEL_62;
    }
    exception = (mysqlpp::BadConversion *)__cxa_allocate_exception(0x60uLL);
    v20 = mysqlpp::String::length(this);
    v21 = mysqlpp::String::data(this);
    mysqlpp::BadConversion::BadConversion(exception, type_name, v21, 0LL, v20);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::BadConversion,
      (void (__fastcall *)(void *))mysqlpp::BadConversion::~BadConversion);
  }
  v23 = 0.0;
LABEL_64:
  result = v23;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 611: range 000000000C714686-000000000C714DD9
unsigned __int64 __cdecl mysqlpp::String::do_conv<unsigned long>(
        const mysqlpp::String *const this,
        const char *type_name)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // r15
  const char *v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  void *v13; // rsi
  int v14; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v18; // al
  char v19; // al
  mysqlpp::BadConversion *exception; // r12
  size_t v21; // r13
  const char *v22; // rdx
  unsigned __int64 result; // rax
  char v25[624]; // [rsp+20h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 5 c:620 48 8 9 <unknown> 80 8 7 num:617 112 392 7 buf:614";
  *(_QWORD *)(v3 + 16) = mysqlpp::String::do_conv<unsigned long>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61953;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862735] = -218103808;
  v5[536862736] = -202116109;
  v5[536862737] = -202116109;
  if ( mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::operator void const*(&this->buffer_) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 112);
    v6 = mysqlpp::String::length(this);
    v7 = mysqlpp::String::data(this);
    std::ostream::write((std::ostream *)(v3 + 128), v7, v6);
    v8 = std::locale::classic((std::locale *)(v3 + 128));
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    std::ios::imbue(v3 + 48, v3 + 240, v8);
    std::locale::~locale((std::locale *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v3 + 80) = 0LL;
    v9 = std::istream::operator>>(v3 + 112, v3 + 80);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = *(_QWORD *)v9 - 24LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (unsigned __int8)std::ios::operator bool(*(_QWORD *)v10 + v9) )
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      v11 = std::operator>><char,std::char_traits<char>>(v3 + 112, v3 + 32);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = *(_QWORD *)v11 - 24LL;
      v13 = (void *)*(unsigned __int8 *)((v12 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v13 )
        __asan_report_load8();
      if ( (unsigned __int8)std::ios::operator!(*(_QWORD *)v12 + v11) )
      {
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v2 = *(_QWORD *)(v3 + 80);
        v14 = 0;
      }
      else
      {
        if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v3 + 32);
        if ( *(_BYTE *)(v3 + 32) != 46 )
          goto LABEL_54;
        v13 = &`typeinfo for'float;
        if ( !std::type_info::operator!=(
                (const std::type_info *const)&`typeinfo for'unsigned long,
                (const std::type_info *)&`typeinfo for'float) )
          goto LABEL_54;
        v13 = &`typeinfo for'double;
        if ( !std::type_info::operator!=(
                (const std::type_info *const)&`typeinfo for'unsigned long,
                (const std::type_info *)&`typeinfo for'double) )
          goto LABEL_54;
        if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v3 + 32, v13);
        *(_BYTE *)(v3 + 32) = 48;
        do
        {
          v16 = std::operator>><char,std::char_traits<char>>(v3 + 112, v3 + 32);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v17 = *(_QWORD *)v16 - 24LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( !(unsigned __int8)std::ios::operator bool(*(_QWORD *)v17 + v16) )
            goto LABEL_42;
          if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(v3 + 32);
          if ( *(_BYTE *)(v3 + 32) == 48 )
            v18 = 1;
          else
LABEL_42:
            v18 = 0;
        }
        while ( v18 );
        if ( !(unsigned __int8)std::ios::eof(v3 + 240) )
          goto LABEL_49;
        if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v3 + 32);
        if ( *(_BYTE *)(v3 + 32) == 48 )
          v19 = 1;
        else
LABEL_49:
          v19 = 0;
        if ( v19 )
        {
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v2 = *(_QWORD *)(v3 + 80);
          v14 = 0;
        }
        else
        {
LABEL_54:
          v14 = 1;
        }
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
LABEL_62:
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 112);
        goto LABEL_64;
      }
    }
    else if ( (unsigned __int8)std::ios::eof(v3 + 240) )
    {
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v2 = *(_QWORD *)(v3 + 80);
      goto LABEL_62;
    }
    exception = (mysqlpp::BadConversion *)__cxa_allocate_exception(0x60uLL);
    v21 = mysqlpp::String::length(this);
    v22 = mysqlpp::String::data(this);
    mysqlpp::BadConversion::BadConversion(exception, type_name, v22, 0LL, v21);
    __asan_handle_no_return(exception);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::BadConversion,
      (void (__fastcall *)(void *))mysqlpp::BadConversion::~BadConversion);
  }
  v2 = 0LL;
LABEL_64:
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
