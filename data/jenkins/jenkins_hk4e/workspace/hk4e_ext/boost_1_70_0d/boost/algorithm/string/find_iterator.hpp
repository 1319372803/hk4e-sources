// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/find_iterator.hpp

// Line 206: range 000000000C7D40E4-000000000C7D40FE
void __cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::~split_iterator(
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::~find_iterator_base(this);
};

// Line 233: range 000000000C8A11B6-000000000C8A125E
void __cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::split_iterator(
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  __int64 v1; // rsi

  boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base(this);
  boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range(&this->m_Match);
  __gnu_cxx::__normal_iterator<char *,std::string>::__normal_iterator(&this->m_Next);
  __gnu_cxx::__normal_iterator<char *,std::string>::__normal_iterator(&this->m_End);
  if ( *(char *)(((unsigned __int64)&this->m_bEof >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_bEof, v1);
  this->m_bEof = 1;
};

// Line 243: range 000000000C8A1260-000000000C8A1413
void __cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::split_iterator(
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *Other)
{
  char *M_current; // rdx
  bool m_bEof; // cl
  char v4; // al

  boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base(
    this,
    Other);
  if ( *(_WORD *)(((unsigned __int64)&this->m_Match >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&Other->m_Match >> 3) + 0x7FFF8000) )
    __asan_report_load16(&Other->m_Match);
  M_current = Other->m_Match.m_End._M_current;
  this->m_Match.m_Begin._M_current = Other->m_Match.m_Begin._M_current;
  this->m_Match.m_End._M_current = M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&Other->m_Next >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Other->m_Next);
  this->m_Next._M_current = Other->m_Next._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((unsigned __int64)&Other->m_End >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Other->m_End);
  this->m_End._M_current = Other->m_End._M_current;
  if ( *(char *)(((unsigned __int64)&Other->m_bEof >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&Other->m_bEof);
  m_bEof = Other->m_bEof;
  v4 = *(_BYTE *)(((unsigned __int64)&this->m_bEof >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(Other) = v4 != 0;
    __asan_report_store1(&this->m_bEof, Other);
  }
  this->m_bEof = m_bEof;
};

// Line 257: range 000000000C8A0E08-000000000C8A10C7
void __fastcall boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::split_iterator<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > Begin,
        __gnu_cxx::__normal_iterator<char*,std::string > End,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_Finder)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __gnu_cxx::__normal_iterator<char*,std::string > v7; // rsi
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 9 Begin:258 64 8 7 End:259 96 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::split_iterator<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -202116109;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 32) = Begin;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64) = End;
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(
    (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const)(v4 + 96),
    p_Finder);
  boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
    this,
    (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)(v4 + 96),
    0);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF((boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const)(v4 + 96));
  *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v7._M_current = *(char **)(v4 + 32);
  boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>(
    &this->m_Match,
    v7,
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_Next._M_current = *(char **)(v4 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_End >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_End._M_current = *(char **)(v4 + 64);
  if ( *(char *)(((unsigned __int64)&this->m_bEof >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_bEof, v7._M_current);
  this->m_bEof = 0;
  if ( __gnu_cxx::operator!=<char *,std::string>(
         (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 32),
         (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v4 + 64)) )
  {
    boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::increment(this);
  }
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 302: range 000000000CB93A24-000000000CB93A35
const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >::match_type *__cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::dereference(
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  return &this->m_Match;
};

// Line 326: range 000000000CB93972-000000000CB93A22
bool __cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::equal(
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *Other)
{
  __int16 bEof; // [rsp+1Eh] [rbp-2h]

  LOBYTE(bEof) = boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::eof(this);
  HIBYTE(bEof) = boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::eof(Other);
  if ( bEof )
    return (_BYTE)bEof == HIBYTE(bEof);
  return boost::operator==<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
           &this->m_Match,
           &Other->m_Match)
      && __gnu_cxx::operator==<char *,std::string>(&this->m_Next, &Other->m_Next)
      && __gnu_cxx::operator==<char *,std::string>(&this->m_End, &Other->m_End);
};

// Line 348: range 000000000CBA1E92-000000000CBA1EFA
bool __cdecl boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::eof(
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  if ( boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::is_null(this) )
    return 1;
  if ( *(char *)(((unsigned __int64)&this->m_bEof >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_bEof);
  return this->m_bEof;
};
