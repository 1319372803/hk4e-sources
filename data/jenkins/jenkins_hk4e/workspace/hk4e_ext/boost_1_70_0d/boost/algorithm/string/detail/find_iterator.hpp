// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/detail/find_iterator.hpp

// Line 43: range 000000000C9916C2-000000000C9916DC
void __cdecl boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base(
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2(&this->m_Finder);
};

// Line 45: range 000000000C991736-000000000C99175B
void __cdecl boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base(
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        const boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *Other)
{
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2(
    &this->m_Finder,
    &Other->m_Finder);
};

// Line 50: range 000000000C99135A-000000000C99149E
void __cdecl boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_Finder,
        int a3)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v4;
  }
  v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v3->m_Pred.m_Storage.m_fixSet[8] = "1 32 32 9 <unknown>";
  v3->m_Pred.m_Size = (std::size_t)boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::find_iterator_base<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v3 + 1, p_Finder);
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
    &this->m_Finder,
    v3 + 1,
    0);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v3 + 1);
  if ( v6 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 54: range 000000000C8A10C8-000000000C8A10E2
void __cdecl boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::~find_iterator_base(
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::~function2(&this->m_Finder);
};

// Line 57: range 000000000CA25EC0-000000000CA26051
char *__fastcall boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::do_find(
        const boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > >::input_iterator_type Begin,
        boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > >::input_iterator_type End)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *result; // rax
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 8 Begin:58 64 8 6 End:59 96 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::do_find;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > >::input_iterator_type *)(v3 + 32) = Begin;
  *(boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > >::input_iterator_type *)(v3 + 64) = End;
  if ( !boost::function_base::empty(&this->m_Finder) )
  {
    result = boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::operator()(
               &this->m_Finder,
               *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32),
               *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64)).m_Begin._M_current;
  }
  else
  {
    boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>(
      (boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *const)(v3 + 96),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64),
      *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64));
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load16(v3 + 96);
    result = *(char **)(v3 + 96);
  }
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 72: range 000000000CBAF218-000000000CBAF231
bool __cdecl boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char *,std::string>>::is_null(
        const boost::algorithm::detail::find_iterator_base<__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  return boost::function_base::empty(&this->m_Finder);
};
