// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/iterator_range_core.hpp

// Line 74: range 000000000CB11554-000000000CB1156D
__gnu_cxx::__normal_iterator<char*,std::string > __cdecl boost::iterator_range_detail::iterator_range_impl<__gnu_cxx::__normal_iterator<char *,std::string>>::adl_end<std::string>(
        std::string *r)
{
  return boost::range_adl_barrier::end<std::string>(r);
};

// Line 147: range 000000000CAA8958-000000000CAA8985
void __cdecl boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::bidirectional_traversal_tag>::iterator_range_base<char const*>(
        boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::bidirectional_traversal_tag> *const this,
        const char *first,
        const char *last)
{
  boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::iterator_range_base<char const*>(
    this,
    first,
    last);
};

// Line 206: range 000000000CB1153A-000000000CB11553
__gnu_cxx::__normal_iterator<char*,std::string > __cdecl boost::iterator_range_detail::iterator_range_impl<__gnu_cxx::__normal_iterator<char *,std::string>>::adl_begin<std::string>(
        std::string *r)
{
  return boost::range_adl_barrier::begin<std::string>(r);
};

// Line 208: range 000000000CB117FE-000000000CB11828
void __cdecl boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::iterator_range_base(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::incrementable_traversal_tag> *const this)
{
  __gnu_cxx::__normal_iterator<char *,std::string>::__normal_iterator(&this->m_Begin);
  __gnu_cxx::__normal_iterator<char *,std::string>::__normal_iterator(&this->m_End);
};

// Line 215: range 000000000CB1139C-000000000CB1140F
void __cdecl boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::iterator_range_base<char const*>(
        boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag> *const this,
        const char *Begin,
        const char *End)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Begin = Begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_End = End;
};

// Line 215: range 000000000CB116BC-000000000CB117FD
void __fastcall boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::incrementable_traversal_tag> *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > Begin,
        __gnu_cxx::__normal_iterator<char*,std::string > End)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  _DWORD *v6; // rax
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 96);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 Begin:215 64 8 7 End:215";
  *(_QWORD *)(v3 + 16) = boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = Begin;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = End;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v6 = (_DWORD *)__asan_report_store8();
  this->m_Begin._M_current = (char *)*((_QWORD *)v5 - 8);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    v6 = (_DWORD *)__asan_report_store8();
  this->m_End._M_current = (char *)*((_QWORD *)v5 - 4);
  if ( v8 == (char *)v3 )
  {
    *((_QWORD *)v6 + 268431360) = 0LL;
    v6[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *((_QWORD *)v6 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v6[536862722] = -168430091;
  }
};

// Line 222: range 000000000CA25C2E-000000000CA25C63
__gnu_cxx::__normal_iterator<char*,std::string > __cdecl boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::begin(
        const boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::incrementable_traversal_tag> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (__gnu_cxx::__normal_iterator<char*,std::string >)this->m_Begin._M_current;
};

// Line 222: range 000000000C8A0C72-000000000C8A0CA7
const char *__cdecl boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::begin(
        const boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_Begin;
};

// Line 227: range 000000000C8A0DB2-000000000C8A0DEC
__gnu_cxx::__normal_iterator<char*,std::string > __cdecl boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::end(
        const boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::incrementable_traversal_tag> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (__gnu_cxx::__normal_iterator<char*,std::string >)this->m_End._M_current;
};

// Line 227: range 000000000CA255EE-000000000CA25628
const char *__cdecl boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag>::end(
        const boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::incrementable_traversal_tag> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->m_End;
};

// Line 307: range 000000000CAA9562-000000000CAA957C
void __cdecl boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::bidirectional_traversal_tag>::iterator_range_base(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::bidirectional_traversal_tag> *const this)
{
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::iterator_range_base(this);
};

// Line 312: range 000000000CAA91FA-000000000CAA9312
void __fastcall boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::bidirectional_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::bidirectional_traversal_tag> *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > first,
        __gnu_cxx::__normal_iterator<char*,std::string > last)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 first:312 64 8 8 last:312";
  *(_QWORD *)(v3 + 16) = boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::bidirectional_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = first;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = last;
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::incrementable_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 376: range 000000000CA26116-000000000CA26130
void __cdecl boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::random_access_traversal_tag> *const this)
{
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::bidirectional_traversal_tag>::iterator_range_base(this);
};

// Line 381: range 000000000CA255C0-000000000CA255ED
void __cdecl boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::random_access_traversal_tag>::iterator_range_base<char const*>(
        boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::random_access_traversal_tag> *const this,
        const char *first,
        const char *last)
{
  boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::bidirectional_traversal_tag>::iterator_range_base<char const*>(
    this,
    first,
    last);
};

// Line 381: range 000000000CA25DA6-000000000CA25EBE
void __fastcall boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
        boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char*,std::string >,boost::iterators::random_access_traversal_tag> *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > first,
        __gnu_cxx::__normal_iterator<char*,std::string > last)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 first:381 64 8 8 last:381";
  *(_QWORD *)(v3 + 16) = boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = first;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = last;
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::bidirectional_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 478: range 000000000C9916DE-000000000C9916F8
void __cdecl boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base(this);
};

// Line 483: range 000000000C990BE2-000000000C990C0F
void __cdecl boost::iterator_range<char const*>::iterator_range<char const*>(
        boost::iterator_range<char const*> *const this,
        const char *first,
        const char *last)
{
  boost::iterator_range_detail::iterator_range_base<char const*,boost::iterators::random_access_traversal_tag>::iterator_range_base<char const*>(
    this,
    first,
    last);
};

// Line 483: range 000000000C9914A0-000000000C9915B8
void __fastcall boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > first,
        __gnu_cxx::__normal_iterator<char*,std::string > last)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 first:483 64 8 8 last:483";
  *(_QWORD *)(v3 + 16) = boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = first;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = last;
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
    *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 518: range 000000000CAA8FD6-000000000CAA901F
void __cdecl boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<std::string>(
        boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        std::string *r,
        boost::iterator_range_detail::range_tag a3)
{
  char *M_current; // r12
  __gnu_cxx::__normal_iterator<char*,std::string > v4; // rax

  M_current = boost::iterator_range_detail::iterator_range_impl<__gnu_cxx::__normal_iterator<char *,std::string>>::adl_end<std::string>(r)._M_current;
  v4._M_current = boost::iterator_range_detail::iterator_range_impl<__gnu_cxx::__normal_iterator<char *,std::string>>::adl_begin<std::string>(r)._M_current;
  boost::iterator_range_detail::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>,boost::iterators::random_access_traversal_tag>::iterator_range_base<__gnu_cxx::__normal_iterator<char *,std::string>>(
    this,
    v4,
    (__gnu_cxx::__normal_iterator<char*,std::string >)M_current);
};

// Line 644: range 000000000CBA1EFB-000000000CBA1F1F
bool __cdecl boost::operator==<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *l,
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  return boost::range::equal<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
           l,
           r);
};

// Line 790: range 000000000CA25B3C-000000000CA25C2C
boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > __cdecl boost::make_iterator_range<std::string>(
        std::string *r)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::make_iterator_range<std::string>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<std::string>(
    (boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const)(v1 + 32),
    r,
    (boost::iterator_range_detail::range_tag)r);
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  result = *(boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *)(v1 + 32);
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

// Line 872: range 000000000CB8055C-000000000CB80685
std::string *__cdecl boost::copy_range<std::string,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        std::string *retstr,
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *r)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char *M_current; // r14
  char *v6; // rsi
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::copy_range<std::string,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  M_current = boost::range_adl_barrier::end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(r)._M_current;
  v6 = boost::range_adl_barrier::begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(r)._M_current;
  std::string::basic_string<__gnu_cxx::__normal_iterator<char *,std::string>,void>(
    retstr,
    (__gnu_cxx::__normal_iterator<char*,std::string >)v6,
    (__gnu_cxx::__normal_iterator<char*,std::string >)M_current,
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v8 == (char *)v2 )
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
