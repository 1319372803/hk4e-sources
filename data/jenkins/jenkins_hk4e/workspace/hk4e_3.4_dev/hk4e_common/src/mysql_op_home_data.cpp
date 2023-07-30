// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_home_data.cpp

// Line 32: range 000000000D426AB0-000000000D426D8C
int32_t __cdecl MysqlOpHomeData::init(uint32_t config_home_db_count)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v5; // rax
  char v6[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = MysqlOpHomeData::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  if ( config_home_db_count )
  {
    MysqlOpHomeData::home_db_count[0] = config_home_db_count;
    if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/mysql_op_home_data.cpp",
      "init",
      40);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           (common::milog::MiLogStream *const)(v1 + 96),
           (const char (*)[42])"MysqlOpHomeData init succ! home_db_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, MysqlOpHomeData::home_db_count);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
    result = 0;
  }
  else
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_home_data.cpp",
      "init",
      35);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v1 + 32),
      (const char (*)[47])" config_home_db_count is 0, need check config!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 46: range 000000000D426D8E-000000000D42747C
int32_t __cdecl MysqlOpHomeData::checkMysqlTableExistance()
{
  int32_t v0; // r14d
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  int v5; // r15d
  unsigned __int64 v6; // rax
  uint32_t v7; // ecx
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  int32_t result; // eax
  uint32_t index; // [rsp+1Ch] [rbp-184h]
  uint32_t table_index; // [rsp+20h] [rbp-180h]
  uint32_t index_0; // [rsp+24h] [rbp-17Ch]
  char v18[368]; // [rsp+30h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 11 db_index:72 64 24 17 table_name_vec:54 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = MysqlOpHomeData::checkMysqlTableExistance;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -202116109;
  if ( MysqlOpHomeData::home_db_count[0] )
  {
    for ( index = 0; index < MysqlOpHomeData::home_db_count[0]; ++index )
    {
      v4 = ((v1 + 64) >> 3) + 2147450880;
      *(_WORD *)v4 = 0;
      *(_BYTE *)(v4 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 64));
      for ( table_index = 0; table_index <= 9; ++table_index )
      {
        *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        MysqlOpHomeData::getHomeDataTableNameByIndex[abi:cxx11]((std::string *)(v1 + 192), table_index);
        std::vector<std::string>::push_back(
          (std::vector<std::string> *const)(v1 + 64),
          (std::vector<std::string>::value_type *)(v1 + 192));
        std::string::~string((void *)(v1 + 192));
        *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( MysqlOpBase::checkMysqlTableExistance(index + 4001, (const std::vector<std::string> *)(v1 + 64)) )
      {
        v0 = -1;
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 64));
      v6 = ((v1 + 64) >> 3) + 2147450880;
      *(_WORD *)v6 = -1800;
      *(_BYTE *)(v6 + 2) = -8;
      if ( v5 != 1 )
        goto LABEL_35;
    }
    if ( MysqlOpHomeData::home_db_count[0] < 0x50 )
    {
      for ( index_0 = MysqlOpHomeData::home_db_count[0]; index_0 < 0x50; ++index_0 )
      {
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
        v7 = index_0 + 4001;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48);
        *(_DWORD *)(v1 + 48) = v7;
        v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v1 + 48);
        if ( common::midb::MySqlMgrT<std::mutex>::isIndexExist(v8, *(_DWORD *)(v1 + 48)) )
        {
          *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/mysql_op_home_data.cpp",
            "checkMysqlTableExistance",
            76);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v1 + 256),
                 (const char (*)[16])" home_db_count:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  MysqlOpHomeData::home_db_count);
          v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v10,
                  (const char (*)[15])" but db_index:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" in xml has value!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
          *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v0 = -1;
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v13 != 1 )
          goto LABEL_35;
      }
    }
    v0 = 0;
  }
  else
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_home_data.cpp",
      "checkMysqlTableExistance",
      49);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v1 + 128),
      (const char (*)[57])" home_db_count is 0, check app init call!  check config!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    v0 = -1;
  }
LABEL_35:
  result = v0;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 86: range 000000000D42747E-000000000D4274DD
// local variable allocation has failed, the output may be wrong!
common::midb::MysqlConnPtr __cdecl MysqlOpHomeData::grabConn(uint32_t db_index)
{
  uint16_t v1; // si
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rsi
  uint16_t v3; // dx
  common::midb::MysqlConnPtr result; // rax
  uint16_t db_indexa; // [rsp+4h] [rbp-Ch]

  db_indexa = v1;
  v2 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
  v3 = db_indexa;
  if ( *(_WORD *)((*(_QWORD *)&db_index >> 3) + 0x7FFF8000LL) )
    __asan_report_store16(*(_QWORD *)&db_index, v2);
  result = common::midb::MySqlMgrT<std::mutex>::grab(v2, v3, 0);
  result._M_ptr = *(std::__shared_ptr<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2>::element_type **)&db_index;
  return result;
};

// Line 91: range 000000000D4274DE-000000000D4276C3
int32_t __cdecl MysqlOpHomeData::getHomeDataDbIndex(const uint32_t uid)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = MysqlOpHomeData::getHomeDataDbIndex;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( MysqlOpHomeData::home_db_count[0] )
  {
    result = uid / 0xA % MysqlOpHomeData::home_db_count[0] + 4001;
  }
  else
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_home_data.cpp",
      "getHomeDataDbIndex",
      94);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v1 + 32),
      (const char (*)[57])" home_db_count is 0, check app init call!  check config!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 104: range 000000000D4276C4-000000000D427772
std::string *__cdecl MysqlOpHomeData::getHomeDataTableNameByUid[abi:cxx11](std::string *retstr, const uint32_t uid)
{
  uint32_t v2; // edx

  v2 = uid % 0xA;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  MysqlOpHomeData::getHomeDataTableNameByIndex[abi:cxx11](retstr, v2);
  return retstr;
};

// Line 112: range 000000000D427774-000000000D4278E2
std::string *__cdecl MysqlOpHomeData::getHomeDataTableNameByIndex[abi:cxx11](std::string *retstr, const uint32_t index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 32 7 buf:113";
  *(_QWORD *)(v2 + 16) = MysqlOpHomeData::getHomeDataTableNameByIndex[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -202116109;
  snprintf((char *)(v2 + 64), 0x20uLL, "t_home_data_%u", index);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    (const char *)(v2 + 64),
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 122: range 000000000D4278E4-000000000D42889C
bool __cdecl MysqlOpHomeData::isHomeUidExist(uint32_t uid)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rsi
  unsigned __int64 v5; // rax
  bool v6; // r14
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::logic_error *exception; // rdi
  unsigned __int64 v13; // rax
  char v15[1584]; // [rsp+30h] [rbp-630h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1536LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:123 96 16 9 <unknown> 128 16 12 conn_ptr:142 160"
                        " 24 11 row_vec:157 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 32 14 table_name:151 608 32 9 <unknown> 672 56 14 span_proxy:124 768 56 14"
                        " _tc_guard_:126 864 544 9 query:150";
  *(_QWORD *)(v1 + 16) = MysqlOpHomeData::isHomeUidExist;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -218959118;
  v3[536862740] = -218959118;
  v3[536862742] = -234881024;
  v3[536862743] = -218959118;
  v3[536862745] = -234881024;
  v3[536862746] = -218959118;
  v3[536862764] = -202116109;
  v3[536862765] = -202116109;
  v3[536862766] = -202116109;
  v3[536862767] = -202116109;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v1 + 80);
  *(_DWORD *)(v1 + 80) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v1 + 96), "isHomeUidExist");
  v4 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v1 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v1 + 672),
    v4,
    *(opentracing::v3::string_view *)(v1 + 96),
    0LL,
    0,
    (const int *)(v1 + 80));
  *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -1800;
  v5 = ((v1 + 768) >> 3) + 2147450880;
  *(_DWORD *)v5 = 0;
  *(_WORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 6) = 0;
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 288),
    "isHomeUidExist",
    (const std::allocator<char> *)(v1 + 64));
  *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 768),
    (const std::string *)(v1 + 224),
    (const std::string *)(v1 + 288));
  std::string::~string((void *)(v1 + 224));
  *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    if ( MysqlOpHomeData::getHomeDataDbIndex(uid) >= 0 )
    {
      *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 128, v1 + 224);
      MysqlOpHomeData::grabConn(v1 + 128);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 128)) )
      {
        *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_home_data.cpp",
          "isHomeUidExist",
          145);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 480),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 480));
        *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 80);
        *(_DWORD *)(v1 + 80) = -1;
        v6 = *(_DWORD *)(v1 + 80) != 0;
      }
      else
      {
        __asan_unpoison_stack_memory(v1 + 864, 544LL);
        v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        if ( *(char *)(((v1 + 864) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1407) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 1407) >> 3) + 0x7FFF8000) )
        {
          v7 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v1 + 864, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 864), v7, byte_1A7E83C0);
        *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 544, 32LL);
        }
        MysqlOpHomeData::getHomeDataTableNameByUid[abi:cxx11]((std::string *)(v1 + 544), uid);
        v8 = std::operator<<<std::char_traits<char>>(v1 + 864, "select uid from ");
        v9 = std::operator<<<char>(v8, v1 + 544);
        v10 = std::operator<<<std::char_traits<char>>(v9, " where uid=");
        std::ostream::operator<<(v10, uid);
        v11 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        std::vector<TableHomeData>::vector((std::vector<TableHomeData> *const)(v1 + 160));
        mysqlpp::Query::storein<std::vector<TableHomeData>>(
          (mysqlpp::Query *const)(v1 + 864),
          (std::vector<TableHomeData> *)(v1 + 160));
        if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v1 + 864)) )
        {
          exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
          std::logic_error::logic_error(exception, "query has error");
          __asan_handle_no_return(exception);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::logic_error,
            (void (__fastcall *)(void *))&std::logic_error::~logic_error);
        }
        v6 = !std::vector<TableHomeData>::empty((const std::vector<TableHomeData> *const)(v1 + 160));
        std::vector<TableHomeData>::~vector((std::vector<TableHomeData> *const)(v1 + 160));
        v13 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v13 = -1800;
        *(_BYTE *)(v13 + 2) = -8;
        std::string::~string((void *)(v1 + 544));
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 864));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 128));
    }
    else
    {
      *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 31) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_home_data.cpp",
        "isHomeUidExist",
        137);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v1 + 416),
        (const char (*)[27])"getHomeDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
      *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 80);
      *(_DWORD *)(v1 + 80) = -1;
      v6 = *(_DWORD *)(v1 + 80) != 0;
    }
  }
  else
  {
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_home_data.cpp",
      "isHomeUidExist",
      130);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80);
    *(_DWORD *)(v1 + 80) = -1;
    v6 = *(_DWORD *)(v1 + 80) != 0;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 768));
  SpanProxy::~SpanProxy((SpanProxy *const)(v1 + 672));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80B8) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1536LL, v15);
  }
  return v6;
};

// Line 175: range 000000000D42889E-000000000D429D05
__int64 __fastcall MysqlOpHomeData::selectHomeDataByUid(uint32_t uid, TableHomeData *row, unsigned __int64 is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r14d
  mysqlpp::Connection *v9; // rsi
  uint32_t v10; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  std::logic_error *exception; // rdi
  const TableHomeData *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int v19; // r14d
  std::vector<TableHomeData>::size_type v20; // rdx
  unsigned __int64 v21; // rax
  char v25[1712]; // [rsp+40h] [rbp-6B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1664LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 ret:176 80 4 7 uid:174 96 16 9 <unknown> 128 16 12 c"
                        "onn_ptr:195 160 24 11 row_vec:210 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 3"
                        "2 9 <unknown> 480 32 9 <unknown> 544 32 14 table_name:204 608 32 9 <unknown> 672 32 9 <unknown> "
                        "736 32 9 <unknown> 800 56 14 span_proxy:177 896 56 14 _tc_guard_:179 992 544 9 query:203";
  *(_QWORD *)(v3 + 16) = MysqlOpHomeData::selectHomeDataByUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -234881024;
  v5[536862747] = -218959118;
  v5[536862749] = -234881024;
  v5[536862750] = -218959118;
  v5[536862768] = -202116109;
  v5[536862769] = -202116109;
  v5[536862770] = -202116109;
  v5[536862771] = -202116109;
  *(_DWORD *)(v3 + 80) = uid;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 64);
  *(_DWORD *)(v3 + 64) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v3 + 96), "selectHomeDataByUid");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v3 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v3 + 800),
    v6,
    *(opentracing::v3::string_view *)(v3 + 96),
    0LL,
    0,
    (const int *)(v3 + 64));
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v3 + 896) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "selectHomeDataByUid",
    (const std::allocator<char> *)(v3 + 48));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 896),
    (const std::string *)(v3 + 224),
    (const std::string *)(v3 + 288));
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_DWORD *)(v3 + 80) )
  {
    if ( MysqlOpHomeData::getHomeDataDbIndex(*(_DWORD *)(v3 + 80)) >= 0 )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 128, v3 + 224);
      MysqlOpHomeData::grabConn(v3 + 128);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_home_data.cpp",
          "selectHomeDataByUid",
          198);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 480),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64);
        *(_DWORD *)(v3 + 64) = -1;
        v8 = *(_DWORD *)(v3 + 64);
      }
      else
      {
        __asan_unpoison_stack_memory(v3 + 992, 544LL);
        v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
        {
          v9 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v3 + 992, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 992), v9, byte_1A7E83C0);
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        v10 = *(_DWORD *)(v3 + 80);
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          v10 = 32;
          __asan_report_store_n(v3 + 544, 32LL);
        }
        MysqlOpHomeData::getHomeDataTableNameByUid[abi:cxx11]((std::string *)(v3 + 544), v10);
        v11 = std::operator<<<std::char_traits<char>>(
                v3 + 992,
                "select uid, bin_data, data_version, block_end_time, is_delete from ");
        v12 = std::operator<<<char>(v11, v3 + 544);
        v13 = std::operator<<<std::char_traits<char>>(v12, " where uid=");
        std::ostream::operator<<(v13, *(unsigned int *)(v3 + 80));
        v14 = ((v3 + 160) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        std::vector<TableHomeData>::vector((std::vector<TableHomeData> *const)(v3 + 160));
        mysqlpp::Query::storein<std::vector<TableHomeData>>(
          (mysqlpp::Query *const)(v3 + 992),
          (std::vector<TableHomeData> *)(v3 + 160));
        if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 992)) )
        {
          exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
          std::logic_error::logic_error(exception, "query has error");
          __asan_handle_no_return(exception);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::logic_error,
            (void (__fastcall *)(void *))&std::logic_error::~logic_error);
        }
        if ( std::vector<TableHomeData>::empty((const std::vector<TableHomeData> *const)(v3 + 160)) )
        {
          if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
            && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_exist);
          }
          *(_BYTE *)is_exist = 0;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = 0;
          v8 = *(_DWORD *)(v3 + 64);
        }
        else if ( std::vector<TableHomeData>::size((const std::vector<TableHomeData> *const)(v3 + 160)) == 1 )
        {
          if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
            && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_exist);
          }
          *(_BYTE *)is_exist = 1;
          v16 = std::vector<TableHomeData>::operator[]((std::vector<TableHomeData> *const)(v3 + 160), 0LL);
          TableHomeData::operator=(row, v16);
          if ( mysqlpp::tiny_int<signed char>::operator bool(&row->is_delete) )
          {
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "src/mysql_op_home_data.cpp",
              "selectHomeDataByUid",
              235);
            v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[9])"row uid:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v18,
              (const char (*)[40])" is_delete is true! select abandom data");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          }
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = 0;
          v8 = *(_DWORD *)(v3 + 64);
        }
        else
        {
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/mysql_op_home_data.cpp",
            "selectHomeDataByUid",
            242);
          v19 = *(_DWORD *)(v3 + 80);
          v20 = std::vector<TableHomeData>::size((const std::vector<TableHomeData> *const)(v3 + 160));
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v3 + 672),
            "get %lu row from t_home_data with uid=%u",
            v20,
            v19);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = -1;
          v8 = *(_DWORD *)(v3 + 64);
        }
        std::vector<TableHomeData>::~vector((std::vector<TableHomeData> *const)(v3 + 160));
        v21 = ((v3 + 160) >> 3) + 2147450880;
        *(_WORD *)v21 = -1800;
        *(_BYTE *)(v21 + 2) = -8;
        std::string::~string((void *)(v3 + 544));
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 992));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
    }
    else
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
        "src/mysql_op_home_data.cpp",
        "selectHomeDataByUid",
        190);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v3 + 416),
        (const char (*)[27])"getHomeDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64);
      *(_DWORD *)(v3 + 64) = -1;
      v8 = *(_DWORD *)(v3 + 64);
    }
  }
  else
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
      3u,
      "src/mysql_op_home_data.cpp",
      "selectHomeDataByUid",
      183);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64);
    *(_DWORD *)(v3 + 64) = -1;
    v8 = *(_DWORD *)(v3 + 64);
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 896));
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 800));
  if ( v25 == (char *)v3 )
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1664LL, v25);
  }
  return v8;
};

// Line 257: range 000000000D429D06-000000000D42B381
int32_t __cdecl MysqlOpHomeData::insertOrUpdateHomeData(const TableHomeData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  mysqlpp::sql_int_unsigned uid; // esi
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  std::ostream *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 data_version; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  std::ostream *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  std::ostream *ostr; // [rsp+10h] [rbp-730h]
  std::ostream *v37; // [rsp+10h] [rbp-730h]
  char v38[1808]; // [rsp+30h] [rbp-710h] BYREF

  v1 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1760LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:274 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 5"
                        "44 32 14 table_name:281 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 56 14 _tc_g"
                        "uard_:258 896 56 9 <unknown> 992 56 9 <unknown> 1088 544 9 query:284";
  *(_QWORD *)(v1 + 16) = MysqlOpHomeData::insertOrUpdateHomeData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -218959118;
  v3[536862740] = -218959118;
  v3[536862742] = -218959118;
  v3[536862744] = -218959118;
  v3[536862746] = -234881024;
  v3[536862747] = -218959118;
  v3[536862749] = -234881024;
  v3[536862750] = -218959118;
  v3[536862752] = -234881024;
  v3[536862753] = -218959118;
  v3[536862771] = -202116109;
  v3[536862772] = -202116109;
  v3[536862773] = -202116109;
  v3[536862774] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 288),
    "insertOrUpdateHomeData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 800),
    (const std::string *)(v1 + 224),
    (const std::string *)(v1 + 288));
  std::string::~string((void *)(v1 + 224));
  *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 288));
  *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(row);
  }
  if ( row->uid )
  {
    if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(row);
    }
    if ( MysqlOpHomeData::getHomeDataDbIndex(row->uid) >= 0 )
    {
      *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 64, v1 + 224);
      MysqlOpHomeData::grabConn(v1 + 64);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
      {
        *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_home_data.cpp",
          "insertOrUpdateHomeData",
          277);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 480),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 480));
        *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        uid = row->uid;
        if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 95) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
        {
          uid = 32;
          __asan_report_store_n(v1 + 544, 32LL);
        }
        MysqlOpHomeData::getHomeDataTableNameByUid[abi:cxx11]((std::string *)(v1 + 544), uid);
        __asan_unpoison_stack_memory(v1 + 1088, 544LL);
        v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(char *)(((v1 + 1088) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1631) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 127) & 7) >= *(_BYTE *)(((v1 + 1631) >> 3) + 0x7FFF8000) )
        {
          v6 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v1 + 1088, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1088), v6, byte_1A7E83C0);
        v7 = std::operator<<<std::char_traits<char>>(v1 + 1088, "update ");
        v8 = std::operator<<<char>(v7, v1 + 544);
        v9 = std::operator<<<std::char_traits<char>>(v8, " set ");
        v10 = (std::ostream *)std::operator<<<std::char_traits<char>>(v9, " bin_data=");
        ostr = mysqlpp::operator<<(v10, quote).ostr;
        v11 = ((v1 + 96) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96), &row->bin_data, 0);
        v12 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 96));
        v13 = std::operator<<<std::char_traits<char>>(v12, ", data_version=");
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        v14 = std::ostream::operator<<(v13, row->data_version);
        v15 = std::operator<<<std::char_traits<char>>(v14, " where uid=");
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        v16 = std::ostream::operator<<(v15, row->uid);
        v17 = std::operator<<<std::char_traits<char>>(v16, " and data_version<=");
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        v18 = std::ostream::operator<<(v17, row->data_version);
        std::operator<<<std::char_traits<char>>(v18, " limit 1;");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96));
        v19 = ((v1 + 96) >> 3) + 2147450880;
        *(_WORD *)v19 = -1800;
        *(_BYTE *)(v19 + 2) = -8;
        v20 = ((v1 + 896) >> 3) + 2147450880;
        *(_DWORD *)v20 = 0;
        *(_WORD *)(v20 + 4) = 0;
        *(_BYTE *)(v20 + 6) = 0;
        if ( *(char *)(((v1 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 951) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 73) & 7) >= *(_BYTE *)(((v1 + 951) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 896, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 896));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 896));
        v21 = ((v1 + 896) >> 3) + 2147450880;
        *(_DWORD *)v21 = -117901064;
        *(_WORD *)(v21 + 4) = -1800;
        *(_BYTE *)(v21 + 6) = -8;
        if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1088)) )
        {
          *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/mysql_op_home_data.cpp",
            "insertOrUpdateHomeData",
            308);
          if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->data_version);
          }
          data_version = row->data_version;
          if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(row);
          }
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v1 + 608),
            "update uid=%u, data_version=%u failed, try to insert data",
            row->uid,
            data_version);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 608));
          *(_DWORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = -117901064;
          mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1088));
          v23 = std::operator<<<std::char_traits<char>>(v1 + 1088, "insert into ");
          v24 = std::operator<<<char>(v23, v1 + 544);
          std::operator<<<std::char_traits<char>>(v24, "(uid, bin_data, data_version) values");
          v25 = std::operator<<<std::char_traits<char>>(v1 + 1088, "(");
          if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(row);
          }
          v26 = std::ostream::operator<<(v25, row->uid);
          v27 = (std::ostream *)std::operator<<<std::char_traits<char>>(v26, ",");
          v37 = mysqlpp::operator<<(v27, quote).ostr;
          v28 = ((v1 + 160) >> 3) + 2147450880;
          *(_WORD *)v28 = 0;
          *(_BYTE *)(v28 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160), &row->bin_data, 0);
          v29 = mysqlpp::operator<<(v37, (mysqlpp::SQLTypeAdapter *)(v1 + 160));
          v30 = std::operator<<<std::char_traits<char>>(v29, ",");
          if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->data_version);
          }
          v31 = std::ostream::operator<<(v30, row->data_version);
          std::operator<<<std::char_traits<char>>(v31, ")");
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160));
          v32 = ((v1 + 160) >> 3) + 2147450880;
          *(_WORD *)v32 = -1800;
          *(_BYTE *)(v32 + 2) = -8;
          v33 = ((v1 + 992) >> 3) + 2147450880;
          *(_DWORD *)v33 = 0;
          *(_WORD *)(v33 + 4) = 0;
          *(_BYTE *)(v33 + 6) = 0;
          if ( *(char *)(((v1 + 992) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 1047) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 32 + 55) & 7) >= *(_BYTE *)(((v1 + 1047) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 992, 56LL);
          }
          mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 992));
          mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 992));
          v34 = ((v1 + 992) >> 3) + 2147450880;
          *(_DWORD *)v34 = -117901064;
          *(_WORD *)(v34 + 4) = -1800;
          *(_BYTE *)(v34 + 6) = -8;
        }
        v4 = 0;
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1088));
        std::string::~string((void *)(v1 + 544));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
    }
    else
    {
      *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 31) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_home_data.cpp",
        "insertOrUpdateHomeData",
        269);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v1 + 416),
        (const char (*)[27])"getHomeDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
      *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
  }
  else
  {
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_home_data.cpp",
      "insertOrUpdateHomeData",
      262);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 352), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 800));
  if ( v38 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80CC) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1760LL, v38);
  }
  return v4;
};

// Line 337: range 000000000D42B382-000000000D42C583
int32_t __cdecl MysqlOpHomeData::insertOrUpdateHomeBlockEndTime(uint32_t uid, int32_t end_time)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  mysqlpp::Connection *v5; // rsi
  time_t v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  std::ostream *v10; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int32_t v20; // [rsp+14h] [rbp-6CCh]
  char v22[1712]; // [rsp+30h] [rbp-6B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1664LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:354 96 24 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 14 table_name"
                        ":361 544 32 16 end_time_str:374 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 56 "
                        "14 _tc_guard_:338 896 56 9 <unknown> 992 544 9 query:364";
  *(_QWORD *)(v2 + 16) = MysqlOpHomeData::insertOrUpdateHomeBlockEndTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -234881024;
  v4[536862747] = -218959118;
  v4[536862749] = -234881024;
  v4[536862750] = -218959118;
  v4[536862768] = -202116109;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  v4[536862771] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "insertOrUpdateHomeBlockEndTime",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 800),
    (const std::string *)(v2 + 160),
    (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    if ( MysqlOpHomeData::getHomeDataDbIndex(uid) >= 0 )
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 64, v2 + 160);
      MysqlOpHomeData::grabConn(v2 + 64);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_home_data.cpp",
          "insertOrUpdateHomeBlockEndTime",
          357);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 416),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v20 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        MysqlOpHomeData::getHomeDataTableNameByUid[abi:cxx11]((std::string *)(v2 + 480), uid);
        __asan_unpoison_stack_memory(v2 + 992, 544LL);
        v5 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
        {
          v5 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v2 + 992, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 992), v5, byte_1A7E83C0);
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        v6 = end_time;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          v6 = 32LL;
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 544), v6);
        v7 = std::operator<<<std::char_traits<char>>(v2 + 992, "update ");
        v8 = std::operator<<<char>(v7, v2 + 480);
        v9 = std::operator<<<std::char_traits<char>>(v8, " set ");
        v10 = (std::ostream *)std::operator<<<std::char_traits<char>>(v9, " block_end_time=");
        ostr = mysqlpp::operator<<(v10, quote).ostr;
        v12 = ((v2 + 96) >> 3) + 2147450880;
        *(_WORD *)v12 = 0;
        *(_BYTE *)(v12 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v2 + 96, v2 + 544, 0LL);
        v13 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 96));
        v14 = std::operator<<<std::char_traits<char>>(v13, " where uid=");
        v15 = std::ostream::operator<<(v14, uid);
        std::operator<<<std::char_traits<char>>(v15, " limit 1;");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 96));
        v16 = ((v2 + 96) >> 3) + 2147450880;
        *(_WORD *)v16 = -1800;
        *(_BYTE *)(v16 + 2) = -8;
        v17 = ((v2 + 896) >> 3) + 2147450880;
        *(_DWORD *)v17 = 0;
        *(_WORD *)(v17 + 4) = 0;
        *(_BYTE *)(v17 + 6) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 951) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 951) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 896));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 896));
        v18 = ((v2 + 896) >> 3) + 2147450880;
        *(_DWORD *)v18 = -117901064;
        *(_WORD *)(v18 + 4) = -1800;
        *(_BYTE *)(v18 + 6) = -8;
        if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v2 + 992)) )
        {
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/mysql_op_home_data.cpp",
            "insertOrUpdateHomeBlockEndTime",
            387);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v2 + 608),
            "update uid=%u, block_end_time=%u failed, affected_rows = 0",
            uid,
            (unsigned int)end_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        }
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v20 = 0;
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 992));
        std::string::~string((void *)(v2 + 480));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 64));
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_home_data.cpp",
        "insertOrUpdateHomeBlockEndTime",
        349);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[27])"getHomeDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v20 = -1;
    }
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_home_data.cpp",
      "insertOrUpdateHomeBlockEndTime",
      342);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 288), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v20 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 800));
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1664LL, v22);
  }
  return v20;
};

// Line 414: range 000000000D42C725-000000000D42C739
void __cdecl GLOBAL__sub_I_mysql_op_home_data_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 414: range 000000000D42C584-000000000D42C724
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  const char *v9; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/mysql_op_home_data.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      v7 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v8 = 1;
        v9 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
