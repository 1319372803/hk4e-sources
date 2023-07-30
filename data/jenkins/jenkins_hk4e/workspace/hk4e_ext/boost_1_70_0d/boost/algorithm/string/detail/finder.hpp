// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/detail/finder.hpp

// Line 548: range 000000000C7D4048-000000000C7D40E2
void __cdecl boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const this,
        const boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *a2)
{
  boost::algorithm::token_compress_mode_type m_eCompress; // ecx

  boost::algorithm::detail::is_any_ofF<char>::is_any_ofF(this);
  if ( *(_BYTE *)(((unsigned __int64)&a2->m_eCompress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->m_eCompress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->m_eCompress);
  }
  m_eCompress = a2->m_eCompress;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_eCompress);
  }
  this->m_eCompress = m_eCompress;
};

// Line 548: range 000000000C6FF0BC-000000000C6FF0D6
void __cdecl boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const this)
{
  boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF(&this->m_Pred);
};

// Line 551: range 000000000C8A0D20-000000000C8A0D85
void __cdecl boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const this,
        boost::algorithm::detail::is_any_ofF<char> *p_Pred,
        boost::algorithm::token_compress_mode_type eCompress)
{
  boost::algorithm::detail::is_any_ofF<char>::is_any_ofF(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_eCompress);
  }
  this->m_eCompress = eCompress;
};

// Line 559: range 000000000C990E4A-000000000C991311
__int64 __fastcall boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::operator()<__gnu_cxx::__normal_iterator<char *,std::string>>(
        const boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > Begin,
        __gnu_cxx::__normal_iterator<char*,std::string > End)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<char*,std::string >::reference v8; // rax
  char *v9; // rdx
  char v10; // al
  char v12[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 6 It:565 64 8 7 It2:573 96 8 9 Begin:560 128 8 7 End:561 160 16 9 <unknown> 192 16 9 <unk"
                        "nown> 224 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::operator()<__gnu_cxx::__normal_iterator<char *,std::string>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 96) = Begin;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128) = End;
  boost::algorithm::detail::is_any_ofF<char>::is_any_ofF((void *)(v3 + 224));
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = std::find_if<__gnu_cxx::__normal_iterator<char *,std::string>,boost::algorithm::detail::is_any_ofF<char>>(
                                                                     *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 96),
                                                                     *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128),
                                                                     (boost::algorithm::detail::is_any_ofF<char> *)(v3 + 224));
  boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF((boost::algorithm::detail::is_any_ofF<char> *const)(v3 + 224));
  v6 = ((v3 + 224) >> 3) + 2147450880;
  *(_WORD *)v6 = -1800;
  *(_BYTE *)(v6 + 2) = -8;
  if ( __gnu_cxx::operator==<char *,std::string>(
         (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
         (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128)) )
  {
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>(
      (boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const)(v3 + 160),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128));
    if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_load16(v3 + 160);
    result = *(_QWORD *)(v3 + 160);
  }
  else
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->m_eCompress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->m_eCompress);
    }
    if ( this->m_eCompress )
    {
      __gnu_cxx::__normal_iterator<char *,std::string>::operator++((__gnu_cxx::__normal_iterator<char*,std::string > *const)(v3 + 64));
    }
    else
    {
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<char *,std::string>(
                (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 128)) )
          goto LABEL_22;
        v8 = __gnu_cxx::__normal_iterator<char *,std::string>::operator*((const __gnu_cxx::__normal_iterator<char*,std::string > *const)(v3 + 64));
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v8);
        }
        if ( boost::algorithm::detail::is_any_ofF<char>::operator()<char>(&this->m_Pred, *v9) )
          v10 = 1;
        else
LABEL_22:
          v10 = 0;
        if ( !v10 )
          break;
        __gnu_cxx::__normal_iterator<char *,std::string>::operator++((__gnu_cxx::__normal_iterator<char*,std::string > *const)(v3 + 64));
      }
    }
    *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 64);
    boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>(
      (boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const)(v3 + 192),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64));
    if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load16(v3 + 192);
    result = *(_QWORD *)(v3 + 192);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};
