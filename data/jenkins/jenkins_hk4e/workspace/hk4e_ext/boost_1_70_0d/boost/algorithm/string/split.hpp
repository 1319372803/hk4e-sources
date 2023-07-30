// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/split.hpp

// Line 140: range 000000000C6FF0D7-000000000C6FF32D
std::vector<std::string> *__cdecl boost::algorithm::split<std::vector<std::string>,std::string,boost::algorithm::detail::is_any_ofF<char>>(
        std::vector<std::string> *Result,
        std::string *Input,
        boost::algorithm::detail::is_any_ofF<char> *p_Pred,
        boost::algorithm::token_compress_mode_type eCompress)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::vector<std::string> *v7; // r14
  std::vector<std::string> *result; // rax
  char v10[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v5;
  }
  v4->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v4->m_Pred.m_Storage.m_fixSet[8] = "2 32 24 9 <unknown> 96 32 9 <unknown>";
  v4->m_Pred.m_Size = (std::size_t)boost::algorithm::split<std::vector<std::string>,std::string,boost::algorithm::detail::is_any_ofF<char>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234881024;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  boost::algorithm::detail::is_any_ofF<char>::is_any_ofF(&v4[1]);
  if ( *(char *)(((unsigned __int64)&v4[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v4[3].m_eCompress + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v4 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v4[3].m_eCompress + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&v4[3], 32LL);
  }
  boost::algorithm::token_finder<boost::algorithm::detail::is_any_ofF<char>>(v4 + 3, &v4[1].m_Pred, eCompress);
  v7 = boost::algorithm::iter_split<std::vector<std::string>,std::string,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
         (unsigned __int64)Result,
         Input,
         (unsigned __int64)&v4[3]);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v4 + 3);
  *(_DWORD *)(((unsigned __int64)&v4[3] >> 3) + 0x7FFF8000) = -117901064;
  boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF(&v4[1].m_Pred);
  result = v7;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v4->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
