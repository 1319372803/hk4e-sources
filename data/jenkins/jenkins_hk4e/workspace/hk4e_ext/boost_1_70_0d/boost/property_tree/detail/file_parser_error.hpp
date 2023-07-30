// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/file_parser_error.hpp

// Line 20: range 0000000000685D76-0000000000685E96
void __cdecl boost::property_tree::file_parser_error::file_parser_error(
        boost::property_tree::file_parser_error *const this,
        const boost::property_tree::file_parser_error *a2)
{
  __int64 *v2; // rdx
  unsigned __int64 m_line; // rdx

  boost::property_tree::ptree_error::ptree_error(this, a2);
  v2 = &`vtable for'boost::property_tree::file_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  std::string::basic_string(&this->m_message, &a2->m_message);
  std::string::basic_string(&this->m_filename, &a2->m_filename);
  if ( *(_BYTE *)(((unsigned __int64)&a2->m_line >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->m_line);
  m_line = a2->m_line;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_line >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_line = m_line;
};

// Line 29: range 00000000004B4BD8-00000000004B4D0F
void __cdecl boost::property_tree::file_parser_error::file_parser_error(
        boost::property_tree::file_parser_error *const this,
        const std::string *msg,
        const std::string *file,
        unsigned __int64 l)
{
  __int64 *v4; // rdx
  std::string w; // [rsp+20h] [rbp-30h] BYREF

  boost::property_tree::file_parser_error::format_what(&w, msg, file, l);
  boost::property_tree::ptree_error::ptree_error(this, &w);
  std::string::~string(&w);
  v4 = &`vtable for'boost::property_tree::file_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v4;
  std::string::basic_string(&this->m_message, msg);
  std::string::basic_string(&this->m_filename, file);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_line >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_line = l;
};

// Line 37: range 00000000004B4D10-00000000004B4D7D
void __cdecl boost::property_tree::file_parser_error::~file_parser_error(
        boost::property_tree::file_parser_error *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::property_tree::file_parser_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::string::~string(&this->m_filename);
  std::string::~string(&this->m_message);
  boost::property_tree::ptree_error::~ptree_error(this);
};

// Line 37: range 00000000004B4D7E-00000000004B4DA8
void __cdecl boost::property_tree::file_parser_error::~file_parser_error(
        boost::property_tree::file_parser_error *const this)
{
  boost::property_tree::file_parser_error::~file_parser_error(this);
  operator delete(this, 0x58uLL);
};

// Line 72: range 00000000004B4DA9-00000000004B5069
std::string *__cdecl boost::property_tree::file_parser_error::format_what(
        std::string *retstr,
        const std::string *msg,
        const std::string *file,
        unsigned __int64 l)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v14[544]; // [rsp+20h] [rbp-220h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 392 9 stream:76";
  *(_QWORD *)(v4 + 16) = boost::property_tree::file_parser_error::format_what;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v6[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 48);
  if ( std::string::empty(file) )
    v7 = "<unspecified file>";
  else
    v7 = std::string::c_str(file);
  std::operator<<<std::char_traits<char>>(v4 + 64, v7);
  if ( l )
  {
    v8 = std::operator<<<std::char_traits<char>>(v4 + 64, 40LL);
    v9 = std::ostream::operator<<(v8, l);
    std::operator<<<std::char_traits<char>>(v9, 41LL);
  }
  v10 = std::operator<<<std::char_traits<char>>(v4 + 64, ": ");
  std::operator<<<char>(v10, msg);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v4 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 48);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
