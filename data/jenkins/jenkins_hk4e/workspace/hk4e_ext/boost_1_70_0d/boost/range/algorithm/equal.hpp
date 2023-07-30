// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/range/algorithm/equal.hpp

// Line 105: range 000000000CBC454C-000000000CBC4704
_BOOL8 __fastcall boost::range_detail::equal_impl<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
        __gnu_cxx::__normal_iterator<char*,std::string > first1,
        __gnu_cxx::__normal_iterator<char*,std::string > last1,
        __gnu_cxx::__normal_iterator<char*,std::string > first2,
        __gnu_cxx::__normal_iterator<char*,std::string > last2,
        std::random_access_iterator_tag a5,
        std::random_access_iterator_tag a6)
{
  __gnu_cxx::__normal_iterator<char*,std::string > *v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __gnu_cxx::__normal_iterator<char*,std::string >::difference_type v9; // r14
  _BOOL8 result; // rax
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v6 = (__gnu_cxx::__normal_iterator<char*,std::string > *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = (__gnu_cxx::__normal_iterator<char*,std::string > *)v7;
  }
  v6->_M_current = (char *)1102416563;
  v6[1]._M_current = "4 32 8 10 first1:105 64 8 9 last1:106 96 8 10 first2:107 128 8 9 last2:108";
  v6[2]._M_current = (char *)boost::range_detail::equal_impl<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>;
  v8 = (_DWORD *)((unsigned __int64)v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202116352;
  v6[4]._M_current = first1._M_current;
  v6[8]._M_current = last1._M_current;
  v6[12]._M_current = first2._M_current;
  v6[16]._M_current = last2._M_current;
  v9 = __gnu_cxx::operator-<char *,std::string>(v6 + 8, v6 + 4);
  result = v9 == __gnu_cxx::operator-<char *,std::string>(v6 + 16, v6 + 12)
        && std::equal<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
             v6[4],
             v6[8],
             v6[12]);
  if ( v13 == (char *)v6 )
  {
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v6->_M_current = (char *)1172321806;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 133: range 000000000CBBD514-000000000CBBD687
_BOOL8 __fastcall boost::range_detail::equal<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
        __gnu_cxx::__normal_iterator<char*,std::string > first1,
        __gnu_cxx::__normal_iterator<char*,std::string > last1,
        __gnu_cxx::__normal_iterator<char*,std::string > first2,
        __gnu_cxx::__normal_iterator<char*,std::string > last2,
        std::random_access_iterator_tag a5,
        std::random_access_iterator_tag a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // rbx
  _BOOL8 result; // rax
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 1 8 tag2:139 64 8 10 first1:133 96 8 9 last1:134 128 8 10 first2:135 160 8 9 last2:136";
  *(_QWORD *)(v6 + 16) = boost::range_detail::equal<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202116352;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 64) = first1;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 96) = last1;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 128) = first2;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 160) = last2;
  result = boost::range_detail::equal_impl<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
             *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 64),
             *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 96),
             *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 128),
             *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v6 + 160),
             a5,
             a6);
  if ( v12 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 172: range 000000000CBAF232-000000000CBAF29B
bool __cdecl boost::range::equal<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *rng1,
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *rng2)
{
  char *M_current; // r13
  char *v3; // r12
  char *v4; // rbx
  boost::range_detail::extract_const_iterator<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,true>::type v5; // rax
  std::random_access_iterator_tag v6; // r8
  std::random_access_iterator_tag v7; // r9

  M_current = boost::range_adl_barrier::end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(rng2)._M_current;
  v3 = boost::range_adl_barrier::begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(rng2)._M_current;
  v4 = boost::range_adl_barrier::end<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(rng1)._M_current;
  v5._M_current = boost::range_adl_barrier::begin<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(rng1)._M_current;
  return boost::range_detail::equal<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>(
           v5,
           (__gnu_cxx::__normal_iterator<char*,std::string >)v4,
           (__gnu_cxx::__normal_iterator<char*,std::string >)v3,
           (__gnu_cxx::__normal_iterator<char*,std::string >)M_current,
           v6,
           v7);
};
