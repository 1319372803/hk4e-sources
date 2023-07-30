// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_chat_block_config_mgr.cpp

// Line 23: range 000000000CD62E64-000000000CD6343D
std::string *__cdecl data::genUidsStr(std::string *retstr, const std::set<unsigned int> *timeout_uid_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  unsigned int v6; // esi
  char *v7; // rdi
  unsigned __int64 last_pos; // [rsp+20h] [rbp-150h]
  const unsigned int *uid; // [rsp+28h] [rbp-148h]
  char v12[320]; // [rsp+30h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:26 64 8 12 __for_end:26 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::genUidsStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  std::string::basic_string(retstr);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::iterator *)(v2 + 32) = std::set<unsigned int>::begin(timeout_uid_set);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::iterator *)(v2 + 64) = std::set<unsigned int>::end(timeout_uid_set);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64)) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 32));
    uid = v5;
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *uid;
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      v6 = 32;
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v2 + 96), v6);
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 160), (std::string *)(v2 + 96), ", ");
    std::string::operator+=(retstr, v2 + 160);
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::string::~string((void *)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  last_pos = std::string::find_last_of(retstr, ", ", -1LL);
  if ( last_pos != -1LL && last_pos )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    v7 = (char *)(last_pos - 1);
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      v7 = (char *)(v2 + 224);
      __asan_report_store_n(v2 + 224, 32LL);
    }
    std::string::substr(v2 + 224, retstr, 0LL, v7);
    std::string::operator=(retstr, v2 + 224);
    std::string::~string((void *)(v2 + 224));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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
  return retstr;
};

// Line 41: range 000000000CE3EDC6-000000000CE3EE53
void __cdecl data::t_chat_block_config::t_chat_block_config(
        data::t_chat_block_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_chat_block_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 41: range 000000000D3A6030-000000000D3A6122
void __cdecl data::t_chat_block_config::t_chat_block_config(
        data::t_chat_block_config *const this,
        data::t_chat_block_config *a2)
{
  mysqlpp::sql_int_unsigned uid; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::basic_string(&this->end_time, &a2->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 41: range 000000000D0CAB98-000000000D0CABB6
void __cdecl data::t_chat_block_config::~t_chat_block_config(data::t_chat_block_config *const this)
{
  std::string::~string(&this->end_time);
};

// Line 46: range 000000000CD6343E-000000000CD64391
int32_t __cdecl data::DbChatBlockConfigMgr::loadDbChatBlockConfig(
        data::DbChatBlockConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  common::milog::MiLogStream *v8; // rax
  std::vector<data::t_chat_block_config>::size_type v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::map<unsigned int,unsigned int>::size_type v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  uint32_t end_time; // [rsp+24h] [rbp-5CCh]
  std::vector<data::t_chat_block_config> *__for_range; // [rsp+28h] [rbp-5C8h]
  __gnu_cxx::__normal_iterator<data::t_chat_block_config*,std::vector<data::t_chat_block_config> >::reference row; // [rsp+30h] [rbp-5C0h]
  char v21[1456]; // [rsp+40h] [rbp-5B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 8 14 __for_begin:65 80 8 12 __for_end:65 112 24 10 row_vec:57 176 32 9 <unknown> 240 32 9 "
                        "<unknown> 304 32 9 <unknown> 368 32 11 uids_str:86 432 32 9 <unknown> 496 32 9 <unknown> 560 48 "
                        "18 timeout_uid_set:64 640 56 9 <unknown> 736 544 8 query:52";
  *(_QWORD *)(v2 + 16) = data::DbChatBlockConfigMgr::loadDbChatBlockConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_chat_block_config_mgr.cpp",
      "loadDbChatBlockConfig",
      49);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 736, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 736), v6, "select ");
    std::operator<<<std::char_traits<char>>(v2 + 736, "uid, end_time from t_chat_block_config");
    std::vector<data::t_chat_block_config>::vector((std::vector<data::t_chat_block_config> *const)(v2 + 112));
    mysqlpp::Query::storein<std::vector<data::t_chat_block_config>>(
      (mysqlpp::Query *const)(v2 + 736),
      (std::vector<data::t_chat_block_config> *)(v2 + 112));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 736)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 560));
    __for_range = (std::vector<data::t_chat_block_config> *)(v2 + 112);
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_chat_block_config>::iterator *)(v2 + 48) = std::vector<data::t_chat_block_config>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_chat_block_config>::iterator *)(v2 + 80) = std::vector<data::t_chat_block_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_chat_block_config *,std::vector<data::t_chat_block_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_chat_block_config*,std::vector<data::t_chat_block_config> > *)(v2 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_chat_block_config*,std::vector<data::t_chat_block_config> > *)(v2 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_chat_block_config *,std::vector<data::t_chat_block_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_chat_block_config*,std::vector<data::t_chat_block_config> > *const)(v2 + 48));
      end_time = common::tools::TimeUtils::getTimeByStr(&row->end_time);
      if ( !end_time )
      {
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_chat_block_config_mgr.cpp",
          "loadDbChatBlockConfig",
          71);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 240),
               (const char (*)[16])" invalid_time: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &row->end_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( end_time > common::tools::TimeUtils::getNow() )
      {
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        data::DbChatBlockConfigMgr::updateChatBlockInfo(this, row->uid, end_time);
      }
      else
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 560), &row->uid);
      }
      __gnu_cxx::__normal_iterator<data::t_chat_block_config *,std::vector<data::t_chat_block_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_chat_block_config*,std::vector<data::t_chat_block_config> > *const)(v2 + 48));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_chat_block_config_mgr.cpp",
      "loadDbChatBlockConfig",
      82);
    v9 = std::vector<data::t_chat_block_config>::size((const std::vector<data::t_chat_block_config> *const)(v2 + 112));
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 304),
      "load %lu config from t_chat_block_config",
      v9);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 560)) )
    {
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 368, 32LL);
      }
      data::genUidsStr((std::string *)(v2 + 368), (const std::set<unsigned int> *)(v2 + 560));
      mysqlpp::Query::reset((mysqlpp::Query *)(v2 + 736));
      v10 = std::operator<<<std::char_traits<char>>(v2 + 736, "delete from t_chat_block_config where uid in (");
      v11 = std::operator<<<char>(v10, v2 + 368);
      std::operator<<<std::char_traits<char>>(v11, ")");
      v12 = ((v2 + 640) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 695) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 695) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 640, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 640));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 640));
      v13 = ((v2 + 640) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_WORD *)(v13 + 4) = -1800;
      *(_BYTE *)(v13 + 6) = -8;
      std::string::~string((void *)(v2 + 368));
      *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 432, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 432),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_chat_block_config_mgr.cpp",
      "loadDbChatBlockConfig",
      91);
    v14 = std::map<unsigned int,unsigned int>::size(&this->chat_block_config_map);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v2 + 432),
      "chat_block_config_map have %lu  element",
      v14);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 560));
    std::vector<data::t_chat_block_config>::~vector((std::vector<data::t_chat_block_config> *const)(v2 + 112));
    v15 = ((v2 + 112) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    v16 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v16 = -117901064;
    *(_WORD *)(v16 + 4) = -1800;
    v5 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 736));
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v21);
  }
  return v5;
};

// Line 102: range 000000000CD64392-000000000CD6457F
__int64 __fastcall data::DbChatBlockConfigMgr::getPlayerChatBlockEndTime(
        data::DbChatBlockConfigMgr *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbChatBlockConfigMgr *v5; // rax
  data::DbChatBlockConfigMgr *v6; // rax
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:101 64 8 8 iter:103 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbChatBlockConfigMgr::getPlayerChatBlockEndTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &v5->chat_block_config_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(&v6->chat_block_config_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v11 == (char *)v2 )
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

// Line 110: range 000000000CD64580-000000000CD647D5
void __fastcall data::DbChatBlockConfigMgr::updateChatBlockInfo(
        data::DbChatBlockConfigMgr *const this,
        uint32_t uid,
        uint32_t end_time)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::DbChatBlockConfigMgr *v6; // rax
  data::DbChatBlockConfigMgr *v7; // rax
  bool v8; // al
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  char v14[176]; // [rsp+10h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:109 64 8 8 iter:111 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbChatBlockConfigMgr::updateChatBlockInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  v6 = this;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &v6->chat_block_config_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = this;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(&v7->chat_block_config_map);
  v8 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::map<unsigned int,unsigned int>::operator[](
           &this->chat_block_config_map,
           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = end_time;
  }
  else
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_second);
    }
    v11->second = end_time;
  }
  if ( v14 == (char *)v3 )
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
};

// Line 123: range 000000000CD647D6-000000000CD649A9
void __fastcall data::DbChatBlockConfigMgr::deleteChatBlockInfo(data::DbChatBlockConfigMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DbChatBlockConfigMgr *v5; // rax
  data::DbChatBlockConfigMgr *v6; // rax
  bool v7; // al
  data::DbChatBlockConfigMgr *v8; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:122 64 8 8 iter:124 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbChatBlockConfigMgr::deleteChatBlockInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &v5->chat_block_config_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(&v6->chat_block_config_map);
  v7 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
  {
    v8 = this;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v8 = (data::DbChatBlockConfigMgr *)__asan_report_load8(v2 + 64);
    std::map<unsigned int,unsigned int>::erase[abi:cxx11](
      &v8->chat_block_config_map,
      *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64));
  }
  if ( v9 == (char *)v2 )
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
};

// Line 265: range 000000000CEED7D8-000000000CEEDAC7
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_chat_block_config<(mysqlpp::sql_dummy_type)0>(
        data::t_chat_block_config *s,
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
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:41 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_chat_block_config<(mysqlpp::sql_dummy_type)0>;
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
