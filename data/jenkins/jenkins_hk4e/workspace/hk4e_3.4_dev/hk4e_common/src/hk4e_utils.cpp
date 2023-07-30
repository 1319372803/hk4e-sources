// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/hk4e_utils.cpp

// Line 65: range 000000000E9FA69C-000000000E9FB491
int32_t __cdecl Hk4eUtils::checkStrUtf8Len(const std::string *content, uint32_t max_char)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  __gnu_cxx::__normal_iterator<char const*,std::string > v11; // rax
  utf8::uint32_t v12; // edx
  common::milog::MiLogStream *v13; // rax
  bool v14; // al
  int32_t result; // eax
  uint32_t char_cnt; // [rsp+24h] [rbp-2BCh]
  char v17[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 13 code_point:43 64 8 7 iter:29 96 8 9 <unknown> 128 8 11 char_len:36 160 8 11 old_iter:"
                        "42 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> "
                        "448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Hk4eUtils::checkStrUtf8Len;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  if ( (unsigned __int8)std::string::empty(content) )
  {
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/hk4e_utils.cpp",
      "checkStrUtf8Len",
      25);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 256),
      (const char (*)[18])"content is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(_QWORD *)(v3 + 64) = std::string::begin(content);
    char_cnt = 0;
    while ( 1 )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96);
      *(_QWORD *)(v3 + 96) = std::string::end(content);
      v6 = __gnu_cxx::operator<<char const*,std::string>(
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v6 )
        break;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64);
      v7 = utf8::internal::sequence_length<__gnu_cxx::__normal_iterator<char const*,std::string>>(*(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64));
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        v7 = __asan_report_store8(v3 + 128);
      *(_QWORD *)(v3 + 128) = v7;
      if ( *(__int64 *)(v3 + 128) > 0 && *(__int64 *)(v3 + 128) <= 3 )
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160);
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 64);
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 64);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v11._M_current = (const char *)std::string::end(content);
        v12 = utf8::next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                (__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
                v11);
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48);
        *(_DWORD *)(v3 + 48) = v12;
        if ( __gnu_cxx::operator==<char const*,std::string>(
               (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 160),
               (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64)) )
        {
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
            4u,
            "src/hk4e_utils.cpp",
            "checkStrUtf8Len",
            46);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[29])"utf8::next iter not advance!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 130;
          v10 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( *(_DWORD *)(v3 + 48) > 0x1Fu )
          {
            if ( ++char_cnt <= max_char )
            {
              v10 = 1;
            }
            else
            {
              v2 = 131;
              v10 = 0;
            }
          }
          else
          {
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
              1u,
              "src/hk4e_utils.cpp",
              "checkStrUtf8Len",
              51);
            v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[22])"contain control char:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            v2 = 130;
            v10 = 0;
          }
        }
      }
      else
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
          1u,
          "src/hk4e_utils.cpp",
          "checkStrUtf8Len",
          39);
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
               (common::milog::MiLogStream *const)(v3 + 320),
               (const char (*)[10])"char_len:");
        v9 = common::milog::MiLogStream::operator<<<long,(long *)0>(v8, (const __int64 *)(v3 + 128));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" invalid!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 130;
        v10 = 0;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_51;
    }
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192);
    *(_QWORD *)(v3 + 192) = std::string::end(content);
    v14 = __gnu_cxx::operator!=<char const*,std::string>(
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
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
        "src/hk4e_utils.cpp",
        "checkStrUtf8Len",
        63);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v3 + 512),
        (const char (*)[22])"iter != content.end()");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = 130;
    }
    else
    {
      v2 = 0;
    }
  }
LABEL_51:
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
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

// Line 76: range 000000000E9FB492-000000000E9FC2C1
int32_t __cdecl Hk4eUtils::checkStrUtf8Len2(const std::string *content, uint32_t max_char)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  __gnu_cxx::__normal_iterator<char const*,std::string > v11; // rax
  utf8::uint32_t v12; // edx
  common::milog::MiLogStream *v13; // rax
  bool v14; // al
  int32_t result; // eax
  uint32_t char_cnt; // [rsp+24h] [rbp-2BCh]
  char v17[688]; // [rsp+30h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 13 code_point:97 64 8 7 iter:83 96 8 9 <unknown> 128 8 11 char_len:90 160 8 11 old_iter:"
                        "96 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> "
                        "448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Hk4eUtils::checkStrUtf8Len2;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  if ( (unsigned __int8)std::string::empty(content) )
  {
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/hk4e_utils.cpp",
      "checkStrUtf8Len2",
      79);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v3 + 256),
      (const char (*)[18])"content is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(_QWORD *)(v3 + 64) = std::string::begin(content);
    char_cnt = 0;
    while ( 1 )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96);
      *(_QWORD *)(v3 + 96) = std::string::end(content);
      v6 = __gnu_cxx::operator<<char const*,std::string>(
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
             (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( !v6 )
        break;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 64);
      v7 = utf8::internal::sequence_length<__gnu_cxx::__normal_iterator<char const*,std::string>>(*(__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64));
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        v7 = __asan_report_store8(v3 + 128);
      *(_QWORD *)(v3 + 128) = v7;
      if ( *(__int64 *)(v3 + 128) > 0 && *(__int64 *)(v3 + 128) <= 3 )
      {
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160);
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 64);
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 64);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v11._M_current = (const char *)std::string::end(content);
        v12 = utf8::next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                (__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
                v11);
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48);
        *(_DWORD *)(v3 + 48) = v12;
        if ( __gnu_cxx::operator==<char const*,std::string>(
               (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 160),
               (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64)) )
        {
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
            4u,
            "src/hk4e_utils.cpp",
            "checkStrUtf8Len2",
            100);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[29])"utf8::next iter not advance!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 130;
          v10 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( *(_DWORD *)(v3 + 48) > 0x1Fu )
          {
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v3 + 128);
            if ( *(_QWORD *)(v3 + 128) == 1LL )
              ++char_cnt;
            else
              char_cnt += 2;
            if ( char_cnt <= max_char )
            {
              v10 = 1;
            }
            else
            {
              v2 = 131;
              v10 = 0;
            }
          }
          else
          {
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
              1u,
              "src/hk4e_utils.cpp",
              "checkStrUtf8Len2",
              105);
            v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[22])"contain control char:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            v2 = 130;
            v10 = 0;
          }
        }
      }
      else
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
          1u,
          "src/hk4e_utils.cpp",
          "checkStrUtf8Len2",
          93);
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
               (common::milog::MiLogStream *const)(v3 + 320),
               (const char (*)[10])"char_len:");
        v9 = common::milog::MiLogStream::operator<<<long,(long *)0>(v8, (const __int64 *)(v3 + 128));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])" invalid!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 130;
        v10 = 0;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_56;
    }
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192);
    *(_QWORD *)(v3 + 192) = std::string::end(content);
    v14 = __gnu_cxx::operator!=<char const*,std::string>(
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
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
        "src/hk4e_utils.cpp",
        "checkStrUtf8Len2",
        124);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v3 + 512),
        (const char (*)[22])"iter != content.end()");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = 130;
    }
    else
    {
      v2 = 0;
    }
  }
LABEL_56:
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
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

// Line 139: range 000000000E9FC2C2-000000000E9FCB34
int32_t __cdecl Hk4eUtils::checkStrUtf8DigitsNum(const std::string *content, uint32_t max_digits_num)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  __gnu_cxx::__normal_iterator<char const*,std::string > v7; // rax
  int v8; // edx
  bool v9; // al
  int32_t result; // eax
  uint32_t total_digits_num; // [rsp+20h] [rbp-1C0h]
  uint32_t cp; // [rsp+24h] [rbp-1BCh]
  char v13[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 9 begin:141 64 8 9 <unknown> 96 8 13 old_begin:148 128 8 9 <unknown> 160 8 9 <unknown> 19"
                        "2 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = Hk4eUtils::checkStrUtf8DigitsNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  total_digits_num = 0;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = std::string::begin(content);
  while ( 1 )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64);
    *(_QWORD *)(v3 + 64) = std::string::end(content);
    v6 = __gnu_cxx::operator<<char const*,std::string>(
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v6 )
      break;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    *(_QWORD *)(v3 + 96) = *(_QWORD *)(v3 + 32);
    v7._M_current = (const char *)std::string::end(content);
    cp = utf8::next<__gnu_cxx::__normal_iterator<char const*,std::string>>(
           (__gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
           v7);
    if ( iswdigit(cp) )
      ++total_digits_num;
    if ( __gnu_cxx::operator==<char const*,std::string>(
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 96),
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32)) )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/hk4e_utils.cpp",
        "checkStrUtf8DigitsNum",
        156);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 192),
        (const char (*)[29])"utf8::next iter not advance!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v8 != 1 )
      goto LABEL_32;
  }
  if ( total_digits_num <= max_digits_num )
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128);
    *(_QWORD *)(v3 + 128) = std::string::end(content);
    v9 = __gnu_cxx::operator!=<char const*,std::string>(
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 32),
           (const __gnu_cxx::__normal_iterator<char const*,std::string > *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/hk4e_utils.cpp",
        "checkStrUtf8DigitsNum",
        166);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v3 + 256),
        (const char (*)[22])"iter != content.end()");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = -1;
  }
LABEL_32:
  result = v2;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 180: range 000000000E9FCB36-000000000E9FCB4E
uint32_t __cdecl Hk4eUtils::formatMechanicusTag(uint32_t mechanicus_id, uint32_t difficult_level)
{
  return (mechanicus_id << 16) + difficult_level;
};

// Line 185: range 000000000E9FCB50-000000000E9FCD3A
// local variable allocation has failed, the output may be wrong!
std::tuple<unsigned int,unsigned int> __cdecl Hk4eUtils::parseMechanicusTag(uint32_t mechanicus_tag)
{
  unsigned int v1; // esi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = Hk4eUtils::parseMechanicusTag;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    v4 = __asan_report_store4(v2 + 64);
  *(_DWORD *)(v4 - 32) = (unsigned __int16)v1;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v4 - 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = __asan_report_store4(v4 - 48);
  }
  *(_DWORD *)(v4 - 48) = HIWORD(v1);
  if ( (char)(mechanicus_tag & 7) >= *(_BYTE *)((*(_QWORD *)&mechanicus_tag >> 3) + 0x7FFF8000LL)
    && *(_BYTE *)((*(_QWORD *)&mechanicus_tag >> 3) + 0x7FFF8000LL) != 0
    || *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&mechanicus_tag + 7LL) >> 3) + 0x7FFF8000) != 0
    && (char)((mechanicus_tag + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&mechanicus_tag + 7LL) >> 3)
                                                    + 0x7FFF8000) )
  {
    v4 = __asan_report_store_n(mechanicus_tag, 8LL);
  }
  std::make_tuple<unsigned int,unsigned int>(
    *(unsigned int **)&mechanicus_tag,
    (unsigned int *)(v4 - 48),
    (unsigned int *)(v4 - 32),
    *(unsigned int **)&mechanicus_tag);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return *(std::tuple<unsigned int,unsigned int> *)&mechanicus_tag;
};

// Line 190: range 000000000E9FCD3C-000000000E9FD2C3
void __cdecl Hk4eUtils::showTraceStack(const char *tag_string)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v4; // rax
  unsigned __int64 v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rdi
  const char **v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  uint32_t i; // [rsp+10h] [rbp-230h]
  uint32_t frames; // [rsp+14h] [rbp-22Ch]
  char **stack_strings; // [rsp+18h] [rbp-228h]
  char v12[544]; // [rsp+20h] [rbp-220h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 6 ss:198 80 32 9 <unknown> 144 32 9 <unknown> 208 240 14 stack_info:191";
  *(_QWORD *)(v1 + 16) = Hk4eUtils::showTraceStack;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862734] = -202116109;
  v3[536862735] = -202116109;
  if ( *(char *)(((v1 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 208, 240LL);
  }
  memset((void *)(v1 + 208), 0, 0xF0uLL);
  frames = backtrace((void **)(v1 + 208), 30);
  stack_strings = backtrace_symbols((void *const *)(v1 + 208), frames);
  if ( stack_strings )
  {
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
    v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
           tag_string);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, "\n");
    for ( i = 0; i < frames; ++i )
    {
      v5 = (unsigned __int64)&stack_strings[i];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&stack_strings[i]);
      if ( !*(_QWORD *)v5 )
        break;
      v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48),
             "[BACKTRACE]:");
      v7 = (const char **)&stack_strings[i];
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        v6 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&stack_strings[i];
        __asan_report_load8(v6);
      }
      v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, *v7);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "\n");
    }
    free(stack_strings);
    if ( *(char *)(((v1 + 80) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 111) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 111) & 7) >= *(_BYTE *)(((v1 + 111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 80, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 80),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/hk4e_utils.cpp",
      "showTraceStack",
      208);
    if ( *(char *)(((v1 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 112 + 31) & 7) >= *(_BYTE *)(((v1 + 175) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 144, 32LL);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      (std::string *)(v1 + 144),
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
      (common::milog::MiLogStream *const)(v1 + 80),
      (const std::string *)(v1 + 144));
    std::string::~string((void *)(v1 + 144));
    *(_DWORD *)(((v1 + 144) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 80));
    *(_DWORD *)(((v1 + 80) >> 3) + 0x7FFF8000) = -117901064;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 48));
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
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
  }
};

// Line 209: range 000000000E9FD465-000000000E9FD479
void __cdecl GLOBAL__sub_I_hk4e_utils_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 209: range 000000000E9FD2C4-000000000E9FD464
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
    __asan_before_dynamic_init("src/hk4e_utils.cpp");
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
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v9;
      }
    }
    __asan_after_dynamic_init();
  }
};
