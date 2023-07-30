// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/detail/util.hpp

// Line 96: range 000000000CB530C0-000000000CB53150
std::string *__cdecl boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>::operator()(
        std::string *retstr,
        const boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *Range)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  boost::copy_range<std::string,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>>(retstr, Range);
  return retstr;
};
