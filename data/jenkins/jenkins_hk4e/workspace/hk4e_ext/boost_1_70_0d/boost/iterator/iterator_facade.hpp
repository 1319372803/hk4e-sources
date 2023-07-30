// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/iterator/iterator_facade.hpp

// Line 344: range 0000000012230A34-0000000012230A4D
boost::iterators::detail::operator_arrow_dispatch<boost::filesystem::directory_entry&,boost::filesystem::directory_entry*>::result_type __cdecl boost::iterators::detail::operator_arrow_dispatch<boost::filesystem::directory_entry &,boost::filesystem::directory_entry*>::apply(
        boost::filesystem::directory_entry *x)
{
  return boost::addressof<boost::filesystem::directory_entry>(x);
};

// Line 548: range 000000000CB80542-000000000CB8055B
boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false>::reference __cdecl boost::iterators::iterator_core_access::dereference<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *f)
{
  return boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::dereference(f);
};

// Line 548: range 0000000012230A5C-0000000012230A75
boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false>::reference __cdecl boost::iterators::iterator_core_access::dereference<boost::filesystem::directory_iterator>(
        const boost::filesystem::directory_iterator *f)
{
  return boost::filesystem::directory_iterator::dereference(f);
};

// Line 548: range 000000000CAA95DA-000000000CAA9666
boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *__cdecl boost::iterators::iterator_core_access::dereference<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(
        boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *retstr,
        const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *f)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>::dereference(
    retstr,
    f);
  return retstr;
};

// Line 548: range 000000000C870742-000000000C87078C
boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false>::reference __cdecl boost::iterators::iterator_core_access::dereference<luabind::detail::basic_iterator<luabind::detail::basic_access>>(
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *f)
{
  luabind::adl::iterator_proxy<luabind::detail::basic_access> v1; // rax

  if ( *(_WORD *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v1 = luabind::detail::basic_iterator<luabind::detail::basic_access>::dereference(f);
  v1.m_interpreter = (lua_State_0 *)f;
  return v1;
};

// Line 554: range 000000000CB80518-000000000CB80532
void __cdecl boost::iterators::iterator_core_access::increment<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *f)
{
  boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::increment(f);
};

// Line 554: range 00000000122436FE-0000000012243718
void __cdecl boost::iterators::iterator_core_access::increment<boost::filesystem::directory_iterator>(
        boost::filesystem::directory_iterator *f)
{
  boost::filesystem::directory_iterator::increment(f);
};

// Line 554: range 000000000CAA95B0-000000000CAA95CA
void __cdecl boost::iterators::iterator_core_access::increment<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(
        boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *f)
{
  boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::increment(f);
};

// Line 554: range 000000000C870718-000000000C870732
void __cdecl boost::iterators::iterator_core_access::increment<luabind::detail::basic_iterator<luabind::detail::basic_access>>(
        luabind::detail::basic_iterator<luabind::detail::basic_access> *f)
{
  luabind::detail::basic_iterator<luabind::detail::basic_access>::increment(f);
};

// Line 566: range 000000000CB804E4-000000000CB80508
bool __cdecl boost::iterators::iterator_core_access::equal<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *f1,
        const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *f2,
        mpl_::true_ a3)
{
  return boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>::equal(f1, f2);
};

// Line 566: range 0000000012230A0F-0000000012230A33
bool __cdecl boost::iterators::iterator_core_access::equal<boost::filesystem::directory_iterator,boost::filesystem::directory_iterator>(
        const boost::filesystem::directory_iterator *f1,
        const boost::filesystem::directory_iterator *f2,
        mpl_::true_ a3)
{
  return boost::filesystem::directory_iterator::equal(f1, f2);
};

// Line 566: range 000000000CAA957D-000000000CAA95A1
bool __cdecl boost::iterators::iterator_core_access::equal<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(
        const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *f1,
        const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *f2,
        mpl_::true_ a3)
{
  return boost::iterators::iterator_adaptor<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>::equal<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,std::string,boost::use_default,std::string,boost::use_default>(
           f1,
           f2);
};

// Line 566: range 000000000C8706E4-000000000C870708
bool __cdecl boost::iterators::iterator_core_access::equal<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::detail::basic_iterator<luabind::detail::basic_access>>(
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *f1,
        const luabind::detail::basic_iterator<luabind::detail::basic_access> *f2,
        mpl_::true_ a3)
{
  return luabind::detail::basic_iterator<luabind::detail::basic_access>::equal(f1, f2);
};

// Line 654: range 000000000CB5309E-000000000CB530BF
boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false>::reference __cdecl boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::operator*(
        const boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false> *const this)
{
  const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::derived(this);
  return boost::iterators::iterator_core_access::dereference<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(v1);
};

// Line 654: range 0000000012210604-0000000012210625
boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false>::reference __cdecl boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::operator*(
        const boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *const this)
{
  const boost::filesystem::directory_iterator *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(this);
  return boost::iterators::iterator_core_access::dereference<boost::filesystem::directory_iterator>(v1);
};

// Line 654: range 000000000CA26268-000000000CA262FE
boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *__cdecl boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::operator*(
        boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false>::reference *retstr,
        const boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false> *const this)
{
  const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *v2; // rsi

  v2 = boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::derived(this);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v2 = (const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  boost::iterators::iterator_core_access::dereference<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(
    retstr,
    v2);
  return retstr;
};

// Line 654: range 000000000C7AD5E4-000000000C7AD639
boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false>::reference __cdecl boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator*(
        const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const this)
{
  const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *v1; // rsi
  boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false>::reference v2; // rax

  boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::derived(v1);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  v2 = boost::iterators::iterator_core_access::dereference<luabind::detail::basic_iterator<luabind::detail::basic_access>>((const luabind::detail::basic_iterator<luabind::detail::basic_access> *)this);
  v2.m_interpreter = (lua_State_0 *)this;
  return v2;
};

// Line 659: range 00000000122105DA-0000000012210603
boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false>::pointer __cdecl boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::operator->(
        const boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *const this)
{
  const boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *v1; // rax
  boost::filesystem::directory_entry *v2; // rax

  v1 = (const boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *)boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(this);
  v2 = boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::operator*(v1);
  return boost::iterators::detail::operator_arrow_dispatch<boost::filesystem::directory_entry &,boost::filesystem::directory_entry*>::apply(v2);
};

// Line 664: range 000000000CB53070-000000000CB5309D
boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *__cdecl boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::operator++(
        boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false> *const this)
{
  boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::derived(this);
  boost::iterators::iterator_core_access::increment<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(v1);
  return boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::derived(this);
};

// Line 664: range 00000000122243B8-00000000122243E5
boost::filesystem::directory_iterator *__cdecl boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::operator++(
        boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *const this)
{
  boost::filesystem::directory_iterator *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(this);
  boost::iterators::iterator_core_access::increment<boost::filesystem::directory_iterator>(v1);
  return boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(this);
};

// Line 664: range 000000000CA2623A-000000000CA26267
boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *__cdecl boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::operator++(
        boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false> *const this)
{
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::derived(this);
  boost::iterators::iterator_core_access::increment<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(v1);
  return boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::derived(this);
};

// Line 664: range 000000000C7AD5B6-000000000C7AD5E3
luabind::detail::basic_iterator<luabind::detail::basic_access> *__cdecl boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::operator++(
        boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const this)
{
  luabind::detail::basic_iterator<luabind::detail::basic_access> *v1; // rax

  v1 = boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::derived(this);
  boost::iterators::iterator_core_access::increment<luabind::detail::basic_iterator<luabind::detail::basic_access>>(v1);
  return boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::derived(this);
};

// Line 674: range 000000000CB8050A-000000000CB80517
boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *__cdecl boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::derived(
        boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false> *const this)
{
  return (boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *)this;
};

// Line 674: range 00000000122436F0-00000000122436FD
boost::filesystem::directory_iterator *__cdecl boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(
        boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *const this)
{
  return (boost::filesystem::directory_iterator *)this;
};

// Line 674: range 000000000CAA95A2-000000000CAA95AF
boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *__cdecl boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::derived(
        boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false> *const this)
{
  return (boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *)this;
};

// Line 674: range 000000000C87070A-000000000C870717
luabind::detail::basic_iterator<luabind::detail::basic_access> *__cdecl boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::derived(
        boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const this)
{
  return (luabind::detail::basic_iterator<luabind::detail::basic_access> *)this;
};

// Line 679: range 000000000CB80534-000000000CB80541
const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *__cdecl boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,false,false>::derived(
        const boost::iterators::detail::iterator_facade_base<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int,false,false> *const this)
{
  return (const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *)this;
};

// Line 679: range 0000000012230A4E-0000000012230A5B
const boost::filesystem::directory_iterator *__cdecl boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,false,false>::derived(
        const boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false> *const this)
{
  return (const boost::filesystem::directory_iterator *)this;
};

// Line 679: range 000000000CAA95CC-000000000CAA95D9
const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *__cdecl boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,false,false>::derived(
        const boost::iterators::detail::iterator_facade_base<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int,false,false> *const this)
{
  return (const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *)this;
};

// Line 679: range 000000000C870734-000000000C870741
const luabind::detail::basic_iterator<luabind::detail::basic_access> *__cdecl boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,false,false>::derived(
        const boost::iterators::detail::iterator_facade_base<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int,false,false> *const this)
{
  return (const luabind::detail::basic_iterator<luabind::detail::basic_access> *)this;
};

// Line 900: range 000000000CB52F9C-000000000CB5306E
boost::iterators::enabled<true>::base<bool>::type __cdecl boost::iterators::operator==<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long>(
        const boost::iterators::iterator_facade<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int> *lhs,
        const boost::iterators::iterator_facade<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::iterators::forward_traversal_tag,const boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >&,long int> *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::iterators::enabled<true>::base<bool>::type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::iterators::operator==<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const,boost::iterators::forward_traversal_tag,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>> const&,long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&((const boost::integral_constant<bool,true> *const)(v2 + 32));
  result = boost::iterators::iterator_core_access::equal<boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>>(
             (const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *)lhs,
             (const boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > > *)rhs,
             (mpl_::true_)rhs);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 901: range 00000000122242E2-00000000122243B7
boost::iterators::enabled<true>::base<bool>::type __cdecl boost::iterators::operator!=<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long>(
        const boost::iterators::iterator_facade<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int> *lhs,
        const boost::iterators::iterator_facade<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int> *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::iterators::enabled<true>::base<bool>::type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::iterators::operator!=<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long,boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&((const boost::integral_constant<bool,true> *const)(v2 + 32));
  result = !boost::iterators::iterator_core_access::equal<boost::filesystem::directory_iterator,boost::filesystem::directory_iterator>(
              (const boost::filesystem::directory_iterator *)lhs,
              (const boost::filesystem::directory_iterator *)rhs,
              (mpl_::true_)rhs);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 901: range 000000000CA26164-000000000CA26239
boost::iterators::enabled<true>::base<bool>::type __cdecl boost::iterators::operator!=<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long>(
        const boost::iterators::iterator_facade<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int> *lhs,
        const boost::iterators::iterator_facade<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long int> *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::iterators::enabled<true>::base<bool>::type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::iterators::operator!=<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long,boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,std::string,boost::iterators::forward_traversal_tag,std::string,long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&((const boost::integral_constant<bool,true> *const)(v2 + 32));
  result = !boost::iterators::iterator_core_access::equal<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>>(
              (const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *)lhs,
              (const boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> *)rhs,
              (mpl_::true_)rhs);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 901: range 000000000C7AD4DF-000000000C7AD5B4
boost::iterators::enabled<true>::base<bool>::type __cdecl boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>(
        const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *lhs,
        const boost::iterators::iterator_facade<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long int> *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::iterators::enabled<true>::base<bool>::type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = boost::iterators::operator!=<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long,luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::adl::iterator_proxy<luabind::detail::basic_access>,boost::iterators::single_pass_traversal_tag,luabind::adl::iterator_proxy<luabind::detail::basic_access>,long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&((const boost::integral_constant<bool,true> *const)(v2 + 32));
  result = !boost::iterators::iterator_core_access::equal<luabind::detail::basic_iterator<luabind::detail::basic_access>,luabind::detail::basic_iterator<luabind::detail::basic_access>>(
              (const luabind::detail::basic_iterator<luabind::detail::basic_access> *)lhs,
              (const luabind::detail::basic_iterator<luabind::detail::basic_access> *)rhs,
              (mpl_::true_)rhs);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
