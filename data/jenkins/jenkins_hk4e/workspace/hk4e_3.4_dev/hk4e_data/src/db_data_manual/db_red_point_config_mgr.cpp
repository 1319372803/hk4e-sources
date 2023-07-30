// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/db_data_manual/db_red_point_config_mgr.cpp

// Line 20: range 000000000CDB7A4C-000000000CDB7EBF
bool __cdecl data::RedPointConfig::operator==(const data::RedPointConfig *const this, const data::RedPointConfig *rhs)
{
  uint32_t id; // ecx
  uint32_t content_id; // ecx
  uint32_t trigger_time; // ecx
  uint32_t expire_time; // ecx
  bool is_daily_refresh; // cl
  uint32_t daily_refresh_second; // ecx
  uint32_t red_point_type; // ecx
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  id = this->id;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( id != rhs->id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->content_id);
  }
  content_id = this->content_id;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->content_id);
  }
  if ( content_id != rhs->content_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_time);
  }
  trigger_time = this->trigger_time;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->trigger_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->trigger_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->trigger_time);
  }
  if ( trigger_time != rhs->trigger_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  expire_time = this->expire_time;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->expire_time);
  }
  if ( expire_time != rhs->expire_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_daily_refresh);
  }
  is_daily_refresh = this->is_daily_refresh;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rhs + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&rhs->is_daily_refresh >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&rhs->is_daily_refresh);
  }
  if ( is_daily_refresh != rhs->is_daily_refresh )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_refresh_second);
  }
  daily_refresh_second = this->daily_refresh_second;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->daily_refresh_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->daily_refresh_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->daily_refresh_second);
  }
  if ( daily_refresh_second != rhs->daily_refresh_second )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->red_point_type);
  }
  red_point_type = this->red_point_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->red_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->red_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->red_point_type);
  }
  if ( red_point_type != rhs->red_point_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_level);
  }
  player_level = this->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->player_level);
  }
  return player_level == rhs->player_level;
};

// Line 32: range 000000000CDB7EC0-000000000CDB87A6
std::string *__cdecl data::RedPointConfig::toString[abi:cxx11](
        std::string *retstr,
        const data::RedPointConfig *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  time_t trigger_time; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  time_t expire_time; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int daily_refresh_second; // esi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  char v25[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 32 9 <unknown> 112 32 9 <unknown> 176 32 9 <unknown> 240 392 5 ss:33";
  *(_QWORD *)(v2 + 16) = data::RedPointConfig::toString[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862739] = -218103808;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 240);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 256, "{");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v6 = std::ostream::operator<<(v5, this->id);
  v7 = std::operator<<<std::char_traits<char>>(v6, ":");
  if ( *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->content_id);
  }
  v8 = std::ostream::operator<<(v7, this->content_id);
  v9 = std::operator<<<std::char_traits<char>>(v8, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_time);
  }
  trigger_time = this->trigger_time;
  if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
  {
    trigger_time = v2 + 48;
    __asan_report_store_n(v2 + 48, 32LL);
  }
  common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 48), trigger_time);
  v11 = std::operator<<<char>(v9, v2 + 48);
  v12 = std::operator<<<std::char_traits<char>>(v11, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  expire_time = this->expire_time;
  if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
  {
    expire_time = v2 + 112;
    __asan_report_store_n(v2 + 112, 32LL);
  }
  common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 112), expire_time);
  v14 = std::operator<<<char>(v12, v2 + 112);
  v15 = std::operator<<<std::char_traits<char>>(v14, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_daily_refresh);
  }
  if ( this->is_daily_refresh )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->daily_refresh_second);
    }
    daily_refresh_second = this->daily_refresh_second;
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      daily_refresh_second = 32;
      __asan_report_store_n(v2 + 176, 32LL);
    }
    std::to_string((std::string *)(v2 + 176), daily_refresh_second);
  }
  else
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    std::literals::string_literals::operator"" s[abi:cxx11]((std::string *)(v2 + 176), byte_1A0D8BA0, 0LL);
  }
  v17 = std::operator<<<char>(v15, v2 + 176);
  v18 = std::operator<<<std::char_traits<char>>(v17, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->red_point_type);
  }
  v19 = std::ostream::operator<<(v18, this->red_point_type);
  v20 = std::operator<<<std::char_traits<char>>(v19, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_level);
  }
  v21 = std::ostream::operator<<(v20, this->player_level);
  std::operator<<<std::char_traits<char>>(v21, "}");
  std::string::~string((void *)(v2 + 176));
  *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 112));
  *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v2 + 48));
  *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 240);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 240);
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 46: range 000000000CDB87A8-000000000CDB8906
bool __cdecl data::RedPointConfig::isPassedDailyRefreshTime(
        const data::RedPointConfig *const this,
        uint32_t last_time,
        uint32_t cur_time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_daily_refresh);
  }
  if ( !this->is_daily_refresh )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_time);
  }
  if ( cur_time < this->trigger_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->expire_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->expire_time);
  }
  if ( cur_time >= this->expire_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_refresh_second);
  }
  return !common::tools::TimeUtils::isSameDay(last_time, cur_time, this->daily_refresh_second);
};

// Line 63: range 000000000CF1D8F4-000000000CF1DFAA
// local variable allocation has failed, the output may be wrong!
void __cdecl data::populate_t_red_point_config<(mysqlpp::sql_dummy_type)0>(
        data::t_red_point_config *s,
        const mysqlpp::Row *row)
{
  unsigned __int64 p_anon_0; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const mysqlpp::String *v5; // rax
  unsigned int v6; // edx
  const mysqlpp::String *v7; // rax
  unsigned int v8; // ecx
  const mysqlpp::String *v9; // r14
  const mysqlpp::String *v10; // r14
  const mysqlpp::String *v11; // rax
  unsigned int v12; // edx
  const mysqlpp::String *v13; // rax
  unsigned int v14; // ecx
  const mysqlpp::String *v15; // rax
  unsigned int v16; // edx
  const mysqlpp::String *v17; // rax
  unsigned int v18; // ecx
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
  *(_QWORD *)(p_anon_0 + 8) = "5 32 16 27 ignore_schema_mismatches:63 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unkn"
                              "own> 256 32 9 <unknown>";
  *(_QWORD *)(p_anon_0 + 16) = data::populate_t_red_point_config<(mysqlpp::sql_dummy_type)0>;
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

// Line 63: range 000000000CE46A3E-000000000CE46AEB
void __cdecl data::t_red_point_config::t_red_point_config(
        data::t_red_point_config *const this,
        const mysqlpp::Row *row)
{
  std::string::basic_string(&this->trigger_time);
  std::string::basic_string(&this->expire_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = 0LL;
  data::populate_t_red_point_config<(mysqlpp::sql_dummy_type)0>(this, row);
};

// Line 63: range 000000000D3C22AC-000000000D3C2632
void __cdecl data::t_red_point_config::t_red_point_config(
        data::t_red_point_config *const this,
        data::t_red_point_config *a2)
{
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned content_id; // ecx
  mysqlpp::sql_int_unsigned is_daily_refresh; // ecx
  mysqlpp::sql_int_unsigned daily_refresh_second; // ecx
  mysqlpp::sql_int_unsigned red_point_type; // ecx
  mysqlpp::sql_int_unsigned player_level; // ecx
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->content_id);
  }
  content_id = a2->content_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->content_id);
  }
  this->content_id = content_id;
  std::string::basic_string(&this->trigger_time, &a2->trigger_time);
  std::string::basic_string(&this->expire_time, &a2->expire_time);
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->is_daily_refresh >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->is_daily_refresh);
  }
  is_daily_refresh = a2->is_daily_refresh;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_daily_refresh >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_daily_refresh);
  }
  this->is_daily_refresh = is_daily_refresh;
  if ( *(_BYTE *)(((unsigned __int64)&a2->daily_refresh_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->daily_refresh_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->daily_refresh_second);
  }
  daily_refresh_second = a2->daily_refresh_second;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_refresh_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->daily_refresh_second);
  }
  this->daily_refresh_second = daily_refresh_second;
  if ( *(_BYTE *)(((unsigned __int64)&a2->red_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->red_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->red_point_type);
  }
  red_point_type = a2->red_point_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->red_point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->red_point_type);
  }
  this->red_point_type = red_point_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->player_level);
  }
  player_level = a2->player_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_level);
  }
  this->player_level = player_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->table_override_);
  table_override = a2->table_override_;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_override_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table_override_ = table_override;
};

// Line 63: range 000000000D0FB882-000000000D0FB8B0
void __cdecl data::t_red_point_config::~t_red_point_config(data::t_red_point_config *const this)
{
  std::string::~string(&this->expire_time);
  std::string::~string(&this->trigger_time);
};

// Line 75: range 000000000CDB8908-000000000CDB9F5D
int32_t __cdecl data::DbRedPointConfigMgr::loadDbRedPointConfig(
        data::DbRedPointConfigMgr *const this,
        common::midb::MysqlConnPtr *conn_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  mysqlpp::Connection *v6; // rsi
  __int64 v7; // rax
  std::logic_error *exception; // rdi
  mysqlpp::sql_int_unsigned id; // ecx
  mysqlpp::sql_int_unsigned content_id; // ecx
  int TimeByStr; // esi
  int v12; // edi
  data::RedPointConfig *v13; // r8
  bool v14; // cl
  mysqlpp::sql_int_unsigned daily_refresh_second; // ecx
  mysqlpp::sql_int_unsigned red_point_type; // ecx
  mysqlpp::sql_int_unsigned player_level; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const char *v32; // rax
  __int64 v33; // r15
  int v34; // edx
  int v35; // r15d
  common::milog::MiLogStream *v36; // r15
  std::vector<data::t_red_point_config>::size_type v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r15
  unsigned __int64 v40; // rax
  std::vector<data::t_red_point_config> *__for_range; // [rsp+28h] [rbp-788h]
  __gnu_cxx::__normal_iterator<data::t_red_point_config*,std::vector<data::t_red_point_config> >::reference row; // [rsp+30h] [rbp-780h]
  char v45[1904]; // [rsp+40h] [rbp-770h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 8 14 __for_begin:96 80 8 12 __for_end:96 112 8 9 <unknown> 144 24 10 row_vec:88 208 32 9 <"
                        "unknown> 272 32 9 config:98 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <u"
                        "nknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 392 5 ss:95 1184 544 8 query:82";
  *(_QWORD *)(v3 + 16) = data::DbRedPointConfigMgr::loadDbRedPointConfig;
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
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862754] = -234881024;
  v5[536862755] = -218959118;
  v5[536862756] = -218959118;
  v5[536862774] = -202116109;
  v5[536862775] = -202116109;
  v5[536862776] = -202116109;
  v5[536862777] = -202116109;
  if ( std::operator==<mysqlpp::Connection>(0LL, conn_ptr) )
  {
    if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/db_data_manual/db_red_point_config_mgr.cpp",
      "loadDbRedPointConfig",
      78);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)(v3 + 208),
      (const char (*)[17])"conn_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
    v2 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<mysqlpp::Connection,(__gnu_cxx::_Lock_policy)2,false,false> *const)conn_ptr);
    if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
    {
      v6 = (mysqlpp::Connection *)544;
      __asan_report_store_n(v3 + 1184, 544LL);
    }
    mysqlpp::Connection::query((mysqlpp::Query *)(v3 + 1184), v6, "select ");
    v7 = std::operator<<<std::char_traits<char>>(
           v3 + 1184,
           "id, content_id, trigger_time, expire_time, is_daily_refresh, daily_refresh_second, red_point_type, player_level");
    std::operator<<<std::char_traits<char>>(v7, " from t_red_point_config");
    std::vector<data::t_red_point_config>::vector((std::vector<data::t_red_point_config> *const)(v3 + 144));
    mysqlpp::Query::storein<std::vector<data::t_red_point_config>>(
      (mysqlpp::Query *const)(v3 + 1184),
      (std::vector<data::t_red_point_config> *)(v3 + 144));
    if ( mysqlpp::Query::errnum((const mysqlpp::Query *const)(v3 + 1184)) )
    {
      exception = (std::logic_error *)__cxa_allocate_exception(0x10uLL);
      std::logic_error::logic_error(exception, "query has error");
      __asan_handle_no_return(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::logic_error,
        (void (__fastcall *)(void *))&std::logic_error::~logic_error);
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 720);
    __for_range = (std::vector<data::t_red_point_config> *)(v3 + 144);
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_red_point_config>::iterator *)(v3 + 48) = std::vector<data::t_red_point_config>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<data::t_red_point_config>::iterator *)(v3 + 80) = std::vector<data::t_red_point_config>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::t_red_point_config *,std::vector<data::t_red_point_config>>(
              (const __gnu_cxx::__normal_iterator<data::t_red_point_config*,std::vector<data::t_red_point_config> > *)(v3 + 48),
              (const __gnu_cxx::__normal_iterator<data::t_red_point_config*,std::vector<data::t_red_point_config> > *)(v3 + 80)) )
    {
      row = __gnu_cxx::__normal_iterator<data::t_red_point_config *,std::vector<data::t_red_point_config>>::operator*((const __gnu_cxx::__normal_iterator<data::t_red_point_config*,std::vector<data::t_red_point_config> > *const)(v3 + 48));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      *(_QWORD *)(v3 + 272) = 0LL;
      *(_QWORD *)(v3 + 280) = 0LL;
      *(_QWORD *)(v3 + 288) = 0LL;
      *(_QWORD *)(v3 + 296) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)row >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(row);
      }
      id = row->id;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 272);
      *(_DWORD *)(v3 + 272) = id;
      if ( *(_BYTE *)(((unsigned __int64)&row->content_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->content_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->content_id);
      }
      content_id = row->content_id;
      if ( *(_BYTE *)(((v3 + 276) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 20) & 7) + 3) >= *(_BYTE *)(((v3 + 276) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 276);
      }
      *(_DWORD *)(v3 + 276) = content_id;
      TimeByStr = common::tools::TimeUtils::getTimeByStr(&row->trigger_time);
      if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 280);
      *(_DWORD *)(v3 + 280) = TimeByStr;
      v12 = common::tools::TimeUtils::getTimeByStr(&row->expire_time);
      if ( *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 28) & 7) + 3) >= *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) )
      {
        v12 = v3 + 284;
        __asan_report_store4(v3 + 284);
      }
      *(_DWORD *)(v3 + 284) = v12;
      if ( *(_BYTE *)(((unsigned __int64)&row->is_daily_refresh >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->is_daily_refresh >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->is_daily_refresh);
      }
      v14 = row->is_daily_refresh != 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 288);
      *(_BYTE *)(v3 + 288) = v14;
      if ( *(_BYTE *)(((unsigned __int64)&row->daily_refresh_second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->daily_refresh_second >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&row->daily_refresh_second);
      }
      daily_refresh_second = row->daily_refresh_second;
      if ( *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 292);
      }
      *(_DWORD *)(v3 + 292) = daily_refresh_second;
      if ( *(_BYTE *)(((unsigned __int64)&row->red_point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&row->red_point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&row->red_point_type);
      }
      red_point_type = row->red_point_type;
      if ( *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 296);
      *(_DWORD *)(v3 + 296) = red_point_type;
      if ( *(_BYTE *)(((unsigned __int64)&row->player_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)row + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&row->player_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&row->player_level);
      }
      player_level = row->player_level;
      if ( *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 44) & 7) + 3) >= *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 300);
      }
      *(_DWORD *)(v3 + 300) = player_level;
      if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 280);
      if ( !*(_DWORD *)(v3 + 280)
        || !*(_DWORD *)(v3 + 284)
        || *(_DWORD *)(v3 + 280) >= *(_DWORD *)(v3 + 284)
        || *(_BYTE *)(v3 + 288) != 1 && *(_DWORD *)(v3 + 292) )
      {
        goto LABEL_58;
      }
      if ( *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3 + 292);
      }
      if ( *(_DWORD *)(v3 + 292) <= 0x1517Fu )
      {
        v29 = std::unordered_map<unsigned int,data::RedPointConfig>::emplace<unsigned int &,data::RedPointConfig&>(
                &this->red_point_config_map_,
                (unsigned int *)(v3 + 272),
                (data::RedPointConfig *)(v3 + 272),
                (unsigned int *)(v3 + 272),
                v13);
        if ( !v29.second )
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/db_data_manual/db_red_point_config_mgr.cpp",
            "loadDbRedPointConfig",
            118);
          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v31 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v30, (const char (*)[30])byte_1A1A5880);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 272));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v28 = 0;
        }
        else
        {
          if ( std::unordered_map<unsigned int,data::RedPointConfig>::size(&this->red_point_config_map_) <= 1 )
            v32 = byte_1A0D8BA0;
          else
            v32 = " ";
          v33 = std::operator<<<std::char_traits<char>>(v3 + 736, v32);
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 464, 32LL);
          }
          data::RedPointConfig::toString[abi:cxx11](
            (std::string *)(v3 + 464),
            (const data::RedPointConfig *const)(v3 + 272));
          std::operator<<<char>(v33, v3 + 464);
          std::string::~string((void *)(v3 + 464));
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v28 = 1;
        }
      }
      else
      {
LABEL_58:
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
          "./src/db_data_manual/db_red_point_config_mgr.cpp",
          "loadDbRedPointConfig",
          112);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v18, (const char (*)[37])byte_1A1A5760);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 272));
        v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" trigger_time:");
        v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &row->trigger_time);
        v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v22, (const char (*)[5])" -> ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 280));
        v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])" expire_time:");
        v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &row->expire_time);
        v27 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v26, (const char (*)[5])" -> ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 284));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v28 = 0;
      }
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      if ( v28 != 1 )
      {
        v34 = 0;
        goto LABEL_75;
      }
      __gnu_cxx::__normal_iterator<data::t_red_point_config *,std::vector<data::t_red_point_config>>::operator++((__gnu_cxx::__normal_iterator<data::t_red_point_config*,std::vector<data::t_red_point_config> > *const)(v3 + 48));
    }
    v34 = 1;
LABEL_75:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v34 == 1 )
    {
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 528),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/db_data_manual/db_red_point_config_mgr.cpp",
        "loadDbRedPointConfig",
        124);
      v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v3 + 528),
              (const char (*)[6])"load ");
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v37 = std::vector<data::t_red_point_config>::size((const std::vector<data::t_red_point_config> *const)(v3 + 144));
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v3 + 112) = v37;
      v38 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v36,
              (const unsigned __int64 *)(v3 + 112));
      v39 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v38,
              (const char (*)[33])" config from t_red_point_config:");
      *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 592, 32LL);
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v3 + 592, v3 + 720);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 592));
      std::string::~string((void *)(v3 + 592));
      *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
      *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
      v35 = 1;
    }
    else
    {
      v35 = 0;
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 720);
    std::vector<data::t_red_point_config>::~vector((std::vector<data::t_red_point_config> *const)(v3 + 144));
    v40 = ((v3 + 144) >> 3) + 2147450880;
    *(_WORD *)v40 = -1800;
    *(_BYTE *)(v40 + 2) = -8;
    __asan_poison_stack_memory(v3 + 720, 392LL);
    if ( v35 == 1 )
      v2 = 0;
    mysqlpp::Query::~Query((mysqlpp::Query *const)(v3 + 1184));
  }
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v45);
  }
  return v2;
};

// Line 136: range 000000000CDB9F5E-000000000CDBADAA
int32_t __cdecl data::DbRedPointConfigMgr::rewriteRedPointConfig(data::DbRedPointConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<bool,unsigned int> *v4; // r8
  std::pair<bool,unsigned int> *v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 n; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r14
  common::milog::MiLogStream *v10; // r14
  time_t v11; // rdi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  std::multimap<unsigned int,std::pair<bool,unsigned int>> *__for_range_0; // [rsp+18h] [rbp-2D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *timestamp; // [rsp+20h] [rbp-2D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *pr; // [rsp+28h] [rbp-2C8h]
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_show; // [rsp+30h] [rbp-2C0h]
  const std::set<unsigned int>::value_type *id_0; // [rsp+38h] [rbp-2B8h]
  std::vector<unsigned int> *id_vec; // [rsp+40h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false>::reference v22; // [rsp+48h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RedPointConfig> >::type *id; // [rsp+50h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RedPointConfig> >::type *config; // [rsp+58h] [rbp-298h]
  char v25[656]; // [rsp+60h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 8 15 __for_begin:137 112 8 13 __for_end:137 144 8 9 <unk"
                        "nown> 176 8 9 <unknown> 208 8 15 __for_begin:144 240 8 13 __for_end:144 272 8 9 <unknown> 304 8 "
                        "9 <unknown> 336 8 9 <unknown> 368 12 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 48 10 id_set:143";
  *(_QWORD *)(v1 + 16) = data::DbRedPointConfigMgr::rewriteRedPointConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = 61953;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862723] = -234881024;
  v3[536862724] = 62194;
  v3[536862724] = -234881024;
  v3[536862725] = 62194;
  v3[536862725] = -234881024;
  v3[536862726] = 62194;
  v3[536862726] = -234881024;
  v3[536862727] = 62194;
  v3[536862727] = -234881024;
  v3[536862728] = 62194;
  v3[536862728] = -234881024;
  v3[536862729] = 62194;
  v3[536862729] = -234881024;
  v3[536862730] = 62194;
  v3[536862730] = -234881024;
  v3[536862731] = 62194;
  v3[536862731] = 0x4000000;
  v3[536862732] = 62194;
  v3[536862733] = -219021312;
  v3[536862734] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -202116109;
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::RedPointConfig>::iterator *)(v1 + 80) = std::unordered_map<unsigned int,data::RedPointConfig>::begin(&this->red_point_config_map_);
  if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::RedPointConfig>::iterator *)(v1 + 112) = std::unordered_map<unsigned int,data::RedPointConfig>::end(&this->red_point_config_map_);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RedPointConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RedPointConfig>,false> *)(v1 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RedPointConfig>,false> *)(v1 + 112)) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false> *const)(v1 + 80));
    id = std::get<0ul,unsigned int const,data::RedPointConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RedPointConfig> >::type *)std::get<1ul,unsigned int const,data::RedPointConfig>(v22);
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v1 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v1 + 48);
    *(_BYTE *)(v1 + 48) = 1;
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::pair<bool,unsigned int> *)(v1 + 144) = std::make_pair<bool,unsigned int const&>((bool *)(v1 + 48), id);
    std::multimap<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int const&,std::pair<bool,unsigned int>>(
      &this->red_point_change_timestamp_map_,
      &config->trigger_time,
      (std::pair<bool,unsigned int> *)(v1 + 144),
      &config->trigger_time,
      v4);
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v1 + 64);
    *(_BYTE *)(v1 + 64) = 0;
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::pair<bool,unsigned int> *)(v1 + 176) = std::make_pair<bool,unsigned int const&>((bool *)(v1 + 64), id);
    std::multimap<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int const&,std::pair<bool,unsigned int>>(
      &this->red_point_change_timestamp_map_,
      &config->expire_time,
      (std::pair<bool,unsigned int> *)(v1 + 176),
      &config->expire_time,
      v5);
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false> *const)(v1 + 80));
  }
  *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
  v6 = ((v1 + 528) >> 3) + 2147450880;
  *(_DWORD *)v6 = 0;
  *(_WORD *)(v6 + 4) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 528));
  __for_range_0 = &this->red_point_change_timestamp_map_;
  *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::iterator *)(v1 + 208) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::iterator *)(v1 + 240) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v1 + 208),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v1 + 240)) )
  {
    *(_WORD *)(((v1 + 368) >> 3) + 0x7FFF8000) = 1024;
    n = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v1 + 208));
    if ( *(char *)(((v1 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 379) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 123) & 7) >= *(_BYTE *)(((v1 + 379) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(v1 + 368, 12LL);
    }
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v1 + 368) = *(_QWORD *)n;
    *(_DWORD *)(v1 + 376) = *(_DWORD *)(n + 8);
    timestamp = std::get<0ul,unsigned int const,std::pair<bool,unsigned int>>((const std::pair<unsigned int const,std::pair<bool,unsigned int> > *)(v1 + 368));
    pr = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<bool,unsigned int>>((const std::pair<unsigned int const,std::pair<bool,unsigned int> > *)(v1 + 368));
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    if ( ((unsigned __int8)pr & 7) >= *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)pr >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&pr->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)pr + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&pr->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(pr, 8LL);
    }
    *(std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *)(v1 + 272) = *pr;
    is_show = std::get<0ul,bool,unsigned int>((std::pair<bool,unsigned int> *)(v1 + 272));
    id_0 = std::get<1ul,bool,unsigned int>((std::pair<bool,unsigned int> *)(v1 + 272));
    if ( *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_show & 7) >= *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_show);
    }
    if ( *is_show )
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 528), id_0);
    else
      std::set<unsigned int>::erase((std::set<unsigned int> *const)(v1 + 528), id_0);
    id_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->timestamp_ids_map_, timestamp);
    std::vector<unsigned int>::clear(id_vec);
    M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 528))._M_node;
    v9 = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 528))._M_node;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::iterator *)(v1 + 304) = std::vector<unsigned int>::end(id_vec);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 336),
      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1 + 336);
    std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
      id_vec,
      *(std::vector<unsigned int>::const_iterator *)(v1 + 336),
      (std::_Rb_tree_const_iterator<unsigned int>)v9,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node);
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v1 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 431) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 81) & 7) >= *(_BYTE *)(((v1 + 431) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 400, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/db_data_manual/db_red_point_config_mgr.cpp",
      "rewriteRedPointConfig",
      158);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v1 + 400),
            (const char (*)[6])"time:");
    *(_DWORD *)(((v1 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)timestamp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)timestamp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(timestamp);
    }
    v11 = *timestamp;
    if ( *(char *)(((v1 + 464) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 495) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 17) & 7) >= *(_BYTE *)(((v1 + 495) >> 3) + 0x7FFF8000) )
    {
      v11 = v1 + 464;
      __asan_report_store_n(v1 + 464, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v1 + 464), v11);
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v1 + 464));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" ids:");
    common::milog::MiLogStream::operator<<<unsigned int>(v13, id_vec);
    std::string::~string((void *)(v1 + 464));
    *(_DWORD *)(((v1 + 464) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 400));
    *(_DWORD *)(((v1 + 400) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v1 + 208));
  }
  *(_WORD *)(((v1 + 368) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 528));
  result = 0;
  if ( v25 == (char *)v1 )
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 165: range 000000000CDBADAC-000000000CDBADBA
int32_t __cdecl data::DbRedPointConfigMgr::checkRedPointConfig(data::DbRedPointConfigMgr *const this)
{
  return 0;
};

// Line 170: range 000000000CDBADBC-000000000CDBAF6F
const data::RedPointConfig *__fastcall data::DbRedPointConfigMgr::findRedPointConfig(
        const data::DbRedPointConfigMgr *const this,
        uint32_t id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DbRedPointConfigMgr *v5; // rax
  const data::DbRedPointConfigMgr *v6; // rax
  bool v7; // al
  const data::RedPointConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:169 64 8 8 iter:171 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbRedPointConfigMgr::findRedPointConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  v5 = this;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::RedPointConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RedPointConfig>::find(
                                                                                          &v5->red_point_config_map_,
                                                                                          (const std::unordered_map<unsigned int,data::RedPointConfig>::key_type *)(v2 + 48));
  v6 = this;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::unordered_map<unsigned int,data::RedPointConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RedPointConfig>::end(&v6->red_point_config_map_);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RedPointConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RedPointConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RedPointConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RedPointConfig>,false,false> *const)(v2 + 64))->second;
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
  return result;
};

// Line 180: range 000000000CDBAF70-000000000CDBBD6B
__int64 __fastcall data::DbRedPointConfigMgr::findNextUpdateRedPointTime(
        const data::DbRedPointConfigMgr *const this,
        uint32_t timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::multimap<unsigned int,std::pair<bool,unsigned int>> *p_red_point_change_timestamp_map; // rdx
  std::multimap<unsigned int,std::pair<bool,unsigned int>> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::pointer v8; // rax
  _DWORD *p_first; // rdx
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  time_t v17; // rdi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  time_t v22; // rsi
  common::milog::MiLogStream *v23; // r14
  time_t v24; // rdi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  time_t v29; // rsi
  __int64 result; // rax
  uint32_t next_update_time; // [rsp+1Ch] [rbp-2D4h]
  uint32_t day; // [rsp+20h] [rbp-2D0h]
  uint32_t next_daily_refresh_time; // [rsp+24h] [rbp-2CCh]
  const std::vector<unsigned int> *cur_id_vec_ptr; // [rsp+28h] [rbp-2C8h]
  const data::RedPointConfig *config_ptr; // [rsp+38h] [rbp-2B8h]
  char v37[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 4 6 id:192 48 4 13 timestamp:179 64 8 8 iter:183 96 8 9 <unknown> 128 8 15 __for_begin:192"
                        " 160 8 13 __for_end:192 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkno"
                        "wn> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbRedPointConfigMgr::findNextUpdateRedPointTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
  *(_DWORD *)(v2 + 48) = timestamp;
  next_update_time = -1;
  p_red_point_change_timestamp_map = &this->red_point_change_timestamp_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::const_iterator *)(v2 + 64) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::upper_bound(
                                                                                             p_red_point_change_timestamp_map,
                                                                                             (const std::multimap<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->red_point_change_timestamp_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::const_iterator *)(v2 + 96) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v2 + 64));
    p_first = &v8->first;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    next_update_time = *p_first;
  }
  cur_id_vec_ptr = data::DbRedPointConfigMgr::findIdsByTime(this, *(_DWORD *)(v2 + 48));
  if ( cur_id_vec_ptr )
  {
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(cur_id_vec_ptr);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(cur_id_vec_ptr);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32);
      *(_DWORD *)(v2 + 32) = v12;
      config_ptr = data::DbRedPointConfigMgr::findRedPointConfig(this, *(_DWORD *)(v2 + 32));
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_daily_refresh >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config_ptr + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_daily_refresh >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(&config_ptr->is_daily_refresh);
        }
        if ( config_ptr->is_daily_refresh )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->daily_refresh_second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->daily_refresh_second >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->daily_refresh_second);
          }
          day = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v2 + 48), config_ptr->daily_refresh_second);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->daily_refresh_second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->daily_refresh_second >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->daily_refresh_second);
          }
          next_daily_refresh_time = common::tools::TimeUtils::getDailyStartTime(
                                      day + 1,
                                      config_ptr->daily_refresh_second);
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/db_data_manual/db_red_point_config_mgr.cpp",
            "findNextUpdateRedPointTime",
            206);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[11])"timestamp:");
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          v17 = *(unsigned int *)(v2 + 48);
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            v17 = v2 + 320;
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 320), v17);
          v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v16,
                  (const std::string *)(v2 + 320));
          v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v18, (const char (*)[5])" id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v20,
                  (const char (*)[26])" next_daily_refresh_time:");
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
          v22 = next_daily_refresh_time;
          if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
          {
            v22 = 32LL;
            __asan_report_store_n(v2 + 384, 32LL);
          }
          common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 384), v22);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v2 + 384));
          std::string::~string((void *)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          std::string::~string((void *)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          if ( next_daily_refresh_time > *(_DWORD *)(v2 + 48) )
          {
            if ( next_daily_refresh_time < next_update_time )
              next_update_time = next_daily_refresh_time;
          }
          else
          {
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/db_data_manual/db_red_point_config_mgr.cpp",
              "findNextUpdateRedPointTime",
              209);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[11])"timestamp:");
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            v24 = *(unsigned int *)(v2 + 48);
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              v24 = v2 + 512;
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 512), v24);
            v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v23,
                    (const std::string *)(v2 + 512));
            v26 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v25, (const char (*)[5])" id:");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v2 + 32));
            v28 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v27,
                    (const char (*)[26])" next_daily_refresh_time:");
            *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
            v29 = next_daily_refresh_time;
            if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
            {
              v29 = 32LL;
              __asan_report_store_n(v2 + 576, 32LL);
            }
            common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 576), v29);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)(v2 + 576));
            std::string::~string((void *)(v2 + 576));
            *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
            std::string::~string((void *)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_red_point_config_mgr.cpp",
          "findNextUpdateRedPointTime",
          197);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[29])"findRedPointConfig fail, id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" timestamp:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
  }
  result = next_update_time;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 223: range 000000000CDBBD6C-000000000CDBC635
std::map<unsigned int,bool> *__fastcall data::DbRedPointConfigMgr::getRedPointChangeBetweenTime(
        std::map<unsigned int,bool> *retstr,
        const data::DbRedPointConfigMgr *const this,
        uint32_t last_time,
        uint32_t cur_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,bool>::mapped_type *v13; // rax
  _BYTE *v14; // rdx
  std::multimap<unsigned int,std::pair<bool,unsigned int>> *p_red_point_change_timestamp_map; // rdx
  std::multimap<unsigned int,std::pair<bool,unsigned int>> *v16; // rdx
  bool v17; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::pointer v18; // rax
  _DWORD *p_first; // rdx
  int v20; // edx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::pointer v21; // rdx
  std::tuple_element<0,std::pair<bool,unsigned int> >::type v22; // r14
  std::map<unsigned int,bool>::mapped_type *v23; // rax
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *v24; // rdx
  const std::vector<unsigned int> *cur_id_vec_ptr; // [rsp+28h] [rbp-198h]
  const data::RedPointConfig *config_ptr; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<bool,unsigned int> >::type *is_show; // [rsp+40h] [rbp-180h]
  const std::map<unsigned int,bool>::key_type *id; // [rsp+48h] [rbp-178h]
  char v32[368]; // [rsp+50h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 6 id:229 64 4 13 last_time:222 80 4 12 cur_time:222 96 8 15 __for_begin:229 128 8 13 __fo"
                        "r_end:229 160 8 8 iter:244 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = data::DbRedPointConfigMgr::getRedPointChangeBetweenTime;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 64) = last_time;
  *(_DWORD *)(v4 + 80) = cur_time;
  std::map<unsigned int,bool>::map(retstr);
  cur_id_vec_ptr = data::DbRedPointConfigMgr::findIdsByTime(this, *(_DWORD *)(v4 + 80));
  if ( cur_id_vec_ptr )
  {
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v4 + 96) = std::vector<unsigned int>::begin(cur_id_vec_ptr);
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v4 + 128) = std::vector<unsigned int>::end(cur_id_vec_ptr);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128)) )
    {
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v4 + 48);
      *(_DWORD *)(v4 + 48) = v9;
      config_ptr = data::DbRedPointConfigMgr::findRedPointConfig(this, *(_DWORD *)(v4 + 48));
      if ( config_ptr )
      {
        if ( data::RedPointConfig::isPassedDailyRefreshTime(config_ptr, *(_DWORD *)(v4 + 64), *(_DWORD *)(v4 + 80)) )
        {
          v13 = std::map<unsigned int,bool>::operator[](
                  retstr,
                  (const std::map<unsigned int,bool>::key_type *)(v4 + 48));
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v13);
          }
          *v14 = 1;
        }
      }
      else
      {
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
          4u,
          "./src/db_data_manual/db_red_point_config_mgr.cpp",
          "getRedPointChangeBetweenTime",
          234);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v4 + 256),
                (const char (*)[29])"findRedPointConfig fail, id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v4 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" cur_time:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
        *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 96));
    }
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
  }
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  p_red_point_change_timestamp_map = &this->red_point_change_timestamp_map_;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::const_iterator *)(v4 + 160) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::upper_bound(
                                                                                              p_red_point_change_timestamp_map,
                                                                                              (const std::multimap<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v4 + 64));
  while ( 1 )
  {
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    v16 = &this->red_point_change_timestamp_map_;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::multimap<unsigned int,std::pair<bool,unsigned int>>::const_iterator *)(v4 + 192) = std::multimap<unsigned int,std::pair<bool,unsigned int>>::end(v16);
    v17 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v4 + 160),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > >::_Self *)(v4 + 192));
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( !v17 )
      break;
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v4 + 160));
    p_first = &v18->first;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    if ( *p_first <= *(_DWORD *)(v4 + 80) )
    {
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v4 + 160));
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      if ( (((unsigned __int8)v21 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v21->second >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v21->second >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v21->second.second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v21 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->second.second + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load_n(&v21->second, 8LL);
      }
      *(std::pair<bool,unsigned int> *)(v4 + 224) = v21->second;
      is_show = std::get<0ul,bool,unsigned int>((std::pair<bool,unsigned int> *)(v4 + 224));
      id = std::get<1ul,bool,unsigned int>((std::pair<bool,unsigned int> *)(v4 + 224));
      if ( *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_show & 7) >= *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_show);
      }
      v22 = *is_show;
      v23 = std::map<unsigned int,bool>::operator[](retstr, id);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v23);
      }
      *v24 = v22;
      v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> > > *const)(v4 + 160));
  }
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
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
  return retstr;
};

// Line 258: range 000000000CDBC636-000000000CDBCBE9
std::vector<unsigned int> *__fastcall data::DbRedPointConfigMgr::getNewRedPointByPlayerLevelChange(
        std::vector<unsigned int> *retstr,
        const data::DbRedPointConfigMgr *const this,
        uint32_t cur_time,
        uint32_t old_level,
        uint32_t new_level)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::vector<unsigned int> *cur_id_vec_ptr; // [rsp+28h] [rbp-F8h]
  const data::RedPointConfig *config_ptr; // [rsp+38h] [rbp-E8h]
  char v20[224]; // [rsp+40h] [rbp-E0h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 6 id:265 48 4 12 cur_time:257 64 8 15 __for_begin:265 96 8 13 __for_end:265 128 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = data::DbRedPointConfigMgr::getNewRedPointByPlayerLevelChange;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862725] = -202116109;
  *(_DWORD *)(v5 + 48) = cur_time;
  std::vector<unsigned int>::vector(retstr);
  cur_id_vec_ptr = data::DbRedPointConfigMgr::findIdsByTime(this, *(_DWORD *)(v5 + 48));
  if ( cur_id_vec_ptr )
  {
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v5 + 64) = std::vector<unsigned int>::begin(cur_id_vec_ptr);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<unsigned int>::const_iterator *)(v5 + 96) = std::vector<unsigned int>::end(cur_id_vec_ptr);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 96)) )
    {
      *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 32);
      *(_DWORD *)(v5 + 32) = v10;
      config_ptr = data::DbRedPointConfigMgr::findRedPointConfig(this, *(_DWORD *)(v5 + 32));
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_time >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&config_ptr->trigger_time);
        }
        if ( config_ptr->trigger_time <= *(_DWORD *)(v5 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->expire_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->expire_time >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->expire_time);
          }
          if ( config_ptr->expire_time > *(_DWORD *)(v5 + 48) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->player_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->player_level >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->player_level);
            }
            if ( old_level < config_ptr->player_level && new_level >= config_ptr->player_level )
              std::vector<unsigned int>::push_back(retstr, (const std::vector<unsigned int>::value_type *)(v5 + 32));
          }
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/db_data_manual/db_red_point_config_mgr.cpp",
          "getNewRedPointByPlayerLevelChange",
          270);
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v5 + 128),
                (const char (*)[29])"findRedPointConfig fail, id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v5 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" cur_time:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
        *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 64));
    }
  }
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 283: range 000000000CDBCBEA-000000000CDBCF95
const std::vector<unsigned int> *__fastcall data::DbRedPointConfigMgr::findIdsByTime(
        const data::DbRedPointConfigMgr *const this,
        uint32_t cur_time)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,std::vector<unsigned int>> *p_timestamp_ids_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  std::map<unsigned int,std::vector<unsigned int>> *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  char v12[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 cur_time:282 64 8 8 iter:284 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DbRedPointConfigMgr::findIdsByTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = cur_time;
  p_timestamp_ids_map = &this->timestamp_ids_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::upper_bound(
                                                                                     p_timestamp_ids_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->timestamp_ids_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::begin(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->timestamp_ids_map_;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::vector<unsigned int>>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/db_data_manual/db_red_point_config_mgr.cpp",
        "findIdsByTime",
        292);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[28])"invalid iterator, cur_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = 0LL;
    }
    else
    {
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
