// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container_hash/hash.hpp

// Line 338: range 000000000C613790-000000000C613857
void __cdecl boost::hash_detail::hash_combine_impl(uint64_t *h, uint64_t k)
{
  if ( *(_BYTE *)(((unsigned __int64)h >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *h ^= 0xC6A4A7935BD1E995LL * (((0xC6A4A7935BD1E995LL * k) >> 47) ^ (0xC6A4A7935BD1E995LL * k));
  *h *= 0xC6A4A7935BD1E995LL;
  *h += 3864292196LL;
};

// Line 352: range 000000000C613858-000000000C613875
std::size_t __cdecl boost::hash<char>::operator()(const boost::hash<char> *const this, char v)
{
  return boost::hash_value<char>(v);
};

// Line 358: range 000000000C651A9B-000000000C651AAA
boost::hash_detail::enable_hash_value::type __cdecl boost::hash_value<char>(char v)
{
  return v;
};

// Line 358: range 000000000C651AAB-000000000C651AB8
boost::hash_detail::enable_hash_value::type __cdecl boost::hash_value<int>(int v)
{
  return v;
};

// Line 358: range 000000000C651AB9-000000000C651AC4
boost::hash_detail::enable_hash_value::type __cdecl boost::hash_value<unsigned int>(unsigned int v)
{
  return v;
};

// Line 361: range 000000000C651AC5-000000000C651AFE
std::size_t __cdecl boost::hash_value<char,std::allocator<char>>(const std::string *v)
{
  __gnu_cxx::__normal_iterator<char const*,std::string > v1; // rbx
  __gnu_cxx::__normal_iterator<char const*,std::string > v2; // rax

  v1._M_current = (const char *)std::string::end(v);
  v2._M_current = (const char *)std::string::begin(v);
  return boost::hash_range<__gnu_cxx::__normal_iterator<char const*,std::string>>(v2, v1);
};

// Line 412: range 000000000D4AC287-000000000D4AC360
void __cdecl boost::hash_combine<data::ExhibitionServerTriggerType>(
        std::size_t *seed,
        const data::ExhibitionServerTriggerType *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<data::ExhibitionServerTriggerType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = boost::hash<data::ExhibitionServerTriggerType>::operator()(
         (const boost::hash<data::ExhibitionServerTriggerType> *const)(v2 + 32),
         v);
  boost::hash_detail::hash_combine_impl(seed, v5);
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

// Line 412: range 000000000C651989-000000000C651A9A
void __cdecl boost::hash_combine<int>(std::size_t *seed, const int *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  const int *v4; // rdi
  unsigned __int64 v5; // r12
  std::size_t v6; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (const int *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<int>;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v4 = v;
    __asan_report_load4(v);
  }
  v6 = boost::hash<int>::operator()((const boost::hash<int> *const)v4 - 32, *v);
  boost::hash_detail::hash_combine_impl(seed, v6);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 412: range 0000000012C2A1E4-0000000012C2A2BD
void __cdecl boost::hash_combine<std::pair<unsigned int const,unsigned int>>(
        std::size_t *seed,
        const std::pair<unsigned int const,unsigned int> *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<std::pair<unsigned int const,unsigned int>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = boost::hash<std::pair<unsigned int const,unsigned int>>::operator()(
         (const boost::hash<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32),
         v);
  boost::hash_detail::hash_combine_impl(seed, v5);
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

// Line 412: range 000000000CA98917-000000000CA989F0
void __cdecl boost::hash_combine<std::string>(std::size_t *seed, const std::string *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<std::string>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = boost::hash<std::string>::operator()((const boost::hash<std::string > *const)(v2 + 32), v);
  boost::hash_detail::hash_combine_impl(seed, v5);
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

// Line 412: range 000000000CA47978-000000000CA47A89
void __cdecl boost::hash_combine<unsigned int>(std::size_t *seed, const unsigned int *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  const unsigned int *v4; // rdi
  unsigned __int64 v5; // r12
  std::size_t v6; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (const unsigned int *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<unsigned int>;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v4 = v;
    __asan_report_load4(v);
  }
  v6 = boost::hash<unsigned int>::operator()((const boost::hash<unsigned int> *const)v4 - 32, *v);
  boost::hash_detail::hash_combine_impl(seed, v6);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 423: range 0000000012BA228A-0000000012BA242D
std::size_t __fastcall boost::hash_range<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > first,
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > last)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // rax
  std::size_t result; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 seed:425 64 8 9 first:423 96 8 8 last:423";
  *(_QWORD *)(v2 + 16) = boost::hash_range<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64) = first;
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96) = last;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 32) = 0LL;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 96)) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 64));
    boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), v5);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 423: range 0000000012BA1D54-0000000012BA1EF7
std::size_t __fastcall boost::hash_range<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > first,
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > last)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::pair<unsigned int const,unsigned int> *v5; // rax
  std::size_t result; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 seed:425 64 8 9 first:423 96 8 8 last:423";
  *(_QWORD *)(v2 + 16) = boost::hash_range<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 64) = first;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 96) = last;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 32) = 0LL;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    boost::hash_combine<std::pair<unsigned int const,unsigned int>>((std::size_t *)(v2 + 32), v5);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 618: range 000000000C613876-000000000C613890
std::size_t __cdecl boost::hash<int>::operator()(const boost::hash<int> *const this, int v)
{
  return boost::hash_value<int>(v);
};

// Line 619: range 000000000C613892-000000000C6138AC
std::size_t __cdecl boost::hash<unsigned int>::operator()(const boost::hash<unsigned int> *const this, unsigned int v)
{
  return boost::hash_value<unsigned int>(v);
};

// Line 627: range 000000000C6138AE-000000000C6138CB
std::size_t __cdecl boost::hash<std::string>::operator()(
        const boost::hash<std::string > *const this,
        const std::string *v)
{
  return boost::hash_value<char,std::allocator<char>>(v);
};

// Line 820: range 000000000C70F726-000000000C70F838
void __cdecl boost::hash_combine<char>(std::size_t *seed, const char *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::size_t v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 hasher:414";
  *(_QWORD *)(v2 + 16) = boost::hash_combine<char>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v & 7) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v);
  }
  v5 = boost::hash<char>::operator()((const boost::hash<char> *const)(v2 + 32), *v);
  boost::hash_detail::hash_combine_impl(seed, v5);
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

// Line 916: range 000000000C6517E5-000000000C651988
std::size_t __fastcall boost::hash_range<__gnu_cxx::__normal_iterator<char const*,std::string>>(
        __gnu_cxx::__normal_iterator<char const*,std::string > first,
        __gnu_cxx::__normal_iterator<char const*,std::string > last)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const char *v5; // rax
  std::size_t result; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 seed:425 64 8 5 first 96 8 4 last";
  *(_QWORD *)(v2 + 16) = boost::hash_range<__gnu_cxx::__normal_iterator<char const*,std::string>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 64) = first;
  *(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 96) = last;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 32) = 0LL;
  while ( __gnu_cxx::operator!=<char const*,std::string>(
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v2 + 96)) )
  {
    v5 = __gnu_cxx::__normal_iterator<char const*,std::string>::operator*((const __gnu_cxx::__normal_iterator<char const*,std::string > *const)(v2 + 64));
    boost::hash_combine<char>((std::size_t *)(v2 + 32), v5);
    __gnu_cxx::__normal_iterator<char const*,std::string>::operator++((__gnu_cxx::__normal_iterator<char const*,std::string > *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 2127: range 000000000D5A4230-000000000D5A423B
boost::enable_if_c<true,long unsigned int>::type __cdecl boost::hash_value<data::ExhibitionServerTriggerType>(
        data::ExhibitionServerTriggerType v)
{
  return (unsigned int)v;
};
