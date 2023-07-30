// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_cmd_frequency_config_mgr.cpp

// Line 21: range 000000000CEEE2DD-000000000CEEE6A4
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_cmd_frequency_config<(mysqlpp::sql_dummy_type)0>(
        data::t_cmd_frequency_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const mysqlpp::String *v5; // r14
  const mysqlpp::String *v6; // rax
  __m128i v7; // xmm0
  int v8; // edx
  const mysqlpp::String *v9; // rax
  __m128i v10; // xmm0
  int v11; // ecx
  const mysqlpp::String *v12; // rax
  __m128i v13; // xmm0
  int v14; // edx
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
  *(_QWORD *)(p_anon_0 + 8) = "3 32 16 27 ignore_schema_mismatches:21 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_cmd_frequency_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
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
  v6 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v7 = 0LL;
  *(float *)v7.m128i_i32 = mysqlpp::String::conv<float>(v6, 0.0);
  v8 = _mm_cvtsi128_si32(v7);
  if ( *(_BYTE *)(((rowa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 32);
  }
  *(_DWORD *)(rowa._M_string_length + 32) = v8;
  v9 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v10 = 0LL;
  *(float *)v10.m128i_i32 = mysqlpp::String::conv<float>(v9, 0.0);
  v11 = _mm_cvtsi128_si32(v10);
  if ( *(_BYTE *)(((rowa._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 36) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 36);
  }
  *(_DWORD *)(rowa._M_string_length + 36) = v11;
  v12 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v13 = 0LL;
  *(float *)v13.m128i_i32 = mysqlpp::String::conv<float>(v12, 0.0);
  v14 = _mm_cvtsi128_si32(v13);
  if ( *(_BYTE *)(((rowa._M_string_length + 40) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 40) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 40);
  }
  *(_DWORD *)(rowa._M_string_length + 40) = v14;
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

// Line 21: range 000000000CE3EEA8-000000000CE3EF2D
void __cdecl data::t_cmd_frequency_config::t_cmd_frequency_config(
        data::t_cmd_frequency_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_cmd_frequency_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 21: range 000000000D3A66D4-000000000D3A68CB
void __cdecl data::t_cmd_frequency_config::t_cmd_frequency_config(
        data::t_cmd_frequency_config *const this,
        data::t_cmd_frequency_config *a2)
{
  mysqlpp::sql_float frequency_limit; // xmm0_4
  mysqlpp::sql_float discard_packet_freq_limit; // xmm0_4
  mysqlpp::sql_float disconnect_freq_limit; // xmm0_4
  const char *table_override; // rdx

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->frequency_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->frequency_limit);
  }
  frequency_limit = a2->frequency_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frequency_limit);
  }
  this->frequency_limit = frequency_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->discard_packet_freq_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->discard_packet_freq_limit);
  }
  discard_packet_freq_limit = a2->discard_packet_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->discard_packet_freq_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->discard_packet_freq_limit);
  }
  this->discard_packet_freq_limit = discard_packet_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disconnect_freq_limit);
  }
  disconnect_freq_limit = a2->disconnect_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disconnect_freq_limit);
  }
  this->disconnect_freq_limit = disconnect_freq_limit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 21: range 000000000D0CB264-000000000D0CB27E
void __cdecl data::t_cmd_frequency_config::~t_cmd_frequency_config(data::t_cmd_frequency_config *const this)
{
  std::string::~string(this);
};

// Line 28: range 000000000CD649AA-000000000CD658F7
int32_t __cdecl data::DbCmdFrequencyConfigMgr::loadCmdFrequencyConfig(
        data::DbCmdFrequencyConfigMgr *const this,
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
  std::remove_reference<const std::string&>::type *v10; // rsi
  data::CmdFrequencyConfig *v11; // r8
  mysqlpp::sql_float frequency_limit; // xmm0_4
  mysqlpp::sql_float discard_packet_freq_limit; // xmm0_4
  mysqlpp::sql_float disconnect_freq_limit; // xmm0_4
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // r15d
  common::milog::MiLogStream *v22; // r15
  std::vector<data::t_cmd_frequency_config>::size_type v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  std::vector<data::t_cmd_frequency_config> *__for_range; // [rsp+28h] [rbp-548h]
  const data::t_cmd_frequency_config *row; // [rsp+30h] [rbp-540h]
  char v34[1328]; // [rsp+40h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 8 14 __for_begin:47 80 8 12 __for_end:47 112 8 9 <unknown> 144 24 10 row_vec:40 208 24 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 48 9 co"
                        "nfig:49 608 544 8 query:35";
  *(_QWORD *)(v3 + 16) = data::DbCmdFrequencyConfigMgr::loadCmdFrequencyConfig;
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
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862738] = -218959118;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
      "loadCmdFrequencyConfig",
      31);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 272),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
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
    v7 = std::operator<<<std::char_traits<char>>(
           v3 + 608,
           "cmd_str, frequency_limit, discard_packet_freq_limit, disconnect_freq_limit");
    std::operator<<<std::char_traits<char>>(v7, " from t_cmd_str_frequency_config");
    std::vector<data::t_cmd_frequency_config>::vector((std::vector<data::t_cmd_frequency_config> *const)(v3 + 144));
    mysqlpp::Query::storein<std::vector<data::t_cmd_frequency_config>>(
      (mysqlpp::Query *const)(v3 + 608),
      (std::vector<data::t_cmd_frequency_config> *)(v3 + 144));
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
    __for_range = (std::vector<data::t_cmd_frequency_config> *)(v3 + 144);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_cmd_frequency_config>::iterator *)(v3 + 48) = std::vector<data::t_cmd_frequency_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_cmd_frequency_config>::iterator *)(v3 + 80) = std::vector<data::t_cmd_frequency_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_cmd_frequency_config *,std::vector<data::t_cmd_frequency_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_cmd_frequency_config*,std::vector<data::t_cmd_frequency_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_cmd_frequency_config*,std::vector<data::t_cmd_frequency_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_cmd_frequency_config *,std::vector<data::t_cmd_frequency_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_cmd_frequency_config*,std::vector<data::t_cmd_frequency_config> > *const)(v3 + 48));
      v9 = ((v3 + 528) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      data::CmdFrequencyConfig::CmdFrequencyConfig((data::CmdFrequencyConfig *const)(v3 + 528));
      v10 = std::move<std::string const&>(&row->cmd_str);
      std::string::operator=(v3 + 528, v10);
      if ( *(_BYTE *)(((unsigned __int64)&row->frequency_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->frequency_limit);
      }
      frequency_limit = row->frequency_limit;
      if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 560);
      *(mysqlpp::sql_float *)(v3 + 560) = frequency_limit;
      if ( *(_BYTE *)(((unsigned __int64)&row->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->discard_packet_freq_limit >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&row->discard_packet_freq_limit);
      }
      discard_packet_freq_limit = row->discard_packet_freq_limit;
      if ( *(_BYTE *)(((v3 + 564) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 52) & 7) + 3) >= *(_BYTE *)(((v3 + 564) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 564);
      }
      *(mysqlpp::sql_float *)(v3 + 564) = discard_packet_freq_limit;
      if ( *(_BYTE *)(((unsigned __int64)&row->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->disconnect_freq_limit);
      }
      disconnect_freq_limit = row->disconnect_freq_limit;
      if ( *(_BYTE *)(((v3 + 568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 568);
      *(mysqlpp::sql_float *)(v3 + 568) = disconnect_freq_limit;
      v15 = std::unordered_map<std::string,data::CmdFrequencyConfig>::emplace<std::string&,data::CmdFrequencyConfig&>(
              &this->cmd_frequency_config_map_,
              (std::string *)(v3 + 528),
              (data::CmdFrequencyConfig *)(v3 + 528),
              (std::string *)(v3 + 528),
              v11);
      if ( !v15.second )
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
          4u,
          "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
          "loadCmdFrequencyConfig",
          56);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])byte_1A192C60);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 528));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        v18 = 1;
      }
      data::CmdFrequencyConfig::~CmdFrequencyConfig((data::CmdFrequencyConfig *const)(v3 + 528));
      v19 = ((v3 + 528) >> 3) + 2147450880;
      *(_DWORD *)v19 = -117901064;
      *(_WORD *)(v19 + 4) = -1800;
      if ( v18 != 1 )
      {
        v20 = 0;
        goto LABEL_39;
      }
      __gnu_cxx::__normal_iterator<data::t_cmd_frequency_config *,std::vector<data::t_cmd_frequency_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_cmd_frequency_config*,std::vector<data::t_cmd_frequency_config> > *const)(v3 + 48));
    }
    v20 = 1;
LABEL_39:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
    {
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
        "loadCmdFrequencyConfig",
        61);
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v23 = std::vector<data::t_cmd_frequency_config>::size((const std::vector<data::t_cmd_frequency_config> *const)(v3 + 144));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 112) = v23;
      v24 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v22,
              (const unsigned __int64 *)(v3 + 112));
      v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              v24,
              (const char (*)[41])" config from t_cmd_str_frequency_config.");
      v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" cmd_strs:");
      v27 = ((v3 + 208) >> 3) + 2147450880;
      *(_WORD *)v27 = 0;
      *(_BYTE *)(v27 + 2) = 0;
      v28 = (__int64)this;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 23) & 7) >= *(_BYTE *)(((v3 + 231) >> 3) + 0x7FFF8000) )
      {
        v28 = 24LL;
        __asan_report_store_n(v3 + 208, 24LL);
      }
      common::tools::MiscUtils::getAllMapKeys<std::unordered_map<std::string,data::CmdFrequencyConfig>>(
        (std::vector<std::string> *)(v3 + 208),
        (const std::unordered_map<std::string,data::CmdFrequencyConfig> *)v28);
      common::milog::MiLogStream::operator<<<std::string>(v26, (const std::vector<std::string> *)(v3 + 208));
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 208));
      v29 = ((v3 + 208) >> 3) + 2147450880;
      *(_WORD *)v29 = -1800;
      *(_BYTE *)(v29 + 2) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    std::vector<data::t_cmd_frequency_config>::~vector((std::vector<data::t_cmd_frequency_config> *const)(v3 + 144));
    v30 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v30 = -1800;
    *(_BYTE *)(v30 + 2) = -8;
    if ( v21 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 608));
  }
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v34);
  }
  return v2;
};

// Line 74: range 000000000CD658F8-000000000CD65906
int32_t __cdecl data::DbCmdFrequencyConfigMgr::rewriteCmdFrquencyConfig(data::DbCmdFrequencyConfigMgr *const this)
{
  return 0;
};

// Line 79: range 000000000CD65908-000000000CD665BC
int32_t __cdecl data::DbCmdFrequencyConfigMgr::checkCmdFrequencyConfig(
        data::DbCmdFrequencyConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  float discard_packet_freq_limit; // xmm1_4
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  float *v25; // rax
  float *v26; // rdx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  int32_t result; // eax
  float disconnect_freq_limit; // [rsp+Ch] [rbp-254h]
  unsigned int cmd_id; // [rsp+2Ch] [rbp-234h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true>::reference v40; // [rsp+38h] [rbp-228h]
  std::tuple_element<0,std::pair<const std::string,data::CmdFrequencyConfig> >::type *cmd_str; // [rsp+40h] [rbp-220h]
  std::tuple_element<1,const std::pair<const std::string,data::CmdFrequencyConfig> >::type *config; // [rsp+48h] [rbp-218h]
  char v43[528]; // [rsp+50h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:80 64 8 12 __for_end:80 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbCmdFrequencyConfigMgr::checkCmdFrequencyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::CmdFrequencyConfig>::iterator *)(v3 + 32) = std::unordered_map<std::string,data::CmdFrequencyConfig>::begin(&this->cmd_frequency_config_map_);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<std::string,data::CmdFrequencyConfig>::iterator *)(v3 + 64) = std::unordered_map<std::string,data::CmdFrequencyConfig>::end(&this->cmd_frequency_config_map_);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<std::string const,data::CmdFrequencyConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_49;
    }
    v40 = std::__detail::_Node_iterator<std::pair<std::string const,data::CmdFrequencyConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *const)(v3 + 32));
    cmd_str = std::get<0ul,std::string const,data::CmdFrequencyConfig>(v40);
    config = (std::tuple_element<1,const std::pair<const std::string,data::CmdFrequencyConfig> >::type *)std::get<1ul,std::string const,data::CmdFrequencyConfig>(v40);
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 96), "proto.", cmd_str);
    cmd_id = ProtoUtils::getCmdId((const std::string *)(v3 + 96));
    std::string::~string((void *)(v3 + 96));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    if ( !cmd_id )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
        "checkCmdFrequencyConfig",
        85);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"cmd_str:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, cmd_str);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])" is not match cmd_id");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_49;
    }
    if ( !ProtoUtils::isAllowClientSend(cmd_id) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
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
        "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
        "checkCmdFrequencyConfig",
        90);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])"cmd_str:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, cmd_str);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v12,
        (const char (*)[26])" is not allow client send");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v9 = 0;
      goto LABEL_49;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->frequency_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->frequency_limit);
    }
    if ( config->frequency_limit <= 0.0 )
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
        "checkCmdFrequencyConfig",
        95);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])"cmd_str:");
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, cmd_str);
      v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v15,
              (const char (*)[40])" frequency_limit <= 0! frequency_limit:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v16, &config->frequency_limit);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v9 = 0;
      goto LABEL_49;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->discard_packet_freq_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discard_packet_freq_limit >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->discard_packet_freq_limit);
    }
    if ( config->discard_packet_freq_limit != 0.0 )
    {
      discard_packet_freq_limit = config->discard_packet_freq_limit;
      if ( *(_BYTE *)(((unsigned __int64)&config->frequency_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->frequency_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->frequency_limit);
      }
      if ( config->frequency_limit > discard_packet_freq_limit )
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
          "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
          "checkCmdFrequencyConfig",
          100);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])"cmd_str:");
        v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, cmd_str);
        v21 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v20,
                (const char (*)[57])" discard_packet_freq_limit is less than frequency_limit!");
        v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v21,
                (const char (*)[28])" discard_packet_freq_limit:");
        v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &config->discard_packet_freq_limit);
        v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v23,
                (const char (*)[18])" frequency_limit:");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v24, &config->frequency_limit);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
        v9 = 0;
        goto LABEL_49;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->disconnect_freq_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->disconnect_freq_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->disconnect_freq_limit);
    }
    if ( config->disconnect_freq_limit == 0.0 )
      goto LABEL_42;
    disconnect_freq_limit = config->disconnect_freq_limit;
    v25 = (float *)std::max<float>(&config->frequency_limit, &config->discard_packet_freq_limit);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    if ( *v26 <= disconnect_freq_limit )
LABEL_42:
      v27 = 0;
    else
      v27 = 1;
    if ( v27 )
      break;
    std::__detail::_Node_iterator<std::pair<std::string const,data::CmdFrequencyConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 416, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 416),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_cmd_frequency_config_mgr.cpp",
    "checkCmdFrequencyConfig",
    107);
  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])"cmd_str:");
  v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, cmd_str);
  v31 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
          v30,
          (const char (*)[83])" disconnect_freq_limit is less than frequency_limit or discard_packet_freq_limit !");
  v32 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v31,
          (const char (*)[24])" disconnect_freq_limit:");
  v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, &config->disconnect_freq_limit);
  v34 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v33, (const char (*)[18])" frequency_limit:");
  v35 = common::milog::MiLogStream::operator<<<float,(float *)0>(v34, &config->frequency_limit);
  v36 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v35,
          (const char (*)[28])" discard_packet_freq_limit:");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v36, &config->discard_packet_freq_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  v2 = -1;
  v9 = 0;
LABEL_49:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 117: range 000000000CD665BE-000000000CD66752
const data::CmdFrequencyConfig *__cdecl data::DbCmdFrequencyConfigMgr::findCmdFrequencyConfig(
        const data::DbCmdFrequencyConfigMgr *const this,
        std::string *p_cmd_str)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbCmdFrequencyConfigMgr *v5; // rax
  const data::DbCmdFrequencyConfigMgr *v6; // rax
  bool v7; // al
  const data::CmdFrequencyConfig *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)"2 32 8 8 iter:118 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)data::DbCmdFrequencyConfigMgr::findCmdFrequencyConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[4]._M_cur = std::unordered_map<std::string,data::CmdFrequencyConfig>::find(
                   &v5->cmd_frequency_config_map_,
                   p_cmd_str)._M_cur;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2[8]._M_cur = std::unordered_map<std::string,data::CmdFrequencyConfig>::end(&v6->cmd_frequency_config_map_)._M_cur;
  v7 = std::__detail::operator!=<std::pair<std::string const,data::CmdFrequencyConfig>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::CmdFrequencyConfig>,false,true>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
