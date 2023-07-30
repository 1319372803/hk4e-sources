// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/mysql_op_player_data.cpp

// Line 35: range 000000000D4B8620-000000000D4B88FC
int32_t __cdecl MysqlOpPlayerData::init(uint32_t config_player_db_count)
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
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerData::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  if ( config_player_db_count )
  {
    MysqlOpPlayerData::player_db_count[0] = config_player_db_count;
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
      "src/mysql_op_player_data.cpp",
      "init",
      43);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v1 + 96),
           (const char (*)[46])"MysqlOpPlayerData init succ! player_db_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, MysqlOpPlayerData::player_db_count);
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
      "src/mysql_op_player_data.cpp",
      "init",
      38);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)(v1 + 32),
      (const char (*)[49])" config_player_db_count is 0, need check config!");
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

// Line 49: range 000000000D4B88FE-000000000D4B9544
int32_t __cdecl MysqlOpPlayerData::checkMysqlTableExistance()
{
  unsigned __int64 v0; // r13
  __int64 v1; // rax
  _DWORD *v2; // r12
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  uint32_t v5; // ecx
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // r15
  unsigned __int64 v16; // rax
  char *i; // r14
  int32_t result; // eax
  int v19; // [rsp+8h] [rbp-2B8h]
  int v20; // [rsp+8h] [rbp-2B8h]
  int32_t v21; // [rsp+Ch] [rbp-2B4h]
  uint32_t index; // [rsp+10h] [rbp-2B0h]
  uint32_t table_index; // [rsp+14h] [rbp-2ACh]
  uint32_t index_0; // [rsp+18h] [rbp-2A8h]
  uint32_t index_1; // [rsp+1Ch] [rbp-2A4h]
  uint32_t table_index_0; // [rsp+20h] [rbp-2A0h]
  char v27[656]; // [rsp+30h] [rbp-290h] BYREF

  v0 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_4(608LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 4 11 db_index:75 96 24 17 table_name_vec:57 160 24 17 ta"
                        "ble_name_vec:86 224 24 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 "
                        "32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v0 + 16) = MysqlOpPlayerData::checkMysqlTableExistance;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234753551;
  v2[536862722] = -234556927;
  v2[536862723] = -234881024;
  v2[536862724] = -218959118;
  v2[536862725] = -234881024;
  v2[536862726] = -218959118;
  v2[536862727] = -234881024;
  v2[536862728] = -218959118;
  v2[536862730] = -218959118;
  v2[536862732] = -218959118;
  v2[536862734] = -218959118;
  v2[536862736] = -218959118;
  v2[536862738] = -202116109;
  if ( MysqlOpPlayerData::player_db_count[0] )
  {
    for ( index = 0; index < MysqlOpPlayerData::player_db_count[0]; ++index )
    {
      v3 = ((v0 + 96) >> 3) + 2147450880;
      *(_WORD *)v3 = 0;
      *(_BYTE *)(v3 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v0 + 96));
      for ( table_index = 0; table_index <= 9; ++table_index )
      {
        *(_DWORD *)(((v0 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v0 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v0 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v0 + 127) & 7) >= *(_BYTE *)(((v0 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v0 + 352, 32LL);
        }
        MysqlOpPlayerData::getPlayerDataTableNameByIndex[abi:cxx11]((std::string *)(v0 + 352), table_index);
        std::vector<std::string>::push_back(
          (std::vector<std::string> *const)(v0 + 96),
          (std::vector<std::string>::value_type *)(v0 + 352));
        std::string::~string((void *)(v0 + 352));
        *(_DWORD *)(((v0 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( MysqlOpBase::checkMysqlTableExistance(index + 101, (const std::vector<std::string> *)(v0 + 96)) )
      {
        v21 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 96));
      v4 = ((v0 + 96) >> 3) + 2147450880;
      *(_WORD *)v4 = -1800;
      *(_BYTE *)(v4 + 2) = -8;
      if ( v19 != 1 )
        goto LABEL_52;
    }
    if ( MysqlOpPlayerData::player_db_count[0] < 0x50 )
    {
      for ( index_0 = MysqlOpPlayerData::player_db_count[0]; index_0 < 0x50; ++index_0 )
      {
        *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) = 4;
        v5 = index_0 + 101;
        if ( *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v0 + 80);
        *(_DWORD *)(v0 + 80) = v5;
        v6 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
        if ( *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v0 + 80);
        if ( common::midb::MySqlMgrT<std::mutex>::isIndexExist(v6, *(_DWORD *)(v0 + 80)) )
        {
          *(_DWORD *)(((v0 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v0 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v0 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v0 - 65) & 7) >= *(_BYTE *)(((v0 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v0 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v0 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/mysql_op_player_data.cpp",
            "checkMysqlTableExistance",
            79);
          v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 (common::milog::MiLogStream *const)(v0 + 416),
                 (const char (*)[18])" player_db_count:");
          v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v7,
                 MysqlOpPlayerData::player_db_count);
          v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" but db_index:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v0 + 80));
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" in xml has value!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v0 + 416));
          *(_DWORD *)(((v0 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v21 = -1;
          v11 = 0;
        }
        else
        {
          v11 = 1;
        }
        *(_BYTE *)(((v0 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v11 != 1 )
          goto LABEL_52;
      }
    }
    for ( index_1 = 0; index_1 <= 0x27; ++index_1 )
    {
      v12 = ((v0 + 160) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v0 + 160));
      for ( table_index_0 = 0; table_index_0 <= 9; ++table_index_0 )
      {
        *(_DWORD *)(((v0 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v0 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v0 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v0 - 1) & 7) >= *(_BYTE *)(((v0 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v0 + 480, 32LL);
        }
        MysqlOpPlayerData::getBlockDataTableNameByIndex[abi:cxx11]((std::string *)(v0 + 480), table_index_0);
        std::vector<std::string>::push_back(
          (std::vector<std::string> *const)(v0 + 160),
          (std::vector<std::string>::value_type *)(v0 + 480));
        std::string::~string((void *)(v0 + 480));
        *(_DWORD *)(((v0 + 480) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( MysqlOpBase::checkMysqlTableExistance(index_1 + 3001, (const std::vector<std::string> *)(v0 + 160)) )
      {
        v21 = -1;
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 160));
      v13 = ((v0 + 160) >> 3) + 2147450880;
      *(_WORD *)v13 = -1800;
      *(_BYTE *)(v13 + 2) = -8;
      if ( v20 != 1 )
        goto LABEL_52;
    }
    v14 = ((v0 + 224) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    *(_DWORD *)(((v0 + 544) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v0 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v0 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v0 + 544),
      "t_player_uid",
      (const std::allocator<char> *)(v0 + 48));
    *(_BYTE *)(((v0 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v0 + 64));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v0 + 224),
      (std::initializer_list<std::string >)__PAIR128__(1LL, v0 + 544),
      (const std::vector<std::string>::allocator_type *)(v0 + 64));
    v15 = MysqlOpBase::checkMysqlTableExistance(1u, (const std::vector<std::string> *)(v0 + 224)) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v0 + 224));
    v16 = ((v0 + 224) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v0 + 64));
    *(_BYTE *)(((v0 + 64) >> 3) + 0x7FFF8000) = -8;
    for ( i = (char *)(v0 + 576); i != (char *)(v0 + 544); std::string::~string(i) )
      i -= 32;
    *(_DWORD *)(((v0 + 544) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v0 + 48);
    if ( v15 )
      v21 = -1;
    else
      v21 = 0;
  }
  else
  {
    if ( *(char *)(((v0 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v0 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v0 + 63) & 7) >= *(_BYTE *)(((v0 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v0 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v0 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/mysql_op_player_data.cpp",
      "checkMysqlTableExistance",
      52);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      (common::milog::MiLogStream *const)(v0 + 288),
      (const char (*)[59])" player_db_count is 0, check app init call!  check config!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v0 + 288));
    v21 = -1;
  }
LABEL_52:
  result = v21;
  if ( v27 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 106: range 000000000D4B9546-000000000D4B9550
uint32_t __cdecl MysqlOpPlayerData::getPlayerUidDbIndex()
{
  return 1;
};

// Line 113: range 000000000D4B9552-000000000D4B9735
int32_t __cdecl MysqlOpPlayerData::getPlayerDataDbIndex(uint32_t uid)
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
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerData::getPlayerDataDbIndex;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( MysqlOpPlayerData::player_db_count[0] )
  {
    result = uid / 0xA % MysqlOpPlayerData::player_db_count[0] + 101;
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
      "src/mysql_op_player_data.cpp",
      "getPlayerDataDbIndex",
      116);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      (common::milog::MiLogStream *const)(v1 + 32),
      (const char (*)[59])" player_db_count is 0, check app init call!  check config!");
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

// Line 126: range 000000000D4B9736-000000000D4B97E4
std::string *__cdecl MysqlOpPlayerData::getPlayerDataTableNameByUid[abi:cxx11](std::string *retstr, uint32_t uid)
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
  MysqlOpPlayerData::getPlayerDataTableNameByIndex[abi:cxx11](retstr, v2);
  return retstr;
};

// Line 134: range 000000000D4B97E6-000000000D4B9954
std::string *__cdecl MysqlOpPlayerData::getPlayerDataTableNameByIndex[abi:cxx11](
        std::string *retstr,
        const uint32_t index)
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
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 32 7 buf:135";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerData::getPlayerDataTableNameByIndex[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -202116109;
  snprintf((char *)(v2 + 64), 0x20uLL, "t_player_data_%u", index);
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

// Line 142: range 000000000D4B9956-000000000D4B99B5
// local variable allocation has failed, the output may be wrong!
common::midb::MysqlConnPtr __cdecl MysqlOpPlayerData::grabConn(uint32_t db_index)
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

// Line 147: range 000000000D4B99B6-000000000D4B99FD
uint32_t __cdecl MysqlOpPlayerData::getBlockDataDbIndex(const uint32_t uid)
{
  return uid / 0xA % 0x28 + 3001;
};

// Line 155: range 000000000D4B99FE-000000000D4B9AAC
std::string *__cdecl MysqlOpPlayerData::getBlockDataTableNameByUid[abi:cxx11](std::string *retstr, const uint32_t uid)
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
  MysqlOpPlayerData::getBlockDataTableNameByIndex[abi:cxx11](retstr, v2);
  return retstr;
};

// Line 163: range 000000000D4B9AAE-000000000D4B9C1C
std::string *__cdecl MysqlOpPlayerData::getBlockDataTableNameByIndex[abi:cxx11](
        std::string *retstr,
        const uint32_t index)
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
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 32 7 buf:164";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerData::getBlockDataTableNameByIndex[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -202116109;
  snprintf((char *)(v2 + 64), 0x20uLL, "t_block_data_%u", index);
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

// Line 175: range 000000000D4B9C1E-000000000D4BABBB
int32_t __cdecl MysqlOpPlayerData::selectPlayerUidByAccount(
        uint32_t account_type,
        const std::string *account_uid,
        TablePlayerUid *row,
        bool *is_account_exist)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rsi
  unsigned __int64 v8; // rax
  int32_t v9; // r14d
  mysqlpp::Connection *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v13; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  std::logic_error *exception; // rdi
  const TablePlayerUid *v19; // rax
  const char *v20; // r14
  std::vector<TablePlayerUid>::size_type v21; // rax
  unsigned __int64 v22; // rax
  char v27[1520]; // [rsp+40h] [rbp-5F0h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1472LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:176 96 16 9 <unknown> 128 16 12 conn_ptr:181 160"
                        " 24 9 <unknown> 224 24 11 row_vec:195 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 32 9 <unknown> 608 56 14 span_proxy:177 704 56 14 _tc_guard_:179 800 544 9 query:189";
  *(_QWORD *)(v4 + 16) = MysqlOpPlayerData::selectPlayerUidByAccount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -234881024;
  v6[536862741] = -218959118;
  v6[536862743] = -234881024;
  v6[536862744] = -218959118;
  v6[536862762] = -202116109;
  v6[536862763] = -202116109;
  v6[536862764] = -202116109;
  v6[536862765] = -202116109;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 80);
  *(_DWORD *)(v4 + 80) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v4 + 96), "selectPlayerUidByAccount");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v4 + 608),
    v7,
    *(opentracing::v3::string_view *)(v4 + 96),
    0LL,
    0,
    (const int *)(v4 + 80));
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
  v8 = ((v4 + 704) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_WORD *)(v8 + 4) = 0;
  *(_BYTE *)(v8 + 6) = 0;
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "selectPlayerUidByAccount",
    (const std::allocator<char> *)(v4 + 64));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 704),
    (const std::string *)(v4 + 288),
    (const std::string *)(v4 + 352));
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 128, v4 + 288);
  MysqlOpPlayerData::grabConn(v4 + 128);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 128)) )
  {
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "selectPlayerUidByAccount",
      184);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 416),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = -1;
    v9 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    __asan_unpoison_stack_memory(v4 + 800, 544LL);
    v10 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 127) & 7) >= *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) )
    {
      v10 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 800, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v4 + 800),
      v10,
      "select uid, account_type, account_uid, create_time, ext, tag from t_player_uid ");
    v11 = std::operator<<<std::char_traits<char>>(v4 + 800, " where account_type=");
    v12 = std::ostream::operator<<(v11, account_type);
    v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, " and account_uid=");
    ostr = mysqlpp::operator<<(v13, quote).ostr;
    v15 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v15 = 0;
    *(_BYTE *)(v15 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 160, account_uid, 0LL);
    mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 160));
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 160));
    v16 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v16 = -1800;
    *(_BYTE *)(v16 + 2) = -8;
    v17 = ((v4 + 224) >> 3) + 2147450880;
    *(_WORD *)v17 = 0;
    *(_BYTE *)(v17 + 2) = 0;
    std::vector<TablePlayerUid>::vector((std::vector<TablePlayerUid> *const)(v4 + 224));
    mysqlpp::Query::storein<std::vector<TablePlayerUid>>(
      (mysqlpp::Query *const)(v4 + 800),
      (std::vector<TablePlayerUid> *)(v4 + 224));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v4 + 800)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<TablePlayerUid>::empty((const std::vector<TablePlayerUid> *const)(v4 + 224)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 0;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = 0;
      v9 = *(_DWORD *)(v4 + 80);
    }
    else if ( std::vector<TablePlayerUid>::size((const std::vector<TablePlayerUid> *const)(v4 + 224)) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 1;
      v19 = std::vector<TablePlayerUid>::operator[]((std::vector<TablePlayerUid> *const)(v4 + 224), 0LL);
      TablePlayerUid::operator=(row, v19);
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = 0;
      v9 = *(_DWORD *)(v4 + 80);
    }
    else
    {
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 63) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_player_data.cpp",
        "selectPlayerUidByAccount",
        219);
      v20 = (const char *)std::string::c_str(account_uid);
      v21 = std::vector<TablePlayerUid>::size((const std::vector<TablePlayerUid> *const)(v4 + 224));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 480),
        "get %lu row from t_player_uid with account_type=%u, account_uid=%s",
        v21,
        account_type,
        v20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = -1;
      v9 = *(_DWORD *)(v4 + 80);
    }
    std::vector<TablePlayerUid>::~vector((std::vector<TablePlayerUid> *const)(v4 + 224));
    v22 = ((v4 + 224) >> 3) + 2147450880;
    *(_WORD *)v22 = -1800;
    *(_BYTE *)(v22 + 2) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 800));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 704));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 608));
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B0) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1472LL, v27);
  }
  return v9;
};

// Line 234: range 000000000D4BABBC-000000000D4BBA89
int32_t __cdecl MysqlOpPlayerData::selectPlayerUidByUid(uint32_t uid, TablePlayerUid *row, bool *is_account_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rsi
  unsigned __int64 v7; // rax
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::logic_error *exception; // rdi
  const TablePlayerUid *v13; // rax
  std::vector<TablePlayerUid>::size_type v14; // rax
  unsigned __int64 v15; // rax
  char v19[1456]; // [rsp+40h] [rbp-5B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1408LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:235 96 16 9 <unknown> 128 16 12 conn_ptr:240 160"
                        " 24 11 row_vec:254 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 56 14 span_proxy:236 640 56 14 _tc_guard_:238 736 544 9 query:248";
  *(_QWORD *)(v3 + 16) = MysqlOpPlayerData::selectPlayerUidByUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  v5[536862763] = -202116109;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 80);
  *(_DWORD *)(v3 + 80) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v3 + 96), "selectPlayerUidByUid");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v3 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v3 + 544),
    v6,
    *(opentracing::v3::string_view *)(v3 + 96),
    0LL,
    0,
    (const int *)(v3 + 80));
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v3 + 640) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "selectPlayerUidByUid",
    (const std::allocator<char> *)(v3 + 64));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 640),
    (const std::string *)(v3 + 224),
    (const std::string *)(v3 + 288));
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 128, v3 + 224);
  MysqlOpPlayerData::grabConn(v3 + 128);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
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
      "src/mysql_op_player_data.cpp",
      "selectPlayerUidByUid",
      243);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 352),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = -1;
    v8 = *(_DWORD *)(v3 + 80);
  }
  else
  {
    __asan_unpoison_stack_memory(v3 + 736, 544LL);
    v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
    {
      v9 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 736, 544LL);
    }
    mysqlpp::Connection::query(
      (mysqlpp::Query *)(v3 + 736),
      v9,
      "select uid, account_type, account_uid, create_time, ext, tag from t_player_uid ");
    v10 = std::operator<<<std::char_traits<char>>(v3 + 736, " where uid=");
    std::ostream::operator<<(v10, uid);
    v11 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v11 = 0;
    *(_BYTE *)(v11 + 2) = 0;
    std::vector<TablePlayerUid>::vector((std::vector<TablePlayerUid> *const)(v3 + 160));
    mysqlpp::Query::storein<std::vector<TablePlayerUid>>(
      (mysqlpp::Query *const)(v3 + 736),
      (std::vector<TablePlayerUid> *)(v3 + 160));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 736)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<TablePlayerUid>::empty((const std::vector<TablePlayerUid> *const)(v3 + 160)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 0;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      v8 = *(_DWORD *)(v3 + 80);
    }
    else if ( std::vector<TablePlayerUid>::size((const std::vector<TablePlayerUid> *const)(v3 + 160)) == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_account_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_account_exist >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(is_account_exist);
      }
      *is_account_exist = 1;
      v13 = std::vector<TablePlayerUid>::operator[]((std::vector<TablePlayerUid> *const)(v3 + 160), 0LL);
      TablePlayerUid::operator=(row, v13);
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      v8 = *(_DWORD *)(v3 + 80);
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
        "src/mysql_op_player_data.cpp",
        "selectPlayerUidByUid",
        278);
      v14 = std::vector<TablePlayerUid>::size((const std::vector<TablePlayerUid> *const)(v3 + 160));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 416),
        "get %lu row from t_player_uid with uid=%u",
        v14,
        uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = -1;
      v8 = *(_DWORD *)(v3 + 80);
    }
    std::vector<TablePlayerUid>::~vector((std::vector<TablePlayerUid> *const)(v3 + 160));
    v15 = ((v3 + 160) >> 3) + 2147450880;
    *(_WORD *)v15 = -1800;
    *(_BYTE *)(v15 + 2) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 736));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 640));
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 544));
  if ( v19 == (char *)v3 )
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1408LL, v19);
  }
  return v8;
};

// Line 292: range 000000000D4BBA8A-000000000D4BBD90
std::string *__cdecl genExtJson(std::string *retstr, uint32_t platform)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Json::Value_0 *v5; // rax
  unsigned __int64 v6; // rax
  char v8[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 40 7 ext:294 128 40 9 <unknown> 208 48 10 writer:293";
  *(_QWORD *)(v2 + 16) = genExtJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  Json::FastWriter::FastWriter((Json::FastWriter *const)(v2 + 208));
  Json::Value::Value(v2 + 48, 0LL);
  Json::Value::Value((Json::Value *)(v2 + 128), platform);
  v5 = Json::Value::operator[]((Json::Value_0 *const)(v2 + 48), "reg_platform");
  Json::Value::operator=(v5, (Json::Value_0 *)(v2 + 128));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 128));
  v6 = ((v2 + 128) >> 3) + 2147450880;
  *(_DWORD *)v6 = -117901064;
  *(_BYTE *)(v6 + 4) = -8;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  Json::FastWriter::write[abi:cxx11](retstr, (Json::FastWriter *const)(v2 + 208), (const Json::Value *)(v2 + 48));
  Json::Value::~Value((Json::Value_0 *const)(v2 + 48));
  Json::FastWriter::~FastWriter((Json::FastWriter *const)(v2 + 208));
  if ( v8 == (char *)v2 )
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

// Line 302: range 000000000D4BBD92-000000000D4BCF00
int32_t __cdecl MysqlOpPlayerData::insertPlayerUidByAccount(
        uint32_t account_type,
        const std::string *account_uid,
        uint32_t platform,
        TablePlayerUid *row)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v7; // rsi
  unsigned __int64 v8; // rax
  int32_t v9; // r14d
  mysqlpp::Connection *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v13; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  mysqlpp::sql_int_unsigned inserted; // esi
  char v32[1680]; // [rsp+30h] [rbp-690h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1632LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:303 96 16 9 <unknown> 128 16 12 conn_ptr:308 160"
                        " 24 9 <unknown> 224 24 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 "
                        "32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 56 14 span_proxy:304 768 56 14 _tc_guar"
                        "d_:306 864 56 9 <unknown> 960 544 9 query:316";
  *(_QWORD *)(v4 + 16) = MysqlOpPlayerData::insertPlayerUidByAccount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -234881024;
  v6[536862743] = -218959118;
  v6[536862745] = -234881024;
  v6[536862746] = -218959118;
  v6[536862748] = -234881024;
  v6[536862749] = -218959118;
  v6[536862767] = -202116109;
  v6[536862768] = -202116109;
  v6[536862769] = -202116109;
  v6[536862770] = -202116109;
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 80);
  *(_DWORD *)(v4 + 80) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v4 + 96), "insertPlayerUidByAccount");
  v7 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v4 + 672),
    v7,
    *(opentracing::v3::string_view *)(v4 + 96),
    0LL,
    0,
    (const int *)(v4 + 80));
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -1800;
  v8 = ((v4 + 768) >> 3) + 2147450880;
  *(_DWORD *)v8 = 0;
  *(_WORD *)(v8 + 4) = 0;
  *(_BYTE *)(v8 + 6) = 0;
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 352),
    "insertPlayerUidByAccount",
    (const std::allocator<char> *)(v4 + 64));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 768),
    (const std::string *)(v4 + 288),
    (const std::string *)(v4 + 352));
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 352));
  *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 64);
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 128, v4 + 288);
  MysqlOpPlayerData::grabConn(v4 + 128);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 128)) )
  {
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "insertPlayerUidByAccount",
      311);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 416),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = -1;
    v9 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    __asan_unpoison_stack_memory(v4 + 960, 544LL);
    v10 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1503) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 1503) >> 3) + 0x7FFF8000) )
    {
      v10 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 960, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v4 + 960), v10, byte_1A83CFA0);
    std::operator<<<std::char_traits<char>>(
      v4 + 960,
      "insert into t_player_uid(account_type, account_uid, ext, tag) values");
    v11 = std::operator<<<std::char_traits<char>>(v4 + 960, "(");
    v12 = std::ostream::operator<<(v11, account_type);
    v13 = (std::ostream *)std::operator<<<std::char_traits<char>>(v12, ",");
    ostr = mysqlpp::operator<<(v13, quote).ostr;
    v15 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v15 = 0;
    *(_BYTE *)(v15 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 160, account_uid, 0LL);
    v16 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 160));
    v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, ",");
    v18 = mysqlpp::operator<<(v17, quote).ostr;
    v19 = ((v4 + 224) >> 3) + 2147450880;
    *(_WORD *)v19 = 0;
    *(_BYTE *)(v19 + 2) = 0;
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 1) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 480, 32LL);
    }
    genExtJson((std::string *)(v4 + 480), platform);
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 224, v4 + 480, 0LL);
    v20 = mysqlpp::operator<<(v18, (mysqlpp::SQLTypeAdapter *)(v4 + 224));
    v21 = std::operator<<<std::char_traits<char>>(v20, ",");
    v22 = std::ostream::operator<<(v21, 0LL);
    std::operator<<<std::char_traits<char>>(v22, ")");
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 224));
    v23 = ((v4 + 224) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    std::string::~string((void *)(v4 + 480));
    *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 160));
    v24 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v24 = -1800;
    *(_BYTE *)(v24 + 2) = -8;
    v25 = ((v4 + 864) >> 3) + 2147450880;
    *(_DWORD *)v25 = 0;
    *(_WORD *)(v25 + 4) = 0;
    *(_BYTE *)(v25 + 6) = 0;
    if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 919) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 919) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 864, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v4 + 864));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v4 + 864));
    v26 = ((v4 + 864) >> 3) + 2147450880;
    *(_DWORD *)v26 = -117901064;
    *(_WORD *)(v26 + 4) = -1800;
    *(_BYTE *)(v26 + 6) = -8;
    inserted = mysqlpp::Query::insert_id((mysqlpp::Query *const)(v4 + 960));
    if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(row);
    }
    row->uid = inserted;
    if ( *(_BYTE *)(((unsigned __int64)&row->account_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->account_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&row->account_type);
    }
    row->account_type = account_type;
    std::string::operator=(&row->account_uid, account_uid);
    if ( *(_BYTE *)(((unsigned __int64)&row->tag >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&row->tag >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&row->tag);
    }
    row->tag = 0;
    if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 80);
    *(_DWORD *)(v4 + 80) = 0;
    v9 = *(_DWORD *)(v4 + 80);
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 960));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 128));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 768));
  SpanProxy::~SpanProxy((SpanProxy *const)(v4 + 672));
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80BC) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80C4) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1632LL, v32);
  }
  return v9;
};

// Line 356: range 000000000D4BCF02-000000000D4BDAF8
int32_t __cdecl MysqlOpPlayerData::getPlayerUidCount(uint32_t *count)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  mysqlpp::Connection *v5; // rsi
  unsigned __int64 v6; // rax
  std::logic_error *exception; // rdi
  mysqlpp::Row *v8; // rax
  const mysqlpp::String *v9; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  char v13[1392]; // [rsp+30h] [rbp-570h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1344LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:359 96 32 9 <unknown> 160 32 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 56 14 _tc_guard_:357 512 120 7 res:"
                        "373 672 544 9 query:367";
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerData::getPlayerUidCount;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -234881024;
  v3[536862735] = -218959118;
  v3[536862739] = -234881024;
  v3[536862740] = -218959118;
  v3[536862758] = -202116109;
  v3[536862759] = -202116109;
  v3[536862760] = -202116109;
  v3[536862761] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 160),
    "getPlayerUidCount",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 416),
    (const std::string *)(v1 + 96),
    (const std::string *)(v1 + 160));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 160));
  *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 64, v1 + 96);
  MysqlOpPlayerData::grabConn(v1 + 64);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
  {
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "getPlayerUidCount",
      362);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v1 + 224),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  else
  {
    __asan_unpoison_stack_memory(v1 + 672, 544LL);
    v5 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(char *)(((v1 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 1215) >> 3) + 0x7FFF8000) )
    {
      v5 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v1 + 672, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 672), v5, byte_1A83CFA0);
    std::operator<<<std::char_traits<char>>(
      v1 + 672,
      "SELECT ifnull(max(uid), 0) - ifnull(min(uid), 0) + 1 AS uid_count FROM t_player_uid");
    v6 = ((v1 + 512) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_WORD *)(v6 + 12) = 0;
    *(_BYTE *)(v6 + 14) = 0;
    if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 631) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 631) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 512, 120LL);
    }
    mysqlpp::Query::store((mysqlpp::Query *)(v1 + 512));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v1 + 672)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    if ( std::vector<mysqlpp::Row>::size((const std::vector<mysqlpp::Row> *const)(v1 + 600)) == 1 )
    {
      v8 = std::vector<mysqlpp::Row>::operator[]((std::vector<mysqlpp::Row> *const)(v1 + 600), 0LL);
      v9 = (const mysqlpp::String *)mysqlpp::Row::operator[](v8);
      v10 = mysqlpp::String::operator unsigned int(v9);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(count);
      }
      *count = v10;
      v4 = 0;
    }
    else
    {
      *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_data.cpp",
        "getPlayerUidCount",
        385);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 288), "select count(uid) failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
      *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
    mysqlpp::StoreQueryResult::~StoreQueryResult((mysqlpp::StoreQueryResult *const)(v1 + 512));
    v11 = ((v1 + 512) >> 3) + 2147450880;
    *(_DWORD *)v11 = -117901064;
    *(_DWORD *)(v11 + 4) = -117901064;
    *(_DWORD *)(v11 + 8) = -117901064;
    *(_WORD *)(v11 + 12) = -1800;
    *(_BYTE *)(v11 + 14) = -8;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 672));
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 416));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1344LL, v13);
  }
  return v4;
};

// Line 400: range 000000000D4BDAFA-000000000D4BEF6C
__int64 __fastcall MysqlOpPlayerData::selectPlayerDataByUid(
        uint32_t uid,
        TablePlayerData *row,
        unsigned __int64 is_exist)
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
  const TablePlayerData *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int v19; // r14d
  std::vector<TablePlayerData>::size_type v20; // rdx
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
  *(_QWORD *)(v3 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 ret:401 80 4 7 uid:399 96 16 9 <unknown> 128 16 12 c"
                        "onn_ptr:420 160 24 11 row_vec:435 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 3"
                        "2 9 <unknown> 480 32 9 <unknown> 544 32 14 table_name:429 608 32 9 <unknown> 672 32 9 <unknown> "
                        "736 32 9 <unknown> 800 56 14 span_proxy:402 896 56 14 _tc_guard_:404 992 544 9 query:428";
  *(_QWORD *)(v3 + 16) = MysqlOpPlayerData::selectPlayerDataByUid;
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
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v3 + 96), "selectPlayerDataByUid");
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
    "selectPlayerDataByUid",
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
    if ( MysqlOpPlayerData::getPlayerDataDbIndex(*(_DWORD *)(v3 + 80)) >= 0 )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 128, v3 + 224);
      MysqlOpPlayerData::grabConn(v3 + 128);
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
          "src/mysql_op_player_data.cpp",
          "selectPlayerDataByUid",
          423);
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
        mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 992), v9, byte_1A83CFA0);
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        v10 = *(_DWORD *)(v3 + 80);
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          v10 = 32;
          __asan_report_store_n(v3 + 544, 32LL);
        }
        MysqlOpPlayerData::getPlayerDataTableNameByUid[abi:cxx11]((std::string *)(v3 + 544), v10);
        v11 = std::operator<<<std::char_traits<char>>(
                v3 + 992,
                "select uid, nickname, level, exp, vip_point, json_data, bin_data, extra_bin_data, data_version, tag_list"
                ", is_delete from ");
        v12 = std::operator<<<char>(v11, v3 + 544);
        v13 = std::operator<<<std::char_traits<char>>(v12, " where uid=");
        std::ostream::operator<<(v13, *(unsigned int *)(v3 + 80));
        v14 = ((v3 + 160) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        std::vector<TablePlayerData>::vector((std::vector<TablePlayerData> *const)(v3 + 160));
        mysqlpp::Query::storein<std::vector<TablePlayerData>>(
          (mysqlpp::Query *const)(v3 + 992),
          (std::vector<TablePlayerData> *)(v3 + 160));
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
        if ( std::vector<TablePlayerData>::empty((const std::vector<TablePlayerData> *const)(v3 + 160)) )
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
        else if ( std::vector<TablePlayerData>::size((const std::vector<TablePlayerData> *const)(v3 + 160)) == 1 )
        {
          if ( *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) != 0
            && (char)(is_exist & 7) >= *(_BYTE *)((is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_exist);
          }
          *(_BYTE *)is_exist = 1;
          v16 = std::vector<TablePlayerData>::operator[]((std::vector<TablePlayerData> *const)(v3 + 160), 0LL);
          TablePlayerData::operator=(row, v16);
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
              "src/mysql_op_player_data.cpp",
              "selectPlayerDataByUid",
              460);
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
            "src/mysql_op_player_data.cpp",
            "selectPlayerDataByUid",
            467);
          v19 = *(_DWORD *)(v3 + 80);
          v20 = std::vector<TablePlayerData>::size((const std::vector<TablePlayerData> *const)(v3 + 160));
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v3 + 672),
            "get %lu row from t_player_data with uid=%u",
            v20,
            v19);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64);
          *(_DWORD *)(v3 + 64) = -1;
          v8 = *(_DWORD *)(v3 + 64);
        }
        std::vector<TablePlayerData>::~vector((std::vector<TablePlayerData> *const)(v3 + 160));
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
        "src/mysql_op_player_data.cpp",
        "selectPlayerDataByUid",
        415);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 416),
        (const char (*)[29])"getPlayerDataDbIndex failed!");
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
      "src/mysql_op_player_data.cpp",
      "selectPlayerDataByUid",
      408);
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

// Line 482: range 000000000D4BEF6E-000000000D4C0258
int32_t __cdecl MysqlOpPlayerData::selectPlayerJsonAndExtraBinDataByUid(
        uint32_t uid,
        TablePlayerJsonAndExtraBinData *row,
        bool *is_exist)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rsi
  unsigned __int64 v7; // rax
  int32_t v8; // r14d
  mysqlpp::Connection *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  std::logic_error *exception; // rdi
  const TablePlayerJsonAndExtraBinData *v15; // rax
  std::vector<TablePlayerJsonAndExtraBinData>::size_type v16; // rax
  unsigned __int64 v17; // rax
  char v21[1648]; // [rsp+40h] [rbp-670h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1600LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:483 96 16 9 <unknown> 128 16 12 conn_ptr:502 160"
                        " 24 11 row_vec:517 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown> 544 32 14 table_name:511 608 32 9 <unknown> 672 32 9 <unknown> 736 56 14 span_"
                        "proxy:484 832 56 14 _tc_guard_:486 928 544 9 query:510";
  *(_QWORD *)(v3 + 16) = MysqlOpPlayerData::selectPlayerJsonAndExtraBinDataByUid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
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
  v5[536862744] = -234881024;
  v5[536862745] = -218959118;
  v5[536862747] = -234881024;
  v5[536862748] = -218959118;
  v5[536862766] = -202116109;
  v5[536862767] = -202116109;
  v5[536862768] = -202116109;
  v5[536862769] = -202116109;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 80);
  *(_DWORD *)(v3 + 80) = 0;
  opentracing::v3::string_view::string_view(
    (opentracing::v3::string_view *const)(v3 + 96),
    "selectPlayerJsonAndExtraBinDataByUid");
  v6 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v3 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v3 + 736),
    v6,
    *(opentracing::v3::string_view *)(v3 + 96),
    0LL,
    0,
    (const int *)(v3 + 80));
  *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
  v7 = ((v3 + 832) >> 3) + 2147450880;
  *(_DWORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 6) = 0;
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "selectPlayerJsonAndExtraBinDataByUid",
    (const std::allocator<char> *)(v3 + 64));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 832),
    (const std::string *)(v3 + 224),
    (const std::string *)(v3 + 288));
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    if ( MysqlOpPlayerData::getPlayerDataDbIndex(uid) >= 0 )
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v3 + 128, v3 + 224);
      MysqlOpPlayerData::grabConn(v3 + 128);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
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
          3u,
          "src/mysql_op_player_data.cpp",
          "selectPlayerJsonAndExtraBinDataByUid",
          505);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 480),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80);
        *(_DWORD *)(v3 + 80) = -1;
        v8 = *(_DWORD *)(v3 + 80);
      }
      else
      {
        __asan_unpoison_stack_memory(v3 + 928, 544LL);
        v9 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
        {
          v9 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v3 + 928, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 928), v9, byte_1A83CFA0);
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        MysqlOpPlayerData::getPlayerDataTableNameByUid[abi:cxx11]((std::string *)(v3 + 544), uid);
        v10 = std::operator<<<std::char_traits<char>>(
                v3 + 928,
                "select uid, json_data, extra_bin_data, before_login_bin_data from ");
        v11 = std::operator<<<char>(v10, v3 + 544);
        v12 = std::operator<<<std::char_traits<char>>(v11, " where uid=");
        std::ostream::operator<<(v12, uid);
        v13 = ((v3 + 160) >> 3) + 2147450880;
        *(_WORD *)v13 = 0;
        *(_BYTE *)(v13 + 2) = 0;
        std::vector<TablePlayerJsonAndExtraBinData>::vector((std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160));
        mysqlpp::Query::storein<std::vector<TablePlayerJsonAndExtraBinData>>(
          (mysqlpp::Query *const)(v3 + 928),
          (std::vector<TablePlayerJsonAndExtraBinData> *)(v3 + 160));
        if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 928)) )
        {
          exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
          std::logic_error::logic_error(exception, "query has error");
          __asan_handle_no_return(exception);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::logic_error,
            (void (__fastcall *)(void *))&std::logic_error::~logic_error);
        }
        if ( std::vector<TablePlayerJsonAndExtraBinData>::empty((const std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_exist);
          }
          *is_exist = 0;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80);
          *(_DWORD *)(v3 + 80) = 0;
          v8 = *(_DWORD *)(v3 + 80);
        }
        else if ( std::vector<TablePlayerJsonAndExtraBinData>::size((const std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160)) == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)is_exist & 7) >= *(_BYTE *)(((unsigned __int64)is_exist >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(is_exist);
          }
          *is_exist = 1;
          v15 = std::vector<TablePlayerJsonAndExtraBinData>::operator[](
                  (std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160),
                  0LL);
          TablePlayerJsonAndExtraBinData::operator=(row, v15);
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80);
          *(_DWORD *)(v3 + 80) = 0;
          v8 = *(_DWORD *)(v3 + 80);
        }
        else
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
            "src/mysql_op_player_data.cpp",
            "selectPlayerJsonAndExtraBinDataByUid",
            541);
          v16 = std::vector<TablePlayerJsonAndExtraBinData>::size((const std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160));
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v3 + 608),
            "get %lu row from t_player_data with uid=%u",
            v16,
            uid);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80);
          *(_DWORD *)(v3 + 80) = -1;
          v8 = *(_DWORD *)(v3 + 80);
        }
        std::vector<TablePlayerJsonAndExtraBinData>::~vector((std::vector<TablePlayerJsonAndExtraBinData> *const)(v3 + 160));
        v17 = ((v3 + 160) >> 3) + 2147450880;
        *(_WORD *)v17 = -1800;
        *(_BYTE *)(v17 + 2) = -8;
        std::string::~string((void *)(v3 + 544));
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 928));
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
        "src/mysql_op_player_data.cpp",
        "selectPlayerJsonAndExtraBinDataByUid",
        497);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 416),
        (const char (*)[29])"getPlayerDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = -1;
      v8 = *(_DWORD *)(v3 + 80);
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
      "src/mysql_op_player_data.cpp",
      "selectPlayerJsonAndExtraBinDataByUid",
      490);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 352), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80);
    *(_DWORD *)(v3 + 80) = -1;
    v8 = *(_DWORD *)(v3 + 80);
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 832));
  SpanProxy::~SpanProxy((SpanProxy *const)(v3 + 736));
  if ( v21 == (char *)v3 )
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1600LL, v21);
  }
  return v8;
};

// Line 556: range 000000000D4C025A-000000000D4C2353
int32_t __cdecl MysqlOpPlayerData::insertOrUpdatePlayerData(const TablePlayerData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  uint32_t uid; // esi
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
  std::ostream *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  std::ostream *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  std::ostream *v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  std::ostream *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 data_version; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  std::ostream *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  std::ostream *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  std::ostream *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  std::ostream *v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  std::ostream *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  std::ostream *ostr; // [rsp+10h] [rbp-930h]
  std::ostream *v81; // [rsp+10h] [rbp-930h]
  std::ostream *v82; // [rsp+10h] [rbp-930h]
  std::ostream *v83; // [rsp+10h] [rbp-930h]
  std::ostream *v84; // [rsp+10h] [rbp-930h]
  std::ostream *v85; // [rsp+10h] [rbp-930h]
  std::ostream *v86; // [rsp+10h] [rbp-930h]
  std::ostream *v87; // [rsp+10h] [rbp-930h]
  std::ostream *v88; // [rsp+10h] [rbp-930h]
  std::ostream *v89; // [rsp+10h] [rbp-930h]
  char v90[2320]; // [rsp+30h] [rbp-910h] BYREF

  v1 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2272LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "26 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:573 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 24 9 <unknown> 288 24 9 <unknown> 352 24 9 <unknown> 416 24 9 <unknown> 480 24 9 <unknown> 5"
                        "44 24 9 <unknown> 608 24 9 <unknown> 672 24 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 86"
                        "4 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 14 table_name:580 1120 32 9 <unkn"
                        "own> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 56 14 _tc_guard_:557 1408 56 9 <unknown> 1504 "
                        "56 9 <unknown> 1600 544 9 query:583";
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerData::insertOrUpdatePlayerData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862731] = -234881024;
  v3[536862732] = -218959118;
  v3[536862733] = -234881024;
  v3[536862734] = -218959118;
  v3[536862735] = -234881024;
  v3[536862736] = -218959118;
  v3[536862737] = -234881024;
  v3[536862738] = -218959118;
  v3[536862739] = -234881024;
  v3[536862740] = -218959118;
  v3[536862741] = -234881024;
  v3[536862742] = -218959118;
  v3[536862744] = -218959118;
  v3[536862746] = -218959118;
  v3[536862748] = -218959118;
  v3[536862750] = -218959118;
  v3[536862752] = -218959118;
  v3[536862754] = -218959118;
  v3[536862756] = -218959118;
  v3[536862758] = -218959118;
  v3[536862760] = -218959118;
  v3[536862762] = -234881024;
  v3[536862763] = -218959118;
  v3[536862765] = -234881024;
  v3[536862766] = -218959118;
  v3[536862768] = -234881024;
  v3[536862769] = -218959118;
  v3[536862787] = -202116109;
  v3[536862788] = -202116109;
  v3[536862789] = -202116109;
  v3[536862790] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 800),
    "insertOrUpdatePlayerData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 736),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 1312),
    (const std::string *)(v1 + 736),
    (const std::string *)(v1 + 800));
  std::string::~string((void *)(v1 + 736));
  *(_DWORD *)(((v1 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v1 + 800));
  *(_DWORD *)(((v1 + 800) >> 3) + 0x7FFF8000) = -117901064;
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
    if ( MysqlOpPlayerData::getPlayerDataDbIndex(row->uid) >= 0 )
    {
      *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v1 + 64, v1 + 736);
      MysqlOpPlayerData::grabConn(v1 + 64);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
      {
        *(_DWORD *)(((v1 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 31) & 7) >= *(_BYTE *)(((v1 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_player_data.cpp",
          "insertOrUpdatePlayerData",
          576);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 992),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 992));
        *(_DWORD *)(((v1 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
      }
      else
      {
        *(_DWORD *)(((v1 + 1056) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        uid = row->uid;
        if ( *(char *)(((v1 + 1056) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1087) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 95) & 7) >= *(_BYTE *)(((v1 + 1087) >> 3) + 0x7FFF8000) )
        {
          uid = 32;
          __asan_report_store_n(v1 + 1056, 32LL);
        }
        MysqlOpPlayerData::getPlayerDataTableNameByUid[abi:cxx11]((std::string *)(v1 + 1056), uid);
        __asan_unpoison_stack_memory(v1 + 1600, 544LL);
        v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(char *)(((v1 + 1600) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 2143) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 32 + 127) & 7) >= *(_BYTE *)(((v1 + 2143) >> 3) + 0x7FFF8000) )
        {
          v6 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v1 + 1600, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1600), v6, byte_1A83CFA0);
        v7 = std::operator<<<std::char_traits<char>>(v1 + 1600, "update ");
        v8 = std::operator<<<char>(v7, v1 + 1056);
        v9 = std::operator<<<std::char_traits<char>>(v8, " set ");
        v10 = (std::ostream *)std::operator<<<std::char_traits<char>>(v9, "nickname=");
        ostr = mysqlpp::operator<<(v10, quote).ostr;
        v11 = ((v1 + 96) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 96, &row->nickname, 0LL);
        v12 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 96));
        v13 = std::operator<<<std::char_traits<char>>(v12, ", level=");
        if ( *(_BYTE *)(((unsigned __int64)&row->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->level);
        }
        v14 = std::ostream::operator<<(v13, row->level);
        v15 = std::operator<<<std::char_traits<char>>(v14, ", exp=");
        if ( *(_BYTE *)(((unsigned __int64)&row->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->exp >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->exp);
        }
        v16 = std::ostream::operator<<(v15, row->exp);
        v17 = std::operator<<<std::char_traits<char>>(v16, ", vip_point=");
        if ( *(_BYTE *)(((unsigned __int64)&row->vip_point >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->vip_point >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->vip_point);
        }
        v18 = std::ostream::operator<<(v17, row->vip_point);
        v19 = (std::ostream *)std::operator<<<std::char_traits<char>>(v18, ", json_data=");
        v81 = mysqlpp::operator<<(v19, quote).ostr;
        v20 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v20 = 0;
        *(_BYTE *)(v20 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 160, &row->json_data, 0LL);
        v21 = mysqlpp::operator<<(v81, (mysqlpp::SQLTypeAdapter *)(v1 + 160));
        v22 = (std::ostream *)std::operator<<<std::char_traits<char>>(v21, ", bin_data=");
        v82 = mysqlpp::operator<<(v22, quote).ostr;
        v23 = ((v1 + 224) >> 3) + 2147450880;
        *(_WORD *)v23 = 0;
        *(_BYTE *)(v23 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 224), &row->bin_data, 0);
        v24 = mysqlpp::operator<<(v82, (mysqlpp::SQLTypeAdapter *)(v1 + 224));
        v25 = (std::ostream *)std::operator<<<std::char_traits<char>>(v24, ", extra_bin_data=");
        v83 = mysqlpp::operator<<(v25, quote).ostr;
        v26 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v26 = 0;
        *(_BYTE *)(v26 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 288), &row->extra_bin_data, 0);
        v27 = mysqlpp::operator<<(v83, (mysqlpp::SQLTypeAdapter *)(v1 + 288));
        v28 = (std::ostream *)std::operator<<<std::char_traits<char>>(v27, ", before_login_bin_data=");
        v84 = mysqlpp::operator<<(v28, quote).ostr;
        v29 = ((v1 + 352) >> 3) + 2147450880;
        *(_WORD *)v29 = 0;
        *(_BYTE *)(v29 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
          (mysqlpp::SQLTypeAdapter *const)(v1 + 352),
          &row->before_login_bin_data,
          0);
        v30 = mysqlpp::operator<<(v84, (mysqlpp::SQLTypeAdapter *)(v1 + 352));
        v31 = std::operator<<<std::char_traits<char>>(v30, ", data_version=");
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        v32 = std::ostream::operator<<(v31, row->data_version);
        v33 = std::operator<<<std::char_traits<char>>(v32, " where uid=");
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        v34 = std::ostream::operator<<(v33, row->uid);
        v35 = std::operator<<<std::char_traits<char>>(v34, " and data_version<=");
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        v36 = std::ostream::operator<<(v35, row->data_version);
        std::operator<<<std::char_traits<char>>(v36, " limit 1;");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 352));
        v37 = ((v1 + 352) >> 3) + 2147450880;
        *(_WORD *)v37 = -1800;
        *(_BYTE *)(v37 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 288));
        v38 = ((v1 + 288) >> 3) + 2147450880;
        *(_WORD *)v38 = -1800;
        *(_BYTE *)(v38 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 224));
        v39 = ((v1 + 224) >> 3) + 2147450880;
        *(_WORD *)v39 = -1800;
        *(_BYTE *)(v39 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160));
        v40 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v40 = -1800;
        *(_BYTE *)(v40 + 2) = -8;
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96));
        v41 = ((v1 + 96) >> 3) + 2147450880;
        *(_WORD *)v41 = -1800;
        *(_BYTE *)(v41 + 2) = -8;
        v42 = ((v1 + 1408) >> 3) + 2147450880;
        *(_DWORD *)v42 = 0;
        *(_WORD *)(v42 + 4) = 0;
        *(_BYTE *)(v42 + 6) = 0;
        if ( *(char *)(((v1 + 1408) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 1463) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 73) & 7) >= *(_BYTE *)(((v1 + 1463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 1408, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1408));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1408));
        v43 = ((v1 + 1408) >> 3) + 2147450880;
        *(_DWORD *)v43 = -117901064;
        *(_WORD *)(v43 + 4) = -1800;
        *(_BYTE *)(v43 + 6) = -8;
        if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1600)) )
        {
          *(_DWORD *)(((v1 + 1120) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 1120) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 1151) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 1151) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 1120, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 1120),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "src/mysql_op_player_data.cpp",
            "insertOrUpdatePlayerData",
            613);
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
            (common::milog::MiLogStream *const)(v1 + 1120),
            "update uid=%u, data_version=%u failed, try to insert data",
            row->uid,
            data_version);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 1120));
          *(_DWORD *)(((v1 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1600));
          v45 = std::operator<<<std::char_traits<char>>(v1 + 1600, "insert into ");
          v46 = std::operator<<<char>(v45, v1 + 1056);
          std::operator<<<std::char_traits<char>>(
            v46,
            "(uid, nickname, level, exp, vip_point, json_data, bin_data, extra_bin_data, before_login_bin_data, data_version) values");
          v47 = std::operator<<<std::char_traits<char>>(v1 + 1600, "(");
          if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(row);
          }
          v48 = std::ostream::operator<<(v47, row->uid);
          v49 = (std::ostream *)std::operator<<<std::char_traits<char>>(v48, ",");
          v85 = mysqlpp::operator<<(v49, quote).ostr;
          v50 = ((v1 + 416) >> 3) + 2147450880;
          *(_WORD *)v50 = 0;
          *(_BYTE *)(v50 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 416, &row->nickname, 0LL);
          v51 = mysqlpp::operator<<(v85, (mysqlpp::SQLTypeAdapter *)(v1 + 416));
          v52 = std::operator<<<std::char_traits<char>>(v51, ",");
          if ( *(_BYTE *)(((unsigned __int64)&row->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->level);
          }
          v53 = std::ostream::operator<<(v52, row->level);
          v54 = std::operator<<<std::char_traits<char>>(v53, ",");
          if ( *(_BYTE *)(((unsigned __int64)&row->exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->exp >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&row->exp);
          }
          v55 = std::ostream::operator<<(v54, row->exp);
          v56 = std::operator<<<std::char_traits<char>>(v55, ",");
          if ( *(_BYTE *)(((unsigned __int64)&row->vip_point >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->vip_point >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->vip_point);
          }
          v57 = std::ostream::operator<<(v56, row->vip_point);
          v58 = (std::ostream *)std::operator<<<std::char_traits<char>>(v57, ",");
          v86 = mysqlpp::operator<<(v58, quote).ostr;
          v59 = ((v1 + 480) >> 3) + 2147450880;
          *(_WORD *)v59 = 0;
          *(_BYTE *)(v59 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v1 + 480, &row->json_data, 0LL);
          v60 = mysqlpp::operator<<(v86, (mysqlpp::SQLTypeAdapter *)(v1 + 480));
          v61 = (std::ostream *)std::operator<<<std::char_traits<char>>(v60, ",");
          v87 = mysqlpp::operator<<(v61, quote).ostr;
          v62 = ((v1 + 544) >> 3) + 2147450880;
          *(_WORD *)v62 = 0;
          *(_BYTE *)(v62 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 544), &row->bin_data, 0);
          v63 = mysqlpp::operator<<(v87, (mysqlpp::SQLTypeAdapter *)(v1 + 544));
          v64 = (std::ostream *)std::operator<<<std::char_traits<char>>(v63, ",");
          v88 = mysqlpp::operator<<(v64, quote).ostr;
          v65 = ((v1 + 608) >> 3) + 2147450880;
          *(_WORD *)v65 = 0;
          *(_BYTE *)(v65 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 608), &row->extra_bin_data, 0);
          v66 = mysqlpp::operator<<(v88, (mysqlpp::SQLTypeAdapter *)(v1 + 608));
          v67 = (std::ostream *)std::operator<<<std::char_traits<char>>(v66, ",");
          v89 = mysqlpp::operator<<(v67, quote).ostr;
          v68 = ((v1 + 672) >> 3) + 2147450880;
          *(_WORD *)v68 = 0;
          *(_BYTE *)(v68 + 2) = 0;
          mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
            (mysqlpp::SQLTypeAdapter *const)(v1 + 672),
            &row->before_login_bin_data,
            0);
          v69 = mysqlpp::operator<<(v89, (mysqlpp::SQLTypeAdapter *)(v1 + 672));
          v70 = std::operator<<<std::char_traits<char>>(v69, ",");
          if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->data_version);
          }
          v71 = std::ostream::operator<<(v70, row->data_version);
          std::operator<<<std::char_traits<char>>(v71, ")");
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 672));
          v72 = ((v1 + 672) >> 3) + 2147450880;
          *(_WORD *)v72 = -1800;
          *(_BYTE *)(v72 + 2) = -8;
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 608));
          v73 = ((v1 + 608) >> 3) + 2147450880;
          *(_WORD *)v73 = -1800;
          *(_BYTE *)(v73 + 2) = -8;
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 544));
          v74 = ((v1 + 544) >> 3) + 2147450880;
          *(_WORD *)v74 = -1800;
          *(_BYTE *)(v74 + 2) = -8;
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 480));
          v75 = ((v1 + 480) >> 3) + 2147450880;
          *(_WORD *)v75 = -1800;
          *(_BYTE *)(v75 + 2) = -8;
          mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 416));
          v76 = ((v1 + 416) >> 3) + 2147450880;
          *(_WORD *)v76 = -1800;
          *(_BYTE *)(v76 + 2) = -8;
          v77 = ((v1 + 1504) >> 3) + 2147450880;
          *(_DWORD *)v77 = 0;
          *(_WORD *)(v77 + 4) = 0;
          *(_BYTE *)(v77 + 6) = 0;
          if ( *(char *)(((v1 + 1504) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 1559) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 32 + 55) & 7) >= *(_BYTE *)(((v1 + 1559) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 1504, 56LL);
          }
          mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 1504));
          mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 1504));
          v78 = ((v1 + 1504) >> 3) + 2147450880;
          *(_DWORD *)v78 = -117901064;
          *(_WORD *)(v78 + 4) = -1800;
          *(_BYTE *)(v78 + 6) = -8;
        }
        v4 = 0;
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1600));
        std::string::~string((void *)(v1 + 1056));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
    }
    else
    {
      *(_DWORD *)(((v1 + 928) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 31) & 7) >= *(_BYTE *)(((v1 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_player_data.cpp",
        "insertOrUpdatePlayerData",
        568);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v1 + 928),
        (const char (*)[29])"getPlayerDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 928));
      *(_DWORD *)(((v1 + 928) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
    }
  }
  else
  {
    *(_DWORD *)(((v1 + 864) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 864) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 895) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 895) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 864, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 864),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "insertOrUpdatePlayerData",
      561);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v1 + 864), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 864));
    *(_DWORD *)(((v1 + 864) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 1312));
  if ( v90 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v1 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80C0) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF810C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8114) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2272LL, v90);
  }
  return v4;
};

// Line 650: range 000000000D4C2354-000000000D4C3098
int32_t __cdecl MysqlOpPlayerData::updatePlayerExtraBinData(const TablePlayerExtraBinData *row)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  uint32_t uid; // esi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  std::ostream *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  std::ostream *ostr; // [rsp+10h] [rbp-550h]
  char v20[1328]; // [rsp+30h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 16 12 conn_ptr:666 64 24 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unkno"
                        "wn> 320 32 14 table_name:673 384 32 9 <unknown> 448 32 9 <unknown> 512 56 9 <unknown> 608 544 9 query:676";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerData::updatePlayerExtraBinData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
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
    if ( MysqlOpPlayerData::getPlayerDataDbIndex(row->uid) >= 0 )
    {
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v2 + 32, v1);
      MysqlOpPlayerData::grabConn(v2 + 32);
      if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 32)) )
      {
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/mysql_op_player_data.cpp",
          "updatePlayerExtraBinData",
          669);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v2 + 256),
          "[MYSQL]grab connect to mysql failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        uid = row->uid;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          uid = 32;
          __asan_report_store_n(v2 + 320, 32LL);
        }
        MysqlOpPlayerData::getPlayerDataTableNameByUid[abi:cxx11]((std::string *)(v2 + 320), uid);
        v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
        {
          v7 = (mysqlpp::Connection *)544;
          __asan_report_store_n(v2 + 608, 544LL);
        }
        mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 608), v7, byte_1A83CFA0);
        v8 = std::operator<<<std::char_traits<char>>(v2 + 608, "update ");
        v9 = std::operator<<<char>(v8, v2 + 320);
        v10 = std::operator<<<std::char_traits<char>>(v9, " set ");
        v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, "extra_bin_data=");
        ostr = mysqlpp::operator<<(v11, quote).ostr;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 64), &row->extra_bin_data, 0);
        v12 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v2 + 64));
        v13 = std::operator<<<std::char_traits<char>>(v12, " where uid=");
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        v14 = std::ostream::operator<<(v13, row->uid);
        std::operator<<<std::char_traits<char>>(v14, " limit 1;");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v2 + 64));
        v15 = ((v2 + 64) >> 3) + 2147450880;
        *(_WORD *)v15 = -1800;
        *(_BYTE *)(v15 + 2) = -8;
        v16 = ((v2 + 512) >> 3) + 2147450880;
        *(_DWORD *)v16 = 0;
        *(_WORD *)(v16 + 4) = 0;
        *(_BYTE *)(v16 + 6) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 567) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v2 + 512));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v2 + 512));
        v17 = ((v2 + 512) >> 3) + 2147450880;
        *(_DWORD *)v17 = -117901064;
        *(_WORD *)(v17 + 4) = -1800;
        *(_BYTE *)(v17 + 6) = -8;
        v5 = 0;
        mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 608));
        std::string::~string((void *)(v2 + 320));
      }
      std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 32));
    }
    else
    {
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/mysql_op_player_data.cpp",
        "updatePlayerExtraBinData",
        661);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[29])"getPlayerDataDbIndex failed!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      v5 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "updatePlayerExtraBinData",
      654);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 128), "uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v5 = -1;
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v20);
  }
  return v5;
};

// Line 701: range 000000000D4C309A-000000000D4C4166
int32_t __cdecl MysqlOpPlayerData::guestBindAccount(
        uint32_t guest_account_type,
        const std::string *guest_id,
        uint32_t account_type,
        const std::string *account_uid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  std::ostream *v11; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // r14
  const char *v26; // rax
  char v31[1648]; // [rsp+30h] [rbp-670h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1600LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:704 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 5"
                        "44 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 56 14 _tc_guard_:702 832 56 9 <unkno"
                        "wn> 928 544 9 query:717";
  *(_QWORD *)(v4 + 16) = MysqlOpPlayerData::guestBindAccount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -234881024;
  v6[536862745] = -218959118;
  v6[536862747] = -234881024;
  v6[536862748] = -218959118;
  v6[536862766] = -202116109;
  v6[536862767] = -202116109;
  v6[536862768] = -202116109;
  v6[536862769] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "guestBindAccount",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 736),
    (const std::string *)(v4 + 224),
    (const std::string *)(v4 + 288));
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 64, v4 + 224);
  MysqlOpPlayerData::grabConn(v4 + 64);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "guestBindAccount",
      707);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 352),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( !guest_account_type && account_type == 1 )
  {
    __asan_unpoison_stack_memory(v4 + 928, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 928, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v4 + 928), v8, "update t_player_uid set ");
    v9 = std::operator<<<std::char_traits<char>>(v4 + 928, " account_type=");
    v10 = std::ostream::operator<<(v9, 1LL);
    v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, ", account_uid=");
    ostr = mysqlpp::operator<<(v11, quote).ostr;
    v13 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 96, account_uid, 0LL);
    v14 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 96));
    v15 = std::operator<<<std::char_traits<char>>(v14, " where account_type=");
    v16 = std::ostream::operator<<(v15, 0LL);
    v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, " and account_uid=");
    v18 = mysqlpp::operator<<(v17, quote).ostr;
    v19 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v19 = 0;
    *(_BYTE *)(v19 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 160, guest_id, 0LL);
    mysqlpp::operator<<(v18, (mysqlpp::SQLTypeAdapter *)(v4 + 160));
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 160));
    v20 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 96));
    v21 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    v22 = ((v4 + 832) >> 3) + 2147450880;
    *(_DWORD *)v22 = 0;
    *(_WORD *)(v22 + 4) = 0;
    *(_BYTE *)(v22 + 6) = 0;
    if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 832, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v4 + 832));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v4 + 832));
    v23 = ((v4 + 832) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_WORD *)(v23 + 4) = -1800;
    *(_BYTE *)(v23 + 6) = -8;
    if ( mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v4 + 928)) )
    {
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/mysql_op_player_data.cpp",
        "guestBindAccount",
        741);
      v25 = (const char *)std::string::c_str(account_uid);
      v26 = (const char *)std::string::c_str(guest_id);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 672),
        "guest_account_type:%u, guest_id:%s bind to account_type:%u, account_uid:%s",
        0LL,
        v26,
        1LL,
        v25);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v7 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_data.cpp",
        "guestBindAccount",
        727);
      v24 = (const char *)std::string::c_str(guest_id);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 480),
        "update guest_id: %s fails",
        v24);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 928));
  }
  else
  {
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "guestBindAccount",
      712);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 416),
      "guest_account_type:%u, account_type:%u not support",
      guest_account_type,
      account_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 736));
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80C0) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1600LL, v31);
  }
  return v7;
};

// Line 748: range 000000000D4C4168-000000000D4C5234
int32_t __cdecl MysqlOpPlayerData::changeBindAccount(
        uint32_t old_account_type,
        const std::string *old_account_uid,
        uint32_t new_account_type,
        const std::string *new_account_uid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  std::ostream *v11; // rax
  std::ostream *ostr; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  std::ostream *v17; // rax
  std::ostream *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // r14
  const char *v26; // rax
  char v31[1648]; // [rsp+30h] [rbp-670h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1600LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:751 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 5"
                        "44 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 56 14 _tc_guard_:749 832 56 9 <unkno"
                        "wn> 928 544 9 query:764";
  *(_QWORD *)(v4 + 16) = MysqlOpPlayerData::changeBindAccount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -234881024;
  v6[536862745] = -218959118;
  v6[536862747] = -234881024;
  v6[536862748] = -218959118;
  v6[536862766] = -202116109;
  v6[536862767] = -202116109;
  v6[536862768] = -202116109;
  v6[536862769] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 288),
    "changeBindAccount",
    (const std::allocator<char> *)(v4 + 48));
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v4 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v4 + 736),
    (const std::string *)(v4 + 224),
    (const std::string *)(v4 + 288));
  std::string::~string((void *)(v4 + 224));
  *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v4 + 288));
  *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
  MysqlOpPlayerData::getPlayerUidDbIndex();
  if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 64, v4 + 224);
  MysqlOpPlayerData::grabConn(v4 + 64);
  if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v4 + 64)) )
  {
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "changeBindAccount",
      754);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 352),
      "[MYSQL]grab connect to mysql failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else if ( old_account_type == 1 && new_account_type == 1 )
  {
    __asan_unpoison_stack_memory(v4 + 928, 544LL);
    v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) )
    {
      v8 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v4 + 928, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v4 + 928), v8, "update t_player_uid set ");
    v9 = std::operator<<<std::char_traits<char>>(v4 + 928, " account_type=");
    v10 = std::ostream::operator<<(v9, 1LL);
    v11 = (std::ostream *)std::operator<<<std::char_traits<char>>(v10, ", account_uid=");
    ostr = mysqlpp::operator<<(v11, quote).ostr;
    v13 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 96, new_account_uid, 0LL);
    v14 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v4 + 96));
    v15 = std::operator<<<std::char_traits<char>>(v14, " where account_type=");
    v16 = std::ostream::operator<<(v15, 1LL);
    v17 = (std::ostream *)std::operator<<<std::char_traits<char>>(v16, " and account_uid=");
    v18 = mysqlpp::operator<<(v17, quote).ostr;
    v19 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v19 = 0;
    *(_BYTE *)(v19 + 2) = 0;
    mysqlpp::SQLTypeAdapter::SQLTypeAdapter(v4 + 160, old_account_uid, 0LL);
    mysqlpp::operator<<(v18, (mysqlpp::SQLTypeAdapter *)(v4 + 160));
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 160));
    v20 = ((v4 + 160) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
    mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v4 + 96));
    v21 = ((v4 + 96) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    v22 = ((v4 + 832) >> 3) + 2147450880;
    *(_DWORD *)v22 = 0;
    *(_WORD *)(v22 + 4) = 0;
    *(_BYTE *)(v22 + 6) = 0;
    if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 832, 56LL);
    }
    mysqlpp::Query::execute((mysqlpp::Query *)(v4 + 832));
    mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v4 + 832));
    v23 = ((v4 + 832) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_WORD *)(v23 + 4) = -1800;
    *(_BYTE *)(v23 + 6) = -8;
    if ( mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v4 + 928)) )
    {
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/mysql_op_player_data.cpp",
        "changeBindAccount",
        788);
      v25 = (const char *)std::string::c_str(new_account_uid);
      v26 = (const char *)std::string::c_str(old_account_uid);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 672),
        "old_account_type:%u, old_account_uid:%s bind to account_type:%u, account_uid:%s",
        1LL,
        v26,
        1LL,
        v25);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v7 = 0;
    }
    else
    {
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/mysql_op_player_data.cpp",
        "changeBindAccount",
        774);
      v24 = (const char *)std::string::c_str(old_account_uid);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v4 + 480),
        "update old_account_uid: %s fails",
        v24);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v4 + 928));
  }
  else
  {
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/mysql_op_player_data.cpp",
      "changeBindAccount",
      759);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v4 + 416),
      "old_account_type:%u, new_account_type:%u not support",
      old_account_type,
      new_account_type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v4 + 64));
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v4 + 736));
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80C0) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1600LL, v31);
  }
  return v7;
};

// Line 795: range 000000000D4C5236-000000000D4C5F93
int32_t __cdecl MysqlOpPlayerData::selectBlockData(
        uint32_t uid,
        std::set<unsigned int> *p_block_id_set,
        std::vector<TableBlockData> *row_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  std::logic_error *exception; // rdi
  bool is_first; // [rsp+3Bh] [rbp-565h]
  uint32_t block_id; // [rsp+3Ch] [rbp-564h]
  char v20[1360]; // [rsp+50h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:821 96 8 13 __for_end:821 128 16 12 con"
                        "n_ptr:805 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 14 "
                        "table_name:814 480 32 9 <unknown> 544 56 14 _tc_guard_:796 640 544 9 query:813";
  *(_QWORD *)(v3 + 16) = MysqlOpPlayerData::selectBlockData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "selectBlockData",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v3 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
    (const std::string *)(v3 + 160),
    (const std::string *)(v3 + 224));
  std::string::~string((void *)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    MysqlOpPlayerData::getBlockDataDbIndex(uid);
    if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 128, v3 + 160);
    MysqlOpPlayerData::grabConn(v3 + 128);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
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
        "src/mysql_op_player_data.cpp",
        "selectBlockData",
        808);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 352),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v3 + 640, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v3 + 640, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 640), v7, byte_1A83CFA0);
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      MysqlOpPlayerData::getBlockDataTableNameByUid[abi:cxx11]((std::string *)(v3 + 416), uid);
      v8 = std::operator<<<std::char_traits<char>>(v3 + 640, "select uid, block_id, data_version, bin_data from ");
      v9 = std::operator<<<char>(v8, v3 + 416);
      v10 = std::operator<<<std::char_traits<char>>(v9, " where uid=");
      v11 = std::ostream::operator<<(v10, uid);
      std::operator<<<std::char_traits<char>>(v11, " and block_id in");
      std::operator<<<std::char_traits<char>>(v3 + 640, "(");
      is_first = 1;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::begin(p_block_id_set);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::end(p_block_id_set);
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96)) )
      {
        v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        block_id = *v13;
        if ( is_first )
          is_first = 0;
        else
          std::operator<<<std::char_traits<char>>(v3 + 640, ",");
        std::ostream::operator<<(v3 + 640, block_id);
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      std::operator<<<std::char_traits<char>>(v3 + 640, ")");
      mysqlpp::Query::storein<std::vector<TableBlockData>>((mysqlpp::Query *const)(v3 + 640), row_vec);
      if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 640)) )
      {
        exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
        std::logic_error::logic_error(exception, "query has error");
        __asan_handle_no_return(exception);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::logic_error,
          (void (__fastcall *)(void *))&std::logic_error::~logic_error);
      }
      v6 = 0;
      std::string::~string((void *)(v3 + 416));
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 640));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
  }
  else
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
      3u,
      "src/mysql_op_player_data.cpp",
      "selectBlockData",
      800);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
      (common::milog::MiLogStream *const)(v3 + 288),
      (const char (*)[9])"uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v20);
  }
  return v6;
};

// Line 848: range 000000000D4C5F94-000000000D4C6D73
int32_t __cdecl MysqlOpPlayerData::selectAllBlockData(uint32_t uid, std::vector<TableBlockData> *row_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v5; // rsi
  unsigned __int64 v6; // rax
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  std::logic_error *exception; // rdi
  int v13; // eax
  char v16[1456]; // [rsp+30h] [rbp-5B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 7 ret:849 96 16 9 <unknown> 128 16 12 conn_ptr:861 160"
                        " 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 14 table_name:87"
                        "0 480 32 9 <unknown> 544 56 14 span_proxy:850 640 56 14 _tc_guard_:852 736 544 9 query:869";
  *(_QWORD *)(v2 + 16) = MysqlOpPlayerData::selectAllBlockData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 80);
  *(_DWORD *)(v2 + 80) = 0;
  opentracing::v3::string_view::string_view((opentracing::v3::string_view *const)(v2 + 96), "selectAllBlockData");
  v5 = std::__shared_ptr<TracingMgr,(__gnu_cxx::_Lock_policy)2>::get(&ResourceBox::tracing_mgr_ptr);
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 96);
  SpanProxy::SpanProxy(
    (SpanProxy *const)(v2 + 544),
    v5,
    *(opentracing::v3::string_view *)(v2 + 96),
    0LL,
    0,
    (const int *)(v2 + 80));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  v6 = ((v2 + 640) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  *(_BYTE *)(v6 + 6) = 0;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "selectAllBlockData",
    (const std::allocator<char> *)(v2 + 64));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "MYSQL",
    (const std::allocator<char> *)(v2 + 48));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v2 + 640),
    (const std::string *)(v2 + 160),
    (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( uid )
  {
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    MysqlOpPlayerData::getBlockDataDbIndex(uid);
    if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 128, v2 + 160);
    MysqlOpPlayerData::grabConn(v2 + 128);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v2 + 128)) )
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
        3u,
        "src/mysql_op_player_data.cpp",
        "selectAllBlockData",
        864);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v2 + 352),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = -1;
      v7 = *(_DWORD *)(v2 + 80);
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 736, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v2 + 736, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v2 + 736), v8, byte_1A83CFA0);
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      MysqlOpPlayerData::getBlockDataTableNameByUid[abi:cxx11]((std::string *)(v2 + 416), uid);
      v9 = std::operator<<<std::char_traits<char>>(v2 + 736, "select uid, block_id, data_version, bin_data from ");
      v10 = std::operator<<<char>(v9, v2 + 416);
      v11 = std::operator<<<std::char_traits<char>>(v10, " where uid=");
      std::ostream::operator<<(v11, uid);
      mysqlpp::Query::storein<std::vector<TableBlockData>>((mysqlpp::Query *const)(v2 + 736), row_vec);
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
      v13 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v13 != 0 && (char)v13 <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 0;
      v7 = *(_DWORD *)(v2 + 80);
      std::string::~string((void *)(v2 + 416));
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v2 + 736));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v2 + 128));
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
      "src/mysql_op_player_data.cpp",
      "selectAllBlockData",
      856);
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[9])"uid is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80);
    *(_DWORD *)(v2 + 80) = -1;
    v7 = *(_DWORD *)(v2 + 80);
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v2 + 640));
  SpanProxy::~SpanProxy((SpanProxy *const)(v2 + 544));
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v16);
  }
  return v7;
};

// Line 891: range 000000000D4C6D74-000000000D4C84CB
int32_t __cdecl MysqlOpPlayerData::insertOrUpdateBlockData(const TableBlockData *row)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  mysqlpp::Connection *v8; // rsi
  mysqlpp::sql_int_unsigned uid; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  std::ostream *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  mysqlpp::sql_int_unsigned data_version; // esi
  __int64 block_id; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  std::ostream *v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  std::ostream *ostr; // [rsp+10h] [rbp-6F0h]
  std::ostream *v45; // [rsp+10h] [rbp-6F0h]
  char v46[1744]; // [rsp+30h] [rbp-6D0h] BYREF

  v1 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1696LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "17 32 1 9 <unknown> 48 1 9 <unknown> 64 16 12 conn_ptr:901 96 24 9 <unknown> 160 24 9 <unknown> "
                        "224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 14 table_name"
                        ":910 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 56 14 _tc_guard_:892 832 56 9 "
                        "<unknown> 928 56 9 <unknown> 1024 544 9 query:909";
  *(_QWORD *)(v1 + 16) = MysqlOpPlayerData::insertOrUpdateBlockData;
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
  v3[536862744] = -234881024;
  v3[536862745] = -218959118;
  v3[536862747] = -234881024;
  v3[536862748] = -218959118;
  v3[536862750] = -234881024;
  v3[536862751] = -218959118;
  v3[536862769] = -202116109;
  v3[536862770] = -202116109;
  v3[536862771] = -202116109;
  v3[536862772] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 288),
    "insertOrUpdateBlockData",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 224),
    "MYSQL",
    (const std::allocator<char> *)(v1 + 32));
  MonitorReportUtils::TimeCostGuard::TimeCostGuard(
    (MonitorReportUtils::TimeCostGuard *const)(v1 + 736),
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
  if ( !row->uid )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&row->block_id);
  }
  if ( row->block_id )
  {
    *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(row);
    }
    MysqlOpPlayerData::getBlockDataDbIndex(row->uid);
    if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v1 + 64, (((_BYTE)row + 4) & 7u) + 3);
    MysqlOpPlayerData::grabConn(v1 + 64);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v1 + 64)) )
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
        3u,
        "src/mysql_op_player_data.cpp",
        "insertOrUpdateBlockData",
        904);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v1 + 416),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
      *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v1 + 1024, 544LL);
      v8 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(char *)(((v1 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 1567) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 127) & 7) >= *(_BYTE *)(((v1 + 1567) >> 3) + 0x7FFF8000) )
      {
        v8 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v1 + 1024, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v1 + 1024), v8, byte_1A83CFA0);
      *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      uid = row->uid;
      if ( *(char *)(((v1 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 96 + 95) & 7) >= *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) )
      {
        uid = 32;
        __asan_report_store_n(v1 + 480, 32LL);
      }
      MysqlOpPlayerData::getBlockDataTableNameByUid[abi:cxx11]((std::string *)(v1 + 480), uid);
      v10 = std::operator<<<std::char_traits<char>>(v1 + 1024, "update ");
      v11 = std::operator<<<char>(v10, v1 + 480);
      v12 = std::operator<<<std::char_traits<char>>(v11, " set ");
      v13 = std::operator<<<std::char_traits<char>>(v12, "  data_version=");
      if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->data_version);
      }
      v14 = std::ostream::operator<<(v13, row->data_version);
      v15 = (std::ostream *)std::operator<<<std::char_traits<char>>(v14, ", bin_data=");
      ostr = mysqlpp::operator<<(v15, quote).ostr;
      v16 = ((v1 + 96) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96), &row->bin_data, 0);
      v17 = mysqlpp::operator<<(ostr, (mysqlpp::SQLTypeAdapter *)(v1 + 96));
      v18 = std::operator<<<std::char_traits<char>>(v17, " where uid=");
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      v19 = std::ostream::operator<<(v18, row->uid);
      v20 = std::operator<<<std::char_traits<char>>(v19, " and block_id=");
      if ( *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->block_id);
      }
      v21 = std::ostream::operator<<(v20, row->block_id);
      v22 = std::operator<<<std::char_traits<char>>(v21, " and data_version<=");
      if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->data_version);
      }
      v23 = std::ostream::operator<<(v22, row->data_version);
      std::operator<<<std::char_traits<char>>(v23, " limit 1;");
      mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 96));
      v24 = ((v1 + 96) >> 3) + 2147450880;
      *(_WORD *)v24 = -1800;
      *(_BYTE *)(v24 + 2) = -8;
      v25 = ((v1 + 832) >> 3) + 2147450880;
      *(_DWORD *)v25 = 0;
      *(_WORD *)(v25 + 4) = 0;
      *(_BYTE *)(v25 + 6) = 0;
      if ( *(char *)(((v1 + 832) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 887) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 887) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 832, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 832));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 832));
      v26 = ((v1 + 832) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      *(_BYTE *)(v26 + 6) = -8;
      if ( !mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v1 + 1024)) )
      {
        *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/mysql_op_player_data.cpp",
          "insertOrUpdateBlockData",
          933);
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        data_version = row->data_version;
        if ( *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->block_id);
        }
        block_id = row->block_id;
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v1 + 544),
          "update uid=%u, block_id=%u, data_version=%u failed, try to insert data",
          row->uid,
          block_id,
          data_version);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 544));
        *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = -117901064;
        mysqlpp::Query::reset((mysqlpp::Query *)(v1 + 1024));
        v29 = std::operator<<<std::char_traits<char>>(v1 + 1024, "insert into ");
        v30 = std::operator<<<char>(v29, v1 + 480);
        std::operator<<<std::char_traits<char>>(v30, "(uid, block_id, data_version, bin_data) values");
        v31 = std::operator<<<std::char_traits<char>>(v1 + 1024, "(");
        if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(row);
        }
        v32 = std::ostream::operator<<(v31, row->uid);
        v33 = std::operator<<<std::char_traits<char>>(v32, ",");
        if ( *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->block_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->block_id);
        }
        v34 = std::ostream::operator<<(v33, row->block_id);
        v35 = std::operator<<<std::char_traits<char>>(v34, ",");
        if ( *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&row->data_version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&row->data_version);
        }
        v36 = std::ostream::operator<<(v35, row->data_version);
        v37 = (std::ostream *)std::operator<<<std::char_traits<char>>(v36, ",");
        v45 = mysqlpp::operator<<(v37, quote).ostr;
        v38 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v38 = 0;
        *(_BYTE *)(v38 + 2) = 0;
        mysqlpp::SQLTypeAdapter::SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160), &row->bin_data, 0);
        v39 = mysqlpp::operator<<(v45, (mysqlpp::SQLTypeAdapter *)(v1 + 160));
        std::operator<<<std::char_traits<char>>(v39, ")");
        mysqlpp::SQLTypeAdapter::~SQLTypeAdapter((mysqlpp::SQLTypeAdapter *const)(v1 + 160));
        v40 = ((v1 + 160) >> 3) + 2147450880;
        *(_WORD *)v40 = -1800;
        *(_BYTE *)(v40 + 2) = -8;
        v41 = ((v1 + 928) >> 3) + 2147450880;
        *(_DWORD *)v41 = 0;
        *(_WORD *)(v41 + 4) = 0;
        *(_BYTE *)(v41 + 6) = 0;
        if ( *(char *)(((v1 + 928) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 983) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 96 + 55) & 7) >= *(_BYTE *)(((v1 + 983) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 928, 56LL);
        }
        mysqlpp::Query::execute((mysqlpp::Query *)(v1 + 928));
        mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v1 + 928));
        v42 = ((v1 + 928) >> 3) + 2147450880;
        *(_DWORD *)v42 = -117901064;
        *(_WORD *)(v42 + 4) = -1800;
        *(_BYTE *)(v42 + 6) = -8;
      }
      v7 = 0;
      std::string::~string((void *)(v1 + 480));
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v1 + 1024));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v1 + 64));
  }
  else
  {
LABEL_10:
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
      "src/mysql_op_player_data.cpp",
      "insertOrUpdateBlockData",
      896);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           (common::milog::MiLogStream *const)(v1 + 352),
           (const char (*)[27])"uid or block_id is 0, uid:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &row->uid);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])", block_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &row->block_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v1 + 736));
  if ( v46 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80C4) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80CC) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1696LL, v46);
  }
  return v7;
};

// Line 963: range 000000000D4C84CC-000000000D4C93E5
int32_t __cdecl MysqlOpPlayerData::updatePlayerTag(
        const std::vector<unsigned int> *uid_vec,
        uint32_t tag,
        uint32_t *affected_rows)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  uint32_t v14; // edi
  __int64 v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rcx
  bool is_first; // [rsp+2Bh] [rbp-5C5h]
  uint32_t uid; // [rsp+2Ch] [rbp-5C4h]
  char v24[1456]; // [rsp+40h] [rbp-5B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1408LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 8 15 __for_begin:984 96 8 13 __for_end:984 128 16 12 con"
                        "n_ptr:971 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <"
                        "unknown> 480 32 9 <unknown> 544 56 14 _tc_guard_:969 640 56 9 <unknown> 736 544 9 query:978";
  *(_QWORD *)(v3 + 16) = MysqlOpPlayerData::updatePlayerTag;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  v5[536862763] = -202116109;
  if ( std::vector<unsigned int>::empty(uid_vec) )
  {
    v6 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 224),
      "updatePlayerTag",
      (const std::allocator<char> *)(v3 + 48));
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 160),
      "MYSQL",
      (const std::allocator<char> *)(v3 + 32));
    MonitorReportUtils::TimeCostGuard::TimeCostGuard(
      (MonitorReportUtils::TimeCostGuard *const)(v3 + 544),
      (const std::string *)(v3 + 160),
      (const std::string *)(v3 + 224));
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 32);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    MysqlOpPlayerData::getPlayerUidDbIndex();
    if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v3 + 128, v3 + 160);
    MysqlOpPlayerData::grabConn(v3 + 128);
    if ( std::operator==<mysqlpp::Connection>(0LL, (const std::shared_ptr<mysqlpp::Connection> *)(v3 + 128)) )
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
        3u,
        "src/mysql_op_player_data.cpp",
        "updatePlayerTag",
        974);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 288),
        "[MYSQL]grab connect to mysql failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      __asan_unpoison_stack_memory(v3 + 736, 544LL);
      v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
      {
        v7 = (mysqlpp::Connection *)544;
        __asan_report_store_n(v3 + 736, 544LL);
      }
      mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 736), v7, byte_1A83CFA0);
      v8 = std::operator<<<std::char_traits<char>>(v3 + 736, "update t_player_uid set tag=");
      v9 = std::ostream::operator<<(v8, tag);
      std::operator<<<std::char_traits<char>>(v9, " where uid in");
      std::operator<<<std::char_traits<char>>(v3 + 736, "(");
      is_first = 1;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(uid_vec);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(uid_vec);
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
      {
        v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        uid = *v11;
        if ( is_first )
          is_first = 0;
        else
          std::operator<<<std::char_traits<char>>(v3 + 736, ",");
        std::ostream::operator<<(v3 + 736, uid);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      std::operator<<<std::char_traits<char>>(v3 + 736, ")");
      v12 = ((v3 + 640) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 73) & 7) >= *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 640, 56LL);
      }
      mysqlpp::Query::execute((mysqlpp::Query *)(v3 + 640));
      mysqlpp::SimpleResult::~SimpleResult((mysqlpp::SimpleResult *const)(v3 + 640));
      v13 = ((v3 + 640) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_WORD *)(v13 + 4) = -1800;
      *(_BYTE *)(v13 + 6) = -8;
      v14 = mysqlpp::Query::affected_rows((mysqlpp::Query *const)(v3 + 736));
      if ( *(_BYTE *)(((unsigned __int64)affected_rows >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)affected_rows & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affected_rows >> 3)
                                                                        + 0x7FFF8000) )
      {
        v14 = (unsigned int)affected_rows;
        __asan_report_store4(affected_rows);
      }
      *affected_rows = v14;
      v15 = *affected_rows;
      if ( v15 == std::vector<unsigned int>::size(uid_vec) )
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
          2u,
          "src/mysql_op_player_data.cpp",
          "updatePlayerTag",
          1004);
        v17 = (unsigned int)std::vector<unsigned int>::size(uid_vec);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 416),
          "set player tag to [%u] success. req_count:%d",
          tag,
          v17);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
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
          "src/mysql_op_player_data.cpp",
          "updatePlayerTag",
          1000);
        v16 = std::vector<unsigned int>::size(uid_vec);
        if ( *(_BYTE *)(((unsigned __int64)affected_rows >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)affected_rows & 7) + 3) >= *(_BYTE *)(((unsigned __int64)affected_rows >> 3)
                                                                          + 0x7FFF8000) )
        {
          v16 = (unsigned int)affected_rows;
          __asan_report_load4(affected_rows);
        }
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 352),
          "set player tag to [%u] op not complete. affected_rows:%d req_count:%d",
          tag,
          *affected_rows,
          v16);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      v6 = 0;
      mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 736));
    }
    std::shared_ptr<mysqlpp::Connection>::~shared_ptr((std::shared_ptr<mysqlpp::Connection> *const)(v3 + 128));
    MonitorReportUtils::TimeCostGuard::~TimeCostGuard((MonitorReportUtils::TimeCostGuard *const)(v3 + 544));
  }
  if ( v24 == (char *)v3 )
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1408LL, v24);
  }
  return v6;
};

// Line 1014: range 000000000D4C9587-000000000D4C959B
void __cdecl GLOBAL__sub_I_mysql_op_player_data_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 1014: range 000000000D4C93E6-000000000D4C9586
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
    __asan_before_dynamic_init("src/mysql_op_player_data.cpp");
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
