// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_mail_block_tag_config_mgr.cpp

// Line 23: range 000000000CF1796D-000000000CF17C5C
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_mail_block_tag_config<(mysqlpp::sql_dummy_type)0>(
        data::t_mail_block_tag_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  std::string rowa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:23 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_mail_block_tag_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  mysqlpp::NoExceptions::NoExceptions(
    (mysqlpp::NoExceptions *const)(p_anon_0 + 32),
    (const mysqlpp::OptionalExceptions *)rowa._M_dataplus._M_p);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((rowa._M_string_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length);
  }
  *(_DWORD *)rowa._M_string_length = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v7, rowa);
  std::string::operator=(rowa._M_string_length + 8, p_anon_0 + 128);
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 64));
  *(_DWORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 23: range 000000000CE44DC8-000000000CE44E55
void __cdecl data::t_mail_block_tag_config::t_mail_block_tag_config(
        data::t_mail_block_tag_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_mail_block_tag_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 23: range 000000000D3BEB20-000000000D3BEC12
void __cdecl data::t_mail_block_tag_config::t_mail_block_tag_config(
        data::t_mail_block_tag_config *const this,
        data::t_mail_block_tag_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->id = id;
  std::string::basic_string(&this->tag, &a2->tag);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 23: range 000000000D0F4CD4-000000000D0F4CF2
void __cdecl data::t_mail_block_tag_config::~t_mail_block_tag_config(data::t_mail_block_tag_config *const this)
{
  std::string::~string(&this->tag);
};

// Line 28: range 000000000CDACD04-000000000CDAD6C2
int32_t __cdecl data::DbMailBlockTagConfigMgr::loadDbMailBlockedTagConfig(
        data::DbMailBlockTagConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  std::pair<std::_Rb_tree_const_iterator<std::string >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // edx
  _BOOL4 v11; // r15d
  unsigned __int64 v12; // rax
  int32_t result; // eax
  std::vector<data::t_mail_block_tag_config> *__for_range; // [rsp+28h] [rbp-448h]
  const data::t_mail_block_tag_config *row; // [rsp+30h] [rbp-440h]
  char v16[1072]; // [rsp+40h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 14 __for_begin:46 64 8 12 __for_end:46 96 24 10 row_vec:39 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 544 8 query:34";
  *(_QWORD *)(v3 + 16) = data::DbMailBlockTagConfigMgr::loadDbMailBlockedTagConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862748] = -202116109;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_mail_block_tag_config_mgr.cpp",
      "loadDbMailBlockedTagConfig",
      31);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 160),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 352, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 352), v6, "select ");
    std::operator<<<std::char_traits<char>>(v3 + 352, "id, tag from t_mail_block_tag_config");
    std::vector<data::t_mail_block_tag_config>::vector((std::vector<data::t_mail_block_tag_config> *const)(v3 + 96));
    mysqlpp::Query::storein<std::vector<data::t_mail_block_tag_config>>(
      (mysqlpp::Query *const)(v3 + 352),
      (std::vector<data::t_mail_block_tag_config> *)(v3 + 96));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 352)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_mail_block_tag_config> *)(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mail_block_tag_config>::iterator *)(v3 + 32) = std::vector<data::t_mail_block_tag_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mail_block_tag_config>::iterator *)(v3 + 64) = std::vector<data::t_mail_block_tag_config>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::t_mail_block_tag_config *,std::vector<data::t_mail_block_tag_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_mail_block_tag_config*,std::vector<data::t_mail_block_tag_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_mail_block_tag_config*,std::vector<data::t_mail_block_tag_config> > *)(v3 + 64)) )
      {
        v10 = 1;
        goto LABEL_25;
      }
      row = __gnu_cxx::__normal_iterator<data::t_mail_block_tag_config *,std::vector<data::t_mail_block_tag_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_mail_block_tag_config*,std::vector<data::t_mail_block_tag_config> > *const)(v3 + 32));
      if ( !(unsigned __int8)std::string::empty(&row->tag) )
      {
        v8 = std::set<std::string>::emplace<std::string const&>(
               &this->mail_blocked_tag_config_set,
               &row->tag,
               &row->tag);
        if ( !v8.second )
          break;
      }
      __gnu_cxx::__normal_iterator<data::t_mail_block_tag_config *,std::vector<data::t_mail_block_tag_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_mail_block_tag_config*,std::vector<data::t_mail_block_tag_config> > *const)(v3 + 32));
    }
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_mail_block_tag_config_mgr.cpp",
      "loadDbMailBlockedTagConfig",
      53);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v9, "find repeat tag in t_mail_block_tag_config");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v10 = 0;
LABEL_25:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v11 = v10 == 1;
    std::vector<data::t_mail_block_tag_config>::~vector((std::vector<data::t_mail_block_tag_config> *const)(v3 + 96));
    v12 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v12 = -1800;
    *(_BYTE *)(v12 + 2) = -8;
    if ( v11 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 352));
  }
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 67: range 000000000CDAD6C4-000000000CDAD6D1
const std::set<std::string> *__cdecl data::DbMailBlockTagConfigMgr::getDbMailPBlockedTagConfig[abi:cxx11](
        const data::DbMailBlockTagConfigMgr *const this)
{
  return &this->mail_blocked_tag_config_set;
};
