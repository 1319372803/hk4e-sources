// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/xml_parser_write.hpp

// Line 23: range 000000000068B962-000000000068BA62
void __cdecl boost::property_tree::xml_parser::write_xml_indent<std::string>(
        std::ostream *stream,
        int indent,
        const boost::property_tree::xml_parser::xml_writer_settings<std::string > *settings)
{
  char indent_char; // dl
  std::allocator<char> __a; // [rsp+2Fh] [rbp-31h] BYREF
  std::string v6; // [rsp+30h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  if ( *(char *)(((unsigned __int64)settings >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(settings);
  indent_char = settings->indent_char;
  if ( *(_BYTE *)(((unsigned __int64)&settings->indent_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&settings->indent_count);
  std::string::basic_string<std::allocator<char>>(&v6, settings->indent_count * indent, indent_char, &__a);
  std::operator<<<char>(stream, &v6);
  std::string::~string(&v6);
  std::allocator<char>::~allocator(&__a);
};

// Line 32: range 000000000068C4A6-000000000068C56C
void __cdecl boost::property_tree::xml_parser::write_xml_comment<std::string>(
        std::ostream *stream,
        const std::string *s,
        int indent,
        bool separate_line,
        const boost::property_tree::xml_parser::xml_writer_settings<std::string > *settings)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( separate_line )
    boost::property_tree::xml_parser::write_xml_indent<std::string>(stream, indent, settings);
  v5 = std::operator<<<std::char_traits<char>>(stream, 60LL);
  v6 = std::operator<<<std::char_traits<char>>(v5, 33LL);
  v7 = std::operator<<<std::char_traits<char>>(v6, 45LL);
  std::operator<<<std::char_traits<char>>(v7, 45LL);
  std::operator<<<char>(stream, s);
  v8 = std::operator<<<std::char_traits<char>>(stream, 45LL);
  v9 = std::operator<<<std::char_traits<char>>(v8, 45LL);
  std::operator<<<std::char_traits<char>>(v9, 62LL);
  if ( separate_line )
    std::operator<<<std::char_traits<char>>(stream, 10LL);
};

// Line 50: range 000000000068C3FF-000000000068C4A5
void __cdecl boost::property_tree::xml_parser::write_xml_text<std::string>(
        std::ostream *stream,
        const std::string *s,
        int indent,
        bool separate_line,
        const boost::property_tree::xml_parser::xml_writer_settings<std::string > *settings)
{
  std::string v6; // [rsp+20h] [rbp-30h] BYREF

  if ( separate_line )
    boost::property_tree::xml_parser::write_xml_indent<std::string>(stream, indent, settings);
  boost::property_tree::xml_parser::encode_char_entities<std::string>(&v6, s);
  std::operator<<<char>(stream, &v6);
  std::string::~string(&v6);
  if ( separate_line )
    std::operator<<<std::char_traits<char>>(stream, 10LL);
};

// Line 66: range 00000000005FE08F-00000000005FE9D5
void __cdecl boost::property_tree::xml_parser::write_xml_element<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        std::ostream *stream,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::key_type *key,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *pt,
        int indent,
        const boost::property_tree::xml_parser::xml_writer_settings<std::string > *settings)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  const std::string *v8; // rax
  const std::string *v9; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v10; // rax
  const std::string *v11; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v12; // rax
  const std::string *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  const std::string *v19; // rax
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v20; // rax
  const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *v21; // rax
  __int64 v22; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  const std::string *v30; // rax
  bool v31; // al
  bool v32; // r14
  const std::string *v33; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v34; // rax
  const std::string *v35; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v36; // rax
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v37; // rax
  const std::string *v38; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v39; // rax
  bool v40; // al
  bool v41; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v42; // rax
  boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *p_second; // r14
  boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false>::pointer v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  bool has_elements; // [rsp+3Dh] [rbp-123h]
  bool has_attrs_only; // [rsp+3Eh] [rbp-122h]
  bool want_pretty; // [rsp+3Fh] [rbp-121h]
  std::string s; // [rsp+40h] [rbp-120h] BYREF
  std::string v56; // [rsp+60h] [rbp-100h] BYREF
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > v57; // [rsp+80h] [rbp-E0h] BYREF
  char v58[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 11 attribs:115 64 8 6 it:148 96 8 6 end:80";
  *(_QWORD *)(v5 + 16) = boost::property_tree::xml_parser::write_xml_element<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&settings->indent_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&settings->indent_count);
  want_pretty = settings->indent_count != 0;
  has_elements = 0;
  v8 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::data(pt);
  has_attrs_only = std::string::empty(v8);
  *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 64) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::begin(pt);
  *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 96) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::end(pt);
  while ( boost::iterators::operator!=<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long>(
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 64),
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 96)) )
  {
    v9 = boost::property_tree::xml_parser::xmlattr<std::string>();
    v10 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
    if ( std::operator!=<char>(&v10->first, v9) )
    {
      has_attrs_only = 0;
      v11 = boost::property_tree::xml_parser::xmltext<std::string>();
      v12 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
      if ( std::operator!=<char>(&v12->first, v11) )
      {
        has_elements = 1;
        break;
      }
    }
    boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
  }
  v13 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::data(pt);
  if ( std::string::empty(v13)
    && boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::empty(pt) )
  {
    if ( indent >= 0 )
    {
      boost::property_tree::xml_parser::write_xml_indent<std::string>(stream, indent, settings);
      v15 = std::operator<<<std::char_traits<char>>(stream, 60LL);
      v16 = std::operator<<<char>(v15, key);
      v17 = std::operator<<<std::char_traits<char>>(v16, 47LL);
      std::operator<<<std::char_traits<char>>(v17, 62LL);
      if ( want_pretty )
        std::operator<<<std::char_traits<char>>(stream, 10LL);
    }
    goto LABEL_56;
  }
  if ( indent >= 0 )
  {
    boost::property_tree::xml_parser::write_xml_indent<std::string>(stream, indent, settings);
    v18 = std::operator<<<std::char_traits<char>>(stream, 60LL);
    std::operator<<<char>(v18, key);
    v19 = boost::property_tree::xml_parser::xmlattr<std::string>();
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::string_path(
      &v57,
      v19,
      46,
      (boost::property_tree::id_translator<std::string >)v19);
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_child_optional(
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *const)(v5 + 32),
      (const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::path_type *)pt);
    boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>::~string_path(&v57);
    if ( !boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::operator!((const boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const)(v5 + 32)) )
    {
      v20 = boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::get((const boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const)(v5 + 32));
      *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 64) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::begin(v20);
      while ( 1 )
      {
        v21 = boost::optional<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>> const&>::get((const boost::optional<const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >&> *const)(v5 + 32));
        *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 96) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::end(v21);
        if ( !boost::iterators::operator!=<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long>(
                (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 64),
                (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 96)) )
          break;
        v22 = std::operator<<<std::char_traits<char>>(stream, 32LL);
        v23 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
        v24 = std::operator<<<char>(v22, v23);
        v25 = std::operator<<<std::char_traits<char>>(v24, 61LL);
        v26 = std::operator<<<std::char_traits<char>>(v25, 34LL);
        v27 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string>(
          &s,
          &v27->second);
        boost::property_tree::xml_parser::encode_char_entities<std::string>(&v56, &s);
        v28 = std::operator<<<char>(v26, &v56);
        std::operator<<<std::char_traits<char>>(v28, 34LL);
        std::string::~string(&v56);
        std::string::~string(&s);
        boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
      }
    }
    if ( !has_attrs_only )
    {
      std::operator<<<std::char_traits<char>>(stream, 62LL);
      if ( !has_elements || !want_pretty )
        goto LABEL_31;
      goto LABEL_30;
    }
    v29 = std::operator<<<std::char_traits<char>>(stream, 47LL);
    std::operator<<<std::char_traits<char>>(v29, 62LL);
    if ( want_pretty )
LABEL_30:
      std::operator<<<std::char_traits<char>>(stream, 10LL);
  }
LABEL_31:
  v30 = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::data(pt);
  if ( !std::string::empty(v30) )
  {
    v31 = has_elements && want_pretty;
    v32 = v31;
    boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string>(&v56, pt);
    boost::property_tree::xml_parser::write_xml_text<std::string>(stream, &v56, indent + 1, v32, settings);
    std::string::~string(&v56);
  }
  *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 64) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::begin(pt);
  while ( 1 )
  {
    *(boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > >::const_iterator *)(v5 + 96) = boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::end(pt);
    if ( !boost::iterators::operator!=<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long>(
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 64),
            (const boost::iterators::iterator_facade<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int> *)(v5 + 96)) )
      break;
    v33 = boost::property_tree::xml_parser::xmlattr<std::string>();
    v34 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
    if ( !std::operator==<char>(&v34->first, v33) )
    {
      v35 = boost::property_tree::xml_parser::xmlcomment<std::string>();
      v36 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
      if ( std::operator==<char>(&v36->first, v35) )
      {
        v37 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string>(
          &v56,
          &v37->second);
        boost::property_tree::xml_parser::write_xml_comment<std::string>(
          stream,
          &v56,
          indent + 1,
          want_pretty,
          settings);
        std::string::~string(&v56);
      }
      else
      {
        v38 = boost::property_tree::xml_parser::xmltext<std::string>();
        v39 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
        if ( std::operator==<char>(&v39->first, v38) )
        {
          v40 = has_elements && want_pretty;
          v41 = v40;
          v42 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
          boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::get_value<std::string>(
            &v56,
            &v42->second);
          boost::property_tree::xml_parser::write_xml_text<std::string>(stream, &v56, indent + 1, v41, settings);
          std::string::~string(&v56);
        }
        else
        {
          p_second = &boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64))->second;
          v44 = boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator->((const boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
          boost::property_tree::xml_parser::write_xml_element<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
            stream,
            &v44->first,
            p_second,
            indent + 1,
            settings);
        }
      }
    }
    boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>::const_iterator,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>,boost::iterators::bidirectional_traversal_tag,std::pair<std::string const,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>> const&,long,false,false>::operator++((boost::iterators::detail::iterator_facade_base<boost::property_tree::basic_ptree<std::string,std::string >::const_iterator,std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >,boost::iterators::bidirectional_traversal_tag,const std::pair<const std::string,boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > >&,long int,false,false> *const)(v5 + 64));
  }
  if ( indent >= 0 && !has_attrs_only )
  {
    if ( has_elements )
      boost::property_tree::xml_parser::write_xml_indent<std::string>(stream, indent, settings);
    v45 = std::operator<<<std::char_traits<char>>(stream, 60LL);
    v46 = std::operator<<<std::char_traits<char>>(v45, 47LL);
    v47 = std::operator<<<char>(v46, key);
    std::operator<<<std::char_traits<char>>(v47, 62LL);
    if ( want_pretty )
      std::operator<<<std::char_traits<char>>(stream, 10LL);
  }
LABEL_56:
  if ( v58 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 179: range 000000000054CF99-000000000054D21D
void __cdecl boost::property_tree::xml_parser::write_xml_internal<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        std::ostream *stream,
        const boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *pt,
        const std::string *filename,
        const boost::property_tree::xml_parser::xml_writer_settings<std::string > *settings)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  std::string v10; // [rsp+30h] [rbp-B0h] BYREF
  std::string key; // [rsp+50h] [rbp-90h] BYREF
  boost::property_tree::xml_parser::xml_parser_error v12; // [rsp+70h] [rbp-70h] BYREF

  boost::property_tree::detail::widen<std::string>(&v10, "<?xml version=\"1.0\" encoding=\"");
  v4 = std::operator<<<char>(stream, &v10);
  v5 = std::operator<<<char>(v4, &settings->encoding);
  boost::property_tree::detail::widen<std::string>(&key, off_DEC74A0);
  std::operator<<<char>(v5, &key);
  std::string::~string(&key);
  std::string::~string(&v10);
  std::string::basic_string(&key);
  boost::property_tree::xml_parser::write_xml_element<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
    stream,
    &key,
    pt,
    -1,
    settings);
  std::string::~string(&key);
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
    __asan_report_load8(stream);
  v6 = *(_QWORD *)stream - 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(*(_QWORD *)stream - 24LL);
  if ( (unsigned __int8)std::ios::operator!((char *)stream + *(_QWORD *)v6) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&key, "write error", &__a);
    boost::property_tree::xml_parser::xml_parser_error::xml_parser_error(&v12, &key, filename, 0LL);
    __asan_handle_no_return(&v12);
    boost::exception_detail::throw_exception_<boost::property_tree::xml_parser::xml_parser_error>(
      &v12,
      "void boost::property_tree::xml_parser::write_xml_internal(std::basic_ostream<typename Ptree::key_type::value_type>"
      "&, const Ptree&, const string&, const boost::property_tree::xml_parser::xml_writer_settings<typename Ptree::key_ty"
      "pe>&) [with Ptree = boost::property_tree::basic_ptree<std::__cxx11::basic_string<char>, std::__cxx11::basic_string"
      "<char> >; typename Ptree::key_type::value_type = char; std::string = std::__cxx11::basic_string<char>; typename Pt"
      "ree::key_type = std::__cxx11::basic_string<char>]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_tree/detail/xm"
      "l_parser_write.hpp",
      190);
  }
};
