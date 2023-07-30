// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/iterator/transform_iterator.hpp

// Line 79: range 000000000C7D415E-000000000C7D4183
void __cdecl boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::transform_iterator(
        boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *const this,
        const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *a2)
{
  boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::iterator_adaptor(
    this,
    a2);
};

// Line 79: range 000000000C7D411C-000000000C7D4136
void __cdecl boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::~transform_iterator(
        boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *const this)
{
  boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::~iterator_adaptor(this);
};

// Line 91: range 000000000C9915D6-000000000C9916A4
void __fastcall boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::transform_iterator(
        boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *const this,
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *x,
        boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > > f,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 4 f:91";
  *(_QWORD *)(v7 + 16) = boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::transform_iterator;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::iterator_adaptor(
    this,
    x);
  if ( v10 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 125: range 000000000CB11876-000000000CB11928
boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *__cdecl boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::dereference(
        boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *retstr,
        const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *const this)
{
  boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > > *p_m_f; // rbx
  const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *v3; // rax
  const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *v4; // rsi

  p_m_f = &this->m_f;
  v3 = boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::base(this);
  v4 = boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::operator*((const boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false> *const)v3);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v4 = (const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>::operator()(
    retstr,
    p_m_f,
    v4);
  return retstr;
};

// Line 135: range 000000000C8A10E3-000000000C8A11B4
boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *__fastcall boost::iterators::make_transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *retstr,
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *p_it,
        boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > > fun,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 7 fun:135";
  *(_QWORD *)(v7 + 16) = boost::iterators::make_transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = a7;
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::transform_iterator(
    retstr,
    p_it,
    (boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >)p_it,
    a4,
    a5,
    a6,
    (char)p_it);
  if ( v11 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
