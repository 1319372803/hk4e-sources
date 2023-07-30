// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/time.cc

// Line 51: range 000000000C96F730-000000000C96F750
bool __fastcall google::protobuf::internal::`anonymous namespace'::IsLeapYear(int year)
{
  bool result; // al

  result = 0;
  if ( (year & 3) == 0 )
    return __ROR4__(-1030792151 * year + 85899344, 2) > 0x28F5C28u;
  return result;
};

// Line 147: range 000000000C96F760-000000000C96F7AD
const char *__fastcall google::protobuf::internal::`anonymous namespace'::ParseInt(
        const char *data,
        int width,
        int min_value,
        int max_value,
        int *result)
{
  __int64 v5; // rax
  int v6; // esi
  const char *v7; // r10
  int v8; // r9d

  v5 = (unsigned int)(width - 1);
  v6 = 0;
  v7 = &data[v5 + 1];
  while ( 1 )
  {
    v8 = *data;
    if ( (unsigned __int8)(*data - 48) > 9u )
      break;
    ++data;
    v6 = v8 + 10 * v6 - 48;
    if ( v7 == data )
    {
      if ( v6 < min_value )
        return 0LL;
      goto LABEL_5;
    }
  }
  v7 = data;
  if ( v6 < min_value )
    return 0LL;
LABEL_5:
  if ( v6 <= max_value )
  {
    *result = v6;
    return v7;
  }
  return 0LL;
};

// Line 211: range 000000000C96F840-000000000C96FA90
bool __fastcall google::protobuf::internal::SecondsToDateTime(
        google::protobuf::int64 seconds,
        google::protobuf::internal::DateTime *time)
{
  unsigned int v2; // ecx
  google::protobuf::int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rdx
  signed __int64 v10; // rax
  int v11; // edx
  bool IsLeapYear; // al
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // rdi
  __int64 v16; // r8
  bool result; // al

  v2 = 1;
  v3 = seconds + 0xE7791F700LL;
  if ( seconds + 0xE7791F700LL > 0x2F060597FLL )
  {
    v2 = 400 * (v3 / 0x2F0605980LL) + 1;
    v3 %= 0x2F0605980LL;
  }
  while ( 1 )
  {
    v5 = v2;
    if ( v2 % 0x190 && (int)(v2 % 0x190) <= 300 )
      v4 = 3155673600LL;
    else
      v4 = 3155760000LL;
    if ( v3 < v4 )
      break;
    v3 -= v4;
    v2 += 100;
  }
  while ( 1 )
  {
    v8 = 100 * ((unsigned int)v5 / 0x64);
    if ( v2 != v8 && (int)(v2 - v8) <= 96 )
      break;
    v6 = 400 * ((unsigned int)v5 / 0x190);
    if ( v2 == v6 || (int)(v2 - v6) > 396 )
      break;
    if ( v3 <= 126143999 )
      goto LABEL_20;
    v7 = 126144000LL;
LABEL_14:
    v3 -= v7;
    v5 = v2 + 4;
    v2 += 4;
  }
  if ( v3 > 126230399 )
  {
    v7 = 126230400LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_20:
    v9 = 1374389535 * v5;
    v10 = 31622400LL;
    v11 = v2 - 400 * (v9 >> 39);
    if ( v11 )
      v10 = (-(__int64)!google::protobuf::internal::`anonymous namespace'::IsLeapYear(v2) & 0xFFFFFFFFFFFEAE80LL)
          + 31622400;
    if ( v3 < v10 )
      break;
    v3 -= v10;
    v5 = ++v2;
  }
  IsLeapYear = 1;
  if ( v11 )
    IsLeapYear = google::protobuf::internal::`anonymous namespace'::IsLeapYear(v2);
  v13 = 1LL;
  while ( 1 )
  {
    v14 = v13;
    if ( (_DWORD)v13 != 2 || (v15 = 2505600LL, !IsLeapYear) )
      v15 = 86400LL * google::protobuf::internal::`anonymous namespace'::kDaysInMonth[v13];
    ++v13;
    if ( v3 < v15 )
      break;
    v3 -= v15;
  }
  time->year = v2;
  time->month = v14;
  time->day = (int)v3 / 86400 + 1;
  v16 = v3 % 86400;
  time->hour = (int)v16 / 3600;
  time->minute = v16 % 3600 / 60;
  result = 1;
  time->second = v16 % 3600 % 60;
  return result;
};

// Line 212: range 000000000C96FAA0-000000000C96FACA
bool __fastcall google::protobuf::internal::SecondsToDateTime(
        google::protobuf::int64 seconds,
        google::protobuf::internal::DateTime *time)
{
  return (unsigned __int64)(seconds + 0xE7791F700LL) <= 0x497786387FLL
      && google::protobuf::internal::SecondsToDateTime(seconds, time);
};

// Line 256: range 000000000C96FAD0-000000000C96FD33
bool __fastcall google::protobuf::internal::DateTimeToSeconds(
        const google::protobuf::internal::DateTime *time,
        google::protobuf::int64 *seconds)
{
  int year; // r8d
  int v3; // eax
  int month; // ebp
  bool result; // al
  int v6; // r9d
  __int64 hour; // r10
  __int64 minute; // r11
  __int64 second; // rbx
  __int64 v10; // r12
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdx

  year = time->year;
  v3 = time->year - 1;
  if ( (unsigned int)v3 > 0x270E )
    return 0;
  month = time->month;
  if ( (unsigned int)(month - 1) > 0xB )
    return 0;
  v6 = time->day - 1;
  if ( (unsigned int)v6 > 0x1E )
    return 0;
  hour = time->hour;
  if ( (unsigned int)hour > 0x17 )
    return 0;
  minute = time->minute;
  if ( (unsigned int)minute > 0x3B )
    return 0;
  second = time->second;
  if ( (unsigned int)second > 0x3B )
    return 0;
  v10 = 2LL;
  if ( month != 2 )
  {
    v10 = month;
    if ( month > google::protobuf::internal::`anonymous namespace'::kDaysInMonth[month] )
      return 0;
  }
  if ( year <= 400 )
  {
    v13 = 1;
    v12 = 0LL;
  }
  else
  {
    v11 = (year - 1) / 0x190u;
    v12 = 0x2F0605980LL * v11;
    v13 = 400 * v11 + 1;
    v3 = year - v13;
  }
  if ( v3 > 99 )
  {
    do
    {
      if ( v13 % 0x190 && (int)(v13 % 0x190) <= 300 )
        v14 = 3155673600LL;
      else
        v14 = 3155760000LL;
      v12 += v14;
      v13 += 100;
      v3 = year - v13;
    }
    while ( (int)(year - v13) > 99 );
  }
  while ( v3 > 3 )
  {
    if ( !(v13 % 0x64) || (v15 = 126230400LL, (int)(v13 % 0x64) > 96) )
    {
      if ( v13 == 400 * (v13 / 0x190) )
      {
        v15 = 126230400LL;
      }
      else
      {
        v15 = 126144000LL;
        if ( (int)(v13 % 0x190) > 396 )
          v15 = 126230400LL;
      }
    }
    v13 += 4;
    v12 += v15;
    v3 = year - v13;
  }
  if ( year <= (int)v13 )
  {
    year = v13;
  }
  else
  {
    do
    {
      v16 = 31622400LL;
      if ( __ROR4__(-1030792151 * v13, 4) > 0xA3D70Au )
        v16 = (-(__int64)!google::protobuf::internal::`anonymous namespace'::IsLeapYear(v13) & 0xFFFFFFFFFFFEAE80LL)
            + 31622400;
      ++v13;
      v12 += v16;
    }
    while ( year != v13 );
  }
  v17 = v12 + 86400LL * google::protobuf::internal::`anonymous namespace'::kDaysSinceJan[v10];
  if ( month > 2
    && (__ROR4__(-1030792151 * year, 4) <= 0xA3D70Au
     || google::protobuf::internal::`anonymous namespace'::IsLeapYear(year)) )
  {
    v17 += 86400LL;
  }
  result = 1;
  *seconds = 86400LL * v6 + v17 + second + 3600 * hour + 60 * minute - 0xE7791F700LL;
  return result;
};

// Line 264: range 000000000C96FD40-000000000C96FD63
void __fastcall google::protobuf::internal::GetCurrentTime(
        google::protobuf::int64 *seconds,
        google::protobuf::int32 *nanos)
{
  *seconds = time(0LL);
  *nanos = 0;
};

// Line 271: range 000000000C96FD70-000000000C9700A3
char *__fastcall google::protobuf::internal::FormatTime[abi:cxx11](
        char *a1,
        google::protobuf::int64 a2,
        unsigned int a3)
{
  __int64 v6; // rax
  const char *v7; // rsi
  std::string::pointer M_p; // rbp
  unsigned __int64 M_string_length; // r13
  __int64 *v10; // rax
  __int64 v11; // rax
  void *v12; // rdi
  google::protobuf::internal::DateTime v13; // [rsp+0h] [rbp-A8h] BYREF
  std::string src; // [rsp+20h] [rbp-88h] BYREF
  std::string dst; // [rsp+40h] [rbp-68h] BYREF
  void *v16; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]
  __int128 v18[3]; // [rsp+70h] [rbp-38h] BYREF

  if ( a3 > 0x3B9AC9FF
    || (unsigned __int64)(a2 + 0xE7791F700LL) > 0x497786387FLL
    || !google::protobuf::internal::SecondsToDateTime(a2, &v13) )
  {
    *(_QWORD *)a1 = a1 + 16;
    strcpy(a1 + 16, "InvalidTime");
    *((_QWORD *)a1 + 1) = 11LL;
    return a1;
  }
  google::protobuf::StringPrintf[abi:cxx11](
    &src,
    "%04d-%02d-%02dT%02d:%02d:%02d",
    (unsigned int)v13.year,
    (unsigned int)v13.month,
    (unsigned int)v13.day,
    (unsigned int)v13.hour,
    (unsigned int)v13.minute,
    (unsigned int)v13.second);
  if ( a3 )
  {
    if ( __ROR4__(1757569337 * a3 + 137408, 6) <= 0x10C6u )
    {
      google::protobuf::StringPrintf[abi:cxx11](&dst, "%03d", (unsigned int)((int)a3 / 1000000));
    }
    else if ( __ROR4__(652835029 * a3 + 17179864, 3) > 0x418936u )
    {
      google::protobuf::StringPrintf[abi:cxx11](&dst, "%09d", a3);
    }
    else
    {
      google::protobuf::StringPrintf[abi:cxx11](&dst, "%06d", (unsigned int)((int)a3 / 1000));
    }
    v6 = std::string::_M_replace(&dst, 0LL, 0LL, ".", 1LL);
    v16 = v18;
    if ( *(_QWORD *)v6 == v6 + 16 )
    {
      v18[0] = (__int128)_mm_loadu_si128((const __m128i *)(v6 + 16));
    }
    else
    {
      v16 = *(void **)v6;
      *(_QWORD *)&v18[0] = *(_QWORD *)(v6 + 16);
    }
    v17 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)v6 = v6 + 16;
    *(_BYTE *)(v6 + 16) = 0;
    v7 = (const char *)v16;
    *(_QWORD *)(v6 + 8) = 0LL;
    std::string::_M_append(&src, v7, v17);
    if ( v16 != v18 )
      operator delete(v16);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)dst._M_dataplus._M_p != &dst._anon_0 )
      operator delete(dst._M_dataplus._M_p);
  }
  M_p = src._M_dataplus._M_p;
  M_string_length = src._M_string_length;
  *(_QWORD *)a1 = a1 + 16;
  if ( &M_p[M_string_length] && !M_p )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v16 = (void *)M_string_length;
  if ( M_string_length > 0xF )
  {
    v11 = std::string::_M_create(a1, &v16, 0LL);
    *(_QWORD *)a1 = v11;
    v12 = (void *)v11;
    *((_QWORD *)a1 + 2) = v16;
    goto LABEL_28;
  }
  if ( M_string_length != 1 )
  {
    if ( !M_string_length )
    {
      v10 = (__int64 *)(a1 + 16);
      goto LABEL_21;
    }
    v12 = a1 + 16;
LABEL_28:
    memcpy(v12, M_p, M_string_length);
    M_string_length = (unsigned __int64)v16;
    v10 = *(__int64 **)a1;
    goto LABEL_21;
  }
  a1[16] = *M_p;
  v10 = (__int64 *)(a1 + 16);
LABEL_21:
  *((_QWORD *)a1 + 1) = M_string_length;
  *((_BYTE *)v10 + M_string_length) = 0;
  if ( *((_QWORD *)a1 + 1) == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, "Z", 1LL);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
    operator delete(src._M_dataplus._M_p);
  return a1;
};

// Line 365: range 000000000C747380-000000000C7473A1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal17SecondsToDateTimeElPNS1_8DateTimeE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
