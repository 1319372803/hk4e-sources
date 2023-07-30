// File: /opt/tool/gcc-8.1.0/include/c++/8.1.0/bits/stl_algo.h

// Line 4293: range 00000000153F7B51-00000000153F7BD1
__gnu_cxx::__normal_iterator<char*,std::string > __cdecl std::transform<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,int (*)(int)>(
        __gnu_cxx::__normal_iterator<char*,std::string > __first,
        __gnu_cxx::__normal_iterator<char*,std::string > __last,
        __gnu_cxx::__normal_iterator<char*,std::string > __result,
        int (*__unary_op)(int))
{
  __gnu_cxx::__normal_iterator<char*,std::string >::reference v4; // rax
  char v5; // bl
  __gnu_cxx::__normal_iterator<char*,std::string > __resulta; // [rsp+8h] [rbp-28h] BYREF
  __gnu_cxx::__normal_iterator<char*,std::string > __lasta; // [rsp+10h] [rbp-20h] BYREF
  __gnu_cxx::__normal_iterator<char*,std::string > __firsta; // [rsp+18h] [rbp-18h] BYREF

  __firsta._M_current = __first._M_current;
  __lasta._M_current = __last._M_current;
  __resulta._M_current = __result._M_current;
  while ( __gnu_cxx::operator!=<char *,std::string>(&__firsta, &__lasta) )
  {
    v4 = __gnu_cxx::__normal_iterator<char *,std::string>::operator*(&__firsta);
    v5 = __unary_op(*v4);
    *__gnu_cxx::__normal_iterator<char *,std::string>::operator*(&__resulta) = v5;
    __gnu_cxx::__normal_iterator<char *,std::string>::operator++(&__firsta);
    __gnu_cxx::__normal_iterator<char *,std::string>::operator++(&__resulta);
  }
  return __resulta;
};
