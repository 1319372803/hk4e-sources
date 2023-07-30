// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/finder.hpp

// Line 215: range 000000000C7D3EC9-000000000C7D4013
boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *__cdecl boost::algorithm::token_finder<boost::algorithm::detail::is_any_ofF<char>>(
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *retstr,
        boost::algorithm::detail::is_any_ofF<char> *p_Pred,
        boost::algorithm::token_compress_mode_type eCompress)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::algorithm::token_finder<boost::algorithm::detail::is_any_ofF<char>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  boost::algorithm::detail::is_any_ofF<char>::is_any_ofF((void *)(v3 + 32));
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(
    retstr,
    (boost::algorithm::detail::is_any_ofF<char> *)(v3 + 32),
    eCompress);
  boost::algorithm::detail::is_any_ofF<char>::~is_any_ofF((boost::algorithm::detail::is_any_ofF<char> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
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
  return retstr;
};
