// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/util_types.cpp

// Line 7: range 000000000D7D33ED-000000000D7D3593
std::vector<std::string_view> *__cdecl BT::splitString(
        std::vector<std::string_view> *retstr,
        const std::string_view *strToSplit,
        char delimeter)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::string_view::const_pointer v6; // rax
  size_t pos; // [rsp+20h] [rbp-70h]
  size_t new_pos; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 5 sv:19";
  *(_QWORD *)(v3 + 16) = BT::splitString;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::vector<std::string_view>::vector(retstr);
  std::vector<std::string_view>::reserve(retstr, 4uLL);
  for ( pos = 0LL; pos < std::string_view::size(strToSplit); pos = new_pos + 1 )
  {
    new_pos = std::string_view::find_first_of(strToSplit, delimeter, pos);
    if ( new_pos == -1LL )
      new_pos = std::string_view::size(strToSplit);
    v6 = std::string_view::data(strToSplit);
    std::string_view::basic_string_view((std::string_view *const)(v3 + 32), &v6[pos], new_pos - pos);
    std::vector<std::string_view>::push_back(retstr, (const std::vector<std::string_view>::value_type *)(v3 + 32));
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 28: range 000000000D7D3594-000000000D7D36F2
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall BT::parseFromString<std::string>(std::string *retstr, std::string_view str)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rsi
  std::string_view::size_type v6; // r14
  std::string_view::const_pointer v7; // rax
  const char *M_str; // [rsp+8h] [rbp-98h]
  char v10; // [rsp+2Fh] [rbp-71h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  M_str = str._M_str;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 str:27";
  *(_QWORD *)(v2 + 16) = BT::parseFromString<std::string>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = M_str;
  std::allocator<char>::allocator(&v10);
  v6 = std::string_view::size((const std::string_view *const)(v2 + 32));
  v7 = std::string_view::data((const std::string_view *const)(v2 + 32));
  std::string::basic_string(retstr, v7, v6, &v10);
  std::allocator<char>::~allocator(&v10);
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

// Line 34: range 000000000D7D36F3-000000000D7D3884
__int64 __fastcall BT::parseFromString<int>(std::string_view str)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  const char *v5; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-81h] BYREF
  std::string __str; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 str:33";
  *(_QWORD *)(v1 + 16) = BT::parseFromString<int>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(std::string_view *)(v1 + 32) = str;
  if ( std::string_view::empty((const std::string_view *const)(v1 + 32)) )
  {
    v4 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    v5 = std::string_view::data((const std::string_view *const)(v1 + 32));
    std::string::basic_string<std::allocator<char>>(&__str, v5, &__a);
    v4 = std::stoi(&__str, 0LL, 10);
    std::string::~string(&__str);
    std::allocator<char>::~allocator(&__a);
  }
  result = v4;
  if ( v9 == (char *)v1 )
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

// Line 44: range 000000000D7D3885-000000000D7D3A16
__int64 __fastcall BT::parseFromString<long>(std::string_view str)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  const char *v5; // rax
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-81h] BYREF
  std::string __str; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 str:43";
  *(_QWORD *)(v1 + 16) = BT::parseFromString<long>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(std::string_view *)(v1 + 32) = str;
  if ( std::string_view::empty((const std::string_view *const)(v1 + 32)) )
  {
    v4 = 0LL;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    v5 = std::string_view::data((const std::string_view *const)(v1 + 32));
    std::string::basic_string<std::allocator<char>>(&__str, v5, &__a);
    v4 = std::stol(&__str, 0LL, 10);
    std::string::~string(&__str);
    std::allocator<char>::~allocator(&__a);
  }
  result = v4;
  if ( v9 == (char *)v1 )
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

// Line 54: range 000000000D7D3A17-000000000D7D3B90
__int64 __fastcall BT::parseFromString<unsigned int>(std::string_view str)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const char *v4; // rax
  unsigned int v5; // r13d
  __int64 result; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-81h] BYREF
  std::string __str; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 str:53";
  *(_QWORD *)(v1 + 16) = BT::parseFromString<unsigned int>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(std::string_view *)(v1 + 32) = str;
  std::allocator<char>::allocator(&__a);
  v4 = std::string_view::data((const std::string_view *const)(v1 + 32));
  std::string::basic_string<std::allocator<char>>(&__str, v4, &__a);
  v5 = std::stoul(&__str, 0LL, 10);
  std::string::~string(&__str);
  std::allocator<char>::~allocator(&__a);
  result = v5;
  if ( v9 == (char *)v1 )
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

// Line 60: range 000000000D7D3B91-000000000D7D3D0A
unsigned __int64 __fastcall BT::parseFromString<unsigned long>(std::string_view str)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const char *v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 result; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-81h] BYREF
  std::string __str; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 str:59";
  *(_QWORD *)(v1 + 16) = BT::parseFromString<unsigned long>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(std::string_view *)(v1 + 32) = str;
  std::allocator<char>::allocator(&__a);
  v4 = std::string_view::data((const std::string_view *const)(v1 + 32));
  std::string::basic_string<std::allocator<char>>(&__str, v4, &__a);
  v5 = std::stoul(&__str, 0LL, 10);
  std::string::~string(&__str);
  std::allocator<char>::~allocator(&__a);
  result = v5;
  if ( v9 == (char *)v1 )
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

// Line 66: range 000000000D7D3D0B-000000000D7D3F8A
double __fastcall BT::parseFromString<double>(std::string_view str)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char *v4; // rax
  const char *v5; // rax
  const char *v6; // rax
  double result; // xmm0_8
  double v8; // [rsp+8h] [rbp-E8h]
  std::allocator<char> __a; // [rsp+27h] [rbp-C9h] BYREF
  double val; // [rsp+28h] [rbp-C8h]
  std::string __str; // [rsp+30h] [rbp-C0h] BYREF
  char v12[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 6 str:65 64 32 13 old_locale:67";
  *(_QWORD *)(v1 + 16) = BT::parseFromString<double>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  *(std::string_view *)(v1 + 32) = str;
  std::allocator<char>::allocator(&__a);
  v4 = setlocale(1, 0LL);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v1 + 64), v4, &__a);
  std::allocator<char>::~allocator(&__a);
  setlocale(1, "C");
  std::allocator<char>::allocator(&__a);
  v5 = std::string_view::data((const std::string_view *const)(v1 + 32));
  std::string::basic_string<std::allocator<char>>(&__str, v5, &__a);
  val = std::stod(&__str, 0LL);
  std::string::~string(&__str);
  std::allocator<char>::~allocator(&__a);
  v6 = (const char *)std::string::c_str(v1 + 64);
  setlocale(1, v6);
  v8 = val;
  std::string::~string((void *)(v1 + 64));
  result = v8;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 76: range 000000000D7D3F8B-000000000D7D4208
float __fastcall BT::parseFromString<float>(std::string_view str, __m128i a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  float result; // xmm0_4
  float v9; // [rsp+Ch] [rbp-E4h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-C5h] BYREF
  float val; // [rsp+2Ch] [rbp-C4h]
  std::string __str; // [rsp+30h] [rbp-C0h] BYREF
  char v13[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 str:75 64 32 13 old_locale:77";
  *(_QWORD *)(v2 + 16) = BT::parseFromString<float>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  *(std::string_view *)(v2 + 32) = str;
  std::allocator<char>::allocator(&__a);
  v5 = setlocale(1, 0LL);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 64), v5, &__a);
  std::allocator<char>::~allocator(&__a);
  setlocale(1, "C");
  std::allocator<char>::allocator(&__a);
  v6 = std::string_view::data((const std::string_view *const)(v2 + 32));
  std::string::basic_string<std::allocator<char>>(&__str, v6, &__a);
  *(float *)a2.m128i_i32 = std::stof(&__str, 0LL);
  LODWORD(val) = _mm_cvtsi128_si32(a2);
  std::string::~string(&__str);
  std::allocator<char>::~allocator(&__a);
  v7 = (const char *)std::string::c_str(v2 + 64);
  setlocale(1, v7);
  v9 = val;
  std::string::~string((void *)(v2 + 64));
  result = v9;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 86: range 000000000D7D4209-000000000D7D4495
// local variable allocation has failed, the output may be wrong!
std::vector<int> *__fastcall BT::parseFromString<std::vector<int>>(std::vector<int> *retstr, std::string_view str)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  std::vector<int>::size_type v6; // rax
  const char *v7; // rax
  const char *M_str; // [rsp+8h] [rbp-108h]
  std::vector<int>::value_type __x; // [rsp+2Ch] [rbp-E4h] BYREF
  std::vector<std::string_view>::iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<std::string_view>::iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<std::string_view> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::string_view *part; // [rsp+48h] [rbp-C8h]
  char v15[192]; // [rsp+50h] [rbp-C0h] BYREF

  M_str = str._M_str;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 6 end:92 64 16 6 str:85 96 24 8 parts:87";
  *(_QWORD *)(v2 + 16) = BT::parseFromString<std::vector<int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_QWORD *)(v2 + 64) = v5;
  *(_QWORD *)(v2 + 72) = M_str;
  BT::splitString((std::vector<std::string_view> *)(v2 + 96), (const std::string_view *)(v2 + 64), 59);
  std::vector<int>::vector(retstr);
  v6 = std::vector<std::string_view>::size((const std::vector<std::string_view> *const)(v2 + 96));
  std::vector<int>::reserve(retstr, v6);
  __for_range = (std::vector<std::string_view> *)(v2 + 96);
  __for_begin._M_current = std::vector<std::string_view>::begin((std::vector<std::string_view> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<std::string_view>::end((std::vector<std::string_view> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<std::string_view *,std::vector<std::string_view>>(&__for_begin, &__for_end) )
  {
    part = __gnu_cxx::__normal_iterator<std::string_view *,std::vector<std::string_view>>::operator*(&__for_begin);
    v7 = std::string_view::data(part);
    __x = strtol(v7, (char **)(v2 + 32), 10);
    std::vector<int>::push_back(retstr, &__x);
    __gnu_cxx::__normal_iterator<std::string_view *,std::vector<std::string_view>>::operator++(&__for_begin);
  }
  std::vector<std::string_view>::~vector((std::vector<std::string_view> *const)(v2 + 96));
  if ( v15 == (char *)v2 )
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
  return retstr;
};

// Line 100: range 000000000D7D4496-000000000D7D4723
// local variable allocation has failed, the output may be wrong!
std::vector<double> *__fastcall BT::parseFromString<std::vector<double>>(
        std::vector<double> *retstr,
        std::string_view str)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  std::vector<double>::size_type v6; // rax
  const char *v7; // rax
  const char *M_str; // [rsp+8h] [rbp-108h]
  std::vector<std::string_view>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<std::string_view>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<double>::value_type __x; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<std::string_view> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::string_view *part; // [rsp+48h] [rbp-C8h]
  char v15[192]; // [rsp+50h] [rbp-C0h] BYREF

  M_str = str._M_str;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 7 end:106 64 16 6 str:99 96 24 9 parts:101";
  *(_QWORD *)(v2 + 16) = BT::parseFromString<std::vector<double>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_QWORD *)(v2 + 64) = v5;
  *(_QWORD *)(v2 + 72) = M_str;
  BT::splitString((std::vector<std::string_view> *)(v2 + 96), (const std::string_view *)(v2 + 64), 59);
  std::vector<double>::vector(retstr);
  v6 = std::vector<std::string_view>::size((const std::vector<std::string_view> *const)(v2 + 96));
  std::vector<double>::reserve(retstr, v6);
  __for_range = (std::vector<std::string_view> *)(v2 + 96);
  __for_begin._M_current = std::vector<std::string_view>::begin((std::vector<std::string_view> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<std::string_view>::end((std::vector<std::string_view> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<std::string_view *,std::vector<std::string_view>>(&__for_begin, &__for_end) )
  {
    part = __gnu_cxx::__normal_iterator<std::string_view *,std::vector<std::string_view>>::operator*(&__for_begin);
    v7 = std::string_view::data(part);
    __x = strtod(v7, (char **)(v2 + 32));
    std::vector<double>::push_back(retstr, &__x);
    __gnu_cxx::__normal_iterator<std::string_view *,std::vector<std::string_view>>::operator++(&__for_begin);
  }
  std::vector<std::string_view>::~vector((std::vector<std::string_view> *const)(v2 + 96));
  if ( v15 == (char *)v2 )
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
  return retstr;
};
