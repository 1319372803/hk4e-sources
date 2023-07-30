// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_inject_fix_config_mgr.cpp

// Line 21: range 000000000CE42B66-000000000CE42C56
void __cdecl t_inject_fix_config::t_inject_fix_config(t_inject_fix_config *const this, const mysqlpp::Row *row)
{
  mysqlpp::String::String(&this->inject_fix);
  std::string::basic_string(&this->uid_list);
  std::string::basic_string(&this->platform_type_list);
  std::string::basic_string(&this->created_at);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  populate_t_inject_fix_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D45DF72-000000000D45E181
void __cdecl t_inject_fix_config::t_inject_fix_config(t_inject_fix_config *const this, const t_inject_fix_config *a2)
{
  mysqlpp::sql_int_unsigned config_id; // ecx
  mysqlpp::sql_int_unsigned percent; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  mysqlpp::String::String(&this->inject_fix, &a2->inject_fix);
  std::string::basic_string(&this->uid_list, &a2->uid_list);
  std::string::basic_string(&this->platform_type_list, &a2->platform_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->percent);
  }
  this->percent = percent;
  std::string::basic_string(&this->created_at, &a2->created_at);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D3B7454-000000000D3B7612
void __cdecl t_inject_fix_config::t_inject_fix_config(t_inject_fix_config *const this, t_inject_fix_config *a2)
{
  mysqlpp::sql_int_unsigned config_id; // ecx
  mysqlpp::sql_int_unsigned percent; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = config_id;
  mysqlpp::String::String(&this->inject_fix, &a2->inject_fix);
  std::string::basic_string(&this->uid_list, &a2->uid_list);
  std::string::basic_string(&this->platform_type_list, &a2->platform_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->percent);
  }
  percent = a2->percent;
  if ( *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->percent);
  }
  this->percent = percent;
  std::string::basic_string(&this->created_at, &a2->created_at);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0EAEB6-000000000D0EAF04
void __cdecl t_inject_fix_config::~t_inject_fix_config(t_inject_fix_config *const this)
{
  std::string::~string(&this->created_at);
  std::string::~string(&this->platform_type_list);
  std::string::~string(&this->uid_list);
  mysqlpp::String::~String(&this->inject_fix);
};

// Line 31: range 000000000CD94F7E-000000000CD95DC3
int32_t __cdecl data::DbInjectFixConfigMgr::loadDbInjectFixConfig(
        data::DbInjectFixConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  mysqlpp::Connection *v6; // rsi
  std::logic_error *exception; // rdi
  std::map<unsigned int,data::InjectFixConfig>::key_type config_id; // ecx
  unsigned __int64 v9; // rax
  const std::unordered_set<unsigned int>::value_type *v10; // rsi
  unsigned __int64 v11; // rax
  const std::unordered_set<unsigned int>::value_type *v12; // rsi
  uint32_t percent; // ecx
  uint32_t TimeByStr; // edi
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int i; // [rsp+24h] [rbp-53Ch]
  size_t j; // [rsp+28h] [rbp-538h]
  size_t j_0; // [rsp+30h] [rbp-530h]
  std::vector<t_inject_fix_config>::reference row; // [rsp+38h] [rbp-528h]
  data::InjectFixConfig *config; // [rsp+40h] [rbp-520h]
  char v26[1296]; // [rsp+50h] [rbp-510h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 24 10 row_vec:41 128 24 10 uid_vec:53 192 24 20 platform"
                        "_type_vec:59 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                        "9 <unknown> 576 544 8 query:38";
  *(_QWORD *)(v2 + 16) = data::DbInjectFixConfigMgr::loadDbInjectFixConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862755] = -202116109;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_inject_fix_config_mgr.cpp",
      "loadDbInjectFixConfig",
      34);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v2 + 576, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v2 + 576),
      v6,
      "select config_id, inject_fix, uid_list, platform_type_list, percent, created_at from t_inject_fix_config");
    std::vector<t_inject_fix_config>::vector((std::vector<t_inject_fix_config> *const)(v2 + 64));
    mysqlpp::Query::storein<std::vector<t_inject_fix_config>>(
      (mysqlpp::Query *const)(v2 + 576),
      (std::vector<t_inject_fix_config> *)(v2 + 64));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v2 + 576)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    for ( i = 0; i < std::vector<t_inject_fix_config>::size((const std::vector<t_inject_fix_config> *const)(v2 + 64)); ++i )
    {
      row = std::vector<t_inject_fix_config>::operator[]((std::vector<t_inject_fix_config> *const)(v2 + 64), i);
      config = std::map<unsigned int,data::InjectFixConfig>::operator[](&this->inject_fix_config_map_, &row->config_id);
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      config_id = row->config_id;
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(config);
      }
      config->id = config_id;
      mysqlpp::String::to_string(&row->inject_fix, &config->inject_fix);
      v9 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v9 = 0;
      *(_BYTE *)(v9 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        ",",
        (const std::allocator<char> *)(v2 + 32));
      common::tools::StringUtils::splitToList<unsigned int>(
        &row->uid_list,
        (const std::string *)(v2 + 320),
        (std::vector<unsigned int> *)(v2 + 128),
        1);
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 32);
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( j = 0LL; j < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 128)); ++j )
      {
        v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 128), j);
        std::unordered_set<unsigned int>::insert(&config->uid_set, v10);
      }
      v11 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v11 = 0;
      *(_BYTE *)(v11 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        ",",
        (const std::allocator<char> *)(v2 + 48));
      common::tools::StringUtils::splitToList<unsigned int>(
        &row->platform_type_list,
        (const std::string *)(v2 + 384),
        (std::vector<unsigned int> *)(v2 + 192),
        1);
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( j_0 = 0LL; j_0 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 192)); ++j_0 )
      {
        v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 192), j_0);
        std::unordered_set<unsigned int>::insert(&config->platform_type_set, v12);
      }
      if ( *(_BYTE *)(((unsigned __int64)&row->percent >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->percent >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->percent);
      }
      percent = row->percent;
      if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&config->percent);
      }
      config->percent = percent;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->created_at);
      if ( *(_BYTE *)(((unsigned __int64)&config->created_at >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->created_at >> 3)
                                                               + 0x7FFF8000) )
      {
        TimeByStr = (_DWORD)config + 156;
        __asan_report_store4(&config->created_at);
      }
      config->created_at = TimeByStr;
      if ( !config->created_at )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/db_data_manual/db_inject_fix_config_mgr.cpp",
          "loadDbInjectFixConfig",
          69);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])" invalid_time: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &row->created_at);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
      v16 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v16 = -1800;
      *(_BYTE *)(v16 + 2) = -8;
      v17 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v17 = -1800;
      *(_BYTE *)(v17 + 2) = -8;
    }
    std::vector<t_inject_fix_config>::~vector((std::vector<t_inject_fix_config> *const)(v2 + 64));
    v18 = ((v2 + 64) >> 3) + 2147450880;
    *(_WORD *)v18 = -1800;
    *(_BYTE *)(v18 + 2) = -8;
    v5 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 576));
  }
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v26);
  }
  return v5;
};

// Line 82: range 000000000CD95DC4-000000000CD9645E
int32_t __cdecl data::DbInjectFixConfigMgr::checkDbInjectFixConfig(data::DbInjectFixConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int v7; // eax
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::reference v15; // [rsp+18h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::InjectFixConfig> >::type *id; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InjectFixConfig> >::type *config; // [rsp+28h] [rbp-158h]
  char v18[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:83 64 8 12 __for_end:83 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbInjectFixConfigMgr::checkDbInjectFixConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::InjectFixConfig>::iterator *)(v2 + 32) = std::map<unsigned int,data::InjectFixConfig>::begin(&this->inject_fix_config_map_);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::InjectFixConfig>::iterator *)(v2 + 64) = std::map<unsigned int,data::InjectFixConfig>::end(&this->inject_fix_config_map_);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Self *)(v2 + 64)) )
    {
      v7 = 1;
      goto LABEL_37;
    }
    v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> > *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::InjectFixConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InjectFixConfig> >::type *)std::get<1ul,unsigned int const,data::InjectFixConfig>(v15);
    if ( (unsigned __int8)std::string::empty(&config->inject_fix) )
    {
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
        "./src/db_data_manual/db_inject_fix_config_mgr.cpp",
        "checkDbInjectFixConfig",
        87);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v5,
             (const char (*)[21])"inject_fix empty id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      v1 = -1;
      v7 = 0;
      goto LABEL_37;
    }
    if ( std::unordered_set<unsigned int>::empty(&config->uid_set) )
      goto LABEL_20;
    if ( !std::unordered_set<unsigned int>::empty(&config->platform_type_set) )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->percent);
    }
    if ( config->percent )
LABEL_19:
      v8 = 1;
    else
LABEL_20:
      v8 = 0;
    if ( v8 )
    {
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
        "./src/db_data_manual/db_inject_fix_config_mgr.cpp",
        "checkDbInjectFixConfig",
        92);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v9,
              (const char (*)[41])"config uid_list and platform or percent:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      v1 = -1;
      v7 = 0;
      goto LABEL_37;
    }
    if ( !std::unordered_set<unsigned int>::empty(&config->uid_set) )
      goto LABEL_30;
    if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->percent);
    }
    if ( config->percent )
LABEL_30:
      v11 = 0;
    else
      v11 = 1;
    if ( v11 )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> > *const)(v2 + 32));
  }
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
    "./src/db_data_manual/db_inject_fix_config_mgr.cpp",
    "checkDbInjectFixConfig",
    97);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v12,
          (const char (*)[22])"config match none id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  v1 = -1;
  v7 = 0;
LABEL_37:
  if ( v7 == 1 )
    v1 = 0;
  result = v1;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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
  return result;
};

// Line 106: range 000000000CD96460-000000000CD96748
int32_t __cdecl data::DbInjectFixConfigMgr::getPlayerSendInfo(
        const data::DbInjectFixConfigMgr *const this,
        uint32_t uid,
        uint32_t platform_type,
        uint32_t last_send_id,
        uint32_t *cur_send_id,
        std::string *inject_fix)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > *v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  uint32_t PlayerMatchedId; // ecx
  int32_t result; // eax
  const data::DbInjectFixConfigMgr *v11; // rax
  const data::DbInjectFixConfigMgr *v12; // rax
  bool v13; // al
  std::string *p_inject_fix; // rdx
  char v19[128]; // [rsp+30h] [rbp-80h] BYREF

  v6 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > *)v7;
  }
  v6->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)1102416563;
  v6[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)"2 32 8 6 it:117 64 8 9 <unknown>";
  v6[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)data::DbInjectFixConfigMgr::getPlayerSendInfo;
  v8 = (_DWORD *)((unsigned __int64)v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  PlayerMatchedId = data::DbInjectFixConfigMgr::getPlayerMatchedId(this, uid, platform_type);
  if ( *(_BYTE *)(((unsigned __int64)cur_send_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cur_send_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_send_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(cur_send_id);
  }
  *cur_send_id = PlayerMatchedId;
  if ( *cur_send_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)cur_send_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cur_send_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_send_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(cur_send_id);
    }
    if ( last_send_id == *cur_send_id )
    {
      *cur_send_id = 0;
      result = 0;
    }
    else
    {
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)&v6[4] >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      v6[4]._M_node = std::map<unsigned int,data::InjectFixConfig>::find(&v11->inject_fix_config_map_, cur_send_id)._M_node;
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)&v6[8] >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      v6[8]._M_node = std::map<unsigned int,data::InjectFixConfig>::end(&v12->inject_fix_config_map_)._M_node;
      v13 = std::operator!=(v6 + 4, v6 + 8);
      *(_BYTE *)(((unsigned __int64)&v6[8] >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        p_inject_fix = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig>>::operator->(v6 + 4)->second.inject_fix;
        std::string::operator=(inject_fix, p_inject_fix);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)cur_send_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cur_send_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_send_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(cur_send_id);
        }
        *cur_send_id = 0;
      }
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v6->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 131: range 000000000CD9674A-000000000CD96CAB
std::string *__cdecl data::DbInjectFixConfigMgr::getDesc[abi:cxx11](
        std::string *retstr,
        data::DbInjectFixConfigMgr *const this)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Self *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  std::unordered_set<unsigned int>::size_type v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  std::unordered_set<unsigned int>::size_type v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::reference v20; // [rsp+18h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InjectFixConfig> >::type *config; // [rsp+28h] [rbp-258h]
  char v22[592]; // [rsp+30h] [rbp-250h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Self *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)"3 32 8 15 __for_begin:133 64 8 13 __for_end:133 96 376 6 ss:132";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)data::DbInjectFixConfigMgr::getDesc[abi:cxx11];
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  std::ostringstream::basic_ostringstream(&v2[12]);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_node = std::map<unsigned int,data::InjectFixConfig>::begin(&this->inject_fix_config_map_)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_node = std::map<unsigned int,data::InjectFixConfig>::end(&this->inject_fix_config_map_)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig>>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::InjectFixConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::InjectFixConfig> >::type *)std::get<1ul,unsigned int const,data::InjectFixConfig>(v20);
    v5 = std::operator<<<std::char_traits<char>>(&v2[12], "id:");
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(config);
    }
    v6 = std::ostream::operator<<(v5, config->id);
    v7 = std::operator<<<std::char_traits<char>>(v6, ",inject_fix size:");
    v8 = std::string::size(&config->inject_fix);
    v9 = std::ostream::operator<<(v7, v8);
    v10 = std::operator<<<std::char_traits<char>>(v9, ",uid_size:");
    v11 = std::unordered_set<unsigned int>::size(&config->uid_set);
    v12 = std::ostream::operator<<(v10, v11);
    v13 = std::operator<<<std::char_traits<char>>(v12, ",platform_type_size:");
    v14 = std::unordered_set<unsigned int>::size(&config->platform_type_set);
    v15 = std::ostream::operator<<(v13, v14);
    v16 = std::operator<<<std::char_traits<char>>(v15, ",percent:");
    if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->percent);
    }
    v17 = std::ostream::operator<<(v16, config->percent);
    v18 = std::operator<<<std::char_traits<char>>(v17, ",created_at:");
    if ( *(_BYTE *)(((unsigned __int64)&config->created_at >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->created_at >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->created_at);
    }
    std::ostream::operator<<(v18, config->created_at);
    std::operator<<<std::char_traits<char>>(&v2[12], "\n");
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, &v2[12]);
  std::ostringstream::~ostringstream(&v2[12]);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,data::InjectFixConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return retstr;
};

// Line 143: range 000000000CD96CAC-000000000CD97029
__int64 __fastcall data::DbInjectFixConfigMgr::getPlayerMatchedId(
        const data::DbInjectFixConfigMgr *const this,
        uint32_t uid,
        uint32_t platform_type)
{
  uint32_t id; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool fixed; // al
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > >::pointer v8; // rax
  int v9; // eax
  unsigned int v11; // eax
  __int64 result; // rax
  const data::InjectFixConfig *config; // [rsp+18h] [rbp-B8h]
  char v15[176]; // [rsp+20h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 7 uid:142 48 4 17 platform_type:142 64 8 6 it:145 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = data::DbInjectFixConfigMgr::getPlayerMatchedId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 32) = uid;
  *(_DWORD *)(v4 + 48) = platform_type;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  std::map<unsigned int,data::InjectFixConfig>::rbegin((const std::map<unsigned int,data::InjectFixConfig> *const)(v4 + 64));
  while ( 1 )
  {
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    std::map<unsigned int,data::InjectFixConfig>::rend((const std::map<unsigned int,data::InjectFixConfig> *const)(v4 + 96));
    fixed = std::operator!=<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig>>>(
              (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > > *)(v4 + 64),
              (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > > *)(v4 + 96));
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !fixed )
    {
      v9 = 1;
      goto LABEL_28;
    }
    v8 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > > *const)(v4 + 64));
    config = &v8->second;
    if ( std::unordered_set<unsigned int>::empty(&v8->second.uid_set) )
      break;
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &config->uid_set,
           (const unsigned int *)(v4 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      id = config->id;
      v9 = 0;
      goto LABEL_28;
    }
LABEL_26:
    std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig>>>::operator++((std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::InjectFixConfig> > > *const)(v4 + 64));
  }
  if ( !std::unordered_set<unsigned int>::empty(&config->platform_type_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &config->platform_type_set,
          (const unsigned int *)(v4 + 48)) )
  {
    goto LABEL_26;
  }
  v11 = *(_DWORD *)(v4 + 32) % 0x64u;
  if ( *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->percent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->percent);
  }
  if ( v11 >= config->percent )
    goto LABEL_26;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  id = config->id;
  v9 = 0;
LABEL_28:
  if ( v9 == 1 )
    id = 0;
  result = id;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 864: range 000000000CF0B683-000000000CF0BEBC
// local variable allocation has failed, the output may be wrong!
void __cdecl populate_t_inject_fix_config<(mysqlpp::sql_dummy_type)0>(t_inject_fix_config *s, const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  const mysqlpp::String *v8; // r14
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // rax
  unsigned int v11; // edx
  const mysqlpp::String *v12; // r14
  std::string rowa; // [rsp+0h] [rbp-240h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "9 32 16 27 ignore_schema_mismatches:21 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unkno"
                              "wn> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = populate_t_inject_fix_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
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
  v7 = mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  mysqlpp::String::String((mysqlpp::String *const)(p_anon_0 + 64));
  if ( *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(p_anon_0 + 96);
  mysqlpp::String::conv<mysqlpp::String>(
    (const mysqlpp::String *const)(p_anon_0 + 96),
    (mysqlpp::String)__PAIR128__(p_anon_0 + 64, v7));
  mysqlpp::String::operator=(
    (mysqlpp::String *const)(rowa._M_string_length + 8),
    (const mysqlpp::String *)(p_anon_0 + 96));
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 96));
  *(_WORD *)(((p_anon_0 + 96) >> 3) + 0x7FFF8000) = -1800;
  mysqlpp::String::~String((mysqlpp::String *const)(p_anon_0 + 64));
  *(_WORD *)(((p_anon_0 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 128);
  if ( *(char *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 192, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 192), v8, rowa);
  std::string::operator=(rowa._M_string_length + 24, p_anon_0 + 192);
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 128));
  *(_DWORD *)(((p_anon_0 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 256);
  if ( *(char *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 95) & 7) >= *(_BYTE *)(((p_anon_0 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 320, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 320), v9, rowa);
  std::string::operator=(rowa._M_string_length + 56, p_anon_0 + 320);
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v11 = mysqlpp::String::conv<unsigned int>(v10, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 88) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 88) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 88);
  }
  *(_DWORD *)(rowa._M_string_length + 88) = v11;
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 384);
  if ( *(char *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 479) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 64 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 479) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 448, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 448), v12, rowa);
  std::string::operator=(rowa._M_string_length + 96, p_anon_0 + 448);
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
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
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8038) = 0LL;
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
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
