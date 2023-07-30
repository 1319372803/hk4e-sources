// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_security_library_config_mgr.cpp

// Line 21: range 000000000CF200D8-000000000CF2079A
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_security_library_config<(mysqlpp::sql_dummy_type)0>(
        data::t_security_library_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // r14
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // rax
  unsigned int v9; // edx
  const mysqlpp::String *v10; // rax
  unsigned int v11; // ecx
  std::string rowa; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "7 32 16 27 ignore_schema_mismatches:21 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_security_library_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v5, rowa);
  std::string::operator=(rowa._M_string_length, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v6, rowa);
  std::string::operator=(rowa._M_string_length + 32, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v7, rowa);
  std::string::operator=(rowa._M_string_length + 64, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v9 = mysqlpp::String::conv<unsigned int>(v8, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 96) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 96) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 96);
  }
  *(_DWORD *)(rowa._M_string_length + 96) = v9;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v11 = mysqlpp::String::conv<unsigned int>(v10, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 100) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 100) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 100) >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 100);
  }
  *(_DWORD *)(rowa._M_string_length + 100) = v11;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 21: range 000000000CE46F18-000000000CE46FDD
void __cdecl data::t_security_library_config::t_security_library_config(
        data::t_security_library_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  std::string::basic_string(&this->version_str);
  std::string::basic_string(&this->md5_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_security_library_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D3C37A4-000000000D3C3953
void __cdecl data::t_security_library_config::t_security_library_config(
        data::t_security_library_config *const this,
        data::t_security_library_config *a2)
{
  mysqlpp::sql_int_unsigned is_forbid_login; // ecx
  mysqlpp::sql_int_unsigned enabled; // ecx
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->version_str, &a2->version_str);
  std::string::basic_string(&this->md5_list, &a2->md5_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_forbid_login >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_forbid_login);
  }
  is_forbid_login = a2->is_forbid_login;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_forbid_login >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_forbid_login);
  }
  this->is_forbid_login = is_forbid_login;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enabled >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enabled >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enabled);
  }
  enabled = a2->enabled;
  if ( *(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enabled);
  }
  this->enabled = enabled;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0FE854-000000000D0FE88E
void __cdecl data::t_security_library_config::~t_security_library_config(data::t_security_library_config *const this)
{
  std::string::~string(&this->md5_list);
  std::string::~string(&this->version_str);
  std::string::~string(this);
};

// Line 30: range 000000000CDBEC88-000000000CDC05CA
int32_t __cdecl data::DbSecurityLibraryConfigMgr::loadDbSecurityLibraryConfig(
        data::DbSecurityLibraryConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  mysqlpp::sql_int_unsigned *p_enabled; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  _BOOL4 v14; // edx
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  _BOOL4 v18; // r15d
  int v19; // esi
  unsigned __int64 v20; // rax
  bool v21; // r15
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  _BOOL4 v26; // r15d
  std::string *M_current; // r15
  std::vector<std::string>::iterator v28; // rax
  std::unordered_set<std::string>::size_type v29; // r15
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool v34; // cl
  unsigned __int64 v35; // rax
  data::DbSecurityLibraryConfig *v36; // rdx
  std::pair<unsigned int,std::string > *v37; // rcx
  data::DbSecurityLibraryConfig *v38; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,false,true>,bool> v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // r15d
  std::unordered_set<unsigned int> *p_enabled_platform_type_set; // rcx
  int v44; // edi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // edx
  int v49; // r15d
  common::milog::MiLogStream *v50; // r15
  std::vector<data::t_security_library_config>::size_type v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  unsigned __int64 v54; // rax
  std::vector<data::t_security_library_config> *__for_range; // [rsp+28h] [rbp-748h]
  const data::t_security_library_config *row; // [rsp+30h] [rbp-740h]
  char v59[1840]; // [rsp+40h] [rbp-730h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1792LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 48 1 9 <unknown> 64 4 16 platform_type:58 80 4 9 <unknown> 96 8 14 __for_begin:50 128 8 12 __"
                        "for_end:50 160 8 9 <unknown> 192 24 10 row_vec:43 256 24 10 md5_vec:66 320 32 9 <unknown> 384 32"
                        " 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 "
                        "9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 40 24 platform_version_pair:79 976 104 9 c"
                        "onfig:57 1120 544 8 query:37";
  *(_QWORD *)(v3 + 16) = data::DbSecurityLibraryConfigMgr::loadDbSecurityLibraryConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959360;
  v5[536862750] = 62194;
  v5[536862753] = -234881024;
  v5[536862754] = -218959118;
  v5[536862772] = -202116109;
  v5[536862773] = -202116109;
  v5[536862774] = -202116109;
  v5[536862775] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_security_library_config_mgr.cpp",
      "loadDbSecurityLibraryConfig",
      33);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 320),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1120, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1120), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(
           v3 + 1120,
           "platform_type_str, version_str, md5_list, is_forbid_login, enabled");
    std::operator<<<std::char_traits<char>>(v7, " from t_security_library_config");
    std::vector<data::t_security_library_config>::vector((std::vector<data::t_security_library_config> *const)(v3 + 192));
    mysqlpp::Query::storein<std::vector<data::t_security_library_config>>(
      (mysqlpp::Query *const)(v3 + 1120),
      (std::vector<data::t_security_library_config> *)(v3 + 192));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1120)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_security_library_config> *)(v3 + 192);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_security_library_config>::iterator *)(v3 + 96) = std::vector<data::t_security_library_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_security_library_config>::iterator *)(v3 + 128) = std::vector<data::t_security_library_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_security_library_config *,std::vector<data::t_security_library_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_security_library_config*,std::vector<data::t_security_library_config> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<data::t_security_library_config*,std::vector<data::t_security_library_config> > *)(v3 + 128)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_security_library_config *,std::vector<data::t_security_library_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_security_library_config*,std::vector<data::t_security_library_config> > *const)(v3 + 96));
      p_enabled = &row->enabled;
      if ( *(_BYTE *)(((unsigned __int64)p_enabled >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_enabled & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_enabled >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_enabled);
      }
      if ( row->enabled )
      {
        v15 = ((v3 + 976) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)(v15 + 8) = 0;
        *(_BYTE *)(v15 + 12) = 0;
        data::DbSecurityLibraryConfig::DbSecurityLibraryConfig((data::DbSecurityLibraryConfig *const)(v3 + 976));
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64);
        *(_DWORD *)(v3 + 64) = 0;
        if ( !proto::PlatformType_Parse(&row->platform_type_str, (proto::PlatformType *)(v3 + 64)) )
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_security_library_config_mgr.cpp",
            "loadDbSecurityLibraryConfig",
            61);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v16,
                  (const char (*)[45])"parse platform_type fail, platform_type_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &row->platform_type_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v19 = *(_DWORD *)(v3 + 64);
          if ( *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 976);
          *(_DWORD *)(v3 + 976) = v19;
          std::string::operator=(v3 + 984, &row->version_str);
          v20 = ((v3 + 256) >> 3) + 2147450880;
          *(_WORD *)v20 = 0;
          *(_BYTE *)(v20 + 2) = 0;
          std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 256));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 512),
            ",",
            (const std::allocator<char> *)(v3 + 48));
          v21 = common::tools::StringUtils::split(
                  &row->md5_list,
                  (const std::string *)(v3 + 512),
                  (std::vector<std::string> *)(v3 + 256),
                  0) != 0;
          std::string::~string((void *)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 48);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v21 )
          {
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_security_library_config_mgr.cpp",
              "loadDbSecurityLibraryConfig",
              69);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])"version:");
            v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v23,
                    (const std::string *)(v3 + 984));
            v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    v24,
                    (const char (*)[34])" split string fail! row.md5_list:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &row->md5_list);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v26 = 0;
          }
          else
          {
            M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v3 + 256))._M_current;
            v28._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 256))._M_current;
            std::unordered_set<std::string>::insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
              (std::unordered_set<std::string> *const)(v3 + 1016),
              v28,
              (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
            v29 = std::unordered_set<std::string>::size((const std::unordered_set<std::string> *const)(v3 + 1016));
            if ( v29 == std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 256)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&row->is_forbid_login >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&row->is_forbid_login >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&row->is_forbid_login);
              }
              v34 = row->is_forbid_login != 0;
              if ( *(char *)(((v3 + 1072) >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(v3 + 1072);
              *(_BYTE *)(v3 + 1072) = v34;
              v35 = ((v3 + 896) >> 3) + 2147450880;
              *(_DWORD *)v35 = 0;
              *(_BYTE *)(v35 + 4) = 0;
              if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 935) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 89) & 7) >= *(_BYTE *)(((v3 + 935) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 896, 40LL);
              }
              std::make_pair<unsigned int &,std::string &>(
                (std::pair<unsigned int,std::string > *)(v3 + 896),
                (unsigned int *)(v3 + 976),
                (std::string *)(v3 + 984));
              v36 = std::move<data::DbSecurityLibraryConfig &>((data::DbSecurityLibraryConfig *)(v3 + 976));
              v39 = std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>>::emplace<std::pair<unsigned int,std::string>&,data::DbSecurityLibraryConfig>(
                      &this->db_security_library_config_map_,
                      (std::pair<unsigned int,std::string > *)(v3 + 896),
                      v36,
                      v37,
                      v38);
              if ( !v39.second )
              {
                *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 704, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 704),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_security_library_config_mgr.cpp",
                  "loadDbSecurityLibraryConfig",
                  82);
                v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 704),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v41 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        v40,
                        (const char (*)[60])"duplicate platform_type and version! platform_version_pair:");
                common::milog::MiLogStream::operator<<<unsigned int,std::string>(
                  v41,
                  (const std::pair<unsigned int,std::string > *)(v3 + 896));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v42 = 0;
              }
              else
              {
                p_enabled_platform_type_set = &this->enabled_platform_type_set_;
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 64);
                v44 = *(_DWORD *)(v3 + 64);
                if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                {
                  v44 = v3 + 80;
                  __asan_report_store4(v3 + 80);
                }
                *(_DWORD *)(v3 + 80) = v44;
                std::unordered_set<unsigned int>::insert(
                  p_enabled_platform_type_set,
                  (std::unordered_set<unsigned int>::value_type *)(v3 + 80));
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                v42 = 1;
              }
              std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v3 + 896));
              v26 = v42 == 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 640, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 640),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_security_library_config_mgr.cpp",
                "loadDbSecurityLibraryConfig",
                75);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 640),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])"version:");
              v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v31,
                      (const std::string *)(v3 + 984));
              v33 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      v32,
                      (const char (*)[35])" contains duplicate md5! md5_list:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, &row->md5_list);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v26 = 0;
            }
          }
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 256));
          v18 = v26;
        }
        data::DbSecurityLibraryConfig::~DbSecurityLibraryConfig((data::DbSecurityLibraryConfig *const)(v3 + 976));
        v14 = v18;
      }
      else
      {
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_security_library_config_mgr.cpp",
          "loadDbSecurityLibraryConfig",
          54);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v10,
                (const char (*)[38])"enabled must be 1, platform_type_str:");
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &row->platform_type_str);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" version_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &row->version_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      v45 = ((v3 + 976) >> 3) + 2147450880;
      *(_DWORD *)v45 = -117901064;
      *(_DWORD *)(v45 + 4) = -117901064;
      *(_DWORD *)(v45 + 8) = -117901064;
      *(_BYTE *)(v45 + 12) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v46 = ((v3 + 256) >> 3) + 2147450880;
      *(_WORD *)v46 = -1800;
      *(_BYTE *)(v46 + 2) = -8;
      v47 = ((v3 + 896) >> 3) + 2147450880;
      *(_DWORD *)v47 = -117901064;
      *(_BYTE *)(v47 + 4) = -8;
      if ( !v14 )
      {
        v48 = 0;
        goto LABEL_64;
      }
      __gnu_cxx::__normal_iterator<data::t_security_library_config *,std::vector<data::t_security_library_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_security_library_config*,std::vector<data::t_security_library_config> > *const)(v3 + 96));
    }
    v48 = 1;
LABEL_64:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v48 == 1 )
    {
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_security_library_config_mgr.cpp",
        "loadDbSecurityLibraryConfig",
        88);
      v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 768),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      v51 = std::vector<data::t_security_library_config>::size((const std::vector<data::t_security_library_config> *const)(v3 + 192));
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 160) = v51;
      v52 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v50,
              (const unsigned __int64 *)(v3 + 160));
      v53 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              v52,
              (const char (*)[68])" configs from t_security_library_config, enabled_platform_type_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v53, &this->enabled_platform_type_set_);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      v49 = 1;
    }
    else
    {
      v49 = 0;
    }
    std::vector<data::t_security_library_config>::~vector((std::vector<data::t_security_library_config> *const)(v3 + 192));
    v54 = ((v3 + 192) >> 3) + 2147450880;
    *(_WORD *)v54 = -1800;
    *(_BYTE *)(v54 + 2) = -8;
    if ( v49 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1120));
  }
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862733) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450924 - (((_DWORD)v5 + 2147450932) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1792LL, v59);
  }
  return v2;
};

// Line 100: range 000000000CDC05CC-000000000CDC05DA
int32_t __cdecl data::DbSecurityLibraryConfigMgr::rewriteDbSecurityLibraryConfig(
        data::DbSecurityLibraryConfigMgr *const this)
{
  return 0;
};

// Line 105: range 000000000CDC05DC-000000000CDC05EE
int32_t __cdecl data::DbSecurityLibraryConfigMgr::checkDbSecurityLibraryConfig(
        data::DbSecurityLibraryConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 111: range 000000000CDC05F0-000000000CDC07C6
const data::DbSecurityLibraryConfig *__fastcall data::DbSecurityLibraryConfigMgr::findDbSecurityLibraryConfig(
        const data::DbSecurityLibraryConfigMgr *const this,
        uint32_t platform_type,
        const std::string *version_str)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::tools::transcribe_cv_t *v6; // r14
  const data::DbSecurityLibraryConfig *result; // rax
  char v9[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 17 platform_type:110 48 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbSecurityLibraryConfigMgr::findDbSecurityLibraryConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = platform_type;
  if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 48, 40LL);
  }
  std::make_pair<unsigned int &,std::string const&>(
    (std::pair<unsigned int,std::string > *)(v3 + 48),
    (unsigned int *)(v3 + 32),
    version_str);
  v6 = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>> const>(
         &this->db_security_library_config_map_,
         (const std::unordered_map<std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig> > >::key_type *)(v3 + 48));
  std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v3 + 48));
  result = v6;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 117: range 000000000CDC07C8-000000000CDC0897
bool __fastcall data::DbSecurityLibraryConfigMgr::isPlatformTypeEnableCheck(
        const data::DbSecurityLibraryConfigMgr *const this,
        uint32_t platform_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 platform_type:116";
  *(_QWORD *)(v2 + 16) = data::DbSecurityLibraryConfigMgr::isPlatformTypeEnableCheck;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = platform_type;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->enabled_platform_type_set_,
             (const unsigned int *)(v2 + 32));
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
