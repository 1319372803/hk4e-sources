// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_mtp_blacklist_config_mgr.cpp

// Line 19: range 000000000CF18304-000000000CF184B6
void __cdecl data::populate_t_mtp_blacklist_config<(mysqlpp::sql_dummy_type)0>(
        data::t_mtp_blacklist_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 27 ignore_schema_mismatches:19";
  *(_QWORD *)(v2 + 16) = data::populate_t_mtp_blacklist_config<(mysqlpp::sql_dummy_type)0>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  mysqlpp::NoExceptions::NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32), row);
  v5 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v6 = mysqlpp::String::conv<unsigned int>(v5, 0);
  if ( *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(s);
  }
  s->ID = v6;
  v7 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)row);
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((unsigned __int64)&s->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)s + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&s->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&s->type);
  }
  s->type = v8;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 19: range 000000000CE44EAA-000000000CE44F00
void __cdecl data::t_mtp_blacklist_config::t_mtp_blacklist_config(
        data::t_mtp_blacklist_config *const this,
        const mysqlpp::Row *row)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_mtp_blacklist_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 24: range 000000000CDAD6D2-000000000CDAE1CF
int32_t __cdecl data::DbMTPBlacklistConfigMgr::loadDbMTPBlacklistConfig(
        data::DbMTPBlacklistConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  data::MTPBlacklistConfig *v9; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rcx
  int v12; // edx
  int v13; // edx
  _BOOL4 v14; // r15d
  unsigned __int64 v15; // rax
  std::vector<data::t_mtp_blacklist_config> *__for_range; // [rsp+28h] [rbp-468h]
  __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config*,std::vector<data::t_mtp_blacklist_config> >::reference row; // [rsp+30h] [rbp-460h]
  char v19[1104]; // [rsp+40h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:43 64 8 12 __for_end:43 96 8 9 config:45 128 24 10 row_vec:36 192 32 9 <un"
                        "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 544 8 query:30";
  *(_QWORD *)(v3 + 16) = data::DbMTPBlacklistConfigMgr::loadDbMTPBlacklistConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862749] = -202116109;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "loadDbMTPBlacklistConfig",
      27);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 192),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 384, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 384), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 384, "id, type");
    std::operator<<<std::char_traits<char>>(v7, " from t_mtp_blacklist_config");
    std::vector<data::t_mtp_blacklist_config>::vector((std::vector<data::t_mtp_blacklist_config> *const)(v3 + 128));
    mysqlpp::Query::storein<std::vector<data::t_mtp_blacklist_config>>(
      (mysqlpp::Query *const)(v3 + 384),
      (std::vector<data::t_mtp_blacklist_config> *)(v3 + 128));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 384)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_mtp_blacklist_config> *)(v3 + 128);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mtp_blacklist_config>::iterator *)(v3 + 32) = std::vector<data::t_mtp_blacklist_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mtp_blacklist_config>::iterator *)(v3 + 64) = std::vector<data::t_mtp_blacklist_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_mtp_blacklist_config *,std::vector<data::t_mtp_blacklist_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config*,std::vector<data::t_mtp_blacklist_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config*,std::vector<data::t_mtp_blacklist_config> > *)(v3 + 64)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config *,std::vector<data::t_mtp_blacklist_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config*,std::vector<data::t_mtp_blacklist_config> > *const)(v3 + 32));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96);
      *(_DWORD *)(v3 + 96) = 0;
      if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 100);
      }
      *(_DWORD *)(v3 + 100) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      *(_DWORD *)(v3 + 96) = row->ID;
      if ( *(_BYTE *)(((unsigned __int64)&row->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->type);
      }
      *(_DWORD *)(v3 + 100) = row->type;
      v10 = std::unordered_map<unsigned int,data::MTPBlacklistConfig>::emplace<unsigned int &,data::MTPBlacklistConfig&>(
              &this->mtp_blacklist_config_map,
              (unsigned int *)(v3 + 96),
              (data::MTPBlacklistConfig *)(v3 + 96),
              (unsigned int *)(v3 + 96),
              v9);
      if ( !v10.second )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
          "loadDbMTPBlacklistConfig",
          51);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 96);
        common::milog::MiLogStream::operator()(v11, aConfigIdU_0, *(unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v12 != 1 )
      {
        v13 = 0;
        goto LABEL_37;
      }
      __gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config *,std::vector<data::t_mtp_blacklist_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_mtp_blacklist_config*,std::vector<data::t_mtp_blacklist_config> > *const)(v3 + 32));
    }
    v13 = 1;
LABEL_37:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v14 = v13 == 1;
    std::vector<data::t_mtp_blacklist_config>::~vector((std::vector<data::t_mtp_blacklist_config> *const)(v3 + 128));
    v15 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    if ( v14 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 384));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v19);
  }
  return v2;
};

// Line 65: range 000000000CDAE1D0-000000000CDAE469
int32_t __cdecl data::DbMTPBlacklistConfigMgr::rewriteDbMTPBlcklistConfig(data::DbMTPBlacklistConfigMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  data::MTPBlacklistConfig *v4; // r8
  uint32_t *p_type; // rax
  uint32_t type; // ecx
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false>::reference __in; // [rsp+18h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,data::MTPBlacklistConfig> >::type *config; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 type:68 64 8 14 __for_begin:66 96 8 12 __for_end:66";
  *(_QWORD *)(v1 + 16) = data::DbMTPBlacklistConfigMgr::rewriteDbMTPBlcklistConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -202116352;
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::MTPBlacklistConfig>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,data::MTPBlacklistConfig>::begin(&this->mtp_blacklist_config_map);
  if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::MTPBlacklistConfig>::iterator *)(v1 + 96) = std::unordered_map<unsigned int,data::MTPBlacklistConfig>::end(&this->mtp_blacklist_config_map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MTPBlacklistConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MTPBlacklistConfig>,false> *)(v1 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MTPBlacklistConfig>,false> *)(v1 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false> *const)(v1 + 64));
    std::get<0ul,unsigned int const,data::MTPBlacklistConfig>(__in);
    config = std::get<1ul,unsigned int const,data::MTPBlacklistConfig>(__in);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    p_type = &config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    type = config->type;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48);
    *(_DWORD *)(v1 + 48) = type;
    std::unordered_map<unsigned int,data::MTPBlacklistConfig>::emplace<unsigned int &,data::MTPBlacklistConfig&>(
      &this->mtp_type_blacklist_config_map,
      (unsigned int *)(v1 + 48),
      config,
      (unsigned int *)&this->mtp_type_blacklist_config_map,
      v4);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MTPBlacklistConfig>,false,false> *const)(v1 + 64));
  }
  result = 0;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 76: range 000000000CDAE46A-000000000CDAE5FC
bool __fastcall data::DbMTPBlacklistConfigMgr::isTypeInBlacklist(
        const data::DbMTPBlacklistConfigMgr *const this,
        uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::MTPBlacklistConfig> *p_mtp_type_blacklist_config_map; // rdx
  std::unordered_map<unsigned int,data::MTPBlacklistConfig> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 type:75 64 8 7 iter:77 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbMTPBlacklistConfigMgr::isTypeInBlacklist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  p_mtp_type_blacklist_config_map = &this->mtp_type_blacklist_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::MTPBlacklistConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MTPBlacklistConfig>::find(
                                                                                              p_mtp_type_blacklist_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::MTPBlacklistConfig>::key_type *)(v2 + 48));
  v6 = &this->mtp_type_blacklist_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::MTPBlacklistConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MTPBlacklistConfig>::end(v6);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::MTPBlacklistConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MTPBlacklistConfig>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MTPBlacklistConfig>,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 000000000CF18CF4-000000000CF19049
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_mtp_whitelist_config<(mysqlpp::sql_dummy_type)0>(
        data::t_mtp_whitelist_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // rax
  unsigned int v9; // edx
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
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:82 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_mtp_whitelist_config<(mysqlpp::sql_dummy_type)0>;
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
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v9 = mysqlpp::String::conv<unsigned int>(v8, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 40);
  }
  *(_DWORD *)(rowa._M_string_length + 40) = v9;
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

// Line 82: range 000000000CE44F8A-000000000CE45017
void __cdecl data::t_mtp_whitelist_config::t_mtp_whitelist_config(
        data::t_mtp_whitelist_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->reason);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_mtp_whitelist_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 82: range 000000000D3BFA02-000000000D3BFB69
void __cdecl data::t_mtp_whitelist_config::t_mtp_whitelist_config(
        data::t_mtp_whitelist_config *const this,
        data::t_mtp_whitelist_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned match_type; // ecx
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
  std::string::basic_string(&this->reason, &a2->reason);
  if ( *(_BYTE *)(((unsigned __int64)&a2->match_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->match_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->match_type);
  }
  match_type = a2->match_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type);
  }
  this->match_type = match_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 82: range 000000000D0F5C86-000000000D0F5CA4
void __cdecl data::t_mtp_whitelist_config::~t_mtp_whitelist_config(data::t_mtp_whitelist_config *const this)
{
  std::string::~string(&this->reason);
};

// Line 89: range 000000000CDAE5FE-000000000CDAF512
int32_t __cdecl data::DbMTPWhitelistConfigMgr::loadDbMTPWhitelistConfig(
        data::DbMTPWhitelistConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // edx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  data::MtpWhitelistMatcher *v18; // r15
  std::remove_reference<const std::string&>::type *v19; // rsi
  int v20; // r15d
  common::milog::MiLogStream *v21; // r15
  std::vector<data::t_mtp_whitelist_config>::size_type v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  std::vector<data::t_mtp_whitelist_config> *__for_range; // [rsp+28h] [rbp-558h]
  const data::t_mtp_whitelist_config *row; // [rsp+30h] [rbp-550h]
  std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> *matcher_map; // [rsp+38h] [rbp-548h]
  std::unique_ptr<data::MtpWhitelistMatcher> *matcher_utr; // [rsp+40h] [rbp-540h]
  char v30[1328]; // [rsp+50h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 8 15 __for_begin:108 64 8 13 __for_end:108 96 8 9 <unknown> 128 8 9 <unknown> 160 24 11 ro"
                        "w_vec:101 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 544 8 query:95";
  *(_QWORD *)(v3 + 16) = data::DbMTPWhitelistConfigMgr::loadDbMTPWhitelistConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
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
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "loadDbMTPWhitelistConfig",
      92);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 224),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 608, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 608), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 608, "id, reason, match_type");
    std::operator<<<std::char_traits<char>>(v7, " from t_mtp_whitelist_config");
    std::vector<data::t_mtp_whitelist_config>::vector((std::vector<data::t_mtp_whitelist_config> *const)(v3 + 160));
    mysqlpp::Query::storein<std::vector<data::t_mtp_whitelist_config>>(
      (mysqlpp::Query *const)(v3 + 608),
      (std::vector<data::t_mtp_whitelist_config> *)(v3 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 608)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_mtp_whitelist_config> *)(v3 + 160);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mtp_whitelist_config>::iterator *)(v3 + 32) = std::vector<data::t_mtp_whitelist_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_mtp_whitelist_config>::iterator *)(v3 + 64) = std::vector<data::t_mtp_whitelist_config>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::t_mtp_whitelist_config *,std::vector<data::t_mtp_whitelist_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config*,std::vector<data::t_mtp_whitelist_config> > *)(v3 + 32),
              (const __gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config*,std::vector<data::t_mtp_whitelist_config> > *)(v3 + 64)) )
      {
        v12 = 1;
        goto LABEL_32;
      }
      row = __gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config *,std::vector<data::t_mtp_whitelist_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config*,std::vector<data::t_mtp_whitelist_config> > *const)(v3 + 32));
      matcher_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::operator[](
                      &this->id_matcher_map_,
                      &row->id);
      matcher_utr = std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::operator[](
                      matcher_map,
                      &row->match_type);
      if ( std::operator==<data::MtpWhitelistMatcher,std::default_delete<data::MtpWhitelistMatcher>>(0LL, matcher_utr) )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&row->match_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->match_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->match_type);
        }
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        data::MtpWhitelistMatcher::createMatcher(v3 + 96);
        std::unique_ptr<data::MtpWhitelistMatcher>::operator=(
          matcher_utr,
          (std::unique_ptr<data::MtpWhitelistMatcher> *)(v3 + 96));
        std::unique_ptr<data::MtpWhitelistMatcher>::~unique_ptr((std::unique_ptr<data::MtpWhitelistMatcher> *const)(v3 + 96));
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      }
      if ( std::operator==<data::MtpWhitelistMatcher,std::default_delete<data::MtpWhitelistMatcher>>(0LL, matcher_utr) )
        break;
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
        "loadDbMTPWhitelistConfig",
        121);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[9])"id_type:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &row->id);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" match_type:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &row->match_type);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" reason_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &row->reason);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v18 = std::unique_ptr<data::MtpWhitelistMatcher>::operator->(matcher_utr);
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      v19 = std::move<std::string const&>(&row->reason);
      std::string::basic_string(v3 + 416, v19);
      data::MtpWhitelistMatcher::addInitPatternVec(v18, (std::string *)(v3 + 416));
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config *,std::vector<data::t_mtp_whitelist_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_mtp_whitelist_config*,std::vector<data::t_mtp_whitelist_config> > *const)(v3 + 32));
    }
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "loadDbMTPWhitelistConfig",
      118);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           (common::milog::MiLogStream *const)(v3 + 288),
           (const char (*)[24])"createMatcher fail, id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &row->id);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" match_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &row->match_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v12 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v12 == 1 )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
        "loadDbMTPWhitelistConfig",
        124);
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v22 = std::vector<data::t_mtp_whitelist_config>::size((const std::vector<data::t_mtp_whitelist_config> *const)(v3 + 160));
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 128) = v22;
      v23 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v21,
              (const unsigned __int64 *)(v3 + 128));
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v23,
        (const char (*)[25])" config in mtp whitelist");
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    std::vector<data::t_mtp_whitelist_config>::~vector((std::vector<data::t_mtp_whitelist_config> *const)(v3 + 160));
    v24 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v24 = -1800;
    *(_BYTE *)(v24 + 2) = -8;
    if ( v20 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 608));
  }
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v30);
  }
  return v2;
};

// Line 145: range 000000000CDAF514-000000000CDAFBE1
int32_t __cdecl data::DbMTPWhitelistConfigMgr::rewriteDbMTPWhitelistConfig(data::DbMTPWhitelistConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // eax
  int32_t result; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false,false>::reference __in; // [rsp+18h] [rbp-188h]
  const unsigned int *id; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> > >::type *__for_range_0; // [rsp+30h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false>::reference v19; // [rsp+38h] [rbp-168h]
  const unsigned int *match_type; // [rsp+40h] [rbp-160h]
  const std::unique_ptr<data::MtpWhitelistMatcher> *matcher_utr; // [rsp+48h] [rbp-158h]
  char v22[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:146 64 8 13 __for_end:146 96 8 15 __for_begin:148 128 8 13 __for_end:148 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbMTPWhitelistConfigMgr::rewriteDbMTPWhitelistConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::begin(&this->id_matcher_map_);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::end(&this->id_matcher_map_);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>(__in);
    __for_range_0 = std::get<1ul,unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>(__in);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false> *)(v2 + 128)) )
      {
        v8 = 1;
        goto LABEL_30;
      }
      v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false> *const)(v2 + 96));
      match_type = std::get<0ul,unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>(v19);
      matcher_utr = std::get<1ul,unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>(v19);
      if ( std::operator==<data::MtpWhitelistMatcher,std::default_delete<data::MtpWhitelistMatcher>>(0LL, matcher_utr) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
          "rewriteDbMTPWhitelistConfig",
          152);
        v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[25])"matcher_utr is null, id:");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, id);
        v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" match_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, match_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v8 = 0;
        goto LABEL_30;
      }
      v9 = (unsigned __int64)std::unique_ptr<data::MtpWhitelistMatcher>::operator->(matcher_utr);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9);
      v10 = *(_QWORD *)v9 + 16LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(*(_QWORD *)v9 + 16LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9) )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false> *const)(v2 + 96));
    }
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "rewriteDbMTPWhitelistConfig",
      157);
    v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[23])"init matcher fail, id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
    v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" match_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, match_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v1 = -1;
    v8 = 0;
LABEL_30:
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v8 != 1 )
    {
      v14 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false,false> *const)(v2 + 32));
  }
  v14 = 1;
LABEL_34:
  if ( v14 == 1 )
    v1 = 0;
  result = v1;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 166: range 000000000CDAFBE2-000000000CDB020C
int32_t __cdecl data::DbMTPWhitelistConfigMgr::extractIdTypeInReportStr(
        const data::DbMTPWhitelistConfigMgr *const this,
        const std::string *report_str,
        uint32_t *id_type,
        std::string *reason_str)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  unsigned __int64 v10; // rax
  char *v11; // rdx
  char *v12; // rdi
  uint32_t ch_0; // [rsp+24h] [rbp-15Ch]
  size_t i; // [rsp+28h] [rbp-158h]
  char v17[336]; // [rsp+30h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = data::DbMTPWhitelistConfigMgr::extractIdTypeInReportStr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  std::string::substr(v4 + 32, report_str, 0LL, 3LL);
  v7 = std::operator!=<char>((const std::string *)(v4 + 32), "id=");
  std::string::~string((void *)(v4 + 32));
  *(_DWORD *)(((v4 + 32) >> 3) + 0x7FFF8000) = -117901064;
  if ( v7 )
  {
    *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "extractIdTypeInReportStr",
      169);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)(v4 + 96),
           (const char (*)[26])"wrong format, report_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, report_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)id_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(id_type);
    }
    *id_type = 0;
    for ( i = 3LL; i < std::string::size(report_str); ++i )
    {
      v10 = std::string::operator[](report_str, i);
      v11 = (char *)v10;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v10);
      ch_0 = *v11;
      if ( ch_0 <= 0x2F || ch_0 > 0x39 )
      {
        if ( ch_0 == 124 )
        {
          *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
          v12 = (char *)(i + 1);
          if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
          {
            v12 = (char *)(v4 + 160);
            __asan_report_store_n(v4 + 160, 32LL);
          }
          std::string::substr(v4 + 160, report_str, v12, -1LL);
          std::string::operator=(reason_str, v4 + 160);
          std::string::~string((void *)(v4 + 160));
        }
        else
        {
          *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 224, 32LL);
          }
          std::string::substr(v4 + 224, report_str, i, -1LL);
          std::string::operator=(reason_str, v4 + 224);
          std::string::~string((void *)(v4 + 224));
        }
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)id_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id_type);
      }
      *id_type = 10 * *id_type + ch_0 - 48;
    }
    result = 0;
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 195: range 000000000CDB020E-000000000CDB08B9
__int64 __fastcall data::DbMTPWhitelistConfigMgr::isReportValueInWhitelist(
        const data::DbMTPWhitelistConfigMgr *const this,
        uint32_t id_type,
        const std::string *reason_str)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const data::DbMTPWhitelistConfigMgr *v7; // rax
  const data::DbMTPWhitelistConfigMgr *v8; // rax
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // eax
  __int64 result; // rax
  std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false>::reference v26; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> > >::type *match_type; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> > >::type *matcher_utr; // [rsp+38h] [rbp-178h]
  char v29[368]; // [rsp+40h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 11 id_type:194 64 8 20 matcher_map_iter:196 96 8 9 <unknown> 128 8 15 __for_begin:202 160"
                        " 8 13 __for_end:202 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = data::DbMTPWhitelistConfigMgr::isReportValueInWhitelist;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -218959118;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = id_type;
  v7 = this;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::find(&v7->id_matcher_map_, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::key_type *)(v4 + 48));
  v8 = this;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>::end(&v8->id_matcher_map_);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "isReportValueInWhitelist",
      199);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
            (common::milog::MiLogStream *const)(v4 + 192),
            (const char (*)[9])"id_type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v11,
            (const char (*)[31])" match map not found, id_type:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" reason_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, reason_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 0;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>> >,false,false> *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,std::unique_ptr<data::MtpWhitelistMatcher>>::end(__for_range);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false> *)(v4 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false> *)(v4 + 160)) )
      {
        v22 = 1;
        goto LABEL_29;
      }
      v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false> *const)(v4 + 128));
      match_type = std::get<0ul,unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>(v26);
      matcher_utr = (std::tuple_element<1,const std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> > >::type *)std::get<1ul,unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>(v26);
      if ( !std::operator==<data::MtpWhitelistMatcher,std::default_delete<data::MtpWhitelistMatcher>>(0LL, matcher_utr) )
      {
        v15 = (unsigned __int64)std::unique_ptr<data::MtpWhitelistMatcher>::operator->(matcher_utr);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15);
        v16 = *(_QWORD *)v15 + 24LL;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(*(_QWORD *)v15 + 24LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, const std::string *))v16)(v15, reason_str) )
          break;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unique_ptr<data::MtpWhitelistMatcher> >,false,false> *const)(v4 + 128));
    }
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
      "isReportValueInWhitelist",
      210);
    v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v4 + 256),
            (const char (*)[31])"whitelist matched, match_type:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, match_type);
    v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" id_type:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" reason_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, reason_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    v3 = 1;
    v22 = 0;
LABEL_29:
    if ( v22 == 1 )
      v3 = 0;
  }
  result = v3;
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 217: range 000000000CF1A530-000000000CF1A57D
void __cdecl data::SubstringMatcher::SubstringMatcher(data::SubstringMatcher *const this)
{
  int (**v1)(...); // rdx

  data::MtpWhitelistMatcher::MtpWhitelistMatcher(this);
  v1 = (int (**)(...))(&`vtable for'data::SubstringMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
};

// Line 217: range 000000000D00DA98-000000000D00DAC2
void __cdecl data::SubstringMatcher::~SubstringMatcher(data::SubstringMatcher *const this)
{
  data::SubstringMatcher::~SubstringMatcher(this);
  operator delete(this, 0x20uLL);
};

// Line 217: range 000000000D00DA4A-000000000D00DA97
void __cdecl data::SubstringMatcher::~SubstringMatcher(data::SubstringMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::SubstringMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
};

// Line 220: range 000000000CE45108-000000000CE452F2
bool __cdecl data::SubstringMatcher::isStringMatch(
        const data::SubstringMatcher *const this,
        const std::string *reason_str)
{
  bool v2; // r15
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference v6; // rcx
  int v7; // eax
  bool result; // al
  std::vector<std::string> *__for_range; // [rsp+10h] [rbp-A0h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v4;
  }
  v3->_M_current = (const std::string *)1102416563;
  v3[1]._M_current = (const std::string *)"2 32 8 15 __for_begin:222 64 8 13 __for_end:222";
  v3[2]._M_current = (const std::string *)data::SubstringMatcher::isStringMatch;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->init_pattern_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_current = std::vector<std::string>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_current = std::vector<std::string>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(v3 + 4, v3 + 8) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(v3 + 4);
    if ( std::string::find(reason_str, v6, 0LL) != -1 )
    {
      v2 = 1;
      v7 = 0;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(v3 + 4);
  }
  v7 = 1;
LABEL_14:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const std::string *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 233: range 000000000CF1A756-000000000CF1A7A3
void __cdecl data::PrefixMatcher::PrefixMatcher(data::PrefixMatcher *const this)
{
  int (**v1)(...); // rdx

  data::MtpWhitelistMatcher::MtpWhitelistMatcher(this);
  v1 = (int (**)(...))(&`vtable for'data::PrefixMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
};

// Line 233: range 000000000D00DCEE-000000000D00DD3B
void __cdecl data::PrefixMatcher::~PrefixMatcher(data::PrefixMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::PrefixMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
};

// Line 233: range 000000000D00DD3C-000000000D00DD66
void __cdecl data::PrefixMatcher::~PrefixMatcher(data::PrefixMatcher *const this)
{
  data::PrefixMatcher::~PrefixMatcher(this);
  operator delete(this, 0x20uLL);
};

// Line 236: range 000000000CE452F4-000000000CE455ED
bool __cdecl data::PrefixMatcher::isStringMatch(const data::PrefixMatcher *const this, const std::string *reason_str)
{
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v6; // rax
  char *v7; // rdx
  char v8; // r14
  unsigned __int64 v9; // rax
  _BYTE *v10; // rdx
  int v11; // eax
  bool result; // al
  bool v13; // [rsp+Fh] [rbp-C1h]
  size_t i; // [rsp+28h] [rbp-A8h]
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::string *pattern_str; // [rsp+38h] [rbp-98h]
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v3;
  }
  v2->_M_current = (const std::string *)1102416563;
  v2[1]._M_current = (const std::string *)"2 32 8 15 __for_begin:238 64 8 13 __for_end:238";
  v2[2]._M_current = (const std::string *)data::PrefixMatcher::isStringMatch;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->init_pattern_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_current = std::vector<std::string>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_current = std::vector<std::string>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(v2 + 4, v2 + 8) )
  {
    pattern_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(v2 + 4);
    for ( i = 0LL; i < std::string::size(pattern_str) && i < std::string::size(reason_str); ++i )
    {
      v6 = std::string::operator[](pattern_str, i);
      v7 = (char *)v6;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v6);
      v8 = *v7;
      v9 = std::string::operator[](reason_str, i);
      v10 = (_BYTE *)v9;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        __asan_report_load1(v9);
      if ( v8 != *v10 )
        break;
    }
    if ( i == std::string::size(pattern_str) )
    {
      v13 = 1;
      v11 = 0;
      goto LABEL_26;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(v2 + 4);
  }
  v11 = 1;
LABEL_26:
  if ( v11 == 1 )
    v13 = 0;
  result = v13;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::string *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 257: range 000000000CF1A97C-000000000CF1A9C9
void __cdecl data::SameMatcher::SameMatcher(data::SameMatcher *const this)
{
  int (**v1)(...); // rdx

  data::MtpWhitelistMatcher::MtpWhitelistMatcher(this);
  v1 = (int (**)(...))(&`vtable for'data::SameMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
};

// Line 257: range 000000000D00DF92-000000000D00DFDF
void __cdecl data::SameMatcher::~SameMatcher(data::SameMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::SameMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
};

// Line 257: range 000000000D00DFE0-000000000D00E00A
void __cdecl data::SameMatcher::~SameMatcher(data::SameMatcher *const this)
{
  data::SameMatcher::~SameMatcher(this);
  operator delete(this, 0x20uLL);
};

// Line 260: range 000000000CE455EE-000000000CE457CC
bool __cdecl data::SameMatcher::isStringMatch(const data::SameMatcher *const this, const std::string *reason_str)
{
  bool v2; // r15
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<std::string> *__for_range; // [rsp+10h] [rbp-A0h]
  const std::string *pattern_str; // [rsp+18h] [rbp-98h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v4;
  }
  v3->_M_current = (const std::string *)1102416563;
  v3[1]._M_current = (const std::string *)"2 32 8 15 __for_begin:262 64 8 13 __for_end:262";
  v3[2]._M_current = (const std::string *)data::SameMatcher::isStringMatch;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->init_pattern_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_current = std::vector<std::string>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_current = std::vector<std::string>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(v3 + 4, v3 + 8) )
  {
    pattern_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(v3 + 4);
    if ( std::operator==<char>(pattern_str, reason_str) )
    {
      v2 = 1;
      v6 = 0;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_14:
  if ( v6 == 1 )
    v2 = 0;
  result = v2;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const std::string *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 273: range 000000000CF1ABF6-000000000CF1AC53
void __cdecl data::RegexMatcher::RegexMatcher(data::RegexMatcher *const this)
{
  int (**v1)(...); // rdx

  data::MtpWhitelistMatcher::MtpWhitelistMatcher(this);
  v1 = (int (**)(...))(&`vtable for'data::RegexMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  std::vector<std::basic_regex<char,std::regex_traits<char>>>::vector(&this->regex_vec);
};

// Line 273: range 000000000D00E3FA-000000000D00E424
void __cdecl data::RegexMatcher::~RegexMatcher(data::RegexMatcher *const this)
{
  data::RegexMatcher::~RegexMatcher(this);
  operator delete(this, 0x38uLL);
};

// Line 273: range 000000000D00E39C-000000000D00E3F9
void __cdecl data::RegexMatcher::~RegexMatcher(data::RegexMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::RegexMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  std::vector<std::basic_regex<char,std::regex_traits<char>>>::~vector(&this->regex_vec);
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
};

// Line 276: range 000000000CE457CE-000000000CE45D2E
int32_t __cdecl data::RegexMatcher::init(data::RegexMatcher *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<std::string>::size_type v4; // rax
  std::basic_regex<char,std::regex_traits<char> > *v5; // rax
  std::basic_regex<char,std::regex_traits<char> > *v6; // rdx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+18h] [rbp-148h]
  const std::string *pattern_str; // [rsp+20h] [rbp-140h]
  char v10[304]; // [rsp+30h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 8 15 __for_begin:279 64 8 13 __for_end:279 96 8 9 <unknown> 128 32 6 re:283 192 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::RegexMatcher::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  v4 = std::vector<std::string>::size(&this->init_pattern_vec_);
  std::vector<std::basic_regex<char,std::regex_traits<char>>>::reserve(&this->regex_vec, v4);
  __for_range = &this->init_pattern_vec_;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::string>::iterator *)(v1 + 32) = std::vector<std::string>::begin(__for_range);
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::string>::iterator *)(v1 + 64) = std::vector<std::string>::end(__for_range);
  while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 32),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 64)) )
  {
    pattern_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 32));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
    std::basic_regex<char,std::regex_traits<char>>::basic_regex<std::char_traits<char>,std::allocator<char>>(
      (std::basic_regex<char,std::regex_traits<char> > *const)(v1 + 128),
      pattern_str,
      (std::basic_regex<char,std::regex_traits<char> >::flag_type)16);
    v5 = std::move<std::basic_regex<char,std::regex_traits<char>> &>((std::basic_regex<char,std::regex_traits<char> > *)(v1 + 128));
    std::vector<std::basic_regex<char,std::regex_traits<char>>>::emplace_back<std::basic_regex<char,std::regex_traits<char>>>(
      &this->regex_vec,
      v5,
      v6);
    std::basic_regex<char,std::regex_traits<char>>::~basic_regex((std::basic_regex<char,std::regex_traits<char> > *const)(v1 + 128));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 32));
  }
  result = 0;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 294: range 000000000CE45D30-000000000CE45F13
bool __cdecl data::RegexMatcher::isStringMatch(const data::RegexMatcher *const this, const std::string *reason_str)
{
  bool v2; // r15
  __gnu_cxx::__normal_iterator<const std::basic_regex<char,std::regex_traits<char> >*,std::vector<std::basic_regex<char,std::regex_traits<char> >> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::basic_regex<char,std::regex_traits<char> > *v6; // rcx
  int v7; // eax
  bool result; // al
  std::vector<std::basic_regex<char,std::regex_traits<char> >> *__for_range; // [rsp+10h] [rbp-A0h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const std::basic_regex<char,std::regex_traits<char> >*,std::vector<std::basic_regex<char,std::regex_traits<char> >> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const std::basic_regex<char,std::regex_traits<char> >*,std::vector<std::basic_regex<char,std::regex_traits<char> >> > *)v4;
  }
  v3->_M_current = (const std::basic_regex<char,std::regex_traits<char> > *)1102416563;
  v3[1]._M_current = (const std::basic_regex<char,std::regex_traits<char> > *)"2 32 8 15 __for_begin:296 64 8 13 __for_end:296";
  v3[2]._M_current = (const std::basic_regex<char,std::regex_traits<char> > *)data::RegexMatcher::isStringMatch;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->regex_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_current = std::vector<std::basic_regex<char,std::regex_traits<char>>>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_current = std::vector<std::basic_regex<char,std::regex_traits<char>>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::basic_regex<char,std::regex_traits<char>> const*,std::vector<std::basic_regex<char,std::regex_traits<char>>>>(
            v3 + 4,
            v3 + 8) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::basic_regex<char,std::regex_traits<char>> const*,std::vector<std::basic_regex<char,std::regex_traits<char>>>>::operator*(v3 + 4);
    if ( std::regex_match<std::char_traits<char>,std::allocator<char>,char,std::regex_traits<char>>(
           reason_str,
           v6,
           (std::regex_constants::match_flag_type)0) )
    {
      v2 = 1;
      v7 = 0;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<std::basic_regex<char,std::regex_traits<char>> const*,std::vector<std::basic_regex<char,std::regex_traits<char>>>>::operator++(v3 + 4);
  }
  v7 = 1;
LABEL_14:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const std::basic_regex<char,std::regex_traits<char> > *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 309: range 000000000CF1AE44-000000000CF1AE91
void __cdecl data::AnyMatcher::AnyMatcher(data::AnyMatcher *const this)
{
  int (**v1)(...); // rdx

  data::MtpWhitelistMatcher::MtpWhitelistMatcher(this);
  v1 = (int (**)(...))(&`vtable for'data::AnyMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
};

// Line 309: range 000000000D00E650-000000000D00E69D
void __cdecl data::AnyMatcher::~AnyMatcher(data::AnyMatcher *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'data::AnyMatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MtpWhitelistMatcher = v1;
  data::MtpWhitelistMatcher::~MtpWhitelistMatcher(this);
};

// Line 309: range 000000000D00E69E-000000000D00E6C8
void __cdecl data::AnyMatcher::~AnyMatcher(data::AnyMatcher *const this)
{
  data::AnyMatcher::~AnyMatcher(this);
  operator delete(this, 0x20uLL);
};

// Line 312: range 000000000CE45F14-000000000CE461ED
int32_t __cdecl data::AnyMatcher::init(data::AnyMatcher *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+10h] [rbp-E0h]
  const std::string *pattern_str; // [rsp+18h] [rbp-D8h]
  char v9[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:314 64 8 13 __for_end:314 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AnyMatcher::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->init_pattern_vec_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::string>::iterator *)(v2 + 32) = std::vector<std::string>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<std::string>::iterator *)(v2 + 64) = std::vector<std::string>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 64)) )
    {
      v5 = 1;
      goto LABEL_16;
    }
    pattern_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 32));
    if ( (unsigned __int8)std::string::empty(pattern_str) != 1 )
      break;
    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 32));
  }
  if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
    "init",
    318);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    (common::milog::MiLogStream *const)(v2 + 96),
    (const char (*)[28])"pattern_str should be empty");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  v1 = -1;
  v5 = 0;
LABEL_16:
  if ( v5 == 1 )
    v1 = 0;
  result = v1;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 324: range 000000000CE461EE-000000000CE46200
bool __cdecl data::AnyMatcher::isStringMatch(const data::AnyMatcher *const this, const std::string *a2)
{
  return 1;
};

// Line 331: range 000000000CDB08BA-000000000CDB0D53
std::unique_ptr<data::MtpWhitelistMatcher> __fastcall data::MtpWhitelistMatcher::createMatcher(
        std::unique_ptr<data::MtpWhitelistMatcher> *match_type,
        int a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  char v8[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 14 match_type:330 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 1"
                        "92 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MtpWhitelistMatcher::createMatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = a2;
  switch ( *(_DWORD *)(v2 + 48) )
  {
    case 1:
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      std::make_unique<data::SubstringMatcher>();
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<data::SubstringMatcher,std::default_delete<data::SubstringMatcher>,void>(
        match_type,
        (std::unique_ptr<data::SubstringMatcher> *)(v2 + 64));
      std::unique_ptr<data::SubstringMatcher>::~unique_ptr((std::unique_ptr<data::SubstringMatcher> *const)(v2 + 64));
      break;
    case 2:
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      std::make_unique<data::PrefixMatcher>();
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<data::PrefixMatcher,std::default_delete<data::PrefixMatcher>,void>(
        match_type,
        (std::unique_ptr<data::PrefixMatcher> *)(v2 + 96));
      std::unique_ptr<data::PrefixMatcher>::~unique_ptr((std::unique_ptr<data::PrefixMatcher> *const)(v2 + 96));
      break;
    case 3:
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      std::make_unique<data::SameMatcher>();
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<data::SameMatcher,std::default_delete<data::SameMatcher>,void>(
        match_type,
        (std::unique_ptr<data::SameMatcher> *)(v2 + 128));
      std::unique_ptr<data::SameMatcher>::~unique_ptr((std::unique_ptr<data::SameMatcher> *const)(v2 + 128));
      break;
    case 4:
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      std::make_unique<data::RegexMatcher>();
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<data::RegexMatcher,std::default_delete<data::RegexMatcher>,void>(
        match_type,
        (std::unique_ptr<data::RegexMatcher> *)(v2 + 160));
      std::unique_ptr<data::RegexMatcher>::~unique_ptr((std::unique_ptr<data::RegexMatcher> *const)(v2 + 160));
      break;
    case 5:
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      std::make_unique<data::AnyMatcher>();
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<data::AnyMatcher,std::default_delete<data::AnyMatcher>,void>(
        match_type,
        (std::unique_ptr<data::AnyMatcher> *)(v2 + 192));
      std::unique_ptr<data::AnyMatcher>::~unique_ptr((std::unique_ptr<data::AnyMatcher> *const)(v2 + 192));
      break;
    default:
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_mtp_blacklist_config_mgr.cpp",
        "createMatcher",
        345);
      v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[12])"match_type:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" not support");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      std::unique_ptr<data::MtpWhitelistMatcher>::unique_ptr<std::default_delete<data::MtpWhitelistMatcher>,void>(
        match_type,
        0LL);
      break;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return (std::unique_ptr<data::MtpWhitelistMatcher>)match_type;
};
