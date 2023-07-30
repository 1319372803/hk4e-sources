// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/datetime.cpp

// Line 62: range 000000000CF99B50-000000000CF99CF6
std::ostream *__fastcall mysqlpp::operator<<(std::ostream *os, const mysqlpp::Date *d)
{
  char *v3; // r13
  char v4; // bp
  __int64 year; // rsi
  char *v6; // rcx
  int v7; // r13d
  int v8; // edx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  char *v13; // rbx
  bool v14; // zf
  const std::ctype<char> *v16; // r14
  const std::ctype<char> *v17; // r13
  std::ctype<char>::char_type (__fastcall *v18)(const std::ctype<char> *const, char); // rax
  std::ctype<char>::char_type (__fastcall *v19)(const std::ctype<char> *const, char); // rax
  char v20[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  if ( v3[225] )
  {
    v4 = v3[224];
  }
  else
  {
    v16 = (const std::ctype<char> *)*((_QWORD *)v3 + 30);
    if ( !v16 )
      goto LABEL_16;
    if ( *((_BYTE *)v16 + 56) )
    {
      v4 = *((_BYTE *)v16 + 89);
    }
    else
    {
      v4 = 32;
      std::ctype<char>::_M_widen_init(*((_QWORD *)v3 + 30));
      v19 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v16 + 48LL);
      if ( v19 != std::ctype<char>::do_widen )
        v4 = v19(v16, 32);
    }
    v3[225] = 1;
  }
  v3[224] = 48;
  year = d->year_;
  v6 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  v7 = *((_DWORD *)v6 + 6);
  *((_QWORD *)v6 + 2) = 4LL;
  v8 = v7;
  LOBYTE(v8) = v7 | 0x80;
  *((_DWORD *)v6 + 6) = v8;
  v9 = std::ostream::_M_insert<unsigned long>(os, year);
  v20[0] = 45;
  v10 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>(v9, v20, 1LL);
  *(_QWORD *)((char *)v10 + *(_QWORD *)(*v10 - 24LL) + 16) = 2LL;
  v11 = std::ostream::operator<<(v10, d->month_);
  v20[0] = 45;
  v12 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>(v11, v20, 1LL);
  *(_QWORD *)((char *)v12 + *(_QWORD *)(*v12 - 24LL) + 16) = 2LL;
  std::ostream::operator<<(v12, d->day_);
  v13 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  v14 = v13[225] == 0;
  *((_DWORD *)v13 + 6) = v7;
  if ( !v14 )
    goto LABEL_4;
  v17 = (const std::ctype<char> *)*((_QWORD *)v13 + 30);
  if ( !v17 )
LABEL_16:
    std::__throw_bad_cast();
  if ( !*((_BYTE *)v17 + 56) )
  {
    std::ctype<char>::_M_widen_init(*((_QWORD *)v13 + 30));
    v18 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v17 + 48LL);
    if ( v18 != std::ctype<char>::do_widen )
      v18(v17, 32);
  }
  v13[225] = 1;
LABEL_4:
  v13[224] = v4;
  return os;
};

// Line 75: range 000000000CF99D00-000000000CF99EA6
std::ostream *__fastcall mysqlpp::operator<<(std::ostream *os, const mysqlpp::Time *t)
{
  char *v2; // r13
  char v3; // bp
  char *v4; // rcx
  int v5; // r13d
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  char *v11; // rbx
  bool v12; // zf
  const std::ctype<char> *v14; // r14
  const std::ctype<char> *v15; // r13
  std::ctype<char>::char_type (__fastcall *v16)(const std::ctype<char> *const, char); // rax
  std::ctype<char>::char_type (__fastcall *v17)(const std::ctype<char> *const, char); // rax
  char v18[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  if ( v2[225] )
  {
    v3 = v2[224];
  }
  else
  {
    v14 = (const std::ctype<char> *)*((_QWORD *)v2 + 30);
    if ( !v14 )
      goto LABEL_16;
    if ( *((_BYTE *)v14 + 56) )
    {
      v3 = *((_BYTE *)v14 + 89);
    }
    else
    {
      v3 = 32;
      std::ctype<char>::_M_widen_init(*((_QWORD *)v2 + 30));
      v17 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v14 + 48LL);
      if ( v17 != std::ctype<char>::do_widen )
        v3 = v17(v14, 32);
    }
    v2[225] = 1;
  }
  v2[224] = 48;
  v4 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  v5 = *((_DWORD *)v4 + 6);
  *((_QWORD *)v4 + 2) = 2LL;
  v6 = v5;
  LOBYTE(v6) = v5 | 0x80;
  *((_DWORD *)v4 + 6) = v6;
  v7 = std::ostream::operator<<(os, t->hour_);
  v18[0] = 58;
  v8 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>(v7, v18, 1LL);
  *(_QWORD *)((char *)v8 + *(_QWORD *)(*v8 - 24LL) + 16) = 2LL;
  v9 = std::ostream::operator<<(v8, t->minute_);
  v18[0] = 58;
  v10 = (_QWORD *)std::__ostream_insert<char,std::char_traits<char>>(v9, v18, 1LL);
  *(_QWORD *)((char *)v10 + *(_QWORD *)(*v10 - 24LL) + 16) = 2LL;
  std::ostream::operator<<(v10, t->second_);
  v11 = (char *)os + *(_QWORD *)(*(_QWORD *)os - 24LL);
  v12 = v11[225] == 0;
  *((_DWORD *)v11 + 6) = v5;
  if ( !v12 )
    goto LABEL_4;
  v15 = (const std::ctype<char> *)*((_QWORD *)v11 + 30);
  if ( !v15 )
LABEL_16:
    std::__throw_bad_cast();
  if ( !*((_BYTE *)v15 + 56) )
  {
    std::ctype<char>::_M_widen_init(*((_QWORD *)v11 + 30));
    v16 = *(std::ctype<char>::char_type (__fastcall **)(const std::ctype<char> *const, char))(*(_QWORD *)v15 + 48LL);
    if ( v16 != std::ctype<char>::do_widen )
      v16(v15, 32);
  }
  v11[225] = 1;
LABEL_4:
  v11[224] = v3;
  return os;
};

// Line 88: range 000000000CF99EB0-000000000CF99F4B
std::ostream *__fastcall mysqlpp::operator<<(std::ostream *os, const mysqlpp::DateTime *dt)
{
  mysqlpp::Date v3[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( dt->now_ )
  {
    std::__ostream_insert<char,std::char_traits<char>>(os, "NOW()", 5LL);
    return os;
  }
  else
  {
    v3[0]._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Date + 2);
    *(_DWORD *)&v3[0].year_ = *(_DWORD *)&dt->year_;
    mysqlpp::operator<<(os, v3);
    LOBYTE(v3[0]._vptr_Comparable) = 32;
    std::__ostream_insert<char,std::char_traits<char>>(os, v3, 1LL);
    v3[0].year_ = *(_WORD *)&dt->hour_;
    v3[0]._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Time + 2);
    v3[0].month_ = dt->second_;
    return mysqlpp::operator<<(os, (const mysqlpp::Time *)v3);
  }
};

// Line 100: range 000000000CF99F50-000000000CF99F9E
void __fastcall mysqlpp::Date::Date(mysqlpp::Date *const this, time_t t)
{
  time_t ta; // [rsp+8h] [rbp-50h] BYREF
  tm tm; // [rsp+10h] [rbp-48h] BYREF

  ta = t;
  this->_vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Date + 2);
  localtime_r(&ta, &tm);
  this->year_ = LOWORD(tm.tm_year) + 1900;
  this->month_ = LOBYTE(tm.tm_mon) + 1;
  this->day_ = tm.tm_mday;
};

// Line 111: range 000000000CF99FA0-000000000CF9A007
void __fastcall mysqlpp::DateTime::DateTime(mysqlpp::DateTime *const this, time_t t)
{
  __int16 tm_year; // ax
  time_t ta; // [rsp+8h] [rbp-50h] BYREF
  tm tm; // [rsp+10h] [rbp-48h] BYREF

  ta = t;
  this->_vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::DateTime + 2);
  localtime_r(&ta, &tm);
  tm_year = tm.tm_year;
  this->now_ = 0;
  this->year_ = tm_year + 1900;
  this->month_ = LOBYTE(tm.tm_mon) + 1;
  this->day_ = tm.tm_mday;
  this->hour_ = tm.tm_hour;
  this->minute_ = tm.tm_min;
  this->second_ = tm.tm_sec;
};

// Line 127: range 000000000CF9A010-000000000CF9A054
void __fastcall mysqlpp::Time::Time(mysqlpp::Time *const this, time_t t)
{
  time_t ta; // [rsp+8h] [rbp-50h] BYREF
  tm tm; // [rsp+10h] [rbp-48h] BYREF

  ta = t;
  this->_vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Time + 2);
  localtime_r(&ta, &tm);
  this->hour_ = tm.tm_hour;
  this->minute_ = tm.tm_min;
  this->second_ = tm.tm_sec;
};

// Line 140: range 000000000CF9A060-000000000CF9A117
const char *__fastcall mysqlpp::Date::convert(mysqlpp::Date *const this, const char *str)
{
  const char *v2; // r12
  int v3; // eax
  char v4; // al
  char v5; // al
  const char *v6; // rbx
  char v7; // al
  char v8; // al
  char num[5]; // [rsp+Bh] [rbp-2Dh] BYREF

  v2 = str + 4;
  v3 = *(_DWORD *)str;
  num[4] = 0;
  *(_DWORD *)num = v3;
  this->year_ = strtol(num, 0LL, 10);
  v4 = str[4];
  if ( v4 == 45 )
  {
    v4 = str[5];
    v2 = str + 5;
  }
  num[0] = v4;
  v5 = v2[1];
  num[2] = 0;
  v6 = v2 + 2;
  num[1] = v5;
  this->month_ = strtol(num, 0LL, 10);
  v7 = v2[2];
  if ( v7 == 45 )
  {
    v7 = v2[3];
    v6 = v2 + 3;
  }
  num[0] = v7;
  v8 = v6[1];
  num[2] = 0;
  num[1] = v8;
  this->day_ = strtol(num, 0LL, 10);
  return v6 + 2;
};

// Line 168: range 000000000CF9A120-000000000CF9A1D8
const char *__fastcall mysqlpp::Time::convert(mysqlpp::Time *const this, const char *str)
{
  const char *v2; // r12
  __int16 v3; // ax
  char v4; // al
  char v5; // al
  const char *v6; // rbx
  char v7; // al
  char v8; // al
  char num[5]; // [rsp+Bh] [rbp-2Dh] BYREF

  v2 = str + 2;
  v3 = *(_WORD *)str;
  num[2] = 0;
  *(_WORD *)num = v3;
  this->hour_ = strtol(num, 0LL, 10);
  v4 = str[2];
  if ( v4 == 58 )
  {
    v4 = str[3];
    v2 = str + 3;
  }
  num[0] = v4;
  v5 = v2[1];
  num[2] = 0;
  v6 = v2 + 2;
  num[1] = v5;
  this->minute_ = strtol(num, 0LL, 10);
  v7 = v2[2];
  if ( v7 == 58 )
  {
    v7 = v2[3];
    v6 = v2 + 3;
  }
  num[0] = v7;
  v8 = v6[1];
  num[2] = 0;
  num[1] = v8;
  this->second_ = strtol(num, 0LL, 10);
  return v6 + 2;
};

// Line 194: range 000000000CF9A1E0-000000000CF9A25C
const char *__fastcall mysqlpp::DateTime::convert(mysqlpp::DateTime *const this, const char *str)
{
  const char *v2; // rsi
  _BOOL8 v3; // rax
  const char *result; // rax
  __int16 v5; // dx
  mysqlpp::Date d; // [rsp+0h] [rbp-28h] BYREF
  mysqlpp::Time t; // [rsp+10h] [rbp-18h] BYREF

  *(_DWORD *)&d.year_ = 0;
  d._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Date + 2);
  v2 = mysqlpp::Date::convert(&d, str);
  *(_DWORD *)&this->year_ = *(_DWORD *)&d.year_;
  v3 = *v2 == 32;
  t.second_ = 0;
  t._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Time + 2);
  *(_WORD *)&t.hour_ = 0;
  result = mysqlpp::Time::convert(&t, &v2[v3]);
  v5 = *(_WORD *)&t.hour_;
  this->now_ = 0;
  *(_WORD *)&this->hour_ = v5;
  this->second_ = t.second_;
  return result;
};

// Line 218: range 000000000CF99A40-000000000CF99A6A
int __fastcall mysqlpp::Date::compare(const mysqlpp::Date *const this, const mysqlpp::Date *other)
{
  unsigned int year; // eax
  unsigned int month; // edx

  year = this->year_;
  month = other->year_;
  if ( (_WORD)year == (_WORD)month && (year = this->month_, month = other->month_, (_BYTE)year == (_BYTE)month) )
    return this->day_ - other->day_;
  else
    return year - month;
};

// Line 227: range 000000000CF99A70-000000000CF99A9A
int __fastcall mysqlpp::Time::compare(const mysqlpp::Time *const this, const mysqlpp::Time *other)
{
  int hour; // eax
  int minute; // edx

  hour = this->hour_;
  minute = other->hour_;
  if ( (_BYTE)hour == (_BYTE)minute && (hour = this->minute_, minute = other->minute_, (_BYTE)hour == (_BYTE)minute) )
    return this->second_ - other->second_;
  else
    return hour - minute;
};

// Line 236: range 000000000CF99AA0-000000000CF99B43
int __fastcall mysqlpp::DateTime::compare(const mysqlpp::DateTime *const this, const mysqlpp::DateTime *other)
{
  int result; // eax
  __int16 v3; // cx
  unsigned __int8 second; // dl
  int v5; // eax
  __int16 v6; // dx
  mysqlpp::Date d; // [rsp+0h] [rbp-48h] BYREF
  mysqlpp::Date od; // [rsp+10h] [rbp-38h] BYREF
  mysqlpp::Time t; // [rsp+20h] [rbp-28h] BYREF
  mysqlpp::Time ot; // [rsp+30h] [rbp-18h] BYREF

  if ( !this->now_ || (result = 0, !other->now_) )
  {
    v3 = *(_WORD *)&this->hour_;
    *(_DWORD *)&d.year_ = *(_DWORD *)&this->year_;
    second = this->second_;
    d._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Date + 2);
    od._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Date + 2);
    v5 = *(_DWORD *)&other->year_;
    t.second_ = second;
    v6 = *(_WORD *)&other->hour_;
    *(_DWORD *)&od.year_ = v5;
    *(_WORD *)&t.hour_ = v3;
    *(_WORD *)&ot.hour_ = v6;
    t._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Time + 2);
    ot._vptr_Comparable = (int (**)(...))(&`vtable for'mysqlpp::Time + 2);
    ot.second_ = other->second_;
    result = mysqlpp::Date::compare(&d, &od);
    if ( !result )
      return mysqlpp::Time::compare(&t, &ot);
  }
  return result;
};

// Line 254: range 000000000CF9A390-000000000CF9A39F
std::string *__fastcall mysqlpp::Date::operator std::string(std::string *retstr, const mysqlpp::Date *const this)
{
  mysqlpp::stream2string<mysqlpp::Date>(retstr, this);
  return retstr;
};

// Line 260: range 000000000CF9A3A0-000000000CF9A3AF
std::string *__fastcall mysqlpp::DateTime::operator std::string(
        std::string *retstr,
        const mysqlpp::DateTime *const this)
{
  mysqlpp::stream2string<mysqlpp::DateTime>(retstr, this);
  return retstr;
};

// Line 266: range 000000000CF9A3B0-000000000CF9A3BF
std::string *__fastcall mysqlpp::Time::operator std::string(std::string *retstr, const mysqlpp::Time *const this)
{
  mysqlpp::stream2string<mysqlpp::Time>(retstr, this);
  return retstr;
};

// Line 272: range 000000000CF9A260-000000000CF9A2BD
time_t __fastcall mysqlpp::Date::operator long(const mysqlpp::Date *const this)
{
  int day; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  tm tm; // [rsp+10h] [rbp-58h] BYREF

  timer = time(0LL);
  localtime_r(&timer, &tm);
  day = this->day_;
  tm.tm_isdst = -1;
  tm.tm_mday = day;
  tm.tm_mon = this->month_ - 1;
  tm.tm_year = this->year_ - 1900;
  return mktime(&tm);
};

// Line 286: range 000000000CF9A2C0-000000000CF9A32B
time_t __fastcall mysqlpp::DateTime::operator long(const mysqlpp::DateTime *const this)
{
  int second; // eax
  tm tm; // [rsp+0h] [rbp-48h] BYREF

  if ( this->now_ )
    return time(0LL);
  second = this->second_;
  tm.tm_isdst = -1;
  tm.tm_sec = second;
  tm.tm_min = this->minute_;
  tm.tm_hour = this->hour_;
  tm.tm_mday = this->day_;
  tm.tm_mon = this->month_ - 1;
  tm.tm_year = this->year_ - 1900;
  return mktime(&tm);
};

// Line 310: range 000000000CF9A330-000000000CF9A385
time_t __fastcall mysqlpp::Time::operator long(const mysqlpp::Time *const this)
{
  int second; // eax
  time_t timer; // [rsp+8h] [rbp-60h] BYREF
  tm tm; // [rsp+10h] [rbp-58h] BYREF

  timer = time(0LL);
  localtime_r(&timer, &tm);
  second = this->second_;
  tm.tm_isdst = -1;
  tm.tm_sec = second;
  tm.tm_min = this->minute_;
  tm.tm_hour = this->hour_;
  return mktime(&tm);
};

// Line 322: range 000000000C748200-000000000C748229
void __cdecl GLOBAL__sub_I_datetime_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
