// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_gacha_config_mgr.cpp

// Line 24: range 000000000CD8027A-000000000CD8041B
bool __cdecl data::GachaScheduleConfig::operator<(
        const data::GachaScheduleConfig *const this,
        const data::GachaScheduleConfig *o)
{
  uint32_t begin_time; // ecx
  uint32_t v4; // ecx
  uint32_t end_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  begin_time = this->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&o->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->begin_time);
  }
  if ( begin_time < o->begin_time )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->begin_time);
  }
  v4 = this->begin_time;
  if ( *(_BYTE *)(((unsigned __int64)&o->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->begin_time);
  }
  if ( v4 > o->begin_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->end_time);
  }
  end_time = this->end_time;
  if ( *(_BYTE *)(((unsigned __int64)&o->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->end_time);
  }
  return end_time < o->end_time;
};

// Line 40: range 000000000CD8041C-000000000CD8062A
int32_t __cdecl data::DbGachaConfigMgr::loadDbGachaConfig(
        data::DbGachaConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t DbGachaScheduleConfig; // r14d
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbGachaConfigMgr::loadDbGachaConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  DbGachaScheduleConfig = data::DbGachaConfigMgr::loadDbGachaScheduleConfig(this, conn_ptr);
  if ( DbGachaScheduleConfig | data::DbGachaConfigMgr::loadDbGachaNewbieUrlConfig(this, conn_ptr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "loadDbGachaConfig",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator()(v6, "loadDbGachaConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 51: range 000000000CF01600-000000000CF02C77
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_gacha_schedule_config<(mysqlpp::sql_dummy_type)0>(
        data::t_gacha_schedule_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r15
  const mysqlpp::String *v10; // r15
  const mysqlpp::String *v11; // rax
  unsigned int v12; // edx
  const mysqlpp::String *v13; // rax
  unsigned int v14; // ecx
  const mysqlpp::String *v15; // rax
  unsigned int v16; // edx
  const mysqlpp::String *v17; // rax
  unsigned int v18; // ecx
  const mysqlpp::String *v19; // r15
  const mysqlpp::String *v20; // r15
  const mysqlpp::String *v21; // r15
  const mysqlpp::String *v22; // r15
  const mysqlpp::String *v23; // r15
  const mysqlpp::String *v24; // r15
  const mysqlpp::String *v25; // r15
  const mysqlpp::String *v26; // r15
  const mysqlpp::String *v27; // rax
  unsigned int v28; // edx
  const mysqlpp::String *v29; // r15
  const mysqlpp::String *v30; // r15
  std::string rowa; // [rsp+0h] [rbp-680h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1600LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "25 32 16 27 ignore_schema_mismatches:51 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                              " <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832"
                              " 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unkno"
                              "wn> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 3"
                              "2 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_gacha_schedule_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -202116109;
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
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v10 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v10, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v11 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v12 = mysqlpp::String::conv<unsigned int>(v11, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 72) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 72) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 72);
  }
  *(_DWORD *)(rowa._M_string_length + 72) = v12;
  v13 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v14 = mysqlpp::String::conv<unsigned int>(v13, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 76) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 76) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 76) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 76);
  }
  *(_DWORD *)(rowa._M_string_length + 76) = v14;
  v15 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v16 = mysqlpp::String::conv<unsigned int>(v15, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 80) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 80) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 80);
  }
  *(_DWORD *)(rowa._M_string_length + 80) = v16;
  v17 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v18 = mysqlpp::String::conv<unsigned int>(v17, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 84) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(rowa._M_string_length) + 84) & 7) + 3) >= *(_BYTE *)(((rowa._M_string_length + 84) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(rowa._M_string_length + 84);
  }
  *(_DWORD *)(rowa._M_string_length + 84) = v18;
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = 0;
  v19 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 320);
  if ( *(char *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 384, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 384), v19, rowa);
  std::string::operator=(rowa._M_string_length + 88, p_anon_0 + 384);
  std::string::~string((void *)(p_anon_0 + 384));
  *(_DWORD *)(((p_anon_0 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 320));
  *(_DWORD *)(((p_anon_0 + 320) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = 0;
  v20 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 448);
  if ( *(char *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 512, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 512), v20, rowa);
  std::string::operator=(rowa._M_string_length + 120, p_anon_0 + 512);
  std::string::~string((void *)(p_anon_0 + 512));
  *(_DWORD *)(((p_anon_0 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 448));
  *(_DWORD *)(((p_anon_0 + 448) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = 0;
  v21 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 576);
  if ( *(char *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 640, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 640), v21, rowa);
  std::string::operator=(rowa._M_string_length + 152, p_anon_0 + 640);
  std::string::~string((void *)(p_anon_0 + 640));
  *(_DWORD *)(((p_anon_0 + 640) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 576));
  *(_DWORD *)(((p_anon_0 + 576) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = 0;
  v22 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 704);
  if ( *(char *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 768, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 768), v22, rowa);
  std::string::operator=(rowa._M_string_length + 184, p_anon_0 + 768);
  std::string::~string((void *)(p_anon_0 + 768));
  *(_DWORD *)(((p_anon_0 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 704));
  *(_DWORD *)(((p_anon_0 + 704) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = 0;
  v23 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 832);
  if ( *(char *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 927) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 896, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 896), v23, rowa);
  std::string::operator=(rowa._M_string_length + 216, p_anon_0 + 896);
  std::string::~string((void *)(p_anon_0 + 896));
  *(_DWORD *)(((p_anon_0 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 832));
  *(_DWORD *)(((p_anon_0 + 832) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = 0;
  v24 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 960);
  if ( *(char *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1055) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1024, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1024), v24, rowa);
  std::string::operator=(rowa._M_string_length + 248, p_anon_0 + 1024);
  std::string::~string((void *)(p_anon_0 + 1024));
  *(_DWORD *)(((p_anon_0 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 960));
  *(_DWORD *)(((p_anon_0 + 960) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = 0;
  v25 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1088);
  if ( *(char *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1152, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1152), v25, rowa);
  std::string::operator=(rowa._M_string_length + 280, p_anon_0 + 1152);
  std::string::~string((void *)(p_anon_0 + 1152));
  *(_DWORD *)(((p_anon_0 + 1152) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1088));
  *(_DWORD *)(((p_anon_0 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = 0;
  v26 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1216);
  if ( *(char *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1280, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1280), v26, rowa);
  std::string::operator=(rowa._M_string_length + 312, p_anon_0 + 1280);
  std::string::~string((void *)(p_anon_0 + 1280));
  *(_DWORD *)(((p_anon_0 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1216));
  *(_DWORD *)(((p_anon_0 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  v27 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  v28 = mysqlpp::String::conv<unsigned int>(v27, 0);
  if ( *(_BYTE *)(((rowa._M_string_length + 344) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((rowa._M_string_length + 344) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(rowa._M_string_length + 344);
  }
  *(_DWORD *)(rowa._M_string_length + 344) = v28;
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = 0;
  v29 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1344);
  if ( *(char *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 - 97) & 7) >= *(_BYTE *)(((p_anon_0 + 1439) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1408, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1408), v29, rowa);
  std::string::operator=(rowa._M_string_length + 352, p_anon_0 + 1408);
  std::string::~string((void *)(p_anon_0 + 1408));
  *(_DWORD *)(((p_anon_0 + 1408) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1344));
  *(_DWORD *)(((p_anon_0 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = 0;
  v30 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 1472);
  if ( *(char *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 1567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 1536, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 1536), v30, rowa);
  std::string::operator=(rowa._M_string_length + 384, p_anon_0 + 1536);
  std::string::~string((void *)(p_anon_0 + 1536));
  *(_DWORD *)(((p_anon_0 + 1536) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 1472));
  *(_DWORD *)(((p_anon_0 + 1472) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF80C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 200) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    __asan_stack_free_5(p_anon_0, 1600LL, &rowa._anon_0);
  }
};

// Line 51: range 000000000CE41CD8-000000000CE41EED
void __cdecl data::t_gacha_schedule_config::t_gacha_schedule_config(
        data::t_gacha_schedule_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->begin_time);
  std::string::basic_string(&this->end_time);
  std::string::basic_string(&this->gacha_up_config);
  std::string::basic_string(&this->gacha_rule_config);
  std::string::basic_string(&this->gacha_prefab_path);
  std::string::basic_string(&this->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea);
  std::string::basic_string(&this->gacha_preview_prefab_path);
  std::string::basic_string(&this->title_textmap);
  std::string::basic_string(&this->display_up4_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_gacha_schedule_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 51: range 000000000D3B19C0-000000000D3B1F05
void __cdecl data::t_gacha_schedule_config::t_gacha_schedule_config(
        data::t_gacha_schedule_config *const this,
        data::t_gacha_schedule_config *a2)
{
  mysqlpp::sql_int_unsigned schedule_id; // ecx
  mysqlpp::sql_int_unsigned gacha_type; // ecx
  mysqlpp::sql_int_unsigned cost_item_id; // ecx
  mysqlpp::sql_int_unsigned cost_item_num; // ecx
  mysqlpp::sql_int_unsigned gacha_pool_id; // ecx
  mysqlpp::sql_int_unsigned gacha_prob_rule_id; // ecx
  mysqlpp::sql_int_unsigned gacha_sort_id; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_type);
  }
  gacha_type = a2->gacha_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_type);
  }
  this->gacha_type = gacha_type;
  std::string::basic_string(&this->begin_time, &a2->begin_time);
  std::string::basic_string(&this->end_time, &a2->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_item_id);
  }
  cost_item_id = a2->cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_item_id);
  }
  this->cost_item_id = cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cost_item_num);
  }
  cost_item_num = a2->cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_num);
  }
  this->cost_item_num = cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_pool_id);
  }
  gacha_pool_id = a2->gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_pool_id);
  }
  this->gacha_pool_id = gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = a2->gacha_prob_rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_prob_rule_id);
  }
  this->gacha_prob_rule_id = gacha_prob_rule_id;
  std::string::basic_string(&this->gacha_up_config, &a2->gacha_up_config);
  std::string::basic_string(&this->gacha_rule_config, &a2->gacha_rule_config);
  std::string::basic_string(&this->gacha_prefab_path, &a2->gacha_prefab_path);
  std::string::basic_string(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &a2->gacha_record_url);
  std::string::basic_string(&this->gacha_prob_url_oversea, &a2->gacha_prob_url_oversea);
  std::string::basic_string(&this->gacha_record_url_oversea, &a2->gacha_record_url_oversea);
  std::string::basic_string(&this->gacha_preview_prefab_path, &a2->gacha_preview_prefab_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gacha_sort_id);
  }
  gacha_sort_id = a2->gacha_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_sort_id);
  }
  this->gacha_sort_id = gacha_sort_id;
  std::string::basic_string(&this->title_textmap, &a2->title_textmap);
  std::string::basic_string(&this->display_up4_item_list, &a2->display_up4_item_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 51: range 000000000D0DE740-000000000D0DE81E
void __cdecl data::t_gacha_schedule_config::~t_gacha_schedule_config(data::t_gacha_schedule_config *const this)
{
  std::string::~string(&this->display_up4_item_list);
  std::string::~string(&this->title_textmap);
  std::string::~string(&this->gacha_preview_prefab_path);
  std::string::~string(&this->gacha_record_url_oversea);
  std::string::~string(&this->gacha_prob_url_oversea);
  std::string::~string(&this->gacha_record_url);
  std::string::~string(&this->gacha_prob_url);
  std::string::~string(&this->gacha_prefab_path);
  std::string::~string(&this->gacha_rule_config);
  std::string::~string(&this->gacha_up_config);
  std::string::~string(&this->end_time);
  std::string::~string(&this->begin_time);
};

// Line 73: range 000000000CD8062C-000000000CD834E6
int32_t __cdecl data::DbGachaConfigMgr::loadDbGachaScheduleConfig(
        data::DbGachaConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  time_t Now; // rsi
  mysqlpp::Connection *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  std::logic_error *exception; // rdi
  unsigned int schedule_id; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  _BOOL4 v21; // r15d
  mysqlpp::sql_int_unsigned gacha_type; // ecx
  int TimeByStr; // esi
  int v24; // edi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned int v28; // ecx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  mysqlpp::sql_int_unsigned cost_item_id; // ecx
  mysqlpp::sql_int_unsigned cost_item_num; // ecx
  mysqlpp::sql_int_unsigned gacha_pool_id; // ecx
  mysqlpp::sql_int_unsigned gacha_prob_rule_id; // ecx
  mysqlpp::sql_int_unsigned gacha_sort_id; // ecx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  _BOOL4 v47; // r15d
  unsigned __int64 v48; // rax
  google::protobuf::uint32 v49; // edx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  int v54; // r15d
  google::protobuf::uint32 v55; // ecx
  int v56; // ecx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  int v62; // edx
  data::GachaUpConfig *v63; // rsi
  unsigned __int64 v64; // rax
  int v65; // edx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rdx
  int v73; // r15d
  unsigned int v74; // ecx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  int v80; // edx
  bool v81; // r15
  data::GachaScheduleConfig *v82; // r8
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >,bool> v88; // rax
  common::milog::MiLogStream *v89; // rcx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  int v92; // edx
  int v93; // r15d
  std::vector<data::t_gacha_schedule_config>::size_type v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  int v98; // [rsp+0h] [rbp-BF0h]
  char *v99; // [rsp+8h] [rbp-BE8h]
  common::midb::MysqlConnPtr *conn_ptra; // [rsp+10h] [rbp-BE0h]
  data::DbGachaConfigMgr *thisa; // [rsp+18h] [rbp-BD8h]
  int v102; // [rsp+20h] [rbp-BD0h]
  unsigned int *__for_begin; // [rsp+28h] [rbp-BC8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-BC0h]
  std::vector<data::t_gacha_schedule_config> *__for_range; // [rsp+38h] [rbp-BB8h]
  __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config*,std::vector<data::t_gacha_schedule_config> >::reference row; // [rsp+40h] [rbp-BB0h]
  const google::protobuf::RepeatedPtrField<proto::GachaUpConfig> *__for_range_0; // [rsp+48h] [rbp-BA8h]
  google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::reference proto_gacha_up_config; // [rsp+50h] [rbp-BA0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+58h] [rbp-B98h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-B90h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+68h] [rbp-B88h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-B80h]
  char v113[2928]; // [rsp+80h] [rbp-B70h] BYREF

  LODWORD(thisa) = (_DWORD)this;
  conn_ptra = conn_ptr;
  v3 = (unsigned __int64)v113;
  v99 = v113;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2880LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "32 48 1 9 option:98 64 1 9 <unknown> 80 4 11 item_id:152 96 4 17 gacha_rule_id:172 112 8 14 __fo"
                        "r_begin:99 144 8 12 __for_end:99 176 8 15 __for_begin:142 208 8 13 __for_end:142 240 24 10 row_v"
                        "ec:90 304 32 9 <unknown> 368 32 10 now_str:79 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <un"
                        "known> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9 <unk"
                        "nown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 1200 32 9 <"
                        "unknown> 1264 40 9 status:97 1344 40 9 <unknown> 1424 40 30 proto_db_gacha_rule_config:165 1504 "
                        "40 9 <unknown> 1584 48 28 proto_db_gacha_up_config:135 1664 80 19 gacha_up_config:144 1776 360 1"
                        "0 config:101 2208 544 8 query:80";
  *(_QWORD *)(v3 + 16) = data::DbGachaConfigMgr::loadDbGachaScheduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862754] = -219021312;
  v5[536862755] = 62194;
  v5[536862756] = -219021312;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -234881024;
  v5[536862761] = -218959118;
  v5[536862763] = -218959360;
  v5[536862764] = 62194;
  v5[536862765] = -234881024;
  v5[536862766] = -218959118;
  v5[536862768] = -218959360;
  v5[536862769] = 62194;
  v5[536862771] = -218959118;
  v5[536862774] = -219021312;
  v5[536862775] = 62194;
  v5[536862786] = -234881024;
  v5[536862787] = -218959118;
  v5[536862788] = -218959118;
  v5[536862806] = -202116109;
  v5[536862807] = -202116109;
  v5[536862808] = -202116109;
  v5[536862809] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "loadDbGachaScheduleConfig",
      76);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 304),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
    v2 = -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
    {
      Now = 32LL;
      __asan_report_store_n(v3 + 368, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 368), Now);
    v7 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptra);
    if ( *(char *)(((v3 + 2208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
    {
      v7 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 2208, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 2208), v7, "select ");
    v8 = std::operator<<<std::char_traits<char>>(
           v3 + 2208,
           "schedule_id, gacha_type, begin_time, end_time, cost_item_id,");
    v9 = std::operator<<<std::char_traits<char>>(
           v8,
           "cost_item_num, gacha_pool_id, gacha_prob_rule_id, gacha_up_config,");
    v10 = std::operator<<<std::char_traits<char>>(
            v9,
            "gacha_rule_config, gacha_prefab_path, gacha_prob_url, gacha_record_url, gacha_prob_url_oversea, gacha_record_url_oversea, ");
    v11 = std::operator<<<std::char_traits<char>>(v10, "gacha_sort_id, gacha_preview_prefab_path, ");
    v12 = std::operator<<<std::char_traits<char>>(v11, "title_textmap, display_up4_item_list");
    v13 = std::operator<<<std::char_traits<char>>(v12, " from t_gacha_schedule_config where enabled=1 and end_time>'");
    v14 = std::operator<<<char>(v13, v3 + 368);
    std::operator<<<std::char_traits<char>>(v14, "'");
    std::vector<data::t_gacha_schedule_config>::vector((std::vector<data::t_gacha_schedule_config> *const)(v3 + 240));
    mysqlpp::Query::storein<std::vector<data::t_gacha_schedule_config>>(
      (mysqlpp::Query *const)(v3 + 2208),
      (std::vector<data::t_gacha_schedule_config> *)(v3 + 240));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 2208)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)(v3 + 1264));
    google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v3 + 48));
    __for_range = (std::vector<data::t_gacha_schedule_config> *)(v3 + 240);
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_gacha_schedule_config>::iterator *)(v3 + 112) = std::vector<data::t_gacha_schedule_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_gacha_schedule_config>::iterator *)(v3 + 144) = std::vector<data::t_gacha_schedule_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_gacha_schedule_config *,std::vector<data::t_gacha_schedule_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config*,std::vector<data::t_gacha_schedule_config> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config*,std::vector<data::t_gacha_schedule_config> > *)(v3 + 144)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config *,std::vector<data::t_gacha_schedule_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config*,std::vector<data::t_gacha_schedule_config> > *const)(v3 + 112));
      __asan_unpoison_stack_memory(v3 + 1776, 360LL);
      data::GachaScheduleConfig::GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 1776));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      schedule_id = row->schedule_id;
      if ( *(_BYTE *)(((v3 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 1776);
      *(_DWORD *)(v3 + 1776) = schedule_id;
      if ( *(_BYTE *)(((unsigned __int64)&row->gacha_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->gacha_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->gacha_type);
      }
      if ( !data::isValidGachaType(row->gacha_type) )
      {
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "loadDbGachaScheduleConfig",
          105);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])byte_1A199CC0);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &row->gacha_type);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" shedule_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &row->schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
      }
      else
      {
        std::string::operator=(v3 + 1880, &row->gacha_prefab_path);
        std::string::operator=(v3 + 2040, &row->gacha_preview_prefab_path);
        std::string::operator=(v3 + 1912, &row->gacha_prob_url);
        std::string::operator=(v3 + 1944, &row->gacha_record_url);
        std::string::operator=(v3 + 1976, &row->gacha_prob_url);
        std::string::operator=(v3 + 2008, &row->gacha_record_url);
        if ( *(_BYTE *)(((unsigned __int64)&row->gacha_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->gacha_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&row->gacha_type);
        }
        gacha_type = row->gacha_type;
        if ( *(_BYTE *)(((v3 + 1780) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 16 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 1780) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 1780);
        }
        *(_DWORD *)(v3 + 1780) = gacha_type;
        TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->begin_time);
        if ( *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 1784);
        *(_DWORD *)(v3 + 1784) = TimeByStr;
        v24 = common::tools::TimeUtils::getTimeByStr(&row->end_time);
        if ( *(_BYTE *)(((v3 + 1788) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 16 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 1788) >> 3) + 0x7FFF8000) )
        {
          v24 = v3 + 1788;
          __asan_report_store4(v3 + 1788);
        }
        *(_DWORD *)(v3 + 1788) = v24;
        if ( *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 1784);
        if ( !*(_DWORD *)(v3 + 1784) || !*(_DWORD *)(v3 + 1788) )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/db_data_manual/db_gacha_config_mgr.cpp",
            "loadDbGachaScheduleConfig",
            120);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])" invalid_time: ");
          v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &row->begin_time);
          v27 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v26, (const char (*)[3])", ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &row->end_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        }
        if ( *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1784) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 1784);
        v28 = *(_DWORD *)(v3 + 1784);
        if ( *(_BYTE *)(((v3 + 1788) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 16 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 1788) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v3 + 1788);
        }
        if ( v28 < *(_DWORD *)(v3 + 1788) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&row->cost_item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->cost_item_id);
          }
          cost_item_id = row->cost_item_id;
          if ( *(_BYTE *)(((v3 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1792) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 1792);
          *(_DWORD *)(v3 + 1792) = cost_item_id;
          if ( *(_BYTE *)(((unsigned __int64)&row->cost_item_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->cost_item_num >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&row->cost_item_num);
          }
          cost_item_num = row->cost_item_num;
          if ( *(_BYTE *)(((v3 + 1796) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 16 + 20) & 7) + 3) >= *(_BYTE *)(((v3 + 1796) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 1796);
          }
          *(_DWORD *)(v3 + 1796) = cost_item_num;
          if ( *(_BYTE *)(((unsigned __int64)&row->gacha_pool_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->gacha_pool_id);
          }
          gacha_pool_id = row->gacha_pool_id;
          if ( *(_BYTE *)(((v3 + 1800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1800) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 1800);
          *(_DWORD *)(v3 + 1800) = gacha_pool_id;
          if ( *(_BYTE *)(((unsigned __int64)&row->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)row + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->gacha_prob_rule_id >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&row->gacha_prob_rule_id);
          }
          gacha_prob_rule_id = row->gacha_prob_rule_id;
          if ( *(_BYTE *)(((v3 + 1804) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 - 16 + 28) & 7) + 3) >= *(_BYTE *)(((v3 + 1804) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 1804);
          }
          *(_DWORD *)(v3 + 1804) = gacha_prob_rule_id;
          if ( *(_BYTE *)(((unsigned __int64)&row->gacha_sort_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&row->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&row->gacha_sort_id);
          }
          gacha_sort_id = row->gacha_sort_id;
          if ( *(_BYTE *)(((v3 + 2072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 2072) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 2072);
          *(_DWORD *)(v3 + 2072) = gacha_sort_id;
          std::string::operator=(v3 + 2080, &row->title_textmap);
          v40 = ((v3 + 1584) >> 3) + 2147450880;
          *(_DWORD *)v40 = 0;
          *(_WORD *)(v40 + 4) = 0;
          proto::DbGachaUpConfig::DbGachaUpConfig((proto::DbGachaUpConfig *const)(v3 + 1584));
          v41 = ((v3 + 1344) >> 3) + 2147450880;
          *(_DWORD *)v41 = 0;
          *(_BYTE *)(v41 + 4) = 0;
          if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1383) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 1383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1344, 40LL);
          }
          google::protobuf::util::JsonStringToMessage(
            (google::protobuf::util::Status *)(v3 + 1344),
            v98,
            (int)v99,
            (int)conn_ptra,
            (int)thisa,
            v102,
            __for_begin,
            (int)__for_begin_0,
            (char)__for_range);
          google::protobuf::util::Status::operator=(
            (google::protobuf::util::Status *const)(v3 + 1264),
            (const google::protobuf::util::Status *)(v3 + 1344));
          google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 1344));
          v42 = ((v3 + 1344) >> 3) + 2147450880;
          *(_DWORD *)v42 = -117901064;
          *(_BYTE *)(v42 + 4) = -8;
          if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v3 + 1264)) )
          {
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 624, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 624),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_gacha_config_mgr.cpp",
              "loadDbGachaScheduleConfig",
              139);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v43,
                    (const char (*)[45])"JsonStringToMessage gacha_up_config failed: ");
            v45 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
                    v44,
                    (const google::protobuf::util::Status *)(v3 + 1264));
            v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v45,
                    (const char (*)[14])" schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &row->schedule_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v47 = 0;
          }
          else
          {
            __for_range_0 = proto::DbGachaUpConfig::gacha_up_list((const proto::DbGachaUpConfig *const)(v3 + 1584));
            *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator *)(v3 + 176) = google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::begin(__for_range_0);
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator *)(v3 + 208) = google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::end(__for_range_0);
            while ( google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator!=(
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const)(v3 + 176),
                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::iterator *)(v3 + 208)) )
            {
              proto_gacha_up_config = google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const)(v3 + 176));
              v48 = ((v3 + 1664) >> 3) + 2147450880;
              *(_DWORD *)v48 = 0;
              *(_DWORD *)(v48 + 4) = 0;
              *(_WORD *)(v48 + 8) = 0;
              data::GachaUpConfig::GachaUpConfig((data::GachaUpConfig *const)(v3 + 1664));
              v49 = proto::GachaUpConfig::item_parent_type(proto_gacha_up_config);
              if ( *(_BYTE *)(((v3 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1664) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 1664);
              *(_DWORD *)(v3 + 1664) = v49;
              if ( !data::isValidGachaItemParentType(*(_DWORD *)(v3 + 1664)) )
              {
                *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 688, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 688),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "loadDbGachaScheduleConfig",
                  148);
                v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 688),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v51 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v50,
                        (const char (*)[24])byte_1A199E00);
                v52 = common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                        v51,
                        (const data::GachaItemParentType *)(v3 + 1664));
                v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v52,
                        (const char (*)[14])" schedule_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &row->schedule_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
                *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v54 = 0;
              }
              else
              {
                v55 = proto::GachaUpConfig::prob(proto_gacha_up_config);
                if ( *(_BYTE *)(((v3 + 1668) >> 3) + 0x7FFF8000) != 0
                  && (char)(((v3 - 124) & 7) + 3) >= *(_BYTE *)(((v3 + 1668) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(v3 + 1668);
                }
                *(_DWORD *)(v3 + 1668) = v55;
                __for_range_1 = proto::GachaUpConfig::item_list(proto_gacha_up_config);
                __for_begin = (unsigned int *)google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
                __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
                while ( 1 )
                {
                  if ( __for_begin == __for_end )
                  {
                    v62 = 1;
                    goto LABEL_105;
                  }
                  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4(__for_begin);
                  }
                  v56 = *__for_begin;
                  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v3 + 80);
                  *(_DWORD *)(v3 + 80) = v56;
                  v57 = std::set<unsigned int>::emplace<unsigned int &>(
                          (std::set<unsigned int> *const)(v3 + 1672),
                          (unsigned int *)(v3 + 80),
                          (unsigned int *)(v3 + 1672));
                  if ( !v57.second )
                    break;
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v3 + 1720),
                    (const std::vector<unsigned int>::value_type *)(v3 + 80));
                  ++__for_begin;
                }
                *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 752, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 752),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "loadDbGachaScheduleConfig",
                  156);
                v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 752),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v59 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v58,
                        (const char (*)[47])byte_1A199E40);
                v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, &row->schedule_id);
                v61 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v60,
                        (const char (*)[11])byte_1A199EA0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  (const unsigned int *)(v3 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
                *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v62 = 0;
LABEL_105:
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                if ( v62 == 1 )
                {
                  v63 = std::move<data::GachaUpConfig &>((data::GachaUpConfig *)(v3 + 1664));
                  std::vector<data::GachaUpConfig>::emplace_back<data::GachaUpConfig>(
                    (std::vector<data::GachaUpConfig> *const)(v3 + 1808),
                    v63,
                    v63);
                  v54 = 1;
                }
                else
                {
                  v54 = 0;
                }
              }
              data::GachaUpConfig::~GachaUpConfig((data::GachaUpConfig *const)(v3 + 1664));
              v64 = ((v3 + 1664) >> 3) + 2147450880;
              *(_DWORD *)v64 = -117901064;
              *(_DWORD *)(v64 + 4) = -117901064;
              *(_WORD *)(v64 + 8) = -1800;
              if ( v54 != 1 )
              {
                v65 = 0;
                goto LABEL_112;
              }
              google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const)(v3 + 176));
            }
            v65 = 1;
LABEL_112:
            *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
            if ( v65 == 1 )
            {
              v66 = ((v3 + 1424) >> 3) + 2147450880;
              *(_DWORD *)v66 = 0;
              *(_BYTE *)(v66 + 4) = 0;
              proto::DbGachaRuleConfig::DbGachaRuleConfig((proto::DbGachaRuleConfig *const)(v3 + 1424));
              v67 = ((v3 + 1504) >> 3) + 2147450880;
              *(_DWORD *)v67 = 0;
              *(_BYTE *)(v67 + 4) = 0;
              if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1543) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 39) & 7) >= *(_BYTE *)(((v3 + 1543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1504, 40LL);
              }
              google::protobuf::util::JsonStringToMessage(
                (google::protobuf::util::Status *)(v3 + 1504),
                v98,
                (int)v99,
                (int)conn_ptra,
                (int)thisa,
                v102,
                __for_begin,
                (int)__for_begin_0,
                (char)__for_range);
              google::protobuf::util::Status::operator=(
                (google::protobuf::util::Status *const)(v3 + 1264),
                (const google::protobuf::util::Status *)(v3 + 1504));
              google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 1504));
              v68 = ((v3 + 1504) >> 3) + 2147450880;
              *(_DWORD *)v68 = -117901064;
              *(_BYTE *)(v68 + 4) = -8;
              if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v3 + 1264)) )
              {
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 816, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 816),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "loadDbGachaScheduleConfig",
                  169);
                v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 816),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v70 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v69,
                        (const char (*)[47])"JsonStringToMessage gacha_rule_config failed: ");
                v71 = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
                        v70,
                        (const google::protobuf::util::Status *)(v3 + 1264));
                v72 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v71,
                        (const char (*)[14])" schedule_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &row->schedule_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
                *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v73 = 0;
              }
              else
              {
                __for_range_2 = proto::DbGachaRuleConfig::gacha_rule_list((const proto::DbGachaRuleConfig *const)(v3 + 1424));
                __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
                __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
                while ( 1 )
                {
                  if ( __for_begin_0 == __for_end_0 )
                  {
                    v80 = 1;
                    goto LABEL_132;
                  }
                  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4(__for_begin_0);
                  }
                  v74 = *__for_begin_0;
                  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v3 + 96);
                  *(_DWORD *)(v3 + 96) = v74;
                  v75 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v3 + 1832),
                          (const std::set<unsigned int>::value_type *)(v3 + 96));
                  if ( !v75.second )
                    break;
                  ++__for_begin_0;
                }
                *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 880, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 880),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "loadDbGachaScheduleConfig",
                  176);
                v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 880),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v77 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        v76,
                        (const char (*)[46])byte_1A199F40);
                v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &row->schedule_id);
                v79 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v78,
                        (const char (*)[11])byte_1A199FA0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v79,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
                *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v80 = 0;
LABEL_132:
                *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                if ( v80 == 1 )
                {
                  *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v3 + 64);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v3 + 944),
                    ",",
                    (const std::allocator<char> *)(v3 + 64));
                  v81 = common::tools::StringUtils::splitToList<unsigned int>(
                          &row->display_up4_item_list,
                          (const std::string *)(v3 + 944),
                          (std::vector<unsigned int> *)(v3 + 2112),
                          1) != 0;
                  std::string::~string((void *)(v3 + 944));
                  *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v3 + 64);
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                  if ( v81 )
                  {
                    *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1008, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1008),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_gacha_config_mgr.cpp",
                      "loadDbGachaScheduleConfig",
                      183);
                    v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1008),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v84 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            v83,
                            (const char (*)[19])byte_1A199FE0);
                    v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &row->schedule_id);
                    v86 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                            v85,
                            (const char (*)[23])"display_up4_item_list:");
                    v87 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                            v86,
                            &row->display_up4_item_list);
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v87, (const char (*)[7])byte_1A117C40);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1008));
                    *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v73 = 0;
                  }
                  else
                  {
                    v88 = std::map<unsigned int,data::GachaScheduleConfig>::emplace<unsigned int &,data::GachaScheduleConfig&>(
                            &thisa->gacha_schedule_config_map,
                            (unsigned int *)(v3 + 1776),
                            (data::GachaScheduleConfig *)(v3 + 1776),
                            (unsigned int *)(v3 + 1776),
                            v82);
                    if ( !v88.second )
                    {
                      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1072) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1103) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1072, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1072),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/db_data_manual/db_gacha_config_mgr.cpp",
                        "loadDbGachaScheduleConfig",
                        189);
                      v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1072),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      if ( *(_BYTE *)(((v3 + 1776) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 1776) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(v3 + 1776);
                      }
                      common::milog::MiLogStream::operator()(v89, &byte_1A19A060, *(unsigned int *)(v3 + 1776));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1072));
                      *(_DWORD *)(((v3 + 1072) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v73 = 0;
                    }
                    else
                    {
                      v73 = 1;
                    }
                  }
                }
                else
                {
                  v73 = 0;
                }
              }
              proto::DbGachaRuleConfig::~DbGachaRuleConfig((proto::DbGachaRuleConfig *const)(v3 + 1424));
              v47 = v73 == 1;
            }
            else
            {
              v47 = 0;
            }
          }
          proto::DbGachaUpConfig::~DbGachaUpConfig((proto::DbGachaUpConfig *const)(v3 + 1584));
          v21 = v47;
        }
        else
        {
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 560, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 560),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gacha_config_mgr.cpp",
            "loadDbGachaScheduleConfig",
            124);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 560),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v29, (const char (*)[43])byte_1A199D40);
          v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &row->begin_time);
          v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v31, (const char (*)[15])byte_1A11F020);
          v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, &row->end_time);
          v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v33,
                  (const char (*)[14])" schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &row->schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v21 = 0;
        }
      }
      data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 1776));
      __asan_poison_stack_memory(v3 + 1776, 360LL);
      v90 = ((v3 + 1584) >> 3) + 2147450880;
      *(_DWORD *)v90 = -117901064;
      *(_WORD *)(v90 + 4) = -1800;
      v91 = ((v3 + 1424) >> 3) + 2147450880;
      *(_DWORD *)v91 = -117901064;
      *(_BYTE *)(v91 + 4) = -8;
      if ( !v21 )
      {
        v92 = 0;
        goto LABEL_151;
      }
      __gnu_cxx::__normal_iterator<data::t_gacha_schedule_config *,std::vector<data::t_gacha_schedule_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_gacha_schedule_config*,std::vector<data::t_gacha_schedule_config> > *const)(v3 + 112));
    }
    v92 = 1;
LABEL_151:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v92 == 1 )
    {
      *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1136) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1167) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1136, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1136),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "loadDbGachaScheduleConfig",
        193);
      v94 = std::vector<data::t_gacha_schedule_config>::size((const std::vector<data::t_gacha_schedule_config> *const)(v3 + 240));
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v3 + 1136),
        "load %lu config from t_gacha_schedule_config",
        v94);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1136));
      *(_DWORD *)(((v3 + 1136) >> 3) + 0x7FFF8000) = -117901064;
      v93 = 1;
    }
    else
    {
      v93 = 0;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 1264));
    std::vector<data::t_gacha_schedule_config>::~vector((std::vector<data::t_gacha_schedule_config> *const)(v3 + 240));
    v95 = ((v3 + 240) >> 3) + 2147450880;
    *(_WORD *)v95 = -1800;
    *(_BYTE *)(v95 + 2) = -8;
    v96 = ((v3 + 1264) >> 3) + 2147450880;
    *(_DWORD *)v96 = -117901064;
    *(_BYTE *)(v96 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v93 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 2208));
    std::string::~string((void *)(v3 + 368));
  }
  if ( v99 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF810C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 276) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8158) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8160) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2880LL, v99);
  }
  return v2;
};

// Line 204: range 000000000CF03C98-000000000CF04138
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_gacha_newbie_url_config<(mysqlpp::sql_dummy_type)0>(
        data::t_gacha_newbie_url_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // r14
  const mysqlpp::String *v8; // r14
  std::string rowa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF

  rowa._M_string_length = (std::string::size_type)s;
  rowa._M_dataplus._M_p = (std::string::pointer)row;
  p_anon_0 = (unsigned __int64)&rowa._anon_0;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      p_anon_0 = v3;
  }
  *(_QWORD *)p_anon_0 = 1102416563LL;
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 28 ignore_schema_mismatches:204 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unk"
                              "nown> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_gacha_newbie_url_config<(mysqlpp::sql_dummy_type)0>;
  v4 = (_DWORD *)(p_anon_0 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
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
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = 0;
  v8 = (const mysqlpp::String *)mysqlpp::Row::operator[]((mysqlpp::Row *)rowa._M_dataplus._M_p);
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = 0;
  std::string::basic_string(p_anon_0 + 192);
  if ( *(char *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((p_anon_0 + 31) & 7) >= *(_BYTE *)(((p_anon_0 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(p_anon_0 + 256, 32LL);
  }
  mysqlpp::String::conv<std::string>((std::string *)(p_anon_0 + 256), v8, rowa);
  std::string::operator=(rowa._M_string_length + 40, p_anon_0 + 256);
  std::string::~string((void *)(p_anon_0 + 256));
  *(_DWORD *)(((p_anon_0 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(p_anon_0 + 192));
  *(_DWORD *)(((p_anon_0 + 192) >> 3) + 0x7FFF8000) = -117901064;
  mysqlpp::NoExceptions::~NoExceptions((mysqlpp::NoExceptions *const)(p_anon_0 + 32));
  if ( &rowa._anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_anon_0 )
  {
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_anon_0 = 1172321806LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_anon_0 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 204: range 000000000CE42380-000000000CE4242D
void __cdecl data::t_gacha_newbie_url_config::t_gacha_newbie_url_config(
        data::t_gacha_newbie_url_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_gacha_newbie_url_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 204: range 000000000D3B25F8-000000000D3B2705
void __cdecl data::t_gacha_newbie_url_config::t_gacha_newbie_url_config(
        data::t_gacha_newbie_url_config *const this,
        data::t_gacha_newbie_url_config *a2)
{
  mysqlpp::sql_int_unsigned priority; // ecx
  const char *table_override; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  priority = a2->priority;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->priority = priority;
  std::string::basic_string(&this->gacha_prob_url, &a2->gacha_prob_url);
  std::string::basic_string(&this->gacha_record_url, &a2->gacha_record_url);
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 204: range 000000000D0E02C2-000000000D0E02F0
void __cdecl data::t_gacha_newbie_url_config::~t_gacha_newbie_url_config(data::t_gacha_newbie_url_config *const this)
{
  std::string::~string(&this->gacha_record_url);
  std::string::~string(&this->gacha_prob_url);
};

// Line 209: range 000000000CD834E8-000000000CD8403D
int32_t __cdecl data::DbGachaConfigMgr::loadDbGachaNewbieUrlConfig(
        data::DbGachaConfigMgr *const this,
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
  mysqlpp::sql_int_unsigned priority; // ecx
  data::GachaNewbieUrlConfig *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaNewbieUrlConfig> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  int v17; // edx
  _BOOL4 v18; // r15d
  unsigned __int64 v19; // rax
  std::vector<data::t_gacha_newbie_url_config> *__for_range; // [rsp+28h] [rbp-4C8h]
  __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config*,std::vector<data::t_gacha_newbie_url_config> >::reference row; // [rsp+30h] [rbp-4C0h]
  char v23[1200]; // [rsp+40h] [rbp-4B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1152LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 8 15 __for_begin:229 80 8 13 __for_end:229 112 24 11 row_vec:222 176 32 9 <unknown> 240 32 "
                        "9 <unknown> 304 32 9 <unknown> 368 72 10 config:231 480 544 9 query:215";
  *(_QWORD *)(v3 + 16) = data::DbGachaConfigMgr::loadDbGachaNewbieUrlConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  v5[536862754] = -202116109;
  v5[536862755] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(conn_ptr, 0LL) )
  {
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "loadDbGachaNewbieUrlConfig",
      212);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 176),
      (const char (*)[20])"conn_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 480, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 480), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(v3 + 480, "priority, gacha_prob_url, gacha_record_url");
    std::operator<<<std::char_traits<char>>(v7, " from t_gacha_newbie_url_config");
    std::vector<data::t_gacha_newbie_url_config>::vector((std::vector<data::t_gacha_newbie_url_config> *const)(v3 + 112));
    mysqlpp::Query::storein<std::vector<data::t_gacha_newbie_url_config>>(
      (mysqlpp::Query *const)(v3 + 480),
      (std::vector<data::t_gacha_newbie_url_config> *)(v3 + 112));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 480)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    __for_range = (std::vector<data::t_gacha_newbie_url_config> *)(v3 + 112);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_gacha_newbie_url_config>::iterator *)(v3 + 48) = std::vector<data::t_gacha_newbie_url_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_gacha_newbie_url_config>::iterator *)(v3 + 80) = std::vector<data::t_gacha_newbie_url_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_gacha_newbie_url_config *,std::vector<data::t_gacha_newbie_url_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config*,std::vector<data::t_gacha_newbie_url_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config*,std::vector<data::t_gacha_newbie_url_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config *,std::vector<data::t_gacha_newbie_url_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config*,std::vector<data::t_gacha_newbie_url_config> > *const)(v3 + 48));
      v9 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0;
      *(_BYTE *)(v9 + 8) = 0;
      data::GachaNewbieUrlConfig::GachaNewbieUrlConfig((data::GachaNewbieUrlConfig *const)(v3 + 368));
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      priority = row->priority;
      if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 368);
      *(_DWORD *)(v3 + 368) = priority;
      std::string::operator=(v3 + 376, &row->gacha_prob_url);
      std::string::operator=(v3 + 408, &row->gacha_record_url);
      v12 = std::map<unsigned int,data::GachaNewbieUrlConfig>::emplace<unsigned int &,data::GachaNewbieUrlConfig&>(
              &this->gacha_newbie_url_config_map,
              (unsigned int *)(v3 + 368),
              (data::GachaNewbieUrlConfig *)(v3 + 368),
              (unsigned int *)&this->gacha_newbie_url_config_map,
              v11);
      if ( !v12.second )
      {
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "loadDbGachaNewbieUrlConfig",
          237);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v13, (const char (*)[43])byte_1A19A340);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 368));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      data::GachaNewbieUrlConfig::~GachaNewbieUrlConfig((data::GachaNewbieUrlConfig *const)(v3 + 368));
      v16 = ((v3 + 368) >> 3) + 2147450880;
      *(_DWORD *)v16 = -117901064;
      *(_DWORD *)(v16 + 4) = -117901064;
      *(_BYTE *)(v16 + 8) = -8;
      if ( v15 != 1 )
      {
        v17 = 0;
        goto LABEL_31;
      }
      __gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config *,std::vector<data::t_gacha_newbie_url_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_gacha_newbie_url_config*,std::vector<data::t_gacha_newbie_url_config> > *const)(v3 + 48));
    }
    v17 = 1;
LABEL_31:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    v18 = v17 == 1;
    std::vector<data::t_gacha_newbie_url_config>::~vector((std::vector<data::t_gacha_newbie_url_config> *const)(v3 + 112));
    v19 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v19 = -1800;
    *(_BYTE *)(v19 + 2) = -8;
    if ( v18 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 480));
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1152LL, v23);
  }
  return v2;
};

// Line 252: range 000000000CD8403E-000000000CD84623
int32_t __cdecl data::DbGachaConfigMgr::rewriteDbGachaConfig(data::DbGachaConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GachaType *p_gacha_type; // rax
  data::GachaType gacha_type; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // edx
  int v10; // edx
  data::GachaScheduleConfig *M_current; // r14
  std::vector<data::GachaScheduleConfig>::iterator v12; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::reference __in; // [rsp+20h] [rbp-170h]
  const unsigned int *schedule_id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,std::pair<unsigned int const,data::GachaScheduleConfig> >::type *gacha_schedule_config; // [rsp+30h] [rbp-160h]
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::mapped_type *schedule_config_vec; // [rsp+38h] [rbp-158h]
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *__for_range_0; // [rsp+40h] [rbp-150h]
  std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::reference v19; // [rsp+48h] [rbp-148h]
  std::vector<data::GachaScheduleConfig> *schedule_config_vec_0; // [rsp+58h] [rbp-138h]
  char v21[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 14 gacha_type:255 64 8 15 __for_begin:253 96 8 13 __for_end:253 128 8 15 __for_begin:265 "
                        "160 8 13 __for_end:265 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbGachaConfigMgr::rewriteDbGachaConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::GachaScheduleConfig>::iterator *)(v2 + 64) = std::map<unsigned int,data::GachaScheduleConfig>::begin(&this->gacha_schedule_config_map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,data::GachaScheduleConfig>::iterator *)(v2 + 96) = std::map<unsigned int,data::GachaScheduleConfig>::end(&this->gacha_schedule_config_map);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::_Self *)(v2 + 96)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> > *const)(v2 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::GachaScheduleConfig>(__in);
    gacha_schedule_config = std::get<1ul,unsigned int const,data::GachaScheduleConfig>(__in);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_gacha_type = &gacha_schedule_config->gacha_type;
    if ( *(_BYTE *)(((unsigned __int64)p_gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_schedule_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gacha_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_gacha_type);
    }
    gacha_type = gacha_schedule_config->gacha_type;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48);
    *(_DWORD *)(v2 + 48) = gacha_type;
    if ( *(_DWORD *)(v2 + 48) == 100 )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "rewriteDbGachaConfig",
        258);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v7, (const char (*)[54])byte_1A19A480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v9 = 0;
    }
    else
    {
      schedule_config_vec = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::operator[](
                              &this->gacha_type_schedule_config_vec_map,
                              (const std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::key_type *)(v2 + 48));
      std::vector<data::GachaScheduleConfig>::emplace_back<data::GachaScheduleConfig&>(
        schedule_config_vec,
        gacha_schedule_config,
        gacha_schedule_config);
      v9 = 1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
    {
      v10 = 0;
      goto LABEL_23;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> > *const)(v2 + 64));
  }
  v10 = 1;
LABEL_23:
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    __for_range_0 = &this->gacha_type_schedule_config_vec_map;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::iterator *)(v2 + 128) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::iterator *)(v2 + 160) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v2 + 128),
              (const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v2 + 160)) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v2 + 128));
      std::get<0ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(v19);
      schedule_config_vec_0 = std::get<1ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(v19);
      M_current = std::vector<data::GachaScheduleConfig>::end(schedule_config_vec_0)._M_current;
      v12._M_current = std::vector<data::GachaScheduleConfig>::begin(schedule_config_vec_0)._M_current;
      std::sort<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>>(
        v12,
        (__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current);
      std::_Rb_tree_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v2 + 128));
    }
    v1 = 0;
  }
  result = v1;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 274: range 000000000CD84624-000000000CD8A575
int32_t __cdecl data::DbGachaConfigMgr::checkDbGachaConfig(
        data::DbGachaConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // ecx
  uint32_t single_cost_item_id; // ecx
  uint32_t single_cost_item_num; // ecx
  uint32_t v9; // ecx
  uint32_t v10; // ecx
  unsigned __int64 v11; // rax
  uint32_t v12; // ecx
  uint32_t prob; // ecx
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  int v21; // r15d
  data::GachaUpConfig *v22; // rax
  data::GachaUpConfig *v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // edx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v26; // rax
  int *v27; // rdx
  int v28; // ecx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  common::milog::MiLogStream *v33; // rax
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaNewbieUrlConfig> > >::pointer v34; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  uint32_t gacha_sort_id; // ecx
  unsigned __int64 v41; // rax
  uint32_t begin_time; // ecx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  _BOOL4 v49; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  unsigned int *v65; // rax
  int *v66; // rdx
  int v67; // ecx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  int v72; // eax
  uint32_t v73; // edx
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  unsigned __int64 v86; // rax
  uint32_t gacha_prob_rule_id; // esi
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rdx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  _BOOL4 v92; // r15d
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rdx
  _BOOL4 v95; // edx
  unsigned __int64 v96; // rax
  data::GachaItemType gacha_item_type; // r8d
  uint32_t gacha_pool_id; // edi
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  const char *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  int v106; // r15d
  uint32_t *p_weight; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // r14
  const char *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rdx
  unsigned __int64 v115; // rax
  int v116; // edx
  unsigned __int64 v117; // rax
  uint32_t v118; // esi
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rdx
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  int v123; // r15d
  data::GachaItemParentType *p_gacha_item_parent_type; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rdx
  int v127; // edx
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rdx
  int v130; // eax
  data::GachaParentProbRuleConfig *M_current; // rcx
  bool v132; // al
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rdx
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rdx
  unsigned int *v139; // rax
  int *v140; // rdx
  int v141; // ecx
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rdx
  int v146; // eax
  uint32_t v147; // edx
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rdx
  data::GachaItemType v154; // esi
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // r14
  const char *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // r14
  const char *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rdx
  data::GachaItemParentType item_parent_type; // ecx
  bool v168; // al
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rdx
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rdx
  data::GachaItemParentType v173; // ecx
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rdx
  unsigned __int64 v176; // rdx
  unsigned __int64 v177; // rdx
  int v178; // edx
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rdx
  int v185; // edx
  int v186; // edx
  common::milog::MiLogStream *v187; // rax
  data::GachaParentProbRuleConfig *__last; // [rsp+0h] [rbp-F50h]
  bool is_found; // [rsp+2Bh] [rbp-F25h]
  uint32_t total_weight; // [rsp+2Ch] [rbp-F24h]
  uint32_t last_end_time; // [rsp+30h] [rbp-F20h]
  data::GachaItemParentType gacha_item_parent_type; // [rsp+34h] [rbp-F1Ch]
  const GachaExcelConfigMgr *gacha_config_mgr; // [rsp+40h] [rbp-F10h]
  data::GachaNewbieDataConfig *gacha_newbie_data_config; // [rsp+48h] [rbp-F08h]
  std::vector<data::GachaNewbieUpConfig> *__for_range; // [rsp+58h] [rbp-EF8h]
  const data::GachaNewbieUpConfig *newbie_up_config; // [rsp+60h] [rbp-EF0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-EE8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-EE0h]
  const data::GachaNewbieUrlConfig *effective_url_config; // [rsp+78h] [rbp-ED8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::reference v203; // [rsp+88h] [rbp-EC8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GachaScheduleConfig> >::type *schedule_id; // [rsp+90h] [rbp-EC0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GachaScheduleConfig> >::type *gacha_schedule_config_0; // [rsp+98h] [rbp-EB8h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+A0h] [rbp-EB0h]
  const data::GachaPoolExcelConfig *gacha_item_config_ptr; // [rsp+A8h] [rbp-EA8h]
  const std::vector<data::GachaUpConfig> *__for_range_4; // [rsp+B0h] [rbp-EA0h]
  const data::GachaUpConfig *up_config; // [rsp+B8h] [rbp-E98h]
  std::vector<data::GachaProbRuleConfig> *__for_range_5; // [rsp+C0h] [rbp-E90h]
  const data::GachaProbRuleConfig *gacha_prob_rule_config; // [rsp+C8h] [rbp-E88h]
  std::vector<data::GachaPoolExcelConfig> *__for_range_6; // [rsp+D0h] [rbp-E80h]
  const data::GachaPoolExcelConfig *gacha_item_config; // [rsp+D8h] [rbp-E78h]
  std::vector<data::GachaParentProbRuleConfig> *__for_range_7; // [rsp+E0h] [rbp-E70h]
  const data::GachaParentProbRuleConfig *gacha_parent_prob_rule_config; // [rsp+E8h] [rbp-E68h]
  const std::vector<data::GachaUpConfig> *__for_range_8; // [rsp+F0h] [rbp-E60h]
  data::DbGachaConfigMgr::checkDbGachaConfig::<lambda(const auto:31&)> gacha_up_config; // [rsp+F8h] [rbp-E58h]
  const std::set<unsigned int> *__for_range_9; // [rsp+100h] [rbp-E50h]
  const data::GachaPoolExcelConfig *gacha_item_config_ptr_0; // [rsp+108h] [rbp-E48h]
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *__for_range_10; // [rsp+110h] [rbp-E40h]
  std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::reference __in; // [rsp+118h] [rbp-E38h]
  std::tuple_element<1,std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::type *__for_range_11; // [rsp+130h] [rbp-E20h]
  data::GachaScheduleConfig *gacha_schedule_config_1; // [rsp+138h] [rbp-E18h]
  char v224[3600]; // [rsp+140h] [rbp-E10h] BYREF

  v3 = (unsigned __int64)v224;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(3552LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "76 32 4 14 up_item_id:293 48 4 17 gacha_rule_id:304 64 4 11 item_id:379 80 4 11 item_id:489 96 4"
                        " 9 <unknown> 112 4 9 <unknown> 128 8 15 __for_begin:288 160 8 13 __for_end:288 192 8 15 __for_be"
                        "gin:293 224 8 13 __for_end:293 256 8 15 __for_begin:304 288 8 13 __for_end:304 320 8 9 <unknown>"
                        " 352 8 15 __for_begin:346 384 8 13 __for_end:346 416 8 15 __for_begin:379 448 8 13 __for_end:379"
                        " 480 8 15 __for_begin:401 512 8 13 __for_end:401 544 8 15 __for_begin:422 576 8 13 __for_end:422"
                        " 608 8 9 <unknown> 640 8 15 __for_begin:441 672 8 13 __for_end:441 704 8 9 <unknown> 736 8 15 __"
                        "for_begin:459 768 8 13 __for_end:459 800 8 15 __for_begin:469 832 8 13 __for_end:469 864 8 9 <un"
                        "known> 896 8 9 <unknown> 928 8 15 __for_begin:489 960 8 13 __for_end:489 992 8 9 <unknown> 1024 "
                        "8 9 <unknown> 1056 8 9 <unknown> 1088 8 9 <unknown> 1120 8 15 __for_begin:532 1152 8 13 __for_en"
                        "d:532 1184 8 15 __for_begin:535 1216 8 13 __for_end:535 1248 24 23 gacha_prob_rule_vec:416 1312 "
                        "24 18 gacha_pool_vec:431 1376 24 30 gacha_parent_prob_rule_vec:453 1440 32 9 <unknown> 1504 32 9"
                        " <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 "
                        "32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2"
                        "144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknow"
                        "n> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <un"
                        "known> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9"
                        " <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 "
                        "48 27 up_item_parent_type_set:345 3440 80 13 up_config:290";
  *(_QWORD *)(v3 + 16) = data::DbGachaConfigMgr::checkDbGachaConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -218959360;
  v5[536862743] = -218959360;
  v5[536862744] = -218959360;
  v5[536862745] = -218959360;
  v5[536862746] = -218959360;
  v5[536862747] = -218959360;
  v5[536862748] = -218959360;
  v5[536862749] = -218959360;
  v5[536862750] = -218959360;
  v5[536862751] = -218959360;
  v5[536862752] = -218959360;
  v5[536862753] = -218959360;
  v5[536862754] = -218959360;
  v5[536862755] = -218959360;
  v5[536862756] = -218959360;
  v5[536862757] = -218959360;
  v5[536862758] = -218959360;
  v5[536862759] = -234881024;
  v5[536862760] = -218959118;
  v5[536862761] = -234881024;
  v5[536862762] = -218959118;
  v5[536862763] = -234881024;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -218959118;
  v5[536862786] = -218959118;
  v5[536862788] = -218959118;
  v5[536862790] = -218959118;
  v5[536862792] = -218959118;
  v5[536862794] = -218959118;
  v5[536862796] = -218959118;
  v5[536862798] = -218959118;
  v5[536862800] = -218959118;
  v5[536862802] = -218959118;
  v5[536862804] = -218959118;
  v5[536862806] = -218959118;
  v5[536862808] = -218959118;
  v5[536862810] = -218959118;
  v5[536862812] = -218959118;
  v5[536862814] = -218959118;
  v5[536862816] = -218959118;
  v5[536862818] = -218959118;
  v5[536862820] = -218959118;
  v5[536862822] = -218959118;
  v5[536862824] = -218959118;
  v5[536862826] = -219021312;
  v5[536862827] = 62194;
  v5[536862830] = -202116109;
  gacha_config_mgr = &txt_config_mgr->gacha_config_mgr;
  if ( std::vector<data::GachaNewbieDataConfig>::size(&txt_config_mgr->gacha_config_mgr.gacha_newbie_data_config_vec) != 1 )
  {
LABEL_105:
    v41 = ((v3 + 3360) >> 3) + 2147450880;
    *(_DWORD *)v41 = 0;
    *(_WORD *)(v41 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 3360));
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::GachaScheduleConfig>::iterator *)(v3 + 352) = std::map<unsigned int,data::GachaScheduleConfig>::begin(&this->gacha_schedule_config_map);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,data::GachaScheduleConfig>::iterator *)(v3 + 384) = std::map<unsigned int,data::GachaScheduleConfig>::end(&this->gacha_schedule_config_map);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::_Self *)(v3 + 352),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> >::_Self *)(v3 + 384)) )
    {
      v203 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> > *const)(v3 + 352));
      schedule_id = std::get<0ul,unsigned int const,data::GachaScheduleConfig>(v203);
      gacha_schedule_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::GachaScheduleConfig> >::type *)std::get<1ul,unsigned int const,data::GachaScheduleConfig>(v203);
      if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_schedule_config_0->begin_time);
      }
      begin_time = gacha_schedule_config_0->begin_time;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->end_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_schedule_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->end_time >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_schedule_config_0->end_time);
      }
      if ( begin_time < gacha_schedule_config_0->end_time )
      {
        p_item_config_mgr = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->cost_item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_schedule_config_0->cost_item_id);
        }
        if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, gacha_schedule_config_0->cost_item_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->cost_item_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_schedule_config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->cost_item_num >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_schedule_config_0->cost_item_num);
          }
          if ( gacha_schedule_config_0->cost_item_num )
          {
            if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_schedule_config_0->gacha_pool_id);
            }
            if ( GachaExcelConfigMgr::isGachaPoolValid(gacha_config_mgr, gacha_schedule_config_0->gacha_pool_id) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gacha_schedule_config_0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&gacha_schedule_config_0->gacha_prob_rule_id);
              }
              if ( gacha_schedule_config_0->gacha_prob_rule_id )
              {
                __for_range_3 = &gacha_schedule_config_0->display_up4_item_vec;
                *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_3);
                *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(std::vector<unsigned int>::const_iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_3);
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 448)) )
                  {
                    v72 = 1;
                    goto LABEL_187;
                  }
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                  v65 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
                  v66 = (int *)v65;
                  if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v65 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v65);
                  }
                  v67 = *v66;
                  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_store4(v3 + 64);
                  *(_DWORD *)(v3 + 64) = v67;
                  if ( !ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, *(_DWORD *)(v3 + 64)) )
                  {
                    *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2080) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2080, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2080),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_gacha_config_mgr.cpp",
                      "checkDbGachaConfig",
                      383);
                    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 2080),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v69 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                            v68,
                            (const char (*)[57])byte_1A19AF20);
                    v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v69,
                            (const unsigned int *)(v3 + 64));
                    v71 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v70,
                            (const char (*)[14])" schedule_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, schedule_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2080));
                    *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v72 = 0;
                    goto LABEL_187;
                  }
                  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 64);
                  v73 = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&gacha_schedule_config_0->gacha_pool_id);
                  }
                  gacha_item_config_ptr = GachaExcelConfigMgr::findGachaItemInPool(
                                            gacha_config_mgr,
                                            gacha_schedule_config_0->gacha_pool_id,
                                            v73);
                  if ( !gacha_item_config_ptr )
                  {
                    *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2144) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2144, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2144),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_gacha_config_mgr.cpp",
                      "checkDbGachaConfig",
                      389);
                    v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 2144),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v75 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                            v74,
                            (const char (*)[69])byte_1A19AF80);
                    v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v75,
                            &gacha_schedule_config_0->gacha_pool_id);
                    v77 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v76,
                            (const char (*)[10])" item_id:");
                    v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v77,
                            (const unsigned int *)(v3 + 64));
                    v79 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v78,
                            (const char (*)[14])" schedule_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, schedule_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2144));
                    *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v72 = 0;
                    goto LABEL_187;
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr->gacha_item_type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&gacha_item_config_ptr->gacha_item_type);
                  }
                  if ( gacha_item_config_ptr->gacha_item_type != GACHA_ITEM_WEAPON_S4
                    && gacha_item_config_ptr->gacha_item_type != GACHA_ITEM_AVATAR_S4 )
                  {
                    *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2208) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2208, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2208),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_gacha_config_mgr.cpp",
                      "checkDbGachaConfig",
                      396);
                    v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 2208),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v81 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            v80,
                            (const char (*)[38])byte_1A19B000);
                    v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v81,
                            (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v82,
                      (const char (*)[28])byte_1A19B060);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2208));
                    *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v72 = 0;
                    goto LABEL_187;
                  }
                  is_found = 0;
                  __for_range_4 = &gacha_schedule_config_0->up_config_vec;
                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 480) = std::vector<data::GachaUpConfig>::begin(__for_range_4);
                  *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 512) = std::vector<data::GachaUpConfig>::end(__for_range_4);
                  while ( __gnu_cxx::operator!=<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>(
                            (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 480),
                            (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 512)) )
                  {
                    up_config = __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 480));
                    if ( std::set<unsigned int>::count(
                           &up_config->item_set,
                           (const std::set<unsigned int>::key_type *)(v3 + 64)) )
                    {
                      is_found = 1;
                      break;
                    }
                    __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 480));
                  }
                  *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
                  if ( !is_found )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
                }
                *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2272) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2272, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2272),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "checkDbGachaConfig",
                  411);
                v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2272),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v84 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        v83,
                        (const char (*)[38])byte_1A19B000);
                v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v84,
                        (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v85, (const char (*)[18])byte_1A19B0A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2272));
                *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v72 = 0;
LABEL_187:
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                if ( v72 == 1 )
                {
                  v86 = ((v3 + 1248) >> 3) + 2147450880;
                  *(_WORD *)v86 = 0;
                  *(_BYTE *)(v86 + 2) = 0;
                  if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gacha_schedule_config_0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gacha_schedule_config_0->gacha_prob_rule_id);
                  }
                  gacha_prob_rule_id = gacha_schedule_config_0->gacha_prob_rule_id;
                  if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1271) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 32 + 23) & 7) >= *(_BYTE *)(((v3 + 1271) >> 3) + 0x7FFF8000) )
                  {
                    gacha_prob_rule_id = 24;
                    __asan_report_store_n(v3 + 1248, 24LL);
                  }
                  GachaExcelConfigMgr::findGachaProbRuleVec(
                    (std::vector<data::GachaProbRuleConfig> *)(v3 + 1248),
                    gacha_config_mgr,
                    gacha_prob_rule_id);
                  if ( std::vector<data::GachaProbRuleConfig>::empty((const std::vector<data::GachaProbRuleConfig> *const)(v3 + 1248)) )
                  {
                    *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2336) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2336, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2336),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/db_data_manual/db_gacha_config_mgr.cpp",
                      "checkDbGachaConfig",
                      419);
                    v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 2336),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v89 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v88,
                            (const char (*)[45])byte_1A19B0E0);
                    v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, schedule_id);
                    v91 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v90,
                            (const char (*)[17])byte_1A19B140);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v91,
                      &gacha_schedule_config_0->gacha_prob_rule_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2336));
                    *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v92 = 0;
                  }
                  else
                  {
                    __for_range_5 = (std::vector<data::GachaProbRuleConfig> *)(v3 + 1248);
                    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 544) = std::vector<data::GachaProbRuleConfig>::begin(__for_range_5);
                    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
                      __asan_report_store8();
                    *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 576) = std::vector<data::GachaProbRuleConfig>::end(__for_range_5);
                    while ( __gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
                              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 544),
                              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 576)) )
                    {
                      gacha_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 544));
                      if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
                      }
                      if ( gacha_prob_rule_config->gacha_item_type )
                      {
                        v96 = ((v3 + 1312) >> 3) + 2147450880;
                        *(_WORD *)v96 = 0;
                        *(_BYTE *)(v96 + 2) = 0;
                        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
                        }
                        gacha_item_type = gacha_prob_rule_config->gacha_item_type;
                        if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&gacha_schedule_config_0->gacha_pool_id);
                        }
                        gacha_pool_id = gacha_schedule_config_0->gacha_pool_id;
                        if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1335) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 32 + 87) & 7) >= *(_BYTE *)(((v3 + 1335) >> 3) + 0x7FFF8000) )
                        {
                          gacha_pool_id = v3 + 1312;
                          __asan_report_store_n(v3 + 1312, 24LL);
                        }
                        GachaExcelConfigMgr::findGachaPool(
                          (std::vector<data::GachaPoolExcelConfig> *)(v3 + 1312),
                          gacha_config_mgr,
                          gacha_pool_id,
                          gacha_item_type);
                        data::GachaScheduleConfig::excludeUpItems(
                          gacha_schedule_config_0,
                          (std::vector<data::GachaPoolExcelConfig> *)(v3 + 1312));
                        if ( std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v3 + 1312)) )
                        {
                          *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 2464) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 2464, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 2464),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/db_data_manual/db_gacha_config_mgr.cpp",
                            "checkDbGachaConfig",
                            435);
                          v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 2464),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v100 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                   v99,
                                   (const char (*)[43])byte_1A19B1E0);
                          *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
                          }
                          v101 = data::enumValToStr(gacha_prob_rule_config->gacha_item_type);
                          if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v3 + 608) = v101;
                          v102 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                                   v100,
                                   (const char *const *)(v3 + 608));
                          v103 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                   v102,
                                   (const char (*)[14])byte_1A19B240);
                          v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                   v103,
                                   &gacha_schedule_config_0->gacha_pool_id);
                          v105 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                   v104,
                                   (const char (*)[24])byte_1A19B280);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, schedule_id);
                          *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2464));
                          *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v106 = 0;
                        }
                        else
                        {
                          total_weight = 0;
                          __for_range_6 = (std::vector<data::GachaPoolExcelConfig> *)(v3 + 1312);
                          *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 640) = std::vector<data::GachaPoolExcelConfig>::begin(__for_range_6);
                          *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 672) = std::vector<data::GachaPoolExcelConfig>::end(__for_range_6);
                          while ( __gnu_cxx::operator!=<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>(
                                    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 640),
                                    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 672)) )
                          {
                            gacha_item_config = __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 640));
                            p_weight = &gacha_item_config->weight;
                            if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3)
                                                                                         + 0x7FFF8000) )
                            {
                              __asan_report_load4(p_weight);
                            }
                            total_weight += gacha_item_config->weight;
                            __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 640));
                          }
                          *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
                          if ( total_weight )
                          {
                            v106 = 1;
                          }
                          else
                          {
                            *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 2528) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 2528, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 2528),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/db_data_manual/db_gacha_config_mgr.cpp",
                              "checkDbGachaConfig",
                              447);
                            v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 2528),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v109 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                     v108,
                                     (const char (*)[43])byte_1A19B1E0);
                            *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3)
                                          + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3)
                                          + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
                            }
                            v110 = data::enumValToStr(gacha_prob_rule_config->gacha_item_type);
                            if ( *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(_QWORD *)(v3 + 704) = v110;
                            v111 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                                     v109,
                                     (const char *const *)(v3 + 704));
                            v112 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                     v111,
                                     (const char (*)[14])byte_1A19B240);
                            v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v112,
                                     &gacha_schedule_config_0->gacha_pool_id);
                            v114 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                     v113,
                                     (const char (*)[28])byte_1A19B2C0);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, schedule_id);
                            *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
                            *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v106 = 0;
                          }
                        }
                        std::vector<data::GachaPoolExcelConfig>::~vector((std::vector<data::GachaPoolExcelConfig> *const)(v3 + 1312));
                        v95 = v106 == 1;
                      }
                      else
                      {
                        *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 2400) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 2400, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 2400),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/db_data_manual/db_gacha_config_mgr.cpp",
                          "checkDbGachaConfig",
                          426);
                        v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 2400),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v94 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                v93,
                                (const char (*)[63])byte_1A19B180);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, schedule_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2400));
                        *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v95 = 0;
                      }
                      v115 = ((v3 + 1312) >> 3) + 2147450880;
                      *(_WORD *)v115 = -1800;
                      *(_BYTE *)(v115 + 2) = -8;
                      if ( !v95 )
                      {
                        v116 = 0;
                        goto LABEL_246;
                      }
                      __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 544));
                    }
                    v116 = 1;
LABEL_246:
                    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
                    if ( v116 == 1 )
                    {
                      v117 = ((v3 + 1376) >> 3) + 2147450880;
                      *(_WORD *)v117 = 0;
                      *(_BYTE *)(v117 + 2) = 0;
                      if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)gacha_schedule_config_0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3)
                                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_load4(&gacha_schedule_config_0->gacha_prob_rule_id);
                      }
                      v118 = gacha_schedule_config_0->gacha_prob_rule_id;
                      if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1399) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 1399) >> 3) + 0x7FFF8000) )
                      {
                        v118 = 24;
                        __asan_report_store_n(v3 + 1376, 24LL);
                      }
                      GachaExcelConfigMgr::findGachaParentProbRuleVec(
                        (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 1376),
                        gacha_config_mgr,
                        v118);
                      if ( std::vector<data::GachaParentProbRuleConfig>::empty((const std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1376)) )
                      {
                        *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 2592) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 2592, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 2592),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/db_data_manual/db_gacha_config_mgr.cpp",
                          "checkDbGachaConfig",
                          456);
                        v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 2592),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v120 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                 v119,
                                 (const char (*)[46])byte_1A19B300);
                        v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v120, schedule_id);
                        v122 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                 v121,
                                 (const char (*)[17])byte_1A19B140);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v122,
                          &gacha_schedule_config_0->gacha_prob_rule_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2592));
                        *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v123 = 0;
                      }
                      else
                      {
                        __for_range_7 = (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 1376);
                        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 736) = std::vector<data::GachaParentProbRuleConfig>::begin(__for_range_7);
                        *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 768) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_7);
                        while ( 1 )
                        {
                          if ( !__gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                                  (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 736),
                                  (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 768)) )
                          {
                            v127 = 1;
                            goto LABEL_270;
                          }
                          gacha_parent_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 736));
                          p_gacha_item_parent_type = &gacha_parent_prob_rule_config->gacha_item_parent_type;
                          if ( *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)p_gacha_item_parent_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load4(p_gacha_item_parent_type);
                          }
                          if ( gacha_parent_prob_rule_config->gacha_item_parent_type == GACHA_ITEM_PARENT_INVALID )
                            break;
                          __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 736));
                        }
                        *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 2656) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 2656, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 2656),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/db_data_manual/db_gacha_config_mgr.cpp",
                          "checkDbGachaConfig",
                          463);
                        v125 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 2656),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v126 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                 v125,
                                 (const char (*)[63])byte_1A19B180);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v126, schedule_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2656));
                        *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v127 = 0;
LABEL_270:
                        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
                        if ( v127 == 1 )
                        {
                          std::set<unsigned int>::clear((std::set<unsigned int> *const)(v3 + 3360));
                          __for_range_8 = &gacha_schedule_config_0->up_config_vec;
                          *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 800) = std::vector<data::GachaUpConfig>::begin(__for_range_8);
                          *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 832) = std::vector<data::GachaUpConfig>::end(__for_range_8);
                          while ( 1 )
                          {
                            if ( !__gnu_cxx::operator!=<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>(
                                    (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 800),
                                    (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 832)) )
                            {
                              v130 = 1;
                              goto LABEL_359;
                            }
                            gacha_up_config.__gacha_up_config = __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 800));
                            if ( *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(gacha_up_config.__gacha_up_config);
                            }
                            if ( gacha_up_config.__gacha_up_config->item_parent_type == GACHA_ITEM_PARENT_INVALID )
                            {
                              *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 2720) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 2720, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 2720),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                "checkDbGachaConfig",
                                473);
                              v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 2720),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v129 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                                       v128,
                                       (const char (*)[68])byte_1A19B360);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v129, schedule_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
                              *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v130 = 0;
                              goto LABEL_359;
                            }
                            *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 896) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1376));
                            *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
                            __last = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1376))._M_current;
                            M_current = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1376))._M_current;
                            if ( *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 864) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaConfig(TxtConfigMgr &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#1}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)M_current, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__last, gacha_up_config);
                            v132 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                                     (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 864),
                                     (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 896));
                            *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = -8;
                            if ( v132 )
                            {
                              *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 2784) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 2784, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 2784),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                "checkDbGachaConfig",
                                481);
                              v133 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 2784),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v134 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                                       v133,
                                       (const char (*)[78])byte_1A19B3E0);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v134, schedule_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2784));
                              *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v130 = 0;
                              goto LABEL_359;
                            }
                            if ( *(_BYTE *)(((unsigned __int64)&gacha_up_config.__gacha_up_config->prob >> 3)
                                          + 0x7FFF8000) != 0
                              && (char)(((LOBYTE(gacha_up_config.__gacha_up_config) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_up_config.__gacha_up_config->prob >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load4(&gacha_up_config.__gacha_up_config->prob);
                            }
                            if ( !gacha_up_config.__gacha_up_config->prob
                              || gacha_up_config.__gacha_up_config->prob > 0x3E8 )
                            {
                              *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 2848) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 2848, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 2848),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                "checkDbGachaConfig",
                                486);
                              v135 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 2848),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v136 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                       v135,
                                       (const char (*)[52])byte_1A19B460);
                              v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v136,
                                       &gacha_up_config.__gacha_up_config->prob);
                              v138 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                       v137,
                                       (const char (*)[14])" schedule_id:");
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v138, schedule_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2848));
                              *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v130 = 0;
                              goto LABEL_359;
                            }
                            __for_range_9 = &gacha_up_config.__gacha_up_config->item_set;
                            *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(std::set<unsigned int>::iterator *)(v3 + 928) = std::set<unsigned int>::begin(__for_range_9);
                            *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(std::set<unsigned int>::iterator *)(v3 + 960) = std::set<unsigned int>::end(__for_range_9);
                            while ( 1 )
                            {
                              if ( !std::operator!=(
                                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 928),
                                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 960)) )
                              {
                                v146 = 1;
                                goto LABEL_339;
                              }
                              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                              v139 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 928));
                              v140 = (int *)v139;
                              if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) != 0
                                && (char)(((unsigned __int8)v139 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v139 >> 3)
                                                                                       + 0x7FFF8000) )
                              {
                                __asan_report_load4(v139);
                              }
                              v141 = *v140;
                              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_store4(v3 + 80);
                              }
                              *(_DWORD *)(v3 + 80) = v141;
                              if ( !ItemExcelConfigMgr::findItemConfig(
                                      &txt_config_mgr->item_config_mgr,
                                      *(_DWORD *)(v3 + 80)) )
                              {
                                *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 2912) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 2912, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 2912),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                  "checkDbGachaConfig",
                                  493);
                                v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v3 + 2912),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v143 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                         v142,
                                         (const char (*)[50])byte_1A19B4C0);
                                v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v143,
                                         (const unsigned int *)(v3 + 80));
                                v145 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                         v144,
                                         (const char (*)[14])" schedule_id:");
                                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v145,
                                  schedule_id);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2912));
                                *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                v2 = -1;
                                v146 = 0;
                                goto LABEL_339;
                              }
                              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(v3 + 80);
                              }
                              v147 = *(_DWORD *)(v3 + 80);
                              if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3)
                                            + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_pool_id >> 3)
                                            + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(&gacha_schedule_config_0->gacha_pool_id);
                              }
                              gacha_item_config_ptr_0 = GachaExcelConfigMgr::findGachaItemInPool(
                                                          gacha_config_mgr,
                                                          gacha_schedule_config_0->gacha_pool_id,
                                                          v147);
                              if ( !gacha_item_config_ptr_0 )
                              {
                                *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 2976) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 3007) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 3007) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 2976, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 2976),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                  "checkDbGachaConfig",
                                  500);
                                v148 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v3 + 2976),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v149 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                                         v148,
                                         (const char (*)[62])byte_1A19B520);
                                v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v149,
                                         &gacha_schedule_config_0->gacha_pool_id);
                                v151 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                         v150,
                                         (const char (*)[10])" item_id:");
                                v152 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v151,
                                         (const unsigned int *)(v3 + 80));
                                v153 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                         v152,
                                         (const char (*)[14])" schedule_id:");
                                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v153,
                                  schedule_id);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2976));
                                *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                                v2 = -1;
                                v146 = 0;
                                goto LABEL_339;
                              }
                              if ( *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr_0->gacha_item_type >> 3)
                                            + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr_0->gacha_item_type >> 3)
                                            + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(&gacha_item_config_ptr_0->gacha_item_type);
                              }
                              v154 = gacha_item_config_ptr_0->gacha_item_type;
                              if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3)
                                            + 0x7FFF8000) != 0
                                && (char)((((_BYTE)gacha_schedule_config_0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load4(&gacha_schedule_config_0->gacha_prob_rule_id);
                              }
                              gacha_item_parent_type = GachaExcelConfigMgr::getGachaItemParentType(
                                                         gacha_config_mgr,
                                                         gacha_schedule_config_0->gacha_prob_rule_id,
                                                         v154);
                              if ( *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(gacha_up_config.__gacha_up_config);
                              }
                              if ( gacha_item_parent_type != gacha_up_config.__gacha_up_config->item_parent_type )
                                break;
                              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 928));
                            }
                            *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 3040) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 3040, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 3040),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/db_data_manual/db_gacha_config_mgr.cpp",
                              "checkDbGachaConfig",
                              508);
                            v155 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 3040),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v156 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                                     v155,
                                     (const char (*)[73])byte_1A19B580);
                            v157 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v156,
                                     &gacha_schedule_config_0->gacha_pool_id);
                            v158 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                     v157,
                                     (const char (*)[10])" item_id:");
                            v159 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v158,
                                     (const unsigned int *)(v3 + 80));
                            v160 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                     v159,
                                     (const char (*)[19])" item_parent_type:");
                            *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                            v161 = data::enumValToStr(gacha_item_parent_type);
                            if ( *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(_QWORD *)(v3 + 992) = v161;
                            v162 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                                     v160,
                                     (const char *const *)(v3 + 992));
                            v163 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                     v162,
                                     (const char (*)[11])byte_1A19B640);
                            *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(gacha_up_config.__gacha_up_config);
                            }
                            v164 = data::enumValToStr(gacha_up_config.__gacha_up_config->item_parent_type);
                            if ( *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(_QWORD *)(v3 + 1024) = v164;
                            v165 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                                     v163,
                                     (const char *const *)(v3 + 1024));
                            v166 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                     v165,
                                     (const char (*)[14])" schedule_id:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v166, schedule_id);
                            *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) = -8;
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3040));
                            *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v146 = 0;
LABEL_339:
                            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) = -8;
                            if ( v146 != 1 )
                            {
                              v130 = 0;
                              goto LABEL_359;
                            }
                            *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(std::set<unsigned int>::iterator *)(v3 + 1088) = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 3360));
                            *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                            if ( *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(gacha_up_config.__gacha_up_config);
                            }
                            item_parent_type = gacha_up_config.__gacha_up_config->item_parent_type;
                            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_store4(v3 + 96);
                            }
                            *(_DWORD *)(v3 + 96) = item_parent_type;
                            if ( *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) )
                              __asan_report_store8();
                            *(std::set<unsigned int>::iterator *)(v3 + 1056) = std::set<unsigned int>::find(
                                                                                 (std::set<unsigned int> *const)(v3 + 3360),
                                                                                 (const std::set<unsigned int>::key_type *)(v3 + 96));
                            v168 = std::operator!=(
                                     (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 1056),
                                     (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 1088));
                            *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -8;
                            if ( v168 )
                              break;
                            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                            if ( *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)gacha_up_config.__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(gacha_up_config.__gacha_up_config);
                            }
                            v173 = gacha_up_config.__gacha_up_config->item_parent_type;
                            if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_store4(v3 + 112);
                            }
                            *(_DWORD *)(v3 + 112) = v173;
                            std::set<unsigned int>::insert(
                              (std::set<unsigned int> *const)(v3 + 3360),
                              (std::set<unsigned int>::value_type *)(v3 + 112));
                            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                            __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 800));
                          }
                          *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 3104) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 3135) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 3135) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 3104, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 3104),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/db_data_manual/db_gacha_config_mgr.cpp",
                            "checkDbGachaConfig",
                            518);
                          v169 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 3104),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v170 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                   v169,
                                   (const char (*)[13])byte_1A19B680);
                          v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                   v170,
                                   schedule_id);
                          v172 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                   v171,
                                   (const char (*)[47])byte_1A19B6C0);
                          common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                            v172,
                            &gacha_up_config.__gacha_up_config->item_parent_type);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3104));
                          *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v130 = 0;
LABEL_359:
                          *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = -8;
                          if ( v130 == 1 )
                          {
                            if ( !std::set<unsigned int>::empty(&gacha_schedule_config_0->gacha_rule_set) )
                            {
                              *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 3168) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 3199) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3199) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 3168, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 3168),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                                "checkDbGachaConfig",
                                527);
                              v174 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 3168),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v175 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                                       v174,
                                       (const char (*)[60])byte_1A19B720);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v175, schedule_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3168));
                              *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v123 = 0;
                            }
                            else
                            {
                              v123 = 1;
                            }
                          }
                          else
                          {
                            v123 = 0;
                          }
                        }
                        else
                        {
                          v123 = 0;
                        }
                      }
                      std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1376));
                      v92 = v123 == 1;
                    }
                    else
                    {
                      v92 = 0;
                    }
                  }
                  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1248));
                  v49 = v92;
                }
                else
                {
                  v49 = 0;
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2016) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2016, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2016),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "checkDbGachaConfig",
                  374);
                v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2016),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v64 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v63,
                        (const char (*)[45])byte_1A19AEC0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, schedule_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2016));
                *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v49 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1952) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1952, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1952),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                "checkDbGachaConfig",
                368);
              v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1952),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v60 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      v59,
                      (const char (*)[40])byte_1A19AE60);
              v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v60,
                      &gacha_schedule_config_0->gacha_pool_id);
              v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v61,
                      (const char (*)[14])" schedule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, schedule_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
              *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v49 = 0;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1888, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1888),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_gacha_config_mgr.cpp",
              "checkDbGachaConfig",
              362);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1888),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    v55,
                    (const char (*)[52])byte_1A19AE00);
            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v56,
                    &gacha_schedule_config_0->cost_item_num);
            v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v57,
                    (const char (*)[14])" schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, schedule_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
            *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v49 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1824) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1824, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1824),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gacha_config_mgr.cpp",
            "checkDbGachaConfig",
            356);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1824),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v52 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v51, (const char (*)[46])byte_1A19ADA0);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  &gacha_schedule_config_0->cost_item_id);
          v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v53,
                  (const char (*)[14])" schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
          *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v49 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1760, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1760),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaConfig",
          350);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1760),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v44 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v43, (const char (*)[43])byte_1A199D40);
        v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v44,
                &gacha_schedule_config_0->begin_time);
        v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v45, (const char (*)[15])byte_1A11F020);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                &gacha_schedule_config_0->end_time);
        v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v47, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
        *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v49 = 0;
      }
      v176 = ((v3 + 1248) >> 3) + 2147450880;
      *(_WORD *)v176 = -1800;
      *(_BYTE *)(v176 + 2) = -8;
      v177 = ((v3 + 1376) >> 3) + 2147450880;
      *(_WORD *)v177 = -1800;
      *(_BYTE *)(v177 + 2) = -8;
      if ( !v49 )
      {
        v178 = 0;
        goto LABEL_372;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaScheduleConfig> > *const)(v3 + 352));
    }
    v178 = 1;
LABEL_372:
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v178 == 1 )
    {
      __for_range_10 = &this->gacha_type_schedule_config_vec_map;
      *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::iterator *)(v3 + 1120) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::begin(__for_range_10);
      *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::iterator *)(v3 + 1152) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::end(__for_range_10);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 1120),
                (const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 1152)) )
      {
        __in = std::_Rb_tree_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 1120));
        std::get<0ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(__in);
        last_end_time = 0;
        __for_range_11 = std::get<1ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(__in);
        *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaScheduleConfig>::iterator *)(v3 + 1184) = std::vector<data::GachaScheduleConfig>::begin(__for_range_11);
        *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaScheduleConfig>::iterator *)(v3 + 1216) = std::vector<data::GachaScheduleConfig>::end(__for_range_11);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 1184),
                  (const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 1216)) )
          {
            v185 = 1;
            goto LABEL_395;
          }
          gacha_schedule_config_1 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 1184));
          if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_1->begin_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_1->begin_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_schedule_config_1->begin_time);
          }
          if ( last_end_time >= gacha_schedule_config_1->begin_time )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_1->end_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_schedule_config_1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config_1->end_time >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_schedule_config_1->end_time);
          }
          last_end_time = gacha_schedule_config_1->end_time;
          __gnu_cxx::__normal_iterator<data::GachaScheduleConfig *,std::vector<data::GachaScheduleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 1184));
        }
        *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaConfig",
          539);
        v179 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3232),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v180 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v179, (const char (*)[40])byte_1A19B780);
        v181 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v180,
                 &gacha_schedule_config_1->begin_time);
        v182 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v181, (const char (*)[15])byte_1A11F020);
        v183 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v182,
                 &gacha_schedule_config_1->end_time);
        v184 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v183,
                 (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v184,
          &gacha_schedule_config_1->schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3232));
        *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v185 = 0;
LABEL_395:
        *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -8;
        if ( v185 != 1 )
        {
          v186 = 0;
          goto LABEL_399;
        }
        std::_Rb_tree_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 1120));
      }
      v186 = 1;
LABEL_399:
      *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -8;
      if ( v186 == 1 )
      {
        if ( data::DbGachaConfigMgr::checkDbSpecialAvatarGacha(this, txt_config_mgr) )
        {
          *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 3296) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 3327) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3327) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 3296, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 3296),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gacha_config_mgr.cpp",
            "checkDbGachaConfig",
            550);
          v187 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 3296),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v187, (const char (*)[37])byte_1A19B7E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3296));
          *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
        }
        else
        {
          v2 = 0;
        }
      }
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 3360));
    goto LABEL_406;
  }
  gacha_newbie_data_config = std::vector<data::GachaNewbieDataConfig>::operator[](
                               &txt_config_mgr->gacha_config_mgr.gacha_newbie_data_config_vec,
                               0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.gacha_type);
  }
  this->gacha_newbie_schedule_config.schedule_config.gacha_type = GACHA_TYPE_NEWBIE;
  v6 = std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.end_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.end_time);
  }
  this->gacha_newbie_schedule_config.schedule_config.end_time = v6;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->single_cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->single_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&gacha_newbie_data_config->single_cost_item_id);
  }
  single_cost_item_id = gacha_newbie_data_config->single_cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.cost_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.cost_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.cost_item_id);
  }
  this->gacha_newbie_schedule_config.schedule_config.cost_item_id = single_cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->single_cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_newbie_data_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->single_cost_item_num >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_newbie_data_config->single_cost_item_num);
  }
  single_cost_item_num = gacha_newbie_data_config->single_cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.cost_item_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.cost_item_num >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.cost_item_num);
  }
  this->gacha_newbie_schedule_config.schedule_config.cost_item_num = single_cost_item_num;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_newbie_data_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_pool_id >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_newbie_data_config->gacha_pool_id);
  }
  v9 = gacha_newbie_data_config->gacha_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.gacha_pool_id);
  }
  this->gacha_newbie_schedule_config.schedule_config.gacha_pool_id = v9;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&gacha_newbie_data_config->gacha_prob_rule_id);
  }
  v10 = gacha_newbie_data_config->gacha_prob_rule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_prob_rule_id >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_prob_rule_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.gacha_prob_rule_id);
  }
  this->gacha_newbie_schedule_config.schedule_config.gacha_prob_rule_id = v10;
  __for_range = &gacha_newbie_data_config->gacha_up_config_vec;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaNewbieUpConfig>::iterator *)(v3 + 128) = std::vector<data::GachaNewbieUpConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaNewbieUpConfig>::iterator *)(v3 + 160) = std::vector<data::GachaNewbieUpConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::GachaNewbieUpConfig *,std::vector<data::GachaNewbieUpConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *)(v3 + 128),
            (const __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *)(v3 + 160)) )
  {
    newbie_up_config = __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig *,std::vector<data::GachaNewbieUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *const)(v3 + 128));
    v11 = ((v3 + 3440) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_DWORD *)(v11 + 4) = 0;
    *(_WORD *)(v11 + 8) = 0;
    data::GachaUpConfig::GachaUpConfig((data::GachaUpConfig *const)(v3 + 3440));
    if ( *(_BYTE *)(((unsigned __int64)&newbie_up_config->item_parent_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&newbie_up_config->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&newbie_up_config->item_parent_type);
    }
    v12 = newbie_up_config->item_parent_type;
    if ( *(_BYTE *)(((v3 + 3440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 3440) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 3440);
    *(_DWORD *)(v3 + 3440) = v12;
    if ( *(_BYTE *)(((unsigned __int64)&newbie_up_config->prob >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newbie_up_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&newbie_up_config->prob >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&newbie_up_config->prob);
    }
    prob = newbie_up_config->prob;
    if ( *(_BYTE *)(((v3 + 3444) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 3444) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3 + 3444);
    }
    *(_DWORD *)(v3 + 3444) = prob;
    __for_range_0 = &newbie_up_config->item_list;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
      {
        v20 = 1;
        goto LABEL_55;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32);
      *(_DWORD *)(v3 + 32) = v16;
      v17 = std::set<unsigned int>::emplace<unsigned int &>(
              (std::set<unsigned int> *const)(v3 + 3448),
              (unsigned int *)(v3 + 32),
              (unsigned int *)(v3 + 3448));
      if ( !v17.second )
        break;
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 3496),
        (const std::vector<unsigned int>::value_type *)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
    }
    *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1440, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1440),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "checkDbGachaConfig",
      297);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1440),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v18, (const char (*)[48])byte_1A19ABC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
    *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_55:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
    {
      v22 = std::move<data::GachaUpConfig &>((data::GachaUpConfig *)(v3 + 3440));
      std::vector<data::GachaUpConfig>::emplace_back<data::GachaUpConfig>(
        &this->gacha_newbie_schedule_config.schedule_config.up_config_vec,
        v22,
        v23);
      v21 = 1;
    }
    else
    {
      v21 = 0;
    }
    data::GachaUpConfig::~GachaUpConfig((data::GachaUpConfig *const)(v3 + 3440));
    v24 = ((v3 + 3440) >> 3) + 2147450880;
    *(_DWORD *)v24 = -117901064;
    *(_DWORD *)(v24 + 4) = -117901064;
    *(_WORD *)(v24 + 8) = -1800;
    if ( v21 != 1 )
    {
      v25 = 0;
      goto LABEL_62;
    }
    __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig *,std::vector<data::GachaNewbieUpConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *const)(v3 + 128));
  }
  v25 = 1;
LABEL_62:
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v25 == 1 )
  {
    __for_range_1 = &gacha_newbie_data_config->gacha_guarantee_rule_list;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288)) )
      {
        v32 = 1;
        goto LABEL_79;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
      v27 = (int *)v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      v28 = *v27;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48);
      *(_DWORD *)(v3 + 48) = v28;
      v29 = std::set<unsigned int>::emplace<unsigned int &>(
              &this->gacha_newbie_schedule_config.schedule_config.gacha_rule_set,
              (unsigned int *)(v3 + 48),
              (unsigned int *)&this->gacha_newbie_schedule_config.schedule_config.gacha_rule_set);
      if ( !v29.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
    }
    *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1504, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1504),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "checkDbGachaConfig",
      308);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1504),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v31 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v30, (const char (*)[47])byte_1A19AC20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
    *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v32 = 0;
LABEL_79:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v32 == 1 )
    {
      if ( data::DbGachaConfigMgr::checkDbGachaRuleConfig(
             this,
             txt_config_mgr,
             &this->gacha_newbie_schedule_config.schedule_config) )
      {
        *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1568, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1568),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaConfig",
          315);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1568),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v33, (const char (*)[38])byte_1A19AC80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
        v2 = -1;
        goto LABEL_406;
      }
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_prefab_path,
        &gacha_newbie_data_config->gacha_prefab_path);
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_preview_prefab_path,
        &gacha_newbie_data_config->gacha_preview_prefab_path);
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_prob_url,
        &gacha_newbie_data_config->gacha_prob_url);
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_record_url,
        &gacha_newbie_data_config->gacha_record_url);
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_prob_url_oversea,
        &gacha_newbie_data_config->gacha_prob_url_oversea);
      std::string::operator=(
        &this->gacha_newbie_schedule_config.schedule_config.gacha_record_url_oversea,
        &gacha_newbie_data_config->gacha_record_url_oversea);
      if ( !std::map<unsigned int,data::GachaNewbieUrlConfig>::empty(&this->gacha_newbie_url_config_map) )
      {
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        std::map<unsigned int,data::GachaNewbieUrlConfig>::rbegin((std::map<unsigned int,data::GachaNewbieUrlConfig> *const)(v3 + 320));
        v34 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaNewbieUrlConfig>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaNewbieUrlConfig> > > *const)(v3 + 320));
        effective_url_config = &v34->second;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( (unsigned __int8)std::string::empty(&v34->second.gacha_prob_url)
          || (unsigned __int8)std::string::empty(&effective_url_config->gacha_record_url) )
        {
          *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1632) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1632, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1632),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_gacha_config_mgr.cpp",
            "checkDbGachaConfig",
            332);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1632),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v36, (const char (*)[28])byte_1A19ACE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
          v2 = -1;
          goto LABEL_406;
        }
        std::string::operator=(
          &this->gacha_newbie_schedule_config.schedule_config.gacha_prob_url,
          &effective_url_config->gacha_prob_url);
        std::string::operator=(
          &this->gacha_newbie_schedule_config.schedule_config.gacha_record_url,
          &effective_url_config->gacha_record_url);
        std::string::operator=(
          &this->gacha_newbie_schedule_config.schedule_config.gacha_prob_url_oversea,
          &effective_url_config->gacha_prob_url);
        std::string::operator=(
          &this->gacha_newbie_schedule_config.schedule_config.gacha_record_url_oversea,
          &effective_url_config->gacha_record_url);
      }
      *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1696) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1696, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1696),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbGachaConfig",
        340);
      v37 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              (common::milog::MiLogStream *const)(v3 + 1696),
              (const char (*)[24])"newbie gacha_prob_url: ");
      v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v37,
              &this->gacha_newbie_schedule_config.schedule_config.gacha_prob_url);
      v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v38,
              (const char (*)[21])" ,gacha_record_url: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v39,
        &this->gacha_newbie_schedule_config.schedule_config.gacha_record_url);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
      *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_sort_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_newbie_data_config->gacha_sort_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_newbie_data_config->gacha_sort_id);
      }
      gacha_sort_id = gacha_newbie_data_config->gacha_sort_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_sort_id >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gacha_newbie_schedule_config.schedule_config.gacha_sort_id >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->gacha_newbie_schedule_config.schedule_config.gacha_sort_id);
      }
      this->gacha_newbie_schedule_config.schedule_config.gacha_sort_id = gacha_sort_id;
      if ( *(char *)(((unsigned __int64)&this->gacha_newbie_schedule_config.is_valid >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->gacha_newbie_schedule_config.is_valid);
      this->gacha_newbie_schedule_config.is_valid = 1;
      goto LABEL_105;
    }
  }
LABEL_406:
  if ( v224 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 196) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C8) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF819C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862774) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147451088 - (((_DWORD)v5 + 2147451096) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF81A8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF81B0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81B8) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 3552LL, v224);
  }
  return v2;
};

// Line 476: range 000000000CDDC8C4-000000000CDDC977
bool __cdecl data::DbGachaConfigMgr::checkDbGachaConfig::_lambda_const_auto_31___::operator()_data::GachaParentProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaConfig::<lambda(const auto:31&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaUpConfig *gacha_up_config; // rax

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  gacha_up_config = __closure->__gacha_up_config;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__gacha_up_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure->__gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure->__gacha_up_config);
  }
  return gacha_item_parent_type == gacha_up_config->item_parent_type;
};

// Line 560: range 000000000CD8A576-000000000CD8D022
int32_t __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig(
        data::DbGachaConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const data::GachaScheduleConfig *gacha_schedule_config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t schedule_id; // ecx
  uint32_t gacha_prob_rule_id; // esi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // esi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  uint32_t gacha_guarantee_item; // edx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  data::GachaParentProbRuleConfig *M_current; // rcx
  bool v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // edx
  unsigned int *v40; // rax
  int *v41; // rdx
  int v42; // ecx
  data::GachaItemType v43; // esi
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // eax
  data::GachaProbRuleConfig *v49; // rcx
  bool v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  data::GachaParentProbRuleConfig *v56; // rcx
  bool v57; // al
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  data::GachaParentProbRuleConfig *v61; // rcx
  bool v62; // al
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  data::GachaParentProbRuleConfig *v65; // rcx
  bool v66; // al
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v69; // rax
  int *v70; // rdx
  int v71; // ecx
  data::GachaItemType v72; // esi
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  int v77; // eax
  data::GachaProbRuleConfig *v78; // rcx
  bool v79; // al
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:33&)> __pred; // [rsp+8h] [rbp-748h]
  data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:37&)> __preda; // [rsp+8h] [rbp-748h]
  data::GachaParentProbRuleConfig *__last; // [rsp+10h] [rbp-740h]
  data::GachaProbRuleConfig *__lasta; // [rsp+10h] [rbp-740h]
  data::GachaParentProbRuleConfig *__lastb; // [rsp+10h] [rbp-740h]
  data::GachaParentProbRuleConfig *__lastc; // [rsp+10h] [rbp-740h]
  data::GachaParentProbRuleConfig *__lastd; // [rsp+10h] [rbp-740h]
  data::GachaItemParentType __laste; // [rsp+10h] [rbp-740h]
  data::GachaProbRuleConfig *__lastf; // [rsp+10h] [rbp-740h]
  data::GachaItemParentType gacha_item_parent_type; // [rsp+34h] [rbp-71Ch]
  GachaExcelConfigMgr *gacha_config_mgr; // [rsp+38h] [rbp-718h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-710h]
  data::GachaRuleExcelConfig *rule_config_ptr; // [rsp+48h] [rbp-708h]
  std::vector<unsigned int> *__for_range_3; // [rsp+50h] [rbp-700h]
  std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> *__for_range_1; // [rsp+58h] [rbp-6F8h]
  const data::GachaGuaranteeParentTypeWeightWithChilds *item_parent_type_weight_childs; // [rsp+60h] [rbp-6F0h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-6E8h]
  std::vector<data::GachaGuaranteeParentTypeWeight> *__for_range_0; // [rsp+70h] [rbp-6E0h]
  const data::GachaGuaranteeParentTypeWeight *item_parent_type_weight; // [rsp+78h] [rbp-6D8h]
  char v105[1744]; // [rsp+80h] [rbp-6D0h] BYREF

  v4 = (unsigned __int64)v105;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1696LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "40 32 4 15 schedule_id:561 48 4 17 gacha_rule_id:577 64 4 19 gacha_item_type:614 80 4 19 gacha_i"
                        "tem_type:663 96 8 15 __for_begin:577 128 8 13 __for_end:577 160 8 15 __for_begin:597 192 8 13 __"
                        "for_end:597 224 8 9 <unknown> 256 8 9 <unknown> 288 8 15 __for_begin:611 320 8 13 __for_end:611 "
                        "352 8 15 __for_begin:614 384 8 13 __for_end:614 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unk"
                        "nown> 512 8 9 <unknown> 544 8 9 <unknown> 576 8 9 <unknown> 608 8 9 <unknown> 640 8 9 <unknown> "
                        "672 8 15 __for_begin:663 704 8 13 __for_end:663 736 8 9 <unknown> 768 8 9 <unknown> 800 24 30 ga"
                        "cha_parent_prob_rule_vec:564 864 24 23 gacha_prob_rule_vec:570 928 32 9 <unknown> 992 32 9 <unkn"
                        "own> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <"
                        "unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = data::DbGachaConfigMgr::checkDbGachaRuleConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -218959360;
  v6[536862733] = -218959360;
  v6[536862734] = -218959360;
  v6[536862735] = -218959360;
  v6[536862736] = -218959360;
  v6[536862737] = -218959360;
  v6[536862738] = -218959360;
  v6[536862739] = -218959360;
  v6[536862740] = -218959360;
  v6[536862741] = -218959360;
  v6[536862742] = -218959360;
  v6[536862743] = -218959360;
  v6[536862744] = -218959360;
  v6[536862745] = -234881024;
  v6[536862746] = -218959118;
  v6[536862747] = -234881024;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -218959118;
  v6[536862754] = -218959118;
  v6[536862756] = -218959118;
  v6[536862758] = -218959118;
  v6[536862760] = -218959118;
  v6[536862762] = -218959118;
  v6[536862764] = -218959118;
  v6[536862766] = -218959118;
  v6[536862768] = -218959118;
  v6[536862770] = -218959118;
  v6[536862772] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)gacha_schedule_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)gacha_schedule_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(gacha_schedule_config);
  }
  schedule_id = gacha_schedule_config->schedule_id;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 32);
  *(_DWORD *)(v4 + 32) = schedule_id;
  gacha_config_mgr = &txt_config_mgr->gacha_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_schedule_config->gacha_prob_rule_id);
  }
  gacha_prob_rule_id = gacha_schedule_config->gacha_prob_rule_id;
  if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 823) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 823) >> 3) + 0x7FFF8000) )
  {
    gacha_prob_rule_id = 24;
    __asan_report_store_n(v4 + 800, 24LL);
  }
  GachaExcelConfigMgr::findGachaParentProbRuleVec(
    (std::vector<data::GachaParentProbRuleConfig> *)(v4 + 800),
    gacha_config_mgr,
    gacha_prob_rule_id);
  if ( std::vector<data::GachaParentProbRuleConfig>::empty((const std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800)) )
  {
    if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 928, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 928),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "checkDbGachaRuleConfig",
      567);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 928),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v9, (const char (*)[46])byte_1A19B300);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])byte_1A19B140);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v12,
      &gacha_schedule_config->gacha_prob_rule_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 928));
    *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    goto LABEL_182;
  }
  if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_schedule_config->gacha_prob_rule_id);
  }
  v13 = gacha_schedule_config->gacha_prob_rule_id;
  if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 887) >> 3) + 0x7FFF8000) )
  {
    v13 = 24;
    __asan_report_store_n(v4 + 864, 24LL);
  }
  GachaExcelConfigMgr::findGachaProbRuleVec((std::vector<data::GachaProbRuleConfig> *)(v4 + 864), gacha_config_mgr, v13);
  if ( std::vector<data::GachaProbRuleConfig>::empty((const std::vector<data::GachaProbRuleConfig> *const)(v4 + 864)) )
  {
    if ( *(char *)(((v4 + 992) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 992, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 992),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "checkDbGachaRuleConfig",
      573);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 992),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v14, (const char (*)[45])byte_1A19B0E0);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1A19B140);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v17,
      &gacha_schedule_config->gacha_prob_rule_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 992));
    *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    goto LABEL_181;
  }
  __for_range = &gacha_schedule_config->gacha_rule_set;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::iterator *)(v4 + 96) = std::set<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int>::iterator *)(v4 + 128) = std::set<unsigned int>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 96),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v4 + 128)) )
    {
      v25 = 1;
      goto LABEL_179;
    }
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
    v18 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v4 + 96));
    v19 = (int *)v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v20 = *v19;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 48);
    *(_DWORD *)(v4 + 48) = v20;
    rule_config_ptr = data::GachaExcelConfigMgrBase::findGachaRuleExcelConfig(gacha_config_mgr, *(_DWORD *)(v4 + 48));
    if ( !rule_config_ptr )
    {
      *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbGachaRuleConfig",
        582);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v21, (const char (*)[56])byte_1A19BC00);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1056));
      *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v25 = 0;
      goto LABEL_179;
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
    }
    if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_SPECIFIED_COUNT )
    {
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_item);
      }
      gacha_guarantee_item = rule_config_ptr->gacha_guarantee_item;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_pool_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_schedule_config->gacha_pool_id);
      }
      if ( !GachaExcelConfigMgr::findGachaItemInPool(
              gacha_config_mgr,
              gacha_schedule_config->gacha_pool_id,
              gacha_guarantee_item) )
      {
        *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1120) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1120, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1120),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaRuleConfig",
          590);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v27, (const char (*)[66])byte_1A19BC60);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &gacha_schedule_config->gacha_pool_id);
        v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" rule_id:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v4 + 48));
        v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])" item_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                &rule_config_ptr->gacha_guarantee_item);
        v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v33, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1120));
        *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v25 = 0;
        goto LABEL_179;
      }
      goto LABEL_177;
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
    }
    if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT )
    {
      __for_range_0 = &rule_config_ptr->gacha_guarantee_parent_type_weight_vec;
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaGuaranteeParentTypeWeight>::iterator *)(v4 + 160) = std::vector<data::GachaGuaranteeParentTypeWeight>::begin(__for_range_0);
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaGuaranteeParentTypeWeight>::iterator *)(v4 + 192) = std::vector<data::GachaGuaranteeParentTypeWeight>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>(
                (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v4 + 160),
                (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v4 + 192)) )
        {
          v39 = 1;
          goto LABEL_68;
        }
        item_parent_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v4 + 160));
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 256) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800));
        *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
        __last = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
        M_current = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
        if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 224) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#1}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)M_current, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__last, (data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:32&)>)item_parent_type_weight);
        v36 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 224),
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 256));
        *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v36 )
          break;
        __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight *,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v4 + 160));
      }
      *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 1184) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1184, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1184),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbGachaRuleConfig",
        604);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 1184),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v38 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(v37, (const char (*)[86])byte_1A19BD20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1184));
      *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v39 = 0;
LABEL_68:
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v39 != 1 )
      {
        v25 = 0;
        goto LABEL_179;
      }
      goto LABEL_177;
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
    }
    if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS )
    {
      __for_range_1 = &rule_config_ptr->gacha_guarantee_parent_type_weight_childs_vec;
      *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::iterator *)(v4 + 288) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::begin(__for_range_1);
      *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::iterator *)(v4 + 320) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeightWithChilds *,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>(
                (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v4 + 288),
                (const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v4 + 320)) )
        {
          v55 = 1;
          goto LABEL_121;
        }
        item_parent_type_weight_childs = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds *,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v4 + 288));
        if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&item_parent_type_weight_childs->gacha_item_parent_type);
        }
        gacha_item_parent_type = item_parent_type_weight_childs->gacha_item_parent_type;
        __for_range_2 = &item_parent_type_weight_childs->item_type_vec;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<unsigned int>::const_iterator *)(v4 + 352) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<unsigned int>::const_iterator *)(v4 + 384) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 352),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 384)) )
          {
            v48 = 1;
            goto LABEL_109;
          }
          *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
          v40 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 352));
          v41 = (int *)v40;
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v40);
          }
          v42 = *v41;
          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v4 + 64);
          *(_DWORD *)(v4 + 64) = v42;
          v43 = *(_DWORD *)(v4 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_schedule_config->gacha_prob_rule_id);
          }
          if ( gacha_item_parent_type != GachaExcelConfigMgr::getGachaItemParentType(
                                           gacha_config_mgr,
                                           gacha_schedule_config->gacha_prob_rule_id,
                                           v43) )
          {
            *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 1248) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1279) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 1279) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1248, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1248),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_gacha_config_mgr.cpp",
              "checkDbGachaRuleConfig",
              618);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 1248),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [104],(char *[104])0>(
                    v44,
                    (const char (*)[104])byte_1A19BDA0);
            v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    &gacha_schedule_config->gacha_prob_rule_id);
            v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v46,
                    (const char (*)[14])" schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1248));
            *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = -117901064;
            v3 = -1;
            v48 = 0;
            goto LABEL_109;
          }
          *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(std::vector<data::GachaProbRuleConfig>::iterator *)(v4 + 448) = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864));
          *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 64);
          __pred.__gacha_item_type = *(_DWORD *)(v4 + 64);
          __lasta = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864))._M_current;
          v49 = std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864))._M_current;
          if ( *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8();
          *(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 416) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>> const&)#2}>((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v49, (__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)__lasta, __pred);
          v50 = __gnu_cxx::operator==<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 416),
                  (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 448));
          *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = -8;
          if ( v50 )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 352));
        }
        *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1312) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1312, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1312),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaRuleConfig",
          628);
        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1312),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v52 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v51, (const char (*)[80])byte_1A19BE40);
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v52,
                (const unsigned int *)(v4 + 64));
        v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v53, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1312));
        *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v48 = 0;
LABEL_109:
        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = -8;
        if ( v48 != 1 )
        {
          v55 = 0;
          goto LABEL_121;
        }
        *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 512) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800));
        *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
        __lastb = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
        v56 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
        if ( *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 480) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#3}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v56, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lastb, (data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:34&)>)item_parent_type_weight_childs);
        v57 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 480),
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 512));
        *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = -8;
        if ( v57 )
          break;
        __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds *,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator++((__gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v4 + 288));
      }
      *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 1376) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1376, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1376),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbGachaRuleConfig",
        637);
      v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 1376),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v59 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v58, (const char (*)[70])byte_1A19BEC0);
      v60 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v59, (const char (*)[14])" schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1376));
      *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v55 = 0;
LABEL_121:
      *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v55 != 1 )
      {
        v25 = 0;
        goto LABEL_179;
      }
      goto LABEL_177;
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
    }
    if ( rule_config_ptr->gacha_guarantee_type != GACHA_GUARANTEE_N_COUNT )
      break;
    *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 576) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800));
    *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
    __lastc = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
    v61 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
    if ( *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 544) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#4}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v61, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lastc, (data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:35&)>)rule_config_ptr);
    v62 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 544),
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 576));
    *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) = -8;
    if ( v62 )
    {
      *(_DWORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 1440) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1440, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1440),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbGachaRuleConfig",
        649);
      v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 1440),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v64 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(v63, (const char (*)[86])byte_1A19BD20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1440));
      *(_DWORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v25 = 0;
      goto LABEL_179;
    }
LABEL_177:
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v4 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
  }
  if ( rule_config_ptr->gacha_guarantee_type != GACHA_GUARANTEE_N_COUNT_WITH_CHILDS )
    goto LABEL_177;
  *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 640) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800));
  *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
  __lastd = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
  v65 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800))._M_current;
  if ( *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 608) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#5}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v65, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lastd, (data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:36&)>)rule_config_ptr);
  v66 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
          (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 608),
          (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 640));
  *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) = -8;
  if ( !v66 )
  {
    __for_range_3 = &rule_config_ptr->gacha_guarantee_item_parent_type_childs.item_type_vec;
    *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::iterator *)(v4 + 672) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 704) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::iterator *)(v4 + 704) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 672),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 704)) )
      {
        v77 = 1;
        goto LABEL_175;
      }
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
      v69 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 672));
      v70 = (int *)v69;
      if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v69);
      }
      v71 = *v70;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 80);
      *(_DWORD *)(v4 + 80) = v71;
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
      }
      __laste = rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type;
      v72 = *(_DWORD *)(v4 + 80);
      if ( *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_schedule_config->gacha_prob_rule_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_schedule_config->gacha_prob_rule_id);
      }
      if ( __laste != GachaExcelConfigMgr::getGachaItemParentType(
                        gacha_config_mgr,
                        gacha_schedule_config->gacha_prob_rule_id,
                        v72) )
      {
        *(_DWORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1568) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1599) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1599) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1568, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1568),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbGachaRuleConfig",
          667);
        v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1568),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v74 = common::milog::MiLogStream::operator<<<char [104],(char *[104])0>(v73, (const char (*)[104])byte_1A19BDA0);
        v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v74,
                &gacha_schedule_config->gacha_prob_rule_id);
        v76 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v75, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1568));
        *(_DWORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v77 = 0;
        goto LABEL_175;
      }
      *(_BYTE *)(((v4 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 768) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaProbRuleConfig>::iterator *)(v4 + 768) = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864));
      *(_BYTE *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 80);
      __preda.__gacha_item_type = *(_DWORD *)(v4 + 80);
      __lastf = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864))._M_current;
      v78 = std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864))._M_current;
      if ( *(_BYTE *)(((v4 + 736) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 736) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>,data::DbGachaConfigMgr::checkDbGachaRuleConfig(TxtConfigMgr &,data::GachaScheduleConfig const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>> const&)#6}>((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v78, (__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)__lastf, __preda);
      v79 = __gnu_cxx::operator==<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 736),
              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 768));
      *(_BYTE *)(((v4 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 768) >> 3) + 0x7FFF8000) = -8;
      if ( v79 )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 672));
    }
    *(_DWORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 1632) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1663) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1663) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 1632, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 1632),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_gacha_config_mgr.cpp",
      "checkDbGachaRuleConfig",
      677);
    v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 1632),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v81 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v80, (const char (*)[80])byte_1A19BE40);
    v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, (const unsigned int *)(v4 + 80));
    v83 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v82, (const char (*)[14])" schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1632));
    *(_DWORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    v77 = 0;
LABEL_175:
    *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 704) >> 3) + 0x7FFF8000) = -8;
    if ( v77 != 1 )
    {
      v25 = 0;
      goto LABEL_179;
    }
    goto LABEL_177;
  }
  *(_DWORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 1504) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 1535) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 1535) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 1504, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 1504),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/db_data_manual/db_gacha_config_mgr.cpp",
    "checkDbGachaRuleConfig",
    660);
  v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v4 + 1504),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v68 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(v67, (const char (*)[85])byte_1A19BF40);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, (const unsigned int *)(v4 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1504));
  *(_DWORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) = -117901064;
  v3 = -1;
  v25 = 0;
LABEL_179:
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v25 == 1 )
    v3 = 0;
LABEL_181:
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v4 + 864));
LABEL_182:
  std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 800));
  if ( v105 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1696LL, v105);
  }
  return v3;
};

// Line 599: range 000000000CDDCA50-000000000CDDCB05
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_32___::operator()_data::GachaParentProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:32&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaGuaranteeParentTypeWeight *item_parent_type_weight; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  item_parent_type_weight = __closure->__item_parent_type_weight;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__item_parent_type_weight->gacha_item_parent_type);
  return gacha_item_parent_type == item_parent_type_weight->gacha_item_parent_type;
};

// Line 623: range 000000000CDDCBDE-000000000CDDCC6C
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_33___::operator()_data::GachaProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:33&)> *const __closure,
        const data::GachaProbRuleConfig *o)
{
  data::GachaItemType gacha_item_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_type);
  }
  gacha_item_type = o->gacha_item_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_type == __closure->__gacha_item_type;
};

// Line 632: range 000000000CDDCD46-000000000CDDCDFB
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_34___::operator()_data::GachaParentProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:34&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaGuaranteeParentTypeWeightWithChilds *item_parent_type_weight_childs; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  item_parent_type_weight_childs = __closure->__item_parent_type_weight_childs;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__item_parent_type_weight_childs->gacha_item_parent_type);
  return gacha_item_parent_type == item_parent_type_weight_childs->gacha_item_parent_type;
};

// Line 644: range 000000000CDDCED4-000000000CDDCF91
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_35___::operator()_data::GachaParentProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:35&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  data::GachaRuleExcelConfig *rule_config_ptr; // rdx
  char v4; // cl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rule_config_ptr = __closure->__rule_config_ptr;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && (char)(((LOBYTE(__closure->__rule_config_ptr) + 116) & 7) + 3) >= v4 )
    __asan_report_load4(&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type);
  return gacha_item_parent_type == rule_config_ptr->gacha_guarantee_item_parent_type;
};

// Line 655: range 000000000CDDD06A-000000000CDDD125
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_36___::operator()_data::GachaParentProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:36&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  data::GachaRuleExcelConfig *rule_config_ptr; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rule_config_ptr = __closure->__rule_config_ptr;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
  return gacha_item_parent_type == rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type;
};

// Line 672: range 000000000CDDD1FE-000000000CDDD28C
bool __cdecl data::DbGachaConfigMgr::checkDbGachaRuleConfig::_lambda_const_auto_37___::operator()_data::GachaProbRuleConfig_(
        const data::DbGachaConfigMgr::checkDbGachaRuleConfig::<lambda(const auto:37&)> *const __closure,
        const data::GachaProbRuleConfig *o)
{
  data::GachaItemType gacha_item_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_type);
  }
  gacha_item_type = o->gacha_item_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_type == __closure->__gacha_item_type;
};

// Line 688: range 000000000CD8D024-000000000CD8E0BF
int32_t __cdecl data::DbGachaConfigMgr::checkDbSpecialAvatarGacha(
        const data::DbGachaConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *p_gacha_type_schedule_config_vec_map; // rcx
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *v7; // rdx
  bool v8; // al
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *v9; // rcx
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *v10; // rdx
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  uint32_t begin_time; // ecx
  uint32_t end_time; // ecx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  uint32_t cost_item_id; // ecx
  uint32_t cost_item_num; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  uint32_t gacha_prob_rule_id; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // eax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  bool is_found; // [rsp+17h] [rbp-2D9h]
  std::vector<data::GachaScheduleConfig> *schedule_config_vec; // [rsp+18h] [rbp-2D8h]
  std::vector<data::GachaScheduleConfig> *__for_range; // [rsp+20h] [rbp-2D0h]
  const data::GachaScheduleConfig *special_schedule_config; // [rsp+28h] [rbp-2C8h]
  const data::GachaScheduleConfig *schedule_config; // [rsp+38h] [rbp-2B8h]
  char v46[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 9 <unknown> 48 4 9 <unknown> 64 8 16 special_iter:690 96 8 9 <unknown> 128 8 8 iter:696 "
                        "160 8 9 <unknown> 192 8 15 __for_begin:704 224 8 13 __for_end:704 256 8 15 __for_begin:707 288 8"
                        " 13 __for_end:707 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 57"
                        "6 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::DbGachaConfigMgr::checkDbSpecialAvatarGacha;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  p_gacha_type_schedule_config_vec_map = &this->gacha_type_schedule_config_vec_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32);
  *(_DWORD *)(v3 + 32) = 400;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 64) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::find(
                                                                                                     p_gacha_type_schedule_config_vec_map,
                                                                                                     (const std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::key_type *)(v3 + 32));
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  v7 = &this->gacha_type_schedule_config_vec_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 96) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v2 = 0;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->gacha_type_schedule_config_vec_map;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48);
    *(_DWORD *)(v3 + 48) = 301;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 128) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::find(v9, (const std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v10 = &this->gacha_type_schedule_config_vec_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 160) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::end(v10);
    v11 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
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
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbSpecialAvatarGacha",
        699);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v12, (const char (*)[72])byte_1A19C140);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
    }
    else
    {
      schedule_config_vec = &std::_Rb_tree_const_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 128))->second;
      __for_range = &std::_Rb_tree_const_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 64))->second;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 192) = std::vector<data::GachaScheduleConfig>::begin(__for_range);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 224) = std::vector<data::GachaScheduleConfig>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 224)) )
        {
          v36 = 1;
          goto LABEL_77;
        }
        special_schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 192));
        is_found = 0;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 256) = std::vector<data::GachaScheduleConfig>::begin(schedule_config_vec);
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 288) = std::vector<data::GachaScheduleConfig>::end(schedule_config_vec);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 256),
                  (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 288)) )
          {
            v28 = 1;
            goto LABEL_69;
          }
          schedule_config = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 256));
          if ( *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&schedule_config->begin_time);
          }
          begin_time = schedule_config->begin_time;
          if ( *(_BYTE *)(((unsigned __int64)&special_schedule_config->begin_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&special_schedule_config->begin_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&special_schedule_config->begin_time);
          }
          if ( begin_time <= special_schedule_config->begin_time )
          {
            if ( *(_BYTE *)(((unsigned __int64)&special_schedule_config->end_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)special_schedule_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&special_schedule_config->end_time >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&special_schedule_config->end_time);
            }
            end_time = special_schedule_config->end_time;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->end_time >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&schedule_config->end_time);
            }
            if ( end_time <= schedule_config->end_time )
            {
              is_found = 1;
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
                1u,
                "./src/db_data_manual/db_gacha_config_mgr.cpp",
                "checkDbSpecialAvatarGacha",
                713);
              v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      (common::milog::MiLogStream *const)(v3 + 384),
                      (const char (*)[27])"Special gacha schedule_id:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      &special_schedule_config->schedule_id);
              v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v16,
                      (const char (*)[27])" match avatar schedule_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &schedule_config->schedule_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
              *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
              if ( *(_BYTE *)(((unsigned __int64)&special_schedule_config->cost_item_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&special_schedule_config->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&special_schedule_config->cost_item_id);
              }
              cost_item_id = special_schedule_config->cost_item_id;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&schedule_config->cost_item_id);
              }
              if ( cost_item_id != schedule_config->cost_item_id )
                goto LABEL_56;
              if ( *(_BYTE *)(((unsigned __int64)&special_schedule_config->cost_item_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)special_schedule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&special_schedule_config->cost_item_num >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&special_schedule_config->cost_item_num);
              }
              cost_item_num = special_schedule_config->cost_item_num;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->cost_item_num >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->cost_item_num);
              }
              if ( cost_item_num != schedule_config->cost_item_num )
              {
LABEL_56:
                *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 448, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 448),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/db_data_manual/db_gacha_config_mgr.cpp",
                  "checkDbSpecialAvatarGacha",
                  719);
                v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        v20,
                        (const char (*)[38])byte_1A19C240);
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        &special_schedule_config->schedule_id);
                v23 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        v22,
                        (const char (*)[41])byte_1A19C2A0);
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        &schedule_config->schedule_id);
                v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v24,
                        (const char (*)[17])byte_1A19C300);
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        &schedule_config->cost_item_id);
                v27 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v26, (const char (*)[2])":");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  &schedule_config->cost_item_num);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
                *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v28 = 0;
                goto LABEL_69;
              }
              if ( *(_BYTE *)(((unsigned __int64)&special_schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)special_schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&special_schedule_config->gacha_prob_rule_id >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&special_schedule_config->gacha_prob_rule_id);
              }
              gacha_prob_rule_id = special_schedule_config->gacha_prob_rule_id;
              if ( *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)schedule_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config->gacha_prob_rule_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&schedule_config->gacha_prob_rule_id);
              }
              if ( gacha_prob_rule_id != schedule_config->gacha_prob_rule_id )
                break;
            }
          }
          __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 256));
        }
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_gacha_config_mgr.cpp",
          "checkDbSpecialAvatarGacha",
          725);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v30, (const char (*)[38])byte_1A19C240);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                &special_schedule_config->schedule_id);
        v33 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v32, (const char (*)[41])byte_1A19C2A0);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &schedule_config->schedule_id);
        v35 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v34, (const char (*)[23])byte_1A19C340);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v35,
          &schedule_config->gacha_prob_rule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v28 = 0;
LABEL_69:
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v28 != 1 )
        {
          v36 = 0;
          goto LABEL_77;
        }
        if ( !is_found )
          break;
        __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 192));
      }
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
        "./src/db_data_manual/db_gacha_config_mgr.cpp",
        "checkDbSpecialAvatarGacha",
        734);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v37, (const char (*)[37])byte_1A19C380);
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v38,
              &special_schedule_config->schedule_id);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v39, (const char (*)[35])byte_1A19C3E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      v2 = -1;
      v36 = 0;
LABEL_77:
      if ( v36 == 1 )
        v2 = 0;
    }
  }
  result = v2;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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
  }
  return result;
};

// Line 742: range 000000000CD8E0C0-000000000CD8E975
std::vector<data::GachaScheduleConfig> *__cdecl data::DbGachaConfigMgr::findActivieGachaSchedules(
        std::vector<data::GachaScheduleConfig> *retstr,
        const data::DbGachaConfigMgr *const this,
        uint32_t cur_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::GachaScheduleConfig *M_current; // r14
  const data::GachaScheduleConfig *v7; // rcx
  bool v8; // al
  __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >::pointer v9; // rax
  __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >::pointer v10; // rdx
  uint32_t *p_end_time; // rax
  char v12; // al
  const data::GachaScheduleConfig *v13; // rdx
  bool v14; // al
  __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >::pointer v15; // rax
  __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >::pointer v16; // rdx
  uint32_t *v17; // rax
  char v18; // al
  std::map<data::GachaType,std::vector<data::GachaScheduleConfig>> *__for_range; // [rsp+20h] [rbp-2D0h]
  std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::reference v22; // [rsp+28h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::type *schedule_config_vec; // [rsp+38h] [rbp-2B8h]
  char v24[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 15 __for_begin:744 80 8 13 __for_end:744 112 8 8 iter:750 144 8 9 <unknown> 176 8 9 <unkn"
                        "own> 208 360 16 cur_schedule:746";
  *(_QWORD *)(v3 + 16) = data::DbGachaConfigMgr::findActivieGachaSchedules;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862737] = -218103808;
  v5[536862738] = -202116109;
  v5[536862739] = -202116109;
  std::vector<data::GachaScheduleConfig>::vector(retstr);
  __for_range = &this->gacha_type_schedule_config_vec_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 48) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::const_iterator *)(v3 + 80) = std::map<data::GachaType,std::vector<data::GachaScheduleConfig>>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 48),
            (const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::_Self *)(v3 + 80)) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 48));
    std::get<0ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(v22);
    schedule_config_vec = (std::tuple_element<1,const std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > >::type *)std::get<1ul,data::GachaType const,std::vector<data::GachaScheduleConfig>>(v22);
    __asan_unpoison_stack_memory(v3 + 208, 360LL);
    data::GachaScheduleConfig::GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 208));
    if ( *(_BYTE *)(((v3 + 216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 216) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 216);
    *(_DWORD *)(v3 + 216) = cur_time;
    if ( *(_BYTE *)(((v3 + 220) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 - 36) & 7) + 3) >= *(_BYTE *)(((v3 + 220) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3 + 220);
    }
    *(_DWORD *)(v3 + 220) = cur_time;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<data::GachaScheduleConfig>::end(schedule_config_vec)._M_current;
    v7 = std::vector<data::GachaScheduleConfig>::begin(schedule_config_vec)._M_current;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 112) = std::lower_bound<__gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>,data::GachaScheduleConfig>((__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)v7, (__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> >)M_current, (const data::GachaScheduleConfig *)(v3 + 208));
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 144) = std::vector<data::GachaScheduleConfig>::end(schedule_config_vec);
    v8 = __gnu_cxx::operator!=<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>(
           (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 112),
           (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 144));
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      v9 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v9->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v9->begin_time);
      }
      if ( cur_time < v9->begin_time )
        goto LABEL_26;
      v10 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112));
      p_end_time = &v10->end_time;
      if ( *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_end_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_end_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_end_time);
      }
      if ( cur_time >= v10->end_time )
LABEL_26:
        v12 = 0;
      else
        v12 = 1;
      if ( v12 )
        goto LABEL_28;
    }
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::GachaScheduleConfig>::const_iterator *)(v3 + 176) = std::vector<data::GachaScheduleConfig>::begin(schedule_config_vec);
    v14 = __gnu_cxx::operator==<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 112),
            (const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *)(v3 + 176));
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( !v14 )
    {
      __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator--(
        (__gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112),
        0);
      v15 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v15->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v15->begin_time);
      }
      if ( cur_time < v15->begin_time )
        goto LABEL_39;
      v16 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator->((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112));
      v17 = &v16->end_time;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      if ( cur_time >= v16->end_time )
LABEL_39:
        v18 = 0;
      else
        v18 = 1;
      if ( v18 )
      {
LABEL_28:
        v13 = __gnu_cxx::__normal_iterator<data::GachaScheduleConfig const*,std::vector<data::GachaScheduleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaScheduleConfig*,std::vector<data::GachaScheduleConfig> > *const)(v3 + 112));
        std::vector<data::GachaScheduleConfig>::emplace_back<data::GachaScheduleConfig const&>(retstr, v13, v13);
      }
    }
    data::GachaScheduleConfig::~GachaScheduleConfig((data::GachaScheduleConfig *const)(v3 + 208));
    __asan_poison_stack_memory(v3 + 208, 360LL);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_const_iterator<std::pair<data::GachaType const,std::vector<data::GachaScheduleConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::GachaType,std::vector<data::GachaScheduleConfig> > > *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->gacha_newbie_schedule_config.is_valid >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->gacha_newbie_schedule_config.is_valid);
  if ( this->gacha_newbie_schedule_config.is_valid )
    std::vector<data::GachaScheduleConfig>::emplace_back<data::GachaScheduleConfig const&>(
      retstr,
      &this->gacha_newbie_schedule_config.schedule_config,
      &this->gacha_newbie_schedule_config.schedule_config);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return retstr;
};

// Line 786: range 000000000CD8E976-000000000CD8EB7D
const data::GachaUpConfig *__cdecl data::GachaScheduleConfig::findGachaUpConfig(
        const data::GachaScheduleConfig *const this,
        data::GachaItemParentType item_parent_type)
{
  const data::GachaUpConfig *v2; // r14
  __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  const data::GachaUpConfig *result; // rax
  std::vector<data::GachaUpConfig> *__for_range; // [rsp+10h] [rbp-A0h]
  __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> >::reference gacha_up_config; // [rsp+18h] [rbp-98h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)v4;
  }
  v3->_M_current = (const data::GachaUpConfig *)1102416563;
  v3[1]._M_current = (const data::GachaUpConfig *)"2 32 8 15 __for_begin:787 64 8 13 __for_end:787";
  v3[2]._M_current = (const data::GachaUpConfig *)data::GachaScheduleConfig::findGachaUpConfig;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->up_config_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[4]._M_current = std::vector<data::GachaUpConfig>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v3[8]._M_current = std::vector<data::GachaUpConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>(v3 + 4, v3 + 8) )
  {
    gacha_up_config = __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator*(v3 + 4);
    if ( *(_BYTE *)(((unsigned __int64)gacha_up_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)gacha_up_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(gacha_up_config);
    }
    if ( item_parent_type == gacha_up_config->item_parent_type )
    {
      v2 = gacha_up_config;
      v6 = 0;
      goto LABEL_16;
    }
    __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_16:
  if ( v6 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::GachaUpConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 799: range 000000000CD8EB7E-000000000CD8ED7C
__int64 __fastcall data::GachaScheduleConfig::isGachaItemUp(
        const data::GachaScheduleConfig *const this,
        uint32_t item_id)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 result; // rax
  std::vector<data::GachaUpConfig> *__for_range; // [rsp+10h] [rbp-C0h]
  const data::GachaUpConfig *gacha_up_config; // [rsp+18h] [rbp-B8h]
  char v10[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 item_id:798 64 8 15 __for_begin:800 96 8 13 __for_end:800";
  *(_QWORD *)(v3 + 16) = data::GachaScheduleConfig::isGachaItemUp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = item_id;
  __for_range = &this->up_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 64) = std::vector<data::GachaUpConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaUpConfig>::const_iterator *)(v3 + 96) = std::vector<data::GachaUpConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *)(v3 + 96)) )
  {
    gacha_up_config = __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 64));
    if ( std::set<unsigned int>::count(&gacha_up_config->item_set, (const std::set<unsigned int>::key_type *)(v3 + 48)) )
    {
      v2 = 1;
      v6 = 0;
      goto LABEL_14;
    }
    __gnu_cxx::__normal_iterator<data::GachaUpConfig const*,std::vector<data::GachaUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaUpConfig*,std::vector<data::GachaUpConfig> > *const)(v3 + 64));
  }
  v6 = 1;
LABEL_14:
  if ( v6 == 1 )
    v2 = 0;
  result = v2;
  if ( v10 == (char *)v3 )
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

// Line 813: range 000000000CD8ED7E-000000000CD8F024
void __cdecl data::GachaScheduleConfig::excludeUpItems(
        const data::GachaScheduleConfig *const this,
        std::vector<data::GachaPoolExcelConfig> *pool_item_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GachaPoolExcelConfig *M_current; // r14
  data::GachaPoolExcelConfig *v6; // rcx
  char v7[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 11 rm_func:814 64 8 11 rm_iter:818 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GachaScheduleConfig::excludeUpItems;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 32) = this;
  M_current = std::vector<data::GachaPoolExcelConfig>::end(pool_item_vec)._M_current;
  v6 = std::vector<data::GachaPoolExcelConfig>::begin(pool_item_vec)._M_current;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  *(__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v2 + 64) = std::remove_if<__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>,data::GachaScheduleConfig::excludeUpItems(std::vector<data::GachaPoolExcelConfig>&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>> const&)#1}>((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> >)v6, (__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> >)M_current, *(data::GachaScheduleConfig::excludeUpItems::<lambda(const auto:38&)> *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v2 + 96) = std::vector<data::GachaPoolExcelConfig>::end(pool_item_vec);
  __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig const*,std::vector<data::GachaPoolExcelConfig>>::__normal_iterator<data::GachaPoolExcelConfig*>(
    (__gnu_cxx::__normal_iterator<const data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v2 + 160),
    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v2 + 96));
  __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig const*,std::vector<data::GachaPoolExcelConfig>>::__normal_iterator<data::GachaPoolExcelConfig*>(
    (__gnu_cxx::__normal_iterator<const data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v2 + 128),
    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v2 + 64));
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 128);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 160);
  std::vector<data::GachaPoolExcelConfig>::erase(
    pool_item_vec,
    *(std::vector<data::GachaPoolExcelConfig>::const_iterator *)(v2 + 128),
    *(std::vector<data::GachaPoolExcelConfig>::const_iterator *)(v2 + 160));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 814: range 000000000CDD52D0-000000000CDD5356
bool __cdecl data::GachaScheduleConfig::excludeUpItems::_lambda_const_auto_38___::operator()_data::GachaPoolExcelConfig_(
        const data::GachaScheduleConfig::excludeUpItems::<lambda(const auto:38&)> *const __closure,
        const data::GachaPoolExcelConfig *pool_item)
{
  const data::GachaScheduleConfig *this; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&pool_item->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pool_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pool_item->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pool_item->item_id);
  }
  return data::GachaScheduleConfig::isGachaItemUp(this, pool_item->item_id);
};
