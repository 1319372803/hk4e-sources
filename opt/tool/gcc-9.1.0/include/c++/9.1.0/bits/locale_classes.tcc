// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/locale_classes.tcc

// Line 132: range 000000000D39669E-000000000D3967E6
const std::ctype<char> *__cdecl std::use_facet<std::ctype<char> const>(const std::locale *__loc)
{
  const std::locale::facet **p_M_facets; // rdi
  std::locale::_Impl *M_impl; // rax
  std::locale::_Impl *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  const void *v6; // rdi
  const std::ctype<char> *result; // rax
  std::size_t __i; // [rsp+10h] [rbp-10h]
  const std::locale::facet **__facets; // [rsp+18h] [rbp-8h]

  p_M_facets = (const std::locale::facet **)&std::ctype<char>::id;
  __i = std::locale::id::_M_id(&std::ctype<char>::id);
  if ( *(_BYTE *)(((unsigned __int64)__loc >> 3) + 0x7FFF8000) )
  {
    p_M_facets = (const std::locale::facet **)__loc;
    __asan_report_load8(__loc);
  }
  M_impl = __loc->_M_impl;
  if ( *(_BYTE *)(((unsigned __int64)&__loc->_M_impl->_M_facets >> 3) + 0x7FFF8000) )
  {
    p_M_facets = (const std::locale::facet **)&__loc->_M_impl->_M_facets;
    M_impl = (std::locale::_Impl *)__asan_report_load8(p_M_facets);
  }
  __facets = M_impl->_M_facets;
  v3 = __loc->_M_impl;
  if ( *(_BYTE *)(((unsigned __int64)&__loc->_M_impl->_M_facets_size >> 3) + 0x7FFF8000) )
  {
    p_M_facets = (const std::locale::facet **)&__loc->_M_impl->_M_facets_size;
    v3 = (std::locale::_Impl *)__asan_report_load8(p_M_facets);
  }
  if ( __i >= v3->_M_facets_size )
    goto LABEL_11;
  v4 = (unsigned __int64)&__facets[__i];
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    p_M_facets = &__facets[__i];
    v4 = __asan_report_load8(p_M_facets);
  }
  if ( !*(_QWORD *)v4 )
  {
LABEL_11:
    __asan_handle_no_return(p_M_facets);
    std::__throw_bad_cast();
  }
  v5 = (unsigned __int64)&__facets[__i];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(&__facets[__i]);
  v6 = *(const void **)v5;
  result = (const std::ctype<char> *)__dynamic_cast(
                                       *(const void **)v5,
                                       (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
                                       (const struct __class_type_info *)&`typeinfo for'std::ctype<char>,
                                       0LL);
  if ( !result )
  {
    __asan_handle_no_return(v6);
    __cxa_bad_cast();
  }
  return result;
};
