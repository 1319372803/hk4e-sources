// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/time_utils.cpp

// Line 42: range 000000000CA09D36-000000000CA09E3F
void __cdecl common::tools::TimeUtils::init()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rbp
  __int64 v2; // rax
  _BYTE v3[200]; // [rsp+0h] [rbp-C8h] BYREF

  v0 = (unsigned __int64)v3;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v0 = v2;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "2 32 8 8 stamp:43 64 56 5 tm:44";
  *(_QWORD *)(v0 + 16) = common::tools::TimeUtils::init;
  v1 = (_DWORD *)(v0 >> 3);
  v1[536862720] = -235802127;
  v1[536862721] = -218959360;
  v1[536862723] = -218103808;
  v1[536862724] = -202116109;
  *(_QWORD *)(v0 + 32) = 0LL;
  localtime_r((const time_t *)(v0 + 32), (struct tm *)(v0 + 64));
  common::tools::TimeUtils::gmtoff = *(_QWORD *)(v0 + 104);
  common::tools::TimeUtils::is_init = 1;
  if ( v3 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v0 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 61: range 000000000CA0BF62-000000000CA0C2B1
void __fastcall common::tools::TimeUtils::setTimeOffsetFromFile(const char *file_path)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  FILE *v3; // rax
  FILE *v4; // r13
  time_t v5; // r12
  time_t Now; // rax
  __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-138h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-118h] BYREF
  char v10[248]; // [rsp+40h] [rbp-F8h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v1 = v7;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 128 11 line_buf:81";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::setTimeOffsetFromFile;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450900) = -202116109;
  if ( common::tools::TimeUtils::time_offset )
  {
    common::milog::MiLogStream::MiLogStream(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/time_utils.cpp",
      "setTimeOffsetFromFile",
      64);
    common::milog::MiLogStream::operator()(&v9, "can not re set time offset");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else if ( file_path )
  {
    v3 = fopen(file_path, "r");
    v4 = v3;
    if ( v3 )
    {
      if ( fgets((char *)(v1 + 32), 128, v3) )
      {
        common::tools::TimeUtils::time_offset = (int)strtol((const char *)(v1 + 32), 0LL, 10);
        common::milog::MiLogStream::MiLogStream(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/time_utils.cpp",
          "setTimeOffsetFromFile",
          85);
        v5 = common::tools::TimeUtils::time_offset;
        Now = common::tools::TimeUtils::getNow();
        common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v9, Now);
        common::milog::MiLogStream::operator()(
          &v8,
          "set system_time='%s', with time_offset=%ld",
          (const char *)v9.log_,
          v5);
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v9.log_ != &v9.ostr_ptr_._M_refcount )
          operator delete(v9.log_);
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
      else
      {
        common::milog::MiLogStream::MiLogStream(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/time_utils.cpp",
          "setTimeOffsetFromFile",
          89);
        common::milog::MiLogStream::operator()(&v9, "'%s' is empty", file_path);
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
      fclose(v4);
    }
    else
    {
      common::milog::MiLogStream::MiLogStream(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/time_utils.cpp",
        "setTimeOffsetFromFile",
        76);
      common::milog::MiLogStream::operator()(&v9, "can not open '%s', skip time offset set", file_path);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
  }
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 99: range 000000000CA09EE6-000000000CA09FAF
time_t __cdecl common::tools::TimeUtils::getNow()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  time_t result; // rax
  __int64 v3; // rax
  _BYTE v4[104]; // [rsp+0h] [rbp-68h] BYREF

  v0 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v0 = v3;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 6 tv:100";
  *(_QWORD *)(v0 + 16) = common::tools::TimeUtils::getNow;
  v1 = v0 >> 3;
  *(_DWORD *)(v1 + 2147450880) = -235802127;
  *(_DWORD *)(v1 + 2147450884) = -202178560;
  if ( gettimeofday((struct timeval *)(v0 + 32), 0LL) )
    result = 0LL;
  else
    result = *(_QWORD *)(v0 + 32) + common::tools::TimeUtils::time_offset;
  if ( v4 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 109: range 000000000CA0C2B6-000000000CA0C4DF
std::string *__cdecl common::tools::TimeUtils::getNowStr[abi:cxx11](std::string *retstr)
{
  time_t Now; // rsi

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
    JUMPOUT(0xCA0C319LL);
  }
  common::tools::TimeUtils::getStrByTime[abi:cxx11](retstr, Now);
  return retstr;
};

// Line 116: range 000000000CA09FB2-000000000CA09FBC
time_t __cdecl common::tools::TimeUtils::getTimeOffset()
{
  return common::tools::TimeUtils::time_offset;
};

// Line 120: range 000000000CA09FBE-000000000CA0A0B5
uint64_t __cdecl common::tools::TimeUtils::getNowMs()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbp
  uint64_t result; // rax
  __int64 v3; // rax
  _BYTE v4[104]; // [rsp+0h] [rbp-68h] BYREF

  v0 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v0 = v3;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 6 tv:121";
  *(_QWORD *)(v0 + 16) = common::tools::TimeUtils::getNowMs;
  v1 = v0 >> 3;
  *(_DWORD *)(v1 + 2147450880) = -235802127;
  *(_DWORD *)(v1 + 2147450884) = -202178560;
  if ( gettimeofday((struct timeval *)(v0 + 32), 0LL) )
    result = 0LL;
  else
    result = 1000 * (*(_QWORD *)(v0 + 32) + common::tools::TimeUtils::time_offset) + *(_QWORD *)(v0 + 40) / 1000LL;
  if ( v4 == (_BYTE *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 132: range 000000000CA0A0B8-000000000CA0A0E3
time_t __fastcall common::tools::TimeUtils::getTimeDay(time_t stamp, time_t offset_sec)
{
  return (common::tools::TimeUtils::gmtoff + stamp - offset_sec) / 86400;
};

// Line 138: range 000000000CA0A0E4-000000000CA0A0F9
time_t __fastcall common::tools::TimeUtils::getDailyStartTime(time_t day, time_t offset_sec)
{
  return 86400 * day + offset_sec - common::tools::TimeUtils::gmtoff;
};

// Line 143: range 000000000CA0A0FA-000000000CA0A124
bool __fastcall common::tools::TimeUtils::isSameDay(time_t stamp_1, time_t stamp_2, time_t offset_sec)
{
  time_t TimeDay; // rbp

  TimeDay = common::tools::TimeUtils::getTimeDay(stamp_1, offset_sec);
  return TimeDay == common::tools::TimeUtils::getTimeDay(stamp_2, offset_sec);
};

// Line 150: range 000000000CA0A126-000000000CA0A158
time_t __fastcall common::tools::TimeUtils::getTimeWeek(time_t stamp, time_t offset_sec)
{
  return (common::tools::TimeUtils::gmtoff + stamp + 259200 - offset_sec) / 604800;
};

// Line 153: range 000000000CA0A15A-000000000CA0A184
bool __fastcall common::tools::TimeUtils::isSameWeek(time_t stamp_1, time_t stamp_2, time_t offset_sec)
{
  time_t TimeWeek; // rbp

  TimeWeek = common::tools::TimeUtils::getTimeWeek(stamp_1, offset_sec);
  return TimeWeek == common::tools::TimeUtils::getTimeWeek(stamp_2, offset_sec);
};

// Line 159: range 000000000CA0A2FC-000000000CA0A326
bool __fastcall common::tools::TimeUtils::isSameMonth(time_t stamp_1, time_t stamp_2, time_t offset_sec)
{
  time_t TimeMonth; // r12

  TimeMonth = common::tools::TimeUtils::getTimeMonth(stamp_1 - offset_sec);
  return TimeMonth == common::tools::TimeUtils::getTimeMonth(stamp_2 - offset_sec);
};

// Line 167: range 000000000CA0A186-000000000CA0A1E7
time_t __fastcall common::tools::TimeUtils::getTimeWeekDay(time_t stamp, time_t offset_sec)
{
  return (common::tools::TimeUtils::gmtoff + stamp + 259200 - offset_sec) % 604800 / 86400 + 1;
};

// Line 173: range 000000000CA0A1E8-000000000CA0A2F9
time_t __fastcall common::tools::TimeUtils::getTimeMonth(time_t stamp)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  int v3; // eax
  time_t result; // rax
  __int64 v5; // rax
  _BYTE v6[200]; // [rsp+0h] [rbp-C8h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v1 = v5;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 stamp:172 64 56 7 tm_:174";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::getTimeMonth;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862723] = -218103808;
  v2[536862724] = -202116109;
  *(_QWORD *)(v1 + 32) = stamp;
  localtime_r((const time_t *)(v1 + 32), (struct tm *)(v1 + 64));
  v3 = *(_DWORD *)(v1 + 84);
  if ( v3 < 70 )
    v3 = 70;
  result = *(_DWORD *)(v1 + 80) + 4 * (3 * v3 - 210);
  if ( v6 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 181: range 000000000CA0A328-000000000CA0A42A
time_t __fastcall common::tools::TimeUtils::getTimeMonthDay(time_t stamp, time_t offset_sec)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // rbp
  time_t result; // rax
  __int64 v5; // rax
  _BYTE v6[216]; // [rsp+0h] [rbp-D8h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 time_:182 64 56 7 tm_:183";
  *(_QWORD *)(v2 + 16) = common::tools::TimeUtils::getTimeMonthDay;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  *(_QWORD *)(v2 + 32) = stamp - offset_sec;
  localtime_r((const time_t *)(v2 + 32), (struct tm *)(v2 + 64));
  result = *(int *)(v2 + 76);
  if ( v6 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 190: range 000000000CA0A42C-000000000CA0A528
time_t __fastcall common::tools::TimeUtils::getTimeYearMonth(time_t stamp)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  time_t result; // rax
  __int64 v4; // rax
  _BYTE v5[200]; // [rsp+0h] [rbp-C8h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 stamp:189 64 56 7 tm_:191";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::getTimeYearMonth;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862723] = -218103808;
  v2[536862724] = -202116109;
  *(_QWORD *)(v1 + 32) = stamp;
  localtime_r((const time_t *)(v1 + 32), (struct tm *)(v1 + 64));
  result = *(_DWORD *)(v1 + 80) + 1;
  if ( v5 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 198: range 000000000CA0A52A-000000000CA0A631
time_t __fastcall common::tools::TimeUtils::getTimeYear(time_t stamp)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  int v3; // eax
  time_t result; // rax
  __int64 v5; // rax
  _BYTE v6[200]; // [rsp+0h] [rbp-C8h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v1 = v5;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 stamp:197 64 56 7 tm_:199";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::getTimeYear;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862723] = -218103808;
  v2[536862724] = -202116109;
  *(_QWORD *)(v1 + 32) = stamp;
  localtime_r((const time_t *)(v1 + 32), (struct tm *)(v1 + 64));
  v3 = *(_DWORD *)(v1 + 84);
  if ( v3 < 70 )
    v3 = 70;
  result = v3 - 70;
  if ( v6 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 207: range 000000000CA0A634-000000000CA0A68A
time_t __fastcall common::tools::TimeUtils::getTimeHour(time_t stamp)
{
  return (common::tools::TimeUtils::gmtoff + stamp) % 86400 / 3600;
};

// Line 213: range 000000000CA0A68C-000000000CA0A8A0
time_t __fastcall common::tools::TimeUtils::getTimeByDate(
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r12
  __int64 v8; // rax
  time_t result; // rax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-F8h] BYREF
  char v15[216]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 14 time_stamp:225 64 56 6 tm:218";
  *(_QWORD *)(v6 + 16) = common::tools::TimeUtils::getTimeByDate;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v6 + 84) = year - 1900;
  *(_DWORD *)(v6 + 80) = month - 1;
  *(_DWORD *)(v6 + 76) = day;
  *(_DWORD *)(v6 + 72) = hour;
  *(_DWORD *)(v6 + 68) = minute;
  *(_DWORD *)(v6 + 64) = second;
  *(_QWORD *)(v6 + 32) = timegm((struct tm *)(v6 + 64)) - common::tools::TimeUtils::gmtoff;
  localtime_r((const time_t *)(v6 + 32), (struct tm *)(v6 + 64));
  if ( *(_QWORD *)(v6 + 80) == __PAIR64__(year - 1900, month - 1)
    && *(_DWORD *)(v6 + 76) == day
    && *(_DWORD *)(v6 + 72) == hour
    && *(_DWORD *)(v6 + 68) == minute
    && *(_DWORD *)(v6 + 64) == second )
  {
    result = *(_QWORD *)(v6 + 32);
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/time_utils.cpp",
      "getTimeByDate",
      232);
    common::milog::MiLogStream::operator()(&v14, "time check fails, maybe SUMMER TIME ZONE");
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 240: range 000000000CA0ABA6-000000000CA0B0CF
time_t __fastcall common::tools::TimeUtils::getTimeByStr(const std::string *time_str)
{
  const std::string *v1; // r12
  unsigned __int64 v2; // rbx
  _DWORD *v3; // rbp
  time_t result; // rax
  __int64 v5; // rax
  std::string::pointer M_p; // rax
  char v7; // dl
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // dl
  int v12; // r15d
  const char *v13; // rax
  int v14; // eax
  const char *v15; // rax
  int v16; // eax
  const char *v17; // rax
  int v18; // eax
  const char *v19; // rax
  int v20; // eax
  const char *v21; // rax
  int v22; // eax
  int v23; // r12d
  time_t v24; // rax
  int v25; // [rsp+0h] [rbp-118h]
  int day; // [rsp+4h] [rbp-114h]
  int hour; // [rsp+8h] [rbp-110h]
  int min; // [rsp+Ch] [rbp-10Ch]
  boost::iterator_range<char const*> arg; // [rsp+10h] [rbp-108h] BYREF
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-F8h] BYREF
  char v31[216]; // [rsp+40h] [rbp-D8h] BYREF

  v1 = time_str;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 14 time_stamp:271 64 56 6 tm:264";
  *(_QWORD *)(v2 + 16) = common::tools::TimeUtils::getTimeByStr;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&time_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&time_str->_M_string_length);
  }
  else if ( !time_str->_M_string_length )
  {
LABEL_4:
    result = 0LL;
    goto LABEL_5;
  }
  if ( !(unsigned int)std::string::compare(time_str, &unk_19ECC8E0) )
    goto LABEL_4;
  if ( *(_BYTE *)(((unsigned __int64)&time_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&time_str->_M_string_length);
LABEL_31:
    __asan_report_load8(time_str);
LABEL_32:
    __asan_report_load1(time_str);
LABEL_33:
    __asan_report_load1(time_str);
LABEL_34:
    __asan_report_load1(time_str);
LABEL_35:
    __asan_report_load1(time_str);
    goto LABEL_36;
  }
  if ( time_str->_M_string_length != 19 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)time_str >> 3) + 0x7FFF8000) )
    goto LABEL_31;
  M_p = time_str->_M_dataplus._M_p;
  time_str = (const std::string *)(time_str->_M_dataplus._M_p + 4);
  v7 = *(_BYTE *)(((unsigned __int64)(v1->_M_dataplus._M_p + 4) >> 3) + 0x7FFF8000);
  if ( v7 <= ((LOBYTE(v1->_M_dataplus._M_p) + 4) & 7) && v7 )
    goto LABEL_32;
  if ( M_p[4] != 45 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  time_str = (const std::string *)(M_p + 7);
  v8 = *(_BYTE *)(((unsigned __int64)(M_p + 7) >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)M_p + 7) & 7) && v8 )
    goto LABEL_33;
  if ( M_p[7] != 45 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  time_str = (const std::string *)(M_p + 10);
  v9 = *(_BYTE *)(((unsigned __int64)(M_p + 10) >> 3) + 0x7FFF8000);
  if ( v9 <= (((unsigned __int8)M_p + 10) & 7) && v9 )
    goto LABEL_34;
  if ( M_p[10] != 32 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  time_str = (const std::string *)(M_p + 13);
  v10 = *(_BYTE *)(((unsigned __int64)(M_p + 13) >> 3) + 0x7FFF8000);
  if ( v10 <= (((unsigned __int8)M_p + 13) & 7) && v10 )
    goto LABEL_35;
  if ( M_p[13] != 58 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  time_str = (const std::string *)(M_p + 16);
  v11 = *(_BYTE *)(((unsigned __int64)(M_p + 16) >> 3) + 0x7FFF8000);
  if ( v11 > (((unsigned __int8)M_p + 16) & 7) || !v11 )
  {
    if ( M_p[16] != 58 )
    {
      result = 0LL;
      goto LABEL_5;
    }
    goto LABEL_37;
  }
LABEL_36:
  M_p = (std::string::pointer)__asan_report_load1(time_str);
LABEL_37:
  arg.m_Begin = M_p;
  arg.m_End = M_p + 4;
  v12 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg) - 1900;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v14 = __asan_report_load8(v1);
  }
  else
  {
    v13 = v1->_M_dataplus._M_p + 7;
    arg.m_Begin = v1->_M_dataplus._M_p + 5;
    arg.m_End = v13;
    v14 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
  }
  v25 = v14 - 1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v16 = __asan_report_load8(v1);
  }
  else
  {
    v15 = v1->_M_dataplus._M_p + 10;
    arg.m_Begin = v1->_M_dataplus._M_p + 8;
    arg.m_End = v15;
    v16 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
  }
  day = v16;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v18 = __asan_report_load8(v1);
  }
  else
  {
    v17 = v1->_M_dataplus._M_p + 13;
    arg.m_Begin = v1->_M_dataplus._M_p + 11;
    arg.m_End = v17;
    v18 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
  }
  hour = v18;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v20 = __asan_report_load8(v1);
  }
  else
  {
    v19 = v1->_M_dataplus._M_p + 16;
    arg.m_Begin = v1->_M_dataplus._M_p + 14;
    arg.m_End = v19;
    v20 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
  }
  min = v20;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v22 = __asan_report_load8(v1);
  }
  else
  {
    v21 = v1->_M_dataplus._M_p + 19;
    arg.m_Begin = v1->_M_dataplus._M_p + 17;
    arg.m_End = v21;
    v22 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
  }
  v23 = v22;
  *(_DWORD *)(v2 + 84) = v12;
  *(_DWORD *)(v2 + 80) = v25;
  *(_DWORD *)(v2 + 76) = day;
  *(_DWORD *)(v2 + 72) = hour;
  *(_DWORD *)(v2 + 68) = min;
  *(_DWORD *)(v2 + 64) = v22;
  v24 = timegm((struct tm *)(v2 + 64)) - common::tools::TimeUtils::gmtoff;
  *(_QWORD *)(v2 + 32) = v24;
  if ( v24 < 0 )
  {
    result = 0LL;
  }
  else
  {
    localtime_r((const time_t *)(v2 + 32), (struct tm *)(v2 + 64));
    if ( *(_DWORD *)(v2 + 84) == v12
      && *(_DWORD *)(v2 + 80) == v25
      && *(_DWORD *)(v2 + 76) == day
      && *(_DWORD *)(v2 + 72) == hour
      && *(_DWORD *)(v2 + 68) == min
      && *(_DWORD *)(v2 + 64) == v23 )
    {
      result = *(_QWORD *)(v2 + 32);
    }
    else
    {
      common::milog::MiLogStream::MiLogStream(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/time_utils.cpp",
        "getTimeByStr",
        282);
      common::milog::MiLogStream::operator()(&v30, "time check fails, maybe SUMMER TIME ZONE");
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = 0LL;
    }
  }
LABEL_5:
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 296: range 000000000CA0C4E2-000000000CA0C67B
time_t __fastcall common::tools::TimeUtils::getTimeByDayStr(const std::string *day_str)
{
  std::forward_iterator_tag v1; // cl
  const std::string *v2; // r12
  unsigned __int64 v3; // r13
  time_t TimeByStr; // r12
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  std::string _20[2]; // [rsp+20h] [rbp+20h] BYREF

  v2 = day_str;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(96LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 32 12 time_str:297";
  vars0[2] = (__int64)common::tools::TimeUtils::getTimeByDayStr;
  v3 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  vars0[4] = (__int64)&_20[0]._anon_0._M_allocated_capacity;
  if ( *(_BYTE *)(((unsigned __int64)day_str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(day_str);
    goto LABEL_8;
  }
  day_str = (const std::string *)((char *)day_str + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(day_str);
LABEL_9:
    __asan_handle_no_return(day_str);
    std::__throw_length_error("basic_string::append");
  }
  day_str = _20;
  std::string::_M_construct<char *>(_20, v2->_M_dataplus._M_p, &v2->_M_dataplus._M_p[v2->_M_string_length], v1);
  if ( 0x3FFFFFFFFFFFFFFFLL - _20[0]._M_string_length <= 8 )
    goto LABEL_9;
  std::string::_M_append(_20, " 00:00:00", 9LL);
  TimeByStr = common::tools::TimeUtils::getTimeByStr(_20);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)_20[0]._M_dataplus._M_p != &_20[0]._anon_0 )
    operator delete(_20[0]._M_dataplus._M_p);
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0;
  return TimeByStr;
};

// Line 304: range 000000000CA0B0D4-000000000CA0B25A
time_t __fastcall common::tools::TimeUtils::getTimeByTimeStr(const std::string *time_str)
{
  std::string::size_type *p_M_string_length; // rdi
  std::string::pointer M_p; // rax
  const std::string *v4; // rdi
  char v5; // dl
  char v6; // dl
  int v8; // ebp
  const char *v9; // rax
  int v10; // eax
  int v11; // r12d
  const char *v12; // rax
  int v13; // eax
  boost::iterator_range<char const*> v14[2]; // [rsp+0h] [rbp-28h] BYREF

  p_M_string_length = &time_str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)p_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
LABEL_12:
    v4 = time_str;
    __asan_report_load8(time_str);
LABEL_13:
    __asan_report_load1(v4);
    goto LABEL_14;
  }
  if ( time_str->_M_string_length != 8 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)time_str >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  M_p = time_str->_M_dataplus._M_p;
  v4 = (const std::string *)(time_str->_M_dataplus._M_p + 2);
  v5 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( v5 <= ((LOBYTE(time_str->_M_dataplus._M_p) + 2) & 7) && v5 )
    goto LABEL_13;
  if ( M_p[2] != 58 )
    return 0LL;
  v4 = (const std::string *)(M_p + 5);
  v6 = *(_BYTE *)(((unsigned __int64)(M_p + 5) >> 3) + 0x7FFF8000);
  if ( v6 > (((unsigned __int8)M_p + 5) & 7) || !v6 )
  {
    if ( M_p[5] != 58 )
      return 0LL;
    goto LABEL_15;
  }
LABEL_14:
  M_p = (std::string::pointer)__asan_report_load1(v4);
LABEL_15:
  v14[0].m_Begin = M_p;
  v14[0].m_End = M_p + 2;
  v8 = boost::lexical_cast<int,boost::iterator_range<char const*>>(v14);
  if ( *(_BYTE *)(((unsigned __int64)time_str >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load8(time_str);
  }
  else
  {
    v9 = time_str->_M_dataplus._M_p + 5;
    v14[0].m_Begin = time_str->_M_dataplus._M_p + 3;
    v14[0].m_End = v9;
    v10 = boost::lexical_cast<int,boost::iterator_range<char const*>>(v14);
  }
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)time_str >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load8(time_str);
  }
  else
  {
    v12 = time_str->_M_dataplus._M_p + 8;
    v14[0].m_Begin = time_str->_M_dataplus._M_p + 6;
    v14[0].m_End = v12;
    v13 = boost::lexical_cast<int,boost::iterator_range<char const*>>(v14);
  }
  return v13 + 60 * v11 + 3600 * v8;
};

// Line 329: range 000000000CA0A8A2-000000000CA0A8ED
time_t __cdecl common::tools::TimeUtils::getTodayTime()
{
  time_t Now; // rax

  Now = common::tools::TimeUtils::getNow();
  return Now - (common::tools::TimeUtils::gmtoff + Now) % 86400;
};

// Line 337: range 000000000CA0A8EE-000000000CA0A929
time_t __fastcall common::tools::TimeUtils::getDayTime(time_t stamp)
{
  return stamp - (common::tools::TimeUtils::gmtoff + stamp) % 86400;
};

// Line 344: range 000000000CA0A92A-000000000CA0A96F
time_t __fastcall common::tools::TimeUtils::getWeekTime(time_t stamp, time_t offset_sec)
{
  return stamp - (common::tools::TimeUtils::gmtoff + stamp + 259200 - offset_sec) % 604800;
};

// Line 350: range 000000000CA0BD9A-000000000CA0BF5F
std::string *__fastcall common::tools::TimeUtils::getStrByTime[abi:cxx11](std::string *retstr, time_t stamp)
{
  _DWORD *v2; // r12
  size_t v3; // rax
  std::forward_iterator_tag v4; // cl
  __int64 vars0[8]; // [rsp+0h] [rbp+0h] BYREF
  char s[64]; // [rsp+40h] [rbp+40h] BYREF
  struct tm tp; // [rsp+80h] [rbp+80h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_2(224LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"3 32 8 9 stamp:349 64 32 12 time_buf:354 128 56 10 cur_tm:351";
  vars0[2] = (__int64)common::tools::TimeUtils::getStrByTime[abi:cxx11];
  v2 = (_DWORD *)((unsigned __int64)vars0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862723] = -218959118;
  v2[536862725] = -218103808;
  v2[536862726] = -202116109;
  vars0[4] = stamp;
  localtime_r(&vars0[4], &tp);
  snprintf(
    s,
    0x20uLL,
    "%04d-%02d-%02d %02d:%02d:%02d",
    (unsigned int)(tp.tm_year + 1900),
    (unsigned int)(tp.tm_mon + 1),
    (unsigned int)tp.tm_mday,
    (unsigned int)tp.tm_hour,
    (unsigned int)tp.tm_min,
    (unsigned int)tp.tm_sec);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr);
    vars0[0] = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8018) = -168430091;
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    v3 = strlen(s);
    std::string::_M_construct<char const*>(retstr, s, &s[v3], v4);
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8014) = 0LL;
  }
  return retstr;
};

// Line 375: range 000000000CA0CCBE-000000000CA0E1FD
uint32_t __fastcall common::tools::TimeUtils::getDaysOfMonth(time_t stamp, time_t offset_sec)
{
  unsigned __int64 v2; // r14
  _DWORD *v3; // r13
  char *v4; // rdi
  int v5; // ebp
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // r15
  __int16 v8; // ax
  unsigned int v9; // edx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  __int64 v16; // rbp
  unsigned int v17; // r15d
  unsigned int v18; // r12d
  unsigned __int64 v19; // rbp
  unsigned __int16 v20; // r15
  unsigned __int16 v21; // bp
  unsigned __int16 v22; // bp
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // si
  unsigned __int16 v25; // dx
  __int16 v26; // ax
  unsigned __int16 v27; // di
  unsigned int v28; // ebp
  unsigned __int16 v29; // ax
  unsigned int v30; // eax
  unsigned int v31; // r12d
  unsigned int v32; // edx
  unsigned int v33; // r12d
  __int64 v34; // r15
  unsigned int v35; // esi
  unsigned int v36; // r12d
  unsigned __int64 v37; // r15
  unsigned __int16 v38; // r15
  unsigned int v39; // eax
  unsigned int v40; // r12d
  unsigned int v41; // edx
  unsigned int v42; // r12d
  __int64 v43; // r15
  unsigned int v44; // esi
  unsigned int v45; // r12d
  unsigned __int64 v46; // r15
  unsigned __int16 v47; // r15
  __int16 v48; // cx
  int v49; // eax
  unsigned __int16 v50; // r12
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // edx
  unsigned int v55; // r15d
  unsigned int v56; // r12d
  unsigned __int16 v57; // r15
  unsigned __int16 v58; // r12
  char *v59; // rdi
  boost::wrapexcept<std::out_of_range> *exception; // r12
  uint32_t result; // eax
  unsigned __int16 v62; // [rsp+Ch] [rbp-21Ch]
  unsigned __int16 v63; // [rsp+Ch] [rbp-21Ch]
  unsigned __int16 v64; // [rsp+Ch] [rbp-21Ch]
  unsigned int v65; // [rsp+1Ah] [rbp-20Eh]
  int v66; // [rsp+20h] [rbp-208h]
  int v67; // [rsp+32h] [rbp-1F6h]
  boost::gregorian::bad_day_of_month e; // [rsp+40h] [rbp-1E8h] BYREF
  char v69; // [rsp+50h] [rbp-1D8h] BYREF

  v2 = (unsigned __int64)&v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(416LL);
    if ( v10 )
      v2 = v10;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 6 3 ymd 64 6 3 ymd 96 6 3 ymd 128 8 9 time_:376 160 32 1 s 224 56 7 tm_:377 320 56 21 month"
                        "_end_day_tm_:381";
  *(_QWORD *)(v2 + 16) = common::tools::TimeUtils::getDaysOfMonth;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959354;
  v3[536862722] = -218959354;
  v3[536862723] = -218959354;
  v3[536862724] = -218959360;
  v3[536862726] = -218959118;
  v3[536862728] = -234881024;
  v3[536862729] = -218959118;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  *(_QWORD *)(v2 + 128) = stamp - offset_sec;
  v4 = (char *)(v2 + 128);
  localtime_r((const time_t *)(v2 + 128), (struct tm *)(v2 + 224));
  v5 = *(unsigned __int16 *)(v2 + 236);
  if ( (_WORD)v5 )
  {
    if ( (unsigned __int16)v5 <= 0x1Fu )
    {
      v6 = *(_WORD *)(v2 + 240) + 1;
      if ( *(_WORD *)(v2 + 240) != 0xFFFF )
      {
        if ( v6 <= 0xCu )
        {
          v7 = *(_WORD *)(v2 + 244) + 1900;
          if ( v7 > 0x577u )
          {
            if ( v7 <= 0x270Fu )
            {
              *(_WORD *)(v2 + 96) = v7;
              *(_WORD *)(v2 + 98) = v6;
              *(_WORD *)(v2 + 100) = v5;
              v8 = ((715827883LL * (14 - v6)) >> 33) - ((14 - v6) >> 31);
              v9 = ((unsigned __int16)(v7 - v8 + 4800) >> 2)
                 + 365 * (unsigned __int16)(v7 - v8 + 4800)
                 + ((int)((unsigned __int64)(1717986919LL * (153 * (unsigned __int16)(v6 + 12 * v8 - 3) + 2)) >> 32) >> 1)
                 + v5
                 - (unsigned __int16)(v7 - v8 + 4800) / 0x64u
                 + (unsigned __int16)(v7 - v8 + 4800) / 0x190u
                 - 32045;
              switch ( v6 )
              {
                case 2u:
                  if ( (v7 & 3) != 0 || v7 == 100 * (v7 / 0x64u) && v7 != 400 * (v7 / 0x190u) )
                    v11 = 28;
                  else
                    v11 = 29;
                  break;
                case 4u:
                case 6u:
                case 9u:
                case 0xBu:
                  v11 = 30;
                  break;
                default:
                  v11 = 31;
                  break;
              }
              if ( (unsigned __int16)v5 <= v11 )
              {
                v12 = (4 * v9 + 128179) / 0x23AB1;
                v13 = v9 + 32044 - ((146097 * v12) >> 2);
                v14 = (4 * v13 + 3) / 0x5B5;
                v15 = v13 - ((1461 * v14) >> 2);
                v16 = 5 * v15 + 2;
                v17 = (5 * v15 + 2) / 0x99;
                v18 = v15 - (153 * v17 + 2) / 5 + 1;
                v19 = (unsigned __int64)(718635051 * v16) >> 40;
                v20 = v17 - 12 * v19 + 3;
                v21 = v14 + 100 * v12 + v19 - 4800;
                if ( v21 > 0x577u )
                {
                  if ( v21 <= 0x270Fu )
                  {
                    if ( (_WORD)v18 )
                    {
                      if ( (unsigned __int16)v18 <= 0x1Fu )
                      {
                        if ( v20 )
                        {
                          if ( v20 <= 0xCu )
                          {
                            *(_WORD *)(v2 + 96) = v21;
                            *(_WORD *)(v2 + 98) = v20;
                            *(_WORD *)(v2 + 100) = v18;
                            v66 = *(_DWORD *)(v2 + 96);
                            *(_DWORD *)(v2 + 64) = v66;
                            *(_WORD *)(v2 + 68) = v18;
                            switch ( HIWORD(v66) )
                            {
                              case 2:
                                if ( (v66 & 3) != 0
                                  || (_WORD)v66 == 100 * ((unsigned __int16)v66 / 0x64u)
                                  && (_WORD)v66 != 400 * ((unsigned __int16)v66 / 0x190u) )
                                {
                                  v22 = 28;
                                }
                                else
                                {
                                  v22 = 29;
                                }
                                break;
                              case 4:
                              case 6:
                              case 9:
                              case 0xB:
                                v22 = 30;
                                break;
                              default:
                                v22 = 31;
                                break;
                            }
                            v23 = v22;
                            v24 = *(_WORD *)(v2 + 64);
                            v25 = *(_WORD *)(v2 + 66);
                            *(_WORD *)(v2 + 96) = v24;
                            *(_WORD *)(v2 + 98) = v25;
                            *(_WORD *)(v2 + 100) = v22;
                            v26 = ((715827883LL * (14 - v25)) >> 33) - ((14 - v25) >> 31);
                            v27 = v24 - v26 + 4800;
                            v28 = (v27 >> 2)
                                + 365 * v27
                                + v22
                                + ((int)((unsigned __int64)(1717986919LL
                                                          * (153 * (unsigned __int16)(v25 + 12 * v26 - 3) + 2)) >> 32) >> 1)
                                - v27 / 0x64u
                                + v27 / 0x190u
                                - 32045;
                            switch ( v25 )
                            {
                              case 2u:
                                if ( (v24 & 3) != 0 || v24 == 100 * (v24 / 0x64u) && v24 != 400 * (v24 / 0x190u) )
                                  v29 = 28;
                                else
                                  v29 = 29;
                                break;
                              case 4u:
                              case 6u:
                              case 9u:
                              case 0xBu:
                                v29 = 30;
                                break;
                              default:
                                v29 = 31;
                                break;
                            }
                            if ( v23 <= v29 )
                            {
                              if ( v28 != -2 && v28 && v28 != -1 )
                              {
                                memset((void *)(v2 + 320), 0, 0x38uLL);
                                v30 = (4 * v28 + 128179) / 0x23AB1;
                                v31 = v28 + 32044 - ((146097 * v30) >> 2);
                                v32 = (4 * v31 + 3) / 0x5B5;
                                v33 = v31 - ((1461 * v32) >> 2);
                                v34 = 5 * v33 + 2;
                                v35 = (5 * v33 + 2) / 0x99;
                                v36 = v33 - (153 * v35 + 2) / 5 + 1;
                                v37 = (unsigned __int64)(718635051 * v34) >> 40;
                                v62 = v35 - 12 * v37 + 3;
                                v38 = v32 + 100 * v30 + v37 - 4800;
                                if ( v38 > 0x577u )
                                {
                                  if ( v38 <= 0x270Fu )
                                  {
                                    if ( (_WORD)v36 )
                                    {
                                      if ( (unsigned __int16)v36 <= 0x1Fu )
                                      {
                                        if ( v62 )
                                        {
                                          if ( v62 <= 0xCu )
                                          {
                                            *(_WORD *)(v2 + 96) = v38;
                                            *(_WORD *)(v2 + 98) = v62;
                                            *(_WORD *)(v2 + 100) = v36;
                                            v65 = *(_DWORD *)(v2 + 96);
                                            *(_DWORD *)(v2 + 32) = v65;
                                            *(_WORD *)(v2 + 36) = v36;
                                            *(_DWORD *)(v2 + 340) = (unsigned __int16)v65 - 1900;
                                            *(_DWORD *)(v2 + 336) = HIWORD(v65) - 1;
                                            *(_DWORD *)(v2 + 332) = (unsigned __int16)v36;
                                            v39 = (4 * v28 + 128179) / 0x23AB1;
                                            v40 = v28 + 32044 - ((146097 * v39) >> 2);
                                            v41 = (4 * v40 + 3) / 0x5B5;
                                            v42 = v40 - ((1461 * v41) >> 2);
                                            v43 = 5 * v42 + 2;
                                            v44 = (5 * v42 + 2) / 0x99;
                                            v45 = v42 - (153 * v44 + 2) / 5 + 1;
                                            v46 = (unsigned __int64)(718635051 * v43) >> 40;
                                            v63 = v44 - 12 * v46 + 3;
                                            v47 = v41 + 100 * v39 + v46 - 4800;
                                            if ( v47 > 0x577u )
                                            {
                                              if ( v47 <= 0x270Fu )
                                              {
                                                if ( (_WORD)v45 )
                                                {
                                                  if ( (unsigned __int16)v45 <= 0x1Fu )
                                                  {
                                                    if ( v63 )
                                                    {
                                                      if ( v63 <= 0xCu )
                                                      {
                                                        *(_WORD *)(v2 + 96) = v47;
                                                        *(_WORD *)(v2 + 98) = v63;
                                                        *(_WORD *)(v2 + 100) = v45;
                                                        v67 = *(_DWORD *)(v2 + 96);
                                                        *(_DWORD *)(v2 + 64) = v67;
                                                        *(_WORD *)(v2 + 68) = v45;
                                                        v48 = ((715827883LL * (14 - HIWORD(v67))) >> 33)
                                                            - ((14 - HIWORD(v67)) >> 31);
                                                        v49 = (int)(((unsigned __int16)(v67 - v48) >> 2)
                                                                  + (unsigned __int16)(v67 - v48)
                                                                  + (unsigned __int16)v45
                                                                  - (unsigned __int16)(v67 - v48) / 0x64u
                                                                  + (unsigned __int16)(v67 - v48) / 0x190u
                                                                  + 31
                                                                  * (unsigned __int16)(HIWORD(v67) + 12 * v48 - 2)
                                                                  / 12)
                                                            % 7;
                                                        v50 = v49;
                                                        if ( (unsigned __int16)v49 <= 6u )
                                                        {
                                                          *(_DWORD *)(v2 + 344) = (unsigned __int16)v49;
                                                          v51 = (4 * v28 + 128179) / 0x23AB1;
                                                          v52 = v28 + 32044 - ((146097 * v51) >> 2);
                                                          v53 = (4 * v52 + 3) / 0x5B5;
                                                          v54 = v52 - ((1461 * v53) >> 2);
                                                          v55 = (5 * v54 + 2) / 0x99;
                                                          v64 = v54 - (153 * v55 + 2) / 5 + 1;
                                                          v56 = (5 * v54 + 2) / 0x5FA;
                                                          v57 = v55 - 12 * v56 + 3;
                                                          v58 = v53 + 100 * v51 + v56 - 4800;
                                                          if ( v58 > 0x577u )
                                                          {
                                                            if ( v58 <= 0x270Fu )
                                                            {
                                                              if ( v64 )
                                                              {
                                                                if ( v64 <= 0x1Fu )
                                                                {
                                                                  if ( v57 )
                                                                  {
                                                                    if ( v57 <= 0xCu )
                                                                    {
                                                                      *(_WORD *)(v2 + 96) = v58;
                                                                      *(_WORD *)(v2 + 98) = v57;
                                                                      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 96);
                                                                      *(_WORD *)(v2 + 68) = v64;
                                                                      *(_WORD *)(v2 + 98) = 1;
                                                                      *(_WORD *)(v2 + 100) = 1;
                                                                      __asm { jmp     rax }
                                                                    }
                                                                    __asan_handle_no_return(3435973837LL);
                                                                    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                                                      1u,
                                                                      v57,
                                                                      max_violation);
                                                                  }
                                                                  __asan_handle_no_return(3435973837LL);
                                                                  boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                                                    1u,
                                                                    0,
                                                                    min_violation);
                                                                }
                                                                __asan_handle_no_return(3435973837LL);
                                                                boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                                                  1u,
                                                                  v64,
                                                                  max_violation);
                                                              }
                                                              __asan_handle_no_return(3435973837LL);
                                                              boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                                                1u,
                                                                0,
                                                                min_violation);
                                                            }
                                                            __asan_handle_no_return(3435973837LL);
                                                            boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                                              0x578u,
                                                              v58,
                                                              max_violation);
                                                          }
                                                          __asan_handle_no_return(3435973837LL);
                                                          boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                                            0x578u,
                                                            v58,
                                                            min_violation);
                                                        }
                                                        __asan_handle_no_return(3435973837LL);
                                                        boost::CV::simple_exception_policy<unsigned short,(unsigned short)0,(unsigned short)6,boost::gregorian::bad_weekday>::on_error(
                                                          0,
                                                          v50,
                                                          max_violation);
                                                      }
                                                      __asan_handle_no_return(3435973837LL);
                                                      boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                                        1u,
                                                        v63,
                                                        max_violation);
                                                    }
                                                    __asan_handle_no_return(3435973837LL);
                                                    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                                      1u,
                                                      0,
                                                      min_violation);
                                                  }
                                                  __asan_handle_no_return(3435973837LL);
                                                  boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                                    1u,
                                                    v45,
                                                    max_violation);
                                                }
                                                __asan_handle_no_return(3435973837LL);
                                                boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                                  1u,
                                                  0,
                                                  min_violation);
                                              }
                                              __asan_handle_no_return(3435973837LL);
                                              boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                                0x578u,
                                                v47,
                                                max_violation);
                                            }
                                            __asan_handle_no_return(3435973837LL);
                                            boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                              0x578u,
                                              v47,
                                              min_violation);
                                          }
                                          __asan_handle_no_return(3435973837LL);
                                          boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                            1u,
                                            v62,
                                            max_violation);
                                        }
                                        __asan_handle_no_return(3435973837LL);
                                        boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                                          1u,
                                          0,
                                          min_violation);
                                      }
                                      __asan_handle_no_return(3435973837LL);
                                      boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                        1u,
                                        v36,
                                        max_violation);
                                    }
                                    __asan_handle_no_return(3435973837LL);
                                    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                                      1u,
                                      0,
                                      min_violation);
                                  }
                                  __asan_handle_no_return(3435973837LL);
                                  boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                    0x578u,
                                    v38,
                                    max_violation);
                                }
                                __asan_handle_no_return(3435973837LL);
                                boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                                  0x578u,
                                  v38,
                                  min_violation);
                              }
                              v59 = (char *)(v2 + 160);
                              *(_QWORD *)(v2 + 160) = v2 + 176;
                              std::string::_M_construct<char const*>(
                                (std::string *const)(v2 + 160),
                                &byte_19ECD214[-20],
                                byte_19ECD214,
                                (std::forward_iterator_tag)v23);
                              if ( v28 == -2 )
                              {
                                if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v2 + 168)) <= 0x14 )
                                {
                                  __asan_handle_no_return(v59);
                                  std::__throw_length_error("basic_string::append");
                                }
                                std::string::_M_append(v2 + 160, "not-a-date-time value", 21LL);
                              }
                              else if ( v28 )
                              {
                                if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v2 + 168)) <= 0x13 )
                                {
                                  __asan_handle_no_return(v59);
                                  std::__throw_length_error("basic_string::append");
                                }
                                std::string::_M_append(v2 + 160, "+infinity date value", 20LL);
                              }
                              else
                              {
                                if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v2 + 168)) <= 0x13 )
                                {
                                  __asan_handle_no_return(v59);
                                  std::__throw_length_error("basic_string::append");
                                }
                                std::string::_M_append(v2 + 160, "-infinity date value", 20LL);
                              }
                              std::out_of_range::out_of_range(&e, v2 + 160);
                              exception = (boost::wrapexcept<std::out_of_range> *)__cxa_allocate_exception(0x40uLL);
                              if ( *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::out_of_range>
                                              + 63) >> 3)
                                            + 0x7FFF8000) != 0
                                && *(_BYTE *)((((unsigned __int64)&exception->boost::exception_detail::error_info_injector<std::out_of_range>
                                              + 63) >> 3)
                                            + 0x7FFF8000) <= (((unsigned __int8)exception + 63) & 7)
                                || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
                              {
                                __asan_report_store_n(exception, 64LL);
                              }
                              boost::exception_detail::enable_both<std::out_of_range>(
                                exception,
                                (const std::out_of_range *)&e);
                              __asan_handle_no_return(exception);
                              _cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'boost::wrapexcept<std::out_of_range>,
                                (void (__fastcall *)(void *))boost::wrapexcept<std::out_of_range>::~wrapexcept);
                            }
                            *(_QWORD *)(v2 + 160) = v2 + 176;
                            std::string::_M_construct<char const*>(
                              (std::string *const)(v2 + 160),
                              &byte_19ECD1C2[-34],
                              byte_19ECD1C2,
                              (std::forward_iterator_tag)v23);
                            std::out_of_range::out_of_range(&e, v2 + 160);
                            *(_QWORD *)e.baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
                            __asan_handle_no_return(&e);
                            boost::throw_exception<boost::gregorian::bad_day_of_month>(&e);
                          }
                          __asan_handle_no_return(v4);
                          boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                            1u,
                            v20,
                            max_violation);
                        }
                        __asan_handle_no_return(v4);
                        boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
                          1u,
                          0,
                          min_violation);
                      }
                      __asan_handle_no_return(v4);
                      boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                        1u,
                        v18,
                        max_violation);
                    }
                    __asan_handle_no_return(v4);
                    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
                      1u,
                      0,
                      min_violation);
                  }
                  __asan_handle_no_return(v4);
                  boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                    0x578u,
                    v21,
                    max_violation);
                }
                __asan_handle_no_return(v4);
                boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
                  0x578u,
                  v21,
                  min_violation);
              }
              *(_QWORD *)(v2 + 160) = v2 + 176;
              std::string::_M_construct<char const*>(
                (std::string *const)(v2 + 160),
                &byte_19ECD1C2[-34],
                byte_19ECD1C2,
                (std::forward_iterator_tag)v5);
              std::out_of_range::out_of_range(&e, v2 + 160);
              *(_QWORD *)e.baseclass_0 = &`vtable for'boost::gregorian::bad_day_of_month + 2;
              __asan_handle_no_return(&e);
              boost::throw_exception<boost::gregorian::bad_day_of_month>(&e);
            }
            __asan_handle_no_return(v4);
            boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
              0x578u,
              v7,
              max_violation);
          }
          __asan_handle_no_return(v4);
          boost::CV::simple_exception_policy<unsigned short,(unsigned short)1400,(unsigned short)9999,boost::gregorian::bad_year>::on_error(
            0x578u,
            v7,
            min_violation);
        }
        __asan_handle_no_return(v4);
        boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
          1u,
          v6,
          max_violation);
      }
      __asan_handle_no_return(v4);
      boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)12,boost::gregorian::bad_month>::on_error(
        1u,
        0,
        min_violation);
    }
    __asan_handle_no_return(v4);
    boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
      1u,
      v5,
      max_violation);
  }
  __asan_handle_no_return(v4);
  boost::CV::simple_exception_policy<unsigned short,(unsigned short)1,(unsigned short)31,boost::gregorian::bad_day_of_month>::on_error(
    1u,
    0,
    min_violation);
  return result;
};

// Line 387: range 000000000CA0A970-000000000CA0A9B6
bool __fastcall common::tools::TimeUtils::isMonthDayValid(uint32_t month, uint32_t day)
{
  bool result; // al

  if ( month - 1 > 0xB )
    return 0;
  if ( day - 1 > 0x1E )
    return 0;
  switch ( month )
  {
    case 1u:
    case 3u:
    case 5u:
    case 7u:
    case 8u:
    case 0xAu:
    case 0xCu:
      result = 1;
      break;
    case 2u:
      result = day <= 0x1D;
      break;
    default:
      result = day <= 0x1E;
      break;
  }
  return result;
};

// Line 410: range 000000000CA0A9B8-000000000CA0AA12
bool __fastcall common::tools::TimeUtils::isTimeLeapYear(time_t stamp)
{
  unsigned int v1; // eax

  v1 = common::tools::TimeUtils::getTimeYear(stamp) + 1970;
  if ( (v1 & 3) != 0 )
    return 0;
  if ( v1 == 100 * (v1 / 0x64) )
    return v1 == 400 * (v1 / 0x190);
  return 1;
};

// Line 436: range 000000000CA0AA14-000000000CA0AA3C
int32_t __cdecl common::tools::TimeUtils::getCurTimeZone()
{
  return common::tools::TimeUtils::gmtoff / 3600;
};

// Line 442: range 000000000CA0AA3E-000000000CA0AA48
time_t __cdecl common::tools::TimeUtils::getGmtOffset()
{
  return common::tools::TimeUtils::gmtoff;
};

// Line 446: range 000000000CA0B25C-000000000CA0BBDA
bool __fastcall common::tools::TimeUtils::parseTimeStr(const std::string *time_str, tm *tm)
{
  unsigned __int64 v2; // rbx
  std::string::size_type *p_M_string_length; // rdi
  common::milog::MilogStringStream *ostr; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // dl
  char v12; // dl
  bool v13; // r12
  char *cur; // rdi
  size_t v15; // rbx
  int v17; // r13d
  const char *v18; // rax
  int v19; // eax
  int v20; // r14d
  const char *v21; // rax
  int v22; // eax
  int v23; // r15d
  const char *v24; // rax
  int v25; // eax
  const char *v26; // rax
  int v27; // eax
  const char *v28; // rax
  unsigned int v29; // eax
  int v30; // ecx
  int v31; // r13d
  int *p_tm_year; // rdi
  char v33; // dl
  int v34; // r14d
  char v35; // al
  char v36; // dl
  char v37; // al
  char v38; // dl
  char v39; // al
  int v40; // eax
  unsigned int hour; // [rsp+8h] [rbp-170h]
  unsigned int min; // [rsp+Ch] [rbp-16Ch]
  boost::iterator_range<char const*> arg; // [rsp+10h] [rbp-168h] BYREF
  common::milog::MiLogStream v44; // [rsp+20h] [rbp-158h] BYREF
  common::milog::MiLogStream v45; // [rsp+40h] [rbp-138h] BYREF
  common::milog::MiLogStream v46; // [rsp+60h] [rbp-118h] BYREF
  common::milog::MiLogStream v47; // [rsp+80h] [rbp-F8h] BYREF
  common::milog::MiLogStream v48; // [rsp+A0h] [rbp-D8h] BYREF
  common::milog::MiLogStream v49; // [rsp+C0h] [rbp-B8h] BYREF
  common::milog::MiLogStream v50; // [rsp+E0h] [rbp-98h] BYREF
  common::milog::MiLogStream v51; // [rsp+100h] [rbp-78h] BYREF
  common::milog::MiLogStream v52; // [rsp+120h] [rbp-58h] BYREF

  v2 = (unsigned __int64)time_str;
  p_M_string_length = &time_str->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)p_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
  }
  else if ( *(_QWORD *)(v2 + 8) && (unsigned int)std::string::compare(v2, &unk_19ECC8E0) )
  {
    ostr = (common::milog::MilogStringStream *)(v2 + 8);
    if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)(v2 + 8) != 19LL )
        return 0;
      if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      {
        v6 = *(_QWORD *)v2;
        v7 = *(_QWORD *)v2 + 4LL;
        v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
        if ( v8 > ((*(_BYTE *)v2 + 4) & 7) || !v8 )
        {
          if ( *(_BYTE *)(v6 + 4) != 45 )
            return 0;
          v7 = v6 + 7;
          v9 = *(_BYTE *)(((unsigned __int64)(v6 + 7) >> 3) + 0x7FFF8000);
          if ( v9 > ((v6 + 7) & 7) || !v9 )
          {
            if ( *(_BYTE *)(v6 + 7) != 45 )
              return 0;
            v7 = v6 + 10;
            v10 = *(_BYTE *)(((unsigned __int64)(v6 + 10) >> 3) + 0x7FFF8000);
            if ( v10 > ((v6 + 10) & 7) || !v10 )
            {
              if ( *(_BYTE *)(v6 + 10) != 32 )
                return 0;
              v7 = v6 + 13;
              v11 = *(_BYTE *)(((unsigned __int64)(v6 + 13) >> 3) + 0x7FFF8000);
              if ( v11 > ((v6 + 13) & 7) || !v11 )
              {
                if ( *(_BYTE *)(v6 + 13) != 58 )
                  return 0;
                v7 = v6 + 16;
                v12 = *(_BYTE *)(((unsigned __int64)(v6 + 16) >> 3) + 0x7FFF8000);
                if ( v12 > ((v6 + 16) & 7) || !v12 )
                {
                  if ( *(_BYTE *)(v6 + 16) != 58 )
                    return 0;
LABEL_39:
                  arg.m_Begin = (const char *)v6;
                  arg.m_End = (const char *)(v6 + 4);
                  v17 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    v19 = __asan_report_load8(v2);
                  }
                  else
                  {
                    v18 = (const char *)(*(_QWORD *)v2 + 7LL);
                    arg.m_Begin = (const char *)(*(_QWORD *)v2 + 5LL);
                    arg.m_End = v18;
                    v19 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  }
                  v20 = v19;
                  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    v22 = __asan_report_load8(v2);
                  }
                  else
                  {
                    v21 = (const char *)(*(_QWORD *)v2 + 10LL);
                    arg.m_Begin = (const char *)(*(_QWORD *)v2 + 8LL);
                    arg.m_End = v21;
                    v22 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  }
                  v23 = v22;
                  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    v25 = __asan_report_load8(v2);
                  }
                  else
                  {
                    v24 = (const char *)(*(_QWORD *)v2 + 13LL);
                    arg.m_Begin = (const char *)(*(_QWORD *)v2 + 11LL);
                    arg.m_End = v24;
                    v25 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  }
                  hour = v25;
                  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    v27 = __asan_report_load8(v2);
                  }
                  else
                  {
                    v26 = (const char *)(*(_QWORD *)v2 + 16LL);
                    arg.m_Begin = (const char *)(*(_QWORD *)v2 + 14LL);
                    arg.m_End = v26;
                    v27 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  }
                  min = v27;
                  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    v29 = __asan_report_load8(v2);
                  }
                  else
                  {
                    v28 = (const char *)(*(_QWORD *)v2 + 19LL);
                    arg.m_Begin = (const char *)(*(_QWORD *)v2 + 17LL);
                    arg.m_End = v28;
                    v29 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
                  }
                  v30 = v29;
                  if ( hour > 0x17 )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v44,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      471);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v44.ostr_,
                      "time_str hour out of range: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v44.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v44);
                    return 0;
                  }
                  if ( min > 0x3B )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v45,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      476);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v45.ostr_,
                      "time_str min out of range: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v45.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v45);
                    return 0;
                  }
                  if ( v29 > 0x3B )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v46,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      481);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v46.ostr_,
                      "time_str sec out of range: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v46.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v46);
                    return 0;
                  }
                  if ( v17 <= 0 )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v47,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      486);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v47.ostr_,
                      "time_str year invalid: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v47.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v47);
                    return 0;
                  }
                  if ( v23 <= 0 )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v48,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      491);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v48.ostr_,
                      "time_str day invalid: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v48.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v48);
                    return 0;
                  }
                  if ( (unsigned int)(v20 - 1) > 0xB )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v49,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      496);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v49.ostr_,
                      "time_str month invalid: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v49.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v49);
                    return 0;
                  }
                  if ( v20 == 2 )
                  {
                    if ( v17 % 100 && (v17 & 3) == 0 )
                    {
                      v40 = 29;
                    }
                    else if ( v17 % 400 )
                    {
                      v40 = 28;
                    }
                    else
                    {
                      v40 = 29;
                    }
                    if ( v40 < v23 )
                    {
                      common::milog::MiLogStream::MiLogStream(
                        &v50,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "src/time_utils.cpp",
                        "parseTimeStr",
                        508);
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                        v50.ostr_,
                        "time_str leap year day invalid: ");
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                        v50.ostr_,
                        (const std::string *)v2);
                      common::milog::MiLogStream::~MiLogStream(&v50);
                      return 0;
                    }
                  }
                  else if ( v20 == 4 || v20 == 9 || (v13 = v20 == 11 || v20 == 6) )
                  {
                    if ( v23 > 30 )
                    {
                      common::milog::MiLogStream::MiLogStream(
                        &v51,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "src/time_utils.cpp",
                        "parseTimeStr",
                        516);
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                        v51.ostr_,
                        "time_str day invalid: ");
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                        v51.ostr_,
                        (const std::string *)v2);
                      common::milog::MiLogStream::~MiLogStream(&v51);
                      return 0;
                    }
                  }
                  else if ( v23 > 31 )
                  {
                    common::milog::MiLogStream::MiLogStream(
                      &v52,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "src/time_utils.cpp",
                      "parseTimeStr",
                      524);
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v52.ostr_,
                      "time_str day invalid: ");
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                      v52.ostr_,
                      (const std::string *)v2);
                    common::milog::MiLogStream::~MiLogStream(&v52);
                    return v13;
                  }
                  v31 = v17 - 1900;
                  p_tm_year = &tm->tm_year;
                  v33 = *(_BYTE *)(((unsigned __int64)&tm->tm_year >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)tm + 20) & 7) + 3) >= v33 && v33 )
                  {
                    __asan_report_store4(p_tm_year);
                  }
                  else
                  {
                    tm->tm_year = v31;
                    v34 = v20 - 1;
                    p_tm_year = &tm->tm_mon;
                    v35 = *(_BYTE *)(((unsigned __int64)&tm->tm_mon >> 3) + 0x7FFF8000);
                    if ( !v35 || v35 > 3 )
                    {
                      tm->tm_mon = v34;
                      p_tm_year = &tm->tm_mday;
                      v36 = *(_BYTE *)(((unsigned __int64)&tm->tm_mday >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)tm + 12) & 7) + 3) < v36 || !v36 )
                      {
                        tm->tm_mday = v23;
                        p_tm_year = &tm->tm_hour;
                        v37 = *(_BYTE *)(((unsigned __int64)&tm->tm_hour >> 3) + 0x7FFF8000);
                        if ( !v37 || v37 > 3 )
                        {
                          tm->tm_hour = hour;
                          p_tm_year = &tm->tm_min;
                          v38 = *(_BYTE *)(((unsigned __int64)&tm->tm_min >> 3) + 0x7FFF8000);
                          if ( (char)((((_BYTE)tm + 4) & 7) + 3) < v38 || !v38 )
                          {
                            tm->tm_min = min;
                            v39 = *(_BYTE *)(((unsigned __int64)tm >> 3) + 0x7FFF8000);
                            if ( !v39 || v39 > 3 )
                            {
                              tm->tm_sec = v30;
                              return 1;
                            }
                            goto LABEL_99;
                          }
LABEL_98:
                          __asan_report_store4(p_tm_year);
LABEL_99:
                          __asan_report_store4(tm);
                          return 0;
                        }
LABEL_97:
                        __asan_report_store4(p_tm_year);
                        goto LABEL_98;
                      }
LABEL_96:
                      __asan_report_store4(p_tm_year);
                      goto LABEL_97;
                    }
                  }
                  __asan_report_store4(p_tm_year);
                  goto LABEL_96;
                }
LABEL_38:
                v6 = __asan_report_load1(v7);
                goto LABEL_39;
              }
LABEL_37:
              __asan_report_load1(v7);
              goto LABEL_38;
            }
LABEL_36:
            __asan_report_load1(v7);
            goto LABEL_37;
          }
LABEL_35:
          __asan_report_load1(v7);
          goto LABEL_36;
        }
LABEL_34:
        __asan_report_load1(v7);
        goto LABEL_35;
      }
LABEL_33:
      v7 = v2;
      __asan_report_load8(v2);
      goto LABEL_34;
    }
LABEL_32:
    __asan_report_load8(ostr);
    goto LABEL_33;
  }
  common::milog::MiLogStream::MiLogStream(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/time_utils.cpp",
    "parseTimeStr",
    449);
  tm = (tm *)v52.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v52.ostr_ >> 3) + 0x7FFF8000) )
  {
    ostr = v52.ostr_;
    __asan_report_load8(v52.ostr_);
    goto LABEL_31;
  }
  v2 = (unsigned __int64)(v52.ostr_->buffer_.data_ + 0x4000);
  ostr = (common::milog::MilogStringStream *)&v52.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v52.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(ostr);
    goto LABEL_32;
  }
  cur = v52.ostr_->buffer_.cur_;
  v15 = (int)v2 - (int)cur;
  if ( v15 > 0x1A )
    v15 = 27LL;
  memcpy(cur, "time_str invalid, empty str", v15);
  *(_QWORD *)&tm->tm_hour += v15;
  common::milog::MiLogStream::~MiLogStream(&v52);
  return 0;
};

// Line 545: range 000000000CA0BBE0-000000000CA0BCB2
bool __fastcall common::tools::TimeUtils::isTimeStrValid(const std::string *time_str)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  bool result; // al
  __int64 v4; // rax
  _BYTE v5[168]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 6 tm:546";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::isTimeStrValid;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -218103808;
  v2[536862723] = -202116109;
  result = common::tools::TimeUtils::parseTimeStr(time_str, (tm *)(v1 + 32));
  if ( v5 == (_BYTE *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 555: range 000000000CA0C67E-000000000CA0C817
bool __fastcall common::tools::TimeUtils::isDayStrValid(const std::string *day_str)
{
  std::forward_iterator_tag v1; // cl
  const std::string *v2; // r12
  unsigned __int64 v3; // r13
  bool isTimeStrValid; // r12
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  std::string _20[2]; // [rsp+20h] [rbp+20h] BYREF

  v2 = day_str;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_1(96LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 32 12 time_str:556";
  vars0[2] = (__int64)common::tools::TimeUtils::isDayStrValid;
  v3 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  vars0[4] = (__int64)&_20[0]._anon_0._M_allocated_capacity;
  if ( *(_BYTE *)(((unsigned __int64)day_str >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(day_str);
    goto LABEL_8;
  }
  day_str = (const std::string *)((char *)day_str + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(day_str);
LABEL_9:
    __asan_handle_no_return(day_str);
    std::__throw_length_error("basic_string::append");
  }
  day_str = _20;
  std::string::_M_construct<char *>(_20, v2->_M_dataplus._M_p, &v2->_M_dataplus._M_p[v2->_M_string_length], v1);
  if ( 0x3FFFFFFFFFFFFFFFLL - _20[0]._M_string_length <= 8 )
    goto LABEL_9;
  std::string::_M_append(_20, " 00:00:00", 9LL);
  isTimeStrValid = common::tools::TimeUtils::isTimeStrValid(_20);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)_20[0]._M_dataplus._M_p != &_20[0]._anon_0 )
    operator delete(_20[0]._M_dataplus._M_p);
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0;
  return isTimeStrValid;
};

// Line 563: range 000000000CA0C81A-000000000CA0CCB8
int32_t __fastcall common::tools::TimeUtils::getAgeByTimeStr(const std::string *time_str)
{
  const std::string *v1; // rbx
  unsigned __int64 v2; // r12
  common::milog::MilogStringStream *v3; // rbp
  unsigned __int64 v4; // r14
  const char *v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  int32_t v8; // r13d
  common::milog::MilogStringStream *ostr; // r13
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v12; // rbp
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rsi
  char **p_data; // rdi
  char *v16; // rdi
  size_t v17; // rbx
  const char *v18; // rax
  int v19; // eax
  const char *v20; // rax
  int v21; // eax
  int v22; // r13d
  char *data; // rax
  char *v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  char *v28; // rdi
  int v30; // [rsp+0h] [rbp-D8h]
  int32_t month; // [rsp+4h] [rbp-D4h]
  int32_t day; // [rsp+8h] [rbp-D0h]
  int now_month; // [rsp+Ch] [rbp-CCh]
  boost::iterator_range<char const*> arg; // [rsp+10h] [rbp-C8h] BYREF
  common::milog::MiLogStream v35; // [rsp+20h] [rbp-B8h] BYREF
  char v36[152]; // [rsp+40h] [rbp-98h] BYREF

  v1 = time_str;
  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v2 = v7;
  }
  v3 = (common::milog::MilogStringStream *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 now_str:577";
  *(_QWORD *)(v2 + 16) = common::tools::TimeUtils::getAgeByTimeStr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&time_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&time_str->_M_string_length);
LABEL_11:
    v8 = -1;
    goto LABEL_45;
  }
  if ( !time_str->_M_string_length || !(unsigned int)std::string::compare(time_str, &unk_19ECC8E0) )
    goto LABEL_11;
  if ( common::tools::TimeUtils::isDayStrValid(time_str) )
  {
    common::tools::TimeUtils::getNowStr[abi:cxx11]((std::string *)(v2 + 32));
    if ( !*(_BYTE *)(((unsigned __int64)time_str >> 3) + 0x7FFF8000) )
    {
      v5 = time_str->_M_dataplus._M_p + 4;
      arg.m_Begin = time_str->_M_dataplus._M_p;
      arg.m_End = v5;
      v6 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
LABEL_30:
      v30 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      {
        v19 = __asan_report_load8(v1);
      }
      else
      {
        v18 = v1->_M_dataplus._M_p + 7;
        arg.m_Begin = v1->_M_dataplus._M_p + 5;
        arg.m_End = v18;
        v19 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
      }
      month = v19;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      {
        v21 = __asan_report_load8(v1);
      }
      else
      {
        v20 = v1->_M_dataplus._M_p + 10;
        arg.m_Begin = v1->_M_dataplus._M_p + 8;
        arg.m_End = v20;
        v21 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
      }
      day = v21;
      arg.m_Begin = v3[-4].buffer_.data_;
      arg.m_End = arg.m_Begin + 4;
      v22 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
      data = v3[-4].buffer_.data_;
      arg.m_Begin = data + 5;
      arg.m_End = data + 7;
      now_month = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
      v24 = v3[-4].buffer_.data_;
      arg.m_Begin = v24 + 8;
      arg.m_End = v24 + 10;
      v25 = boost::lexical_cast<int,boost::iterator_range<char const*>>(&arg);
      v8 = v22 - v30;
      v26 = now_month - month;
      v27 = v25 - day;
      if ( v8 <= 0 )
      {
        v8 = 0;
      }
      else if ( v26 <= 0 )
      {
        if ( v26 < 0 )
        {
          --v8;
        }
        else if ( v27 < 0 )
        {
          --v8;
        }
      }
      v28 = v3[-4].buffer_.data_;
      if ( v28 != (char *)&v3[-3] )
        operator delete(v28);
      goto LABEL_45;
    }
LABEL_29:
    v6 = __asan_report_load8(v1);
    goto LABEL_30;
  }
  common::milog::MiLogStream::MiLogStream(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/time_utils.cpp",
    "getAgeByTimeStr",
    573);
  ostr = v35.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v35.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v35.ostr_;
    __asan_report_load8(v35.ostr_);
    goto LABEL_24;
  }
  v3 = (common::milog::MilogStringStream *)(v35.ostr_->buffer_.data_ + 0x4000);
  p_cur = (common::milog::MilogStringStream *)&v35.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v35.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_cur);
LABEL_25:
    __asan_report_load8(p_cur);
    goto LABEL_26;
  }
  cur = v35.ostr_->buffer_.cur_;
  v12 = (int)v3 - (int)cur;
  if ( v12 > 0x11 )
    v12 = 18LL;
  memcpy(cur, "invalid time_str: ", v12);
  ostr->buffer_.cur_ += v12;
  v3 = v35.ostr_;
  p_cur = (common::milog::MilogStringStream *)&v1->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v1->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_25;
  M_string_length = v1->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(v1);
    goto LABEL_27;
  }
  M_p = v1->_M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)v35.ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    p_data = &v3->buffer_.data_;
    __asan_report_load8(v3);
    goto LABEL_28;
  }
  v1 = (const std::string *)(v35.ostr_->buffer_.data_ + 0x4000);
  p_data = &v35.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v35.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_data);
    goto LABEL_29;
  }
  v16 = v35.ostr_->buffer_.cur_;
  v17 = (int)v1 - (int)v16;
  if ( M_string_length <= v17 )
    v17 = M_string_length;
  memcpy(v16, M_p, v17);
  v3->buffer_.cur_ += v17;
  common::milog::MiLogStream::~MiLogStream(&v35);
  v8 = -1;
LABEL_45:
  if ( v36 == (char *)v2 )
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
  return v8;
};

// Line 626: range 000000000CA0BCB4-000000000CA0BD98
time_t __fastcall common::tools::TimeUtils::getUTCTimeByStr(const std::string *time_str)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rbp
  time_t result; // rax
  __int64 v4; // rax
  _BYTE v5[168]; // [rsp+0h] [rbp-A8h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 6 tm:627";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::getUTCTimeByStr;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -218103808;
  v2[536862723] = -202116109;
  if ( common::tools::TimeUtils::parseTimeStr(time_str, (tm *)(v1 + 32)) )
    result = timegm((struct tm *)(v1 + 32));
  else
    result = 0LL;
  if ( v5 == (_BYTE *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 638: range 000000000CA0AA64-000000000CA0AA71
void __fastcall common::tools::TimeUtils::Timer::Timer(common::tools::TimeUtils::Timer *const this)
{
  common::tools::TimeUtils::Timer::reset(this);
};

// Line 644: range 000000000CA0AA4A-000000000CA0AA63
void __fastcall common::tools::TimeUtils::Timer::~Timer(common::tools::TimeUtils::Timer *const this)
{
  ;
};

// Line 655: range 000000000CA0AA72-000000000CA0ABA3
int __fastcall common::tools::TimeUtils::Timer::time(const common::tools::TimeUtils::Timer *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __time_t v3; // rax
  int result; // eax
  __suseconds_t v5; // rdx
  __suseconds_t tv_usec; // rcx
  __int64 v7; // rax
  _BYTE v8[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v1 = v7;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 stop_tv:656";
  *(_QWORD *)(v1 + 16) = common::tools::TimeUtils::Timer::time;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  gettimeofday((struct timeval *)(v1 + 32), 0LL);
  v3 = *(_QWORD *)(v1 + 32);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
  }
  else if ( v3 > this->start_tv_.tv_sec )
  {
    result = 1000000 * (v3 - this->start_tv_.tv_sec);
    goto LABEL_5;
  }
  result = 0;
LABEL_5:
  v5 = *(_QWORD *)(v1 + 40);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_tv_.tv_usec >> 3) + 0x7FFF8000) )
  {
    result = __asan_report_load8(&this->start_tv_.tv_usec);
  }
  else
  {
    tv_usec = this->start_tv_.tv_usec;
    if ( v5 >= tv_usec )
    {
      result += v5 - tv_usec;
      goto LABEL_8;
    }
  }
  if ( result > 999999 )
    result += v5 - tv_usec;
LABEL_8:
  if ( v8 == (_BYTE *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 690: range 000000000CA0E202-000000000CA0E219
void __cdecl GLOBAL__sub_I_time_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 690: range 000000000CA09E41-000000000CA09EE4
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/time_utils.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      common::tools::TimeUtils::init();
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
          JUMPOUT(0xCA09ED9LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
