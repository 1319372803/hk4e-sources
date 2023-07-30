// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/xml_parser.hpp

// Line 73: range 000000000C2ABE1B-000000000C2AC556
void __fastcall boost::property_tree::xml_parser::read_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
        const std::string *filename,
        boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string > > *pt,
        int flags,
        const std::locale *loc)
{
  std::string::pointer M_p; // r15
  const std::string *v5; // r13
  unsigned __int64 v7; // r12
  char *v8; // rbx
  _DWORD *v9; // rbp
  std::locale::_Impl *v10; // rax
  unsigned __int64 v11; // rdi
  std::locale::_Impl *v12; // rax
  __int64 v13; // rax
  std::locale::_Impl *v14; // rax
  std::locale::_Impl *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // al
  void *v19; // rax
  std::locale::_Impl *v20; // rax
  unsigned __int64 v21; // rdi
  std::allocator<char> __a; // [rsp+27h] [rbp-381h] BYREF
  std::locale v24; // [rsp+28h] [rbp-380h] BYREF
  std::string msg; // [rsp+30h] [rbp-378h] BYREF
  boost::property_tree::file_parser_error v26; // [rsp+50h] [rbp-358h] BYREF
  char v27[760]; // [rsp+B0h] [rbp-2F8h] BYREF

  v5 = filename;
  v7 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    filename = (const std::string *)704;
    v13 = __asan_stack_malloc_4(704LL);
    if ( v13 )
      v7 = v13;
  }
  v8 = (char *)(v7 + 704);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 48 520 9 stream:80";
  *(_QWORD *)(v7 + 16) = boost::property_tree::xml_parser::read_xml<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61937;
  v9[536862737] = -218103808;
  v9[536862738] = -202116109;
  v9[536862739] = -202116109;
  v9[536862740] = -202116109;
  v9[536862741] = -202116109;
  if ( (flags & 0xFFFFFFF8) != 0 )
  {
    __asan_handle_no_return(filename);
    __assert_fail(
      "validate_flags(flags)",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/xml_parser.hpp",
      0x4Eu,
      "void boost::property_tree::xml_parser::read_xml(const string&, Ptree&, int, const std::locale&) [with Ptree = boos"
      "t::property_tree::basic_ptree<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >; std::string = "
      "std::__cxx11::basic_string<char>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_14;
  }
  M_p = v5->_M_dataplus._M_p;
  std::ios_base::ios_base((std::ios_base *)(v7 + 304));
  *(_QWORD *)(v7 + 304) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v7 + 520) = 0LL;
  *(_BYTE *)(v7 + 528) = 0;
  *(_BYTE *)(v7 + 529) = 0;
  *(_QWORD *)(v7 + 536) = 0LL;
  *(_QWORD *)(v7 + 544) = 0LL;
  *(_QWORD *)(v7 + 552) = 0LL;
  *(_QWORD *)(v7 + 560) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[1] >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  v10 = (std::locale::_Impl *)`VTT for'std::ifstream[1];
  *(_QWORD *)(v7 + 48) = v10;
  if ( *(_BYTE *)(((unsigned __int64)&v10[-1]._M_facets_size >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  v11 = (unsigned __int64)&v8[v10[-1]._M_facets_size - 656];
  if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[2] >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)v11 = `VTT for'std::ifstream[2];
  *(_QWORD *)(v7 + 56) = 0LL;
  v12 = *(std::locale::_Impl **)(v7 + 48);
  if ( !*(_BYTE *)(((unsigned __int64)&v12[-1]._M_facets_size >> 3) + 0x7FFF8000) )
  {
    std::ios::init(&v8[v12[-1]._M_facets_size - 656], 0LL);
    goto LABEL_19;
  }
LABEL_18:
  __asan_report_load8();
LABEL_19:
  *(_QWORD *)(v7 + 48) = (char *)&`vtable for'std::ifstream + 24;
  *(_QWORD *)(v7 + 304) = (char *)&`vtable for'std::ifstream + 64;
  std::filebuf::basic_filebuf(v7 + 64);
  std::ios::init(v7 + 304, v7 + 64);
  if ( !std::filebuf::open(v7 + 64, M_p, 8LL) )
  {
    v15 = *(std::locale::_Impl **)(v7 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&v15[-1]._M_facets_size >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v16 = (__int64)&v8[v15[-1]._M_facets_size - 656];
      v17 = v16 + 32;
      v18 = *(_BYTE *)(((unsigned __int64)(v16 + 32) >> 3) + 0x7FFF8000);
      if ( !v18 || v18 > 3 )
      {
        std::ios::clear(v16, *(_DWORD *)(v16 + 32) | 4u);
        goto LABEL_29;
      }
    }
    __asan_report_load4(v17);
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  v14 = *(std::locale::_Impl **)(v7 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&v14[-1]._M_facets_size >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  std::ios::clear(&v8[v14[-1]._M_facets_size - 656], 0LL);
LABEL_29:
  if ( (*(_BYTE *)(v7 + 336) & 5) != 0 )
  {
    std::string::basic_string<std::allocator<char>>(&msg, "cannot open file", &__a);
    boost::property_tree::file_parser_error::file_parser_error(&v26, &msg, v5, 0LL);
    *(_QWORD *)v26.baseclass_0 = &`vtable for'boost::property_tree::xml_parser::xml_parser_error + 2;
    __asan_handle_no_return(&v26);
    boost::exception_detail::throw_exception_<boost::property_tree::xml_parser::xml_parser_error>(
      (const boost::property_tree::xml_parser::xml_parser_error *)&v26,
      "void boost::property_tree::xml_parser::read_xml(const string&, Ptree&, int, const std::locale&) [with Ptree = boos"
      "t::property_tree::basic_ptree<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >; std::string = "
      "std::__cxx11::basic_string<char>]",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/xml_parser.hpp",
      82);
  }
  std::ios::imbue(&v24, v7 + 304, loc);
  std::locale::~locale(&v24);
  boost::property_tree::xml_parser::read_xml_internal<boost::property_tree::basic_ptree<std::string,std::string,std::less<std::string>>>(
    (std::istream *)(v7 + 48),
    pt,
    flags,
    v5);
  *(_QWORD *)(v7 + 48) = (char *)&`vtable for'std::ifstream + 24;
  *(_QWORD *)(v7 + 304) = (char *)&`vtable for'std::ifstream + 64;
  *(_QWORD *)(v7 + 64) = (char *)&`vtable for'std::filebuf + 16;
  std::filebuf::close(v7 + 64);
  while ( 1 )
  {
    std::__basic_file<char>::~__basic_file(v7 + 168);
    *(_QWORD *)(v7 + 64) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)(v7 + 120));
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_33:
      __asan_report_load8();
LABEL_34:
      __asan_report_load8();
      goto LABEL_35;
    }
    v20 = (std::locale::_Impl *)`VTT for'std::ifstream[1];
    *(_QWORD *)(v7 + 48) = v20;
    if ( *(_BYTE *)(((unsigned __int64)&v20[-1]._M_facets_size >> 3) + 0x7FFF8000) )
      goto LABEL_33;
    v21 = (unsigned __int64)&v8[v20[-1]._M_facets_size - 656];
    if ( *(_BYTE *)(((unsigned __int64)&`VTT for'std::ifstream[2] >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      break;
LABEL_35:
    v19 = (void *)__asan_report_store8();
    __cxa_begin_catch(v19);
    __cxa_end_catch();
  }
  *(_QWORD *)v21 = `VTT for'std::ifstream[2];
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 304) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v7 + 304));
  if ( v27 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
