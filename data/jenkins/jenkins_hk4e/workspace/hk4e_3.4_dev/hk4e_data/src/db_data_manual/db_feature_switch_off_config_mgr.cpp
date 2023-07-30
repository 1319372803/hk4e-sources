// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_feature_switch_off_config_mgr.cpp

// Line 24: range 000000000CF00A0A-000000000CF00D67
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_feature_switch_off_config<(mysqlpp::sql_dummy_type)0>(
        data::t_feature_switch_off_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r14
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
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:24 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_feature_switch_off_config<(mysqlpp::sql_dummy_type)0>;
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
  v8 = mysqlpp::String::conv<unsigned int>(v7, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 4) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 4) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 4);
  }
  *(_DWORD *)(rowa._M_string_length + 4) = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  std::string::basic_string(p_anon_0 + 64);
  if ( *(char *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 128, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 128), v9, rowa);
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

// Line 24: range 000000000CE41B04-000000000CE41B91
void __cdecl data::t_feature_switch_off_config::t_feature_switch_off_config(
        data::t_feature_switch_off_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->msg);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_feature_switch_off_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 24: range 000000000D3B0EFA-000000000D3B1071
void __cdecl data::t_feature_switch_off_config::t_feature_switch_off_config(
        data::t_feature_switch_off_config *const this,
        data::t_feature_switch_off_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned type; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type);
  }
  this->type = type;
  std::string::basic_string(&this->msg, &a2->msg);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 24: range 000000000D0DDDF4-000000000D0DDE12
void __cdecl data::t_feature_switch_off_config::~t_feature_switch_off_config(
        data::t_feature_switch_off_config *const this)
{
  std::string::~string(&this->msg);
};

// Line 29: range 000000000CD7E3CA-000000000CD7F193
int32_t __cdecl data::DbFeatureSwitchOffConfigMgr::loadFeatureSwitchOffConfig(
        data::DbFeatureSwitchOffConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  unsigned __int64 v9; // rax
  unsigned int id; // ecx
  mysqlpp::sql_int_unsigned type; // ecx
  std::remove_reference<const std::string&>::type *v12; // rsi
  data::FeatureSwitchConfig *v13; // rdx
  const unsigned int *v14; // rcx
  data::FeatureSwitchConfig *v15; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // r15d
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // r15d
  common::milog::MiLogStream *v23; // r15
  std::vector<data::t_feature_switch_off_config>::size_type v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  std::vector<data::t_feature_switch_off_config> *__for_range; // [rsp+28h] [rbp-508h]
  __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config*,std::vector<data::t_feature_switch_off_config> >::reference row; // [rsp+30h] [rbp-500h]
  char v30[1264]; // [rsp+40h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 8 14 __for_begin:48 80 8 12 __for_end:48 112 8 9 <unknown> 144 24 10 row_vec:41 208 32 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 9 config:50 544 544 8 query:36";
  *(_QWORD *)(v3 + 16) = data::DbFeatureSwitchOffConfigMgr::loadFeatureSwitchOffConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
      "loadFeatureSwitchOffConfig",
      32);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 208),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 544, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 544), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 544, "id, type, msg");
    std::operator<<<std::char_traits<char>>(v7, " from t_feature_switch_off_config");
    std::vector<data::t_feature_switch_off_config>::vector((std::vector<data::t_feature_switch_off_config> *const)(v3 + 144));
    mysqlpp::Query::storein<std::vector<data::t_feature_switch_off_config>>(
      (mysqlpp::Query *const)(v3 + 544),
      (std::vector<data::t_feature_switch_off_config> *)(v3 + 144));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 544)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_feature_switch_off_config> *)(v3 + 144);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_feature_switch_off_config>::iterator *)(v3 + 48) = std::vector<data::t_feature_switch_off_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_feature_switch_off_config>::iterator *)(v3 + 80) = std::vector<data::t_feature_switch_off_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_feature_switch_off_config *,std::vector<data::t_feature_switch_off_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config*,std::vector<data::t_feature_switch_off_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config*,std::vector<data::t_feature_switch_off_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config *,std::vector<data::t_feature_switch_off_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config*,std::vector<data::t_feature_switch_off_config> > *const)(v3 + 48));
      v9 = ((v3 + 464) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_BYTE *)(v9 + 4) = 0;
      data::FeatureSwitchConfig::FeatureSwitchConfig((data::FeatureSwitchConfig *const)(v3 + 464));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      id = row->id;
      if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 464);
      *(_DWORD *)(v3 + 464) = id;
      if ( *(_BYTE *)(((unsigned __int64)&row->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->type);
      }
      type = row->type;
      if ( *(_BYTE *)(((v3 + 468) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 64 + 20) & 7) + 3) >= *(_BYTE *)(((v3 + 468) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 468);
      }
      *(_DWORD *)(v3 + 468) = type;
      v12 = std::move<std::string const&>(&row->msg);
      std::string::operator=(v3 + 472, v12);
      v13 = std::move<data::FeatureSwitchConfig &>((data::FeatureSwitchConfig *)(v3 + 464));
      v16 = std::unordered_map<unsigned int,data::FeatureSwitchConfig>::emplace<unsigned int const&,data::FeatureSwitchConfig>(
              &this->feature_switch_config_map,
              &row->id,
              v13,
              v14,
              v15);
      if ( !v16.second )
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
          "loadFeatureSwitchOffConfig",
          56);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v17,
                (const char (*)[25])"feature switch id dup.: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &row->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      data::FeatureSwitchConfig::~FeatureSwitchConfig((data::FeatureSwitchConfig *const)(v3 + 464));
      v20 = ((v3 + 464) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_BYTE *)(v20 + 4) = -8;
      if ( v19 != 1 )
      {
        v21 = 0;
        goto LABEL_35;
      }
      __gnu_cxx::__normal_iterator<data::t_feature_switch_off_config *,std::vector<data::t_feature_switch_off_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_feature_switch_off_config*,std::vector<data::t_feature_switch_off_config> > *const)(v3 + 48));
    }
    v21 = 1;
LABEL_35:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v21 == 1 )
    {
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
        "loadFeatureSwitchOffConfig",
        61);
      v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 336),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v24 = std::vector<data::t_feature_switch_off_config>::size((const std::vector<data::t_feature_switch_off_config> *const)(v3 + 144));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 112) = v24;
      v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v23,
              (const unsigned __int64 *)(v3 + 112));
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        v25,
        (const char (*)[41])" config from t_feature_switch_off_config");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    std::vector<data::t_feature_switch_off_config>::~vector((std::vector<data::t_feature_switch_off_config> *const)(v3 + 144));
    v26 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v26 = -1800;
    *(_BYTE *)(v26 + 2) = -8;
    if ( v22 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 544));
  }
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v30);
  }
  return v2;
};

// Line 72: range 000000000CD7F194-000000000CD80278
int32_t __cdecl data::DbFeatureSwitchOffConfigMgr::checkFeatureSwitchOffConfig(
        data::DbFeatureSwitchOffConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_type; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  unsigned __int64 v10; // rax
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rsi
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rdx
  _BOOL4 v14; // r15d
  bool v15; // al
  unsigned __int64 v16; // rax
  const Json::Value *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // r15d
  int v20; // edx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::reference v29; // [rsp+28h] [rbp-4B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FeatureSwitchConfig> >::type *config; // [rsp+38h] [rbp-4A8h]
  const std::string *str; // [rsp+40h] [rbp-4A0h]
  char v32[1168]; // [rsp+50h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 9 value:103 64 8 14 __for_begin:73 96 8 12 __for_end:73 128 8 9 <unknown> 160 16 7 iter:"
                        "95 192 16 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown"
                        "> 480 32 9 <unknown> 544 40 7 jval:88 624 40 13 json_value:97 704 48 11 card_set:85 784 272 9 reader:89";
  *(_QWORD *)(v3 + 16) = data::DbFeatureSwitchOffConfigMgr::checkFeatureSwitchOffConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::FeatureSwitchConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FeatureSwitchConfig>::begin(&this->feature_switch_config_map);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::FeatureSwitchConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::FeatureSwitchConfig>::end(&this->feature_switch_config_map);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::FeatureSwitchConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FeatureSwitchConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FeatureSwitchConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_51;
    }
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::FeatureSwitchConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::FeatureSwitchConfig> >::type *)std::get<1ul,unsigned int const,data::FeatureSwitchConfig>(v29);
    p_type = &config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    if ( !proto::FeatureSwitchType_IsValid(config->type) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->type);
    }
    if ( config->type == 3307 )
    {
      str = &config->msg;
      v10 = ((v3 + 704) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      p_const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
      {
        p_const_value_config_mgr = (ConstValueExcelConfigMgr *)48;
        __asan_report_store_n(v3 + 704, 48LL);
      }
      ConstValueExcelConfigMgr::getGCGDeckSystemAllInitCardSet(
        (std::set<unsigned int> *)(v3 + 704),
        p_const_value_config_mgr);
      v12 = ((v3 + 544) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 0;
      Json::Value::Value(v3 + 544, 0LL);
      __asan_unpoison_stack_memory(v3 + 784, 272LL);
      Json::Reader::Reader((Json::Reader *)(v3 + 784));
      if ( !Json::Reader::parse((Json::Reader *const)(v3 + 784), str, (Json::Value *)(v3 + 544), 1) )
      {
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
          "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
          "checkFeatureSwitchOffConfig",
          92);
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[19])"parse json failed:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else
      {
        *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v3 + 160);
        Json::Value::begin((Json::Value_0 *const)(v3 + 544));
        while ( 1 )
        {
          *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v3 + 192);
          Json::Value::end((Json::Value_0 *const)(v3 + 544));
          v15 = Json::ValueIteratorBase::operator!=(
                  (const Json::ValueIteratorBase *const)(v3 + 160),
                  (const Json::ValueIteratorBase::SelfType *)(v3 + 192));
          *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
          if ( !v15 )
            break;
          v16 = ((v3 + 624) >> 3) + 2147450880;
          *(_DWORD *)v16 = 0;
          *(_BYTE *)(v16 + 4) = 0;
          v17 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 160));
          Json::Value::Value((Json::Value *)(v3 + 624), v17);
          if ( !Json::Value::isUInt((const Json::Value_0 *const)(v3 + 624)) )
          {
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
              4u,
              "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
              "checkFeatureSwitchOffConfig",
              100);
            v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[29])"json_value is not uint, str:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v19 = 0;
          }
          else
          {
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v20 = Json::Value::asUInt((Json::Value *)(v3 + 624));
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 48);
            *(_DWORD *)(v3 + 48) = v20;
            if ( std::set<unsigned int>::count(
                   (const std::set<unsigned int> *const)(v3 + 704),
                   (const std::set<unsigned int>::key_type *)(v3 + 48)) )
            {
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 416, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 416),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
                "checkFeatureSwitchOffConfig",
                106);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      v21,
                      (const char (*)[51])byte_1A1990C0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 0;
            }
            else
            {
              v19 = 1;
            }
          }
          Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
          v23 = ((v3 + 624) >> 3) + 2147450880;
          *(_DWORD *)v23 = -117901064;
          *(_BYTE *)(v23 + 4) = -8;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v19 != 1 )
          {
            v24 = 0;
            goto LABEL_46;
          }
          Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 160));
        }
        v24 = 1;
LABEL_46:
        *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
        v14 = v24 == 1;
      }
      Json::Reader::~Reader((Json::Reader *const)(v3 + 784));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
      v25 = ((v3 + 544) >> 3) + 2147450880;
      *(_DWORD *)v25 = -117901064;
      *(_BYTE *)(v25 + 4) = -8;
      __asan_poison_stack_memory(v3 + 784, 272LL);
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 704));
      v26 = ((v3 + 704) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      if ( !v14 )
      {
        v9 = 0;
        goto LABEL_51;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FeatureSwitchConfig>,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_feature_switch_off_config_mgr.cpp",
    "checkFeatureSwitchOffConfig",
    77);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 224),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         v7,
         (const char (*)[30])"FeatureSwitchType not valid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_51:
  if ( v9 == 1 )
    v2 = 0;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v32);
  }
  return v2;
};
