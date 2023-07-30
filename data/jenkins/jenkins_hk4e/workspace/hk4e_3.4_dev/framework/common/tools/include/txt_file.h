// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/txt_file.h

// Line 124: range 000000000CE8C06A-000000000CE8C66C
int __cdecl common::tools::TxtFile::Row::assignToNum<bool>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        bool *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<bool>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1A1A8820);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1A0D87E0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<bool>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1A1A8860);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A1A88A0);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1A1A88E0);
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(t);
      }
      common::milog::MiLogStream::operator<<(v14, *t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000CE909AA-000000000CE90F6F
int __cdecl common::tools::TxtFile::Row::assignToNum<int>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        int *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1A1A8820);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1A0D87E0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1A1A8860);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A1A88A0);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1A1A88E0);
      common::milog::MiLogStream::operator<<<int,(int *)0>(v14, t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000CF708B2-000000000CF70E77
int __cdecl common::tools::TxtFile::Row::assignToNum<long>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        __int64 *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<long>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1A1A8820);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1A0D87E0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<long>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1A1A8860);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A1A88A0);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1A1A88E0);
      common::milog::MiLogStream::operator<<<long,(long *)0>(v14, t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 0000000013C41E62-0000000013C42464
int __cdecl common::tools::TxtFile::Row::assignToNum<unsigned char>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        unsigned __int8 *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<unsigned char>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1ACA6B60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1AC735A0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<unsigned char>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1ACA6BE0);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1ACA6C20);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1ACA6C60);
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)t & 7) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(t);
      }
      common::milog::MiLogStream::operator<<(v14, *t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000CE8AD8C-000000000CE8B351
int __cdecl common::tools::TxtFile::Row::assignToNum<unsigned int>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        unsigned int *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1A1A8820);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1A0D87E0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<unsigned int>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1A1A8860);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A1A88A0);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1A1A88E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 000000000F04D8B0-000000000F04DE75
int __cdecl common::tools::TxtFile::Row::assignToNum<unsigned long>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        unsigned __int64 *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<unsigned long>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1A48D960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1A3FE860,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<unsigned long>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1A48D9E0);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1A48DA20);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1A48DA60);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 124: range 0000000012EEE104-0000000012EEE6C9
int __cdecl common::tools::TxtFile::Row::assignToNum<unsigned short>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        unsigned __int16 *t)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  const std::string *v9; // rsi
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int result; // eax
  char v18[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 11 val_str:131 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToNum<unsigned short>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( !common::tools::TxtFile::Row::isKeyValid(this, key) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToNum",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[32])byte_1AAC4560);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])"]");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v8 = -1;
  }
  else
  {
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1AAC3CE0,
      (const std::allocator<char> *)(v3 + 48));
    v9 = common::tools::TxtFile::Row::at(this, key);
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      v9 = (const std::string *)32;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim((std::string *)(v3 + 128), v9, (const std::string *)(v3 + 192), 1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( common::tools::StringUtils::strToNum<unsigned short>((const std::string *)(v3 + 128), t, 1) )
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
        3u,
        "../framework/common/tools/include/txt_file.h",
        "assignToNum",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[8])byte_1AAC45A0);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, key);
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])byte_1AAC45E0);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 128));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])byte_1AAC4620);
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v14, t);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    std::string::~string((void *)(v3 + 128));
  }
  result = v8;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C3E362-0000000013C3E603
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AbilityState>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AbilityState *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AbilityState v9; // rcx
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AbilityState>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = *(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      __asan_report_store8(t);
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EEF8AC-0000000012EEFB61
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityBannerType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityBannerType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityBannerType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityBannerType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EFBBEA-0000000012EFBE9F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityCharAmusementLevelType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityCharAmusementLevelType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityCharAmusementLevelType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityCharAmusementLevelType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EFB934-0000000012EFBBE9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityCharAmusementStageType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityCharAmusementStageType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityCharAmusementStageType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityCharAmusementStageType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F22620-0000000012F228D5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobot>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityGachaRobot *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityGachaRobot v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobot>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F22B8C-0000000012F22E41
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobotType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityGachaRobotType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityGachaRobotType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaRobotType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F228D6-0000000012F22B8B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaTargetType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityGachaTargetType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityGachaTargetType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityGachaTargetType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F274F4-0000000012F277A9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityGroupLinkRewardType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityGroupLinkRewardType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityGroupLinkRewardType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityGroupLinkRewardType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F2723E-0000000012F274F3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityGroupLinkType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityGroupLinkType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityGroupLinkType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityGroupLinkType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F2B434-0000000012F2B6E9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityIslandPartyStageType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityIslandPartyStageType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityIslandPartyStageType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityIslandPartyStageType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C322C4-0000000013C32579
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivityShopSheetCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivityShopSheetCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivityShopSheetCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivityShopSheetCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C3E604-0000000013C3E8B9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ActivitySkillTarget>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ActivitySkillTarget *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ActivitySkillTarget v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ActivitySkillTarget>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C50500-0000000013C507B5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AnimalCodexCountType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AnimalCodexCountType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AnimalCodexCountType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AnimalCodexCountType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5024A-0000000013C504FF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AnimalCodexType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AnimalCodexType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AnimalCodexType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AnimalCodexType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C4D936-0000000013C4DBEB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AranaraCollectionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AranaraCollectionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AranaraCollectionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AranaraCollectionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEB28F8-000000000CEB2BAD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AreaTerrainType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AreaTerrainType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AreaTerrainType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AreaTerrainType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000101C1C92-00000000101C1F47
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ArithType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ArithType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ArithType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ArithType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A730E40);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A730E80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C3AF84-0000000013C3B239
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AvatarIdentityType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AvatarIdentityType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AvatarIdentityType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AvatarIdentityType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001481E2FE-000000001481E5B3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AvatarRenameType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AvatarRenameType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AvatarRenameType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AvatarRenameType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C3ACCE-0000000013C3AF83
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::AvatarUseType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::AvatarUseType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::AvatarUseType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::AvatarUseType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF1EFC-0000000012EF21B1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BartenderCupType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BartenderCupType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BartenderCupType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BartenderCupType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF21B2-0000000012EF2467
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BartenderEffectType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BartenderEffectType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BartenderEffectType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BartenderEffectType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C43CDA-0000000013C43F8F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BattlePassMissionRefreshType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BattlePassMissionRefreshType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BattlePassMissionRefreshType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BattlePassMissionRefreshType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF3AB0-0000000012EF3D65
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlessingScanType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlessingScanType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlessingScanType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlessingScanType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C482B6-0000000013C4856B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlossomChestShowType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlossomChestShowType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlossomChestShowType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlossomChestShowType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C475EE-0000000013C478A3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlossomRefreshCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlossomRefreshCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlossomRefreshCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlossomRefreshCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C478A4-0000000013C47B59
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlossomRefreshType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlossomRefreshType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlossomRefreshType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlossomRefreshType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C48000-0000000013C482B5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlossomRewardType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlossomRewardType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlossomRewardType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlossomRewardType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C47D4A-0000000013C47FFF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BlossomShowType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BlossomShowType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BlossomShowType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BlossomShowType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C49F0E-0000000013C4A1C3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BoardEventType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BoardEventType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BoardEventType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BoardEventType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C4A1C4-0000000013C4A479
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BoredActionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BoredActionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BoredActionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BoredActionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF6044-0000000012EF62F9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BrickBreakerLevelType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BrickBreakerLevelType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BrickBreakerLevelType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BrickBreakerLevelType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5C834-0000000013C5CAE9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BrickRotateType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BrickRotateType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BrickRotateType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BrickRotateType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5CAEA-0000000013C5CD9F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BrickType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BrickType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BrickType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BrickType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C4B482-0000000013C4B737
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::BuffStackType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::BuffStackType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::BuffStackType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::BuffStackType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147EDCE8-00000000147EDF9D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CaptureCodexShowType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CaptureCodexShowType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CaptureCodexShowType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CaptureCodexShowType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E7842-00000000128E7AF7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CardFortuneType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CardFortuneType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CardFortuneType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CardFortuneType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000F056B6C-000000000F056E21
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CardProductType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CardProductType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CardProductType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CardProductType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A48D820);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A48D860);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C4DBEC-0000000013C4DEA1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CatalogType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CatalogType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CatalogType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CatalogType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D1962-00000000135D1C17
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChallengeRecordType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChallengeRecordType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChallengeRecordType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChallengeRecordType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D16AC-00000000135D1961
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChallengeType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChallengeType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChallengeType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChallengeType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF8B66-0000000012EF8E1B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChannellerSlabBuffQuality>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChannellerSlabBuffQuality *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChannellerSlabBuffQuality v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChannellerSlabBuffQuality>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EF9388-0000000012EF963D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChannellerSlabCondition>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChannellerSlabCondition *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChannellerSlabCondition v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChannellerSlabCondition>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E7DAE-00000000128E8063
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChessCardEffectType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChessCardEffectType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChessCardEffectType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardEffectType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E85D0-00000000128E8885
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChessCardQualityType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChessCardQualityType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChessCardQualityType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardQualityType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E8064-00000000128E8319
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChessCardTag>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChessCardTag *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChessCardTag v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTag>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E7AF8-00000000128E7DAD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChessCardTargetType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChessCardTargetType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChessCardTargetType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTargetType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128E831A-00000000128E85CF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ChessCardType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ChessCardType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ChessCardType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEABDC0-000000000CEAC075
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ClimateType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ClimateType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ClimateType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ClimateType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C54038-0000000013C542ED
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CombineUnlockMethod>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CombineUnlockMethod *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CombineUnlockMethod v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CombineUnlockMethod>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C55592-0000000013C55847
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CompoundType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CompoundType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CompoundType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CompoundType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C60F40-0000000013C611F5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ConditionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ConditionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ConditionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ConditionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000E1EB148-000000000E1EB3FD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ConstValueType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ConstValueType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ConstValueType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ConstValueType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A32E040);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A32E080);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C57B12-0000000013C57DC7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CookBonusType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CookBonusType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CookBonusType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CookBonusType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C575A6-0000000013C5785B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CookFoodType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CookFoodType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CookFoodType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CookFoodType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5785C-0000000013C57B11
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CookMethodType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CookMethodType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CookMethodType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CookMethodType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5A4B6-0000000013C5A76B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CoopCGType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CoopCGType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CoopCGType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CoopCGType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5A76C-0000000013C5AA21
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CoopPointType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CoopPointType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CoopPointType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CoopPointType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C5A0FE-0000000013C5A3B3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::CoopTaskCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::CoopTaskCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::CoopTaskCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::CoopTaskCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C60C8A-0000000013C60F3F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DailyTaskActionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DailyTaskActionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DailyTaskActionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskActionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C609D4-0000000013C60C89
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DailyTaskCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DailyTaskCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DailyTaskCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C6169A-0000000013C6194F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DailyTaskFinishType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DailyTaskFinishType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DailyTaskFinishType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskFinishType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C612E4-0000000013C61599
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DailyTaskType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DailyTaskType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DailyTaskType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DailyTaskType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C69350-0000000013C69605
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DataEntityType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DataEntityType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DataEntityType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DataEntityType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C63930-0000000013C63BE5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DisplayItemType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DisplayItemType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DisplayItemType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DisplayItemType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C66172-0000000013C66427
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DraftExecSubType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DraftExecSubType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DraftExecSubType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DraftExecSubType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C65EBC-0000000013C66171
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DraftExecType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DraftExecType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DraftExecType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DraftExecType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C66428-0000000013C666DD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DraftInviteType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DraftInviteType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DraftInviteType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DraftInviteType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C666DE-0000000013C66993
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DraftStartLimitType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DraftStartLimitType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DraftStartLimitType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DraftStartLimitType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012EFEF30-0000000012EFF1E5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DragonSpineMissionFinishExecType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DragonSpineMissionFinishExecType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DragonSpineMissionFinishExecType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DragonSpineMissionFinishExecType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C69706-0000000013C699BB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DropLimitType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DropLimitType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DropLimitType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DropLimitType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C6909A-0000000013C6934F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DropNodeType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DropNodeType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DropNodeType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DropNodeType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C68CE2-0000000013C68F97
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DropRandomType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DropRandomType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DropRandomType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DropRandomType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F0025A-0000000012F0050F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DuelHeartDifficultyType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DuelHeartDifficultyType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DuelHeartDifficultyType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DuelHeartDifficultyType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D12F4-00000000135D15A9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C6B6C2-0000000013C6B977
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonEntrySatisfiedConditionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonEntrySatisfiedConditionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonEntrySatisfiedConditionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonEntrySatisfiedConditionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D243A-00000000135D26EF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonRosterCycleType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonRosterCycleType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonRosterCycleType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonRosterCycleType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D103E-00000000135D12F3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonStateType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonStateType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonStateType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonStateType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D0478-00000000135D072D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonSubType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonSubType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonSubType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonSubType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D01C2-00000000135D0477
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungeonType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungeonType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungeonType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungeonType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C6B978-0000000013C6BC2D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::DungunEntryType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::DungunEntryType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::DungunEntryType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::DungunEntryType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F013E6-0000000012F0169B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EchoShellType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EchoShellType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EchoShellType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EchoShellType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F031A4-0000000012F03459
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EffigyCondition>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EffigyCondition *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EffigyCondition v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EffigyCondition>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F02EEE-0000000012F031A3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EffigyDifficulty>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EffigyDifficulty *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EffigyDifficulty v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EffigyDifficulty>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F0580C-0000000012F05AC1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ElectroherculesBattleLevelDifficulty>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ElectroherculesBattleLevelDifficulty *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ElectroherculesBattleLevelDifficulty v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ElectroherculesBattleLevelDifficulty>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F05AC2-0000000012F05D77
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ElectroherculesBattleLevelType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ElectroherculesBattleLevelType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ElectroherculesBattleLevelType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ElectroherculesBattleLevelType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C6C064-0000000013C6C319
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ElementReactionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ElementReactionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ElementReactionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ElementReactionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CE93C9C-000000000CE93F51
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ElementType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ElementType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ElementType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ElementType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001478EA52-000000001478ED07
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EndureType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EndureType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EndureType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EndureType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001478EEC8-000000001478F17D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EntityType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EntityType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EntityType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EntityType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001478F17E-000000001478F433
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EnvironmentType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EnvironmentType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EnvironmentType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EnvironmentType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001481AE66-000000001481B11B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::EquipType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::EquipType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::EquipType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::EquipType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014790CCA-0000000014790F7F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExclusivePlatformType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExclusivePlatformType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExclusivePlatformType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExclusivePlatformType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014790F80-0000000014791235
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExclusiveRuleType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExclusiveRuleType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExclusiveRuleType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExclusiveRuleType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014798D04-0000000014798FB9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExhibitionDisplayCondParamType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::ExhibitionDisplayCondParamType *t);

// Line 142: range 0000000014799270-0000000014799525
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExhibitionDisplayCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExhibitionDisplayCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExhibitionDisplayCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExhibitionDisplayCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014798FBA-000000001479926F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExhibitionKeyType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExhibitionKeyType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExhibitionKeyType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExhibitionKeyType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147998DC-0000000014799B91
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExhibitionScoreType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExhibitionScoreType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExhibitionScoreType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExhibitionScoreType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014799626-00000000147998DB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExhibitionSeriesType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::ExhibitionSeriesType *t);

// Line 142: range 000000001479B09C-000000001479B351
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExpeditionOpenCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExpeditionOpenCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExpeditionOpenCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExpeditionOpenCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEB2E64-000000000CEB3119
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ExploreEventType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ExploreEventType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ExploreEventType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ExploreEventType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001479BE6A-000000001479C11F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FeatureTagEnum>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FeatureTagEnum *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FeatureTagEnum v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FeatureTagEnum>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000101C21FE-00000000101C24B3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::FetterCondType *t);

// Line 142: range 000000000CE971C4-000000000CE97479
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FightPropType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FightPropType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000001479EFDA-000000001479F28F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FireworksLaunchParamType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FireworksLaunchParamType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FireworksLaunchParamType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FireworksLaunchParamType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C2ED1A-0000000013C2EFCF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FireworksReformParamType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FireworksReformParamType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FireworksReformParamType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FireworksReformParamType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A135A-00000000147A160F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FishSkillCategory>(const common::tools::TxtFile::Row *const this, const std::string *key, data::FishSkillCategory *t);

// Line 142: range 00000000147A1610-00000000147A18C5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FishSkillType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FishSkillType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FishSkillType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FishSkillType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A0FA4-00000000147A1259
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FishStockType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FishStockType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FishStockType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FishStockType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F1E140-0000000012F1E3F5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FleurFairDungeonStatMethod>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FleurFairDungeonStatMethod *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FleurFairDungeonStatMethod v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FleurFairDungeonStatMethod>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F1DE8A-0000000012F1E13F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FleurFairDungeonStatType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::FleurFairDungeonStatType *t);

// Line 142: range 0000000012F1DBD4-0000000012F1DE89
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FleurFairMiniGameType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FleurFairMiniGameType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FleurFairMiniGameType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FleurFairMiniGameType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A2F3C-00000000147A31F1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ForgeUnlockMethod>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ForgeUnlockMethod *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ForgeUnlockMethod v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ForgeUnlockMethod>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F1FF52-0000000012F20207
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FungusTrainingDungeonType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FungusTrainingDungeonType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FungusTrainingDungeonType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FungusTrainingDungeonType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135EA914-00000000135EABC9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FurnitureDeploySurfaceType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::FurnitureDeploySurfaceType *t);

// Line 142: range 00000000135EA65E-00000000135EA913
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::FurnitureDeployType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::FurnitureDeployType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::FurnitureDeployType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::FurnitureDeployType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A5504-00000000147A57B9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGCardFaceReceiveCondition>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGCardFaceReceiveCondition *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGCardFaceReceiveCondition v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGCardFaceReceiveCondition>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A524E-00000000147A5503
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGCardFaceType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGCardFaceType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGCardFaceType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGCardFaceType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DA416-00000000135DA6CB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGCardType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GCGCardType *t);

// Line 142: range 00000000135E0A7E-00000000135E0D33
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGChallengeType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGChallengeType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGChallengeType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGChallengeType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DB55C-00000000135DB811
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGChooseSortCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGChooseSortCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGChooseSortCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGChooseSortCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DB812-00000000135DBAC7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGChooseTargetCamp>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGChooseTargetCamp *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGChooseTargetCamp v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGChooseTargetCamp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DB2A6-00000000135DB55B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGChooseTargetCondType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GCGChooseTargetCondType *t);

// Line 142: range 00000000135DAB5E-00000000135DAE13
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGChooseTargetType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGChooseTargetType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGChooseTargetType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGChooseTargetType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D9EAA-00000000135DA15F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGCostType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGCostType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGCostType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGCostType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A4F98-00000000147A524D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGDeckUnlockCondition>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGDeckUnlockCondition *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGDeckUnlockCondition v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGDeckUnlockCondition>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DC2DE-00000000135DC593
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGEffectElementType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GCGEffectElementType *t);

// Line 142: range 00000000135DC594-00000000135DC849
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGGameType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGGameType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGGameType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGGameType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DC84A-00000000135DCAFF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGInitHand>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGInitHand *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGInitHand v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGInitHand>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135E05D8-00000000135E088D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGLevelCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGLevelCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGLevelCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGLevelCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135E1922-00000000135E1BD7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGLevelUnlockCond>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GCGLevelUnlockCond *t);

// Line 142: range 00000000135E0E22-00000000135E10D7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGPointMotionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGPointMotionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGPointMotionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGPointMotionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DAFF0-00000000135DB2A5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGSkillTagType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGSkillTagType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGSkillTagType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGSkillTagType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135E11C6-00000000135E147B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGSupportType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGSupportType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGSupportType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGSupportType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DA7BA-00000000135DAA6F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGTagType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GCGTagType *t);

// Line 142: range 00000000135DA160-00000000135DA415
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGTokenType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGTokenType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGTokenType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGTokenType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135DBF28-00000000135DC1DD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGVirtualDiceType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGVirtualDiceType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGVirtualDiceType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGVirtualDiceType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135E147C-00000000135E1731
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GCGWeekNpcType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GCGWeekNpcType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GCGWeekNpcType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GCGWeekNpcType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147AA10C-00000000147AA3C1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GachaGuaranteeResetType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GachaGuaranteeResetType *t);

// Line 142: range 00000000147A9E56-00000000147AA10B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GachaGuaranteeType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GachaGuaranteeType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GachaGuaranteeType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GachaGuaranteeType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147AA3C2-00000000147AA677
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GachaItemParentType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GachaItemParentType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GachaItemParentType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GachaItemParentType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147A9BA0-00000000147A9E55
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GachaItemType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GachaItemType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GachaItemType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GachaItemType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147AF214-00000000147AF4C9
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GalleryType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::GalleryType *t);

// Line 142: range 00000000147B164E-00000000147B1903
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GatherSaveType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GatherSaveType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GatherSaveType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GatherSaveType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000014825A86-0000000014825D3B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GeneralRoutineType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GeneralRoutineType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GeneralRoutineType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GeneralRoutineType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147B3E78-00000000147B412D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GivingMethod>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GivingMethod *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GivingMethod v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GivingMethod>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147B412E-00000000147B43E3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GivingType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GivingType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GivingType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GivingType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135EAE80-00000000135EB135
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GroupRecordType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GroupRecordType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GroupRecordType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GroupRecordType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEAAA22-000000000CEAACD7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::GrowCurveType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::GrowCurveType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D0D90-00000000147D1045
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::H5ActivityCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::H5ActivityCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::H5ActivityCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::H5ActivityCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F293CE-0000000012F29683
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HIDE_AND_SEEK_SKILL_CATEGORY>(const common::tools::TxtFile::Row *const this, const std::string *key, data::HIDE_AND_SEEK_SKILL_CATEGORY *t);

// Line 142: range 0000000012F29684-0000000012F29939
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135EBA5A-00000000135EBD0F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HomeAvatarEventCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HomeAvatarEventCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HomeAvatarEventCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HomeAvatarEventCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135EB7A4-00000000135EBA59
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HomeAvatarEventType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HomeAvatarEventType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HomeAvatarEventType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HomeAvatarEventType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135EB4EE-00000000135EB7A3
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HomeWorldAreaType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::HomeWorldAreaType *t);

// Line 142: range 00000000135EB136-00000000135EB3EB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HomeWorldLimitShopCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HomeWorldLimitShopCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HomeWorldLimitShopCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HomeWorldLimitShopCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AB870A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AB870E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D4954-00000000147D4C09
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingCluePointType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HuntingCluePointType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HuntingCluePointType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HuntingCluePointType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D4C0A-00000000147D4EBF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterCreatePosType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HuntingMonsterCreatePosType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HuntingMonsterCreatePosType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterCreatePosType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D542C-00000000147D56E1
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterFinishType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HuntingMonsterFinishType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HuntingMonsterFinishType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterFinishType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D4EC0-00000000147D5175
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterGroupType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HuntingMonsterGroupType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HuntingMonsterGroupType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterGroupType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D469E-00000000147D4953
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingOfferDifficultyType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::HuntingOfferDifficultyType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::HuntingOfferDifficultyType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::HuntingOfferDifficultyType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D5176-00000000147D542B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::HuntingRefreshCondType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::HuntingRefreshCondType *t);

// Line 142: range 00000000147D6B48-00000000147D6DFD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InferenceActionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InferenceActionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InferenceActionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InferenceActionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147AD500-00000000147AD7B5
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InteractActionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InteractActionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InteractActionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InteractActionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147AD7B6-00000000147ADA6B
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InteractCondType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InteractCondType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InteractCondType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InteractCondType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D1C18-00000000135D1ECD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InterruptButtonType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::InterruptButtonType *t);

// Line 142: range 00000000147DA064-00000000147DA319
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateConditionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InvestigationMonsterMapMarkCreateConditionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InvestigationMonsterMapMarkCreateConditionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateConditionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147DA31A-00000000147DA5CF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InvestigationMonsterMapMarkCreateType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InvestigationMonsterMapMarkCreateType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147D9DAE-00000000147DA063
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InvestigationType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::InvestigationType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::InvestigationType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::InvestigationType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000135D09E4-00000000135D0C99
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::InvolveType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::InvolveType *t);

// Line 142: range 00000000128F037C-00000000128F0631
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardEffectType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::IrodoriChessCardEffectType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::IrodoriChessCardEffectType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardEffectType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128F08E8-00000000128F0B9D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardNumericalModificationMode>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::IrodoriChessCardNumericalModificationMode *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::IrodoriChessCardNumericalModificationMode v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardNumericalModificationMode>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128F0632-00000000128F08E7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardNumericalModificationType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::IrodoriChessCardNumericalModificationType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::IrodoriChessCardNumericalModificationType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::IrodoriChessCardNumericalModificationType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000128F0F54-00000000128F1209
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::IrodoriMasterLevelType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::IrodoriMasterLevelType *t);

// Line 142: range 00000000128F120A-00000000128F14BF
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::IrodoriPoetryEntityType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::IrodoriPoetryEntityType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::IrodoriPoetryEntityType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::IrodoriPoetryEntityType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A9A3960);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A9A39A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147DF318-00000000147DF5CD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemLimitConstValueType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ItemLimitConstValueType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ItemLimitConstValueType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ItemLimitConstValueType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147DF062-00000000147DF317
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemLimitRefreshType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ItemLimitRefreshType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ItemLimitRefreshType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ItemLimitRefreshType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000F03DADC-000000000F03DD91
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemLimitType>(const common::tools::TxtFile::Row *const this, const std::string *key, data::ItemLimitType *t);

// Line 142: range 00000000147DF5CE-00000000147DF883
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemLimitWhiteType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ItemLimitWhiteType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ItemLimitWhiteType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ItemLimitWhiteType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEAACD8-000000000CEAAF8D
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ItemType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ItemType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ItemType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147E829A-00000000147E854F
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemUseOp>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::ItemUseOp *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::ItemUseOp v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::ItemUseOp>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147E8806-00000000147E8ABB
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::ItemUseTarget>(const common::tools::TxtFile::Row *const this, const std::string *key, data::ItemUseTarget *t);

// Line 142: range 0000000013C30C60-0000000013C30F15
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::LanV3BoatType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::LanV3BoatType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::LanV3BoatType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::LanV3BoatType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ACA6D60);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ACA6DA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CE90F70-000000000CE91225
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::LogicType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::LogicType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::LogicType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::LogicType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F2C5C0-0000000012F2C875
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::LunaRiteRegionType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::LunaRiteRegionType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::LunaRiteRegionType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::LunaRiteRegionType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CEB2BAE-000000000CEB2E63
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::MapAreaState>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::MapAreaState *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::MapAreaState v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::MapAreaState>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1A1A89A0);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1A1A89E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000012F29A28-0000000012F29CDD
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::MatchLimitType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::MatchLimitType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::MatchLimitType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::MatchLimitType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1AAC4780);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1AAC47C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 00000000147E4302-00000000147E45B7
int __cdecl common::tools::TxtFile::Row::assignToEnum<data::MatchSubType>(
        const common::tools::TxtFile::Row *const this,
        const std::string *key,
        data::MatchSubType *t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int result; // eax
  data::MatchSubType v9; // edi
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 value:144 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::TxtFile::Row::assignToEnum<data::MatchSubType>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32);
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( common::tools::TxtFile::Row::assignToNum<long>(this, key, (__int64 *)(v3 + 32)) )
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/common/tools/include/txt_file.h",
      "assignToEnum",
      147);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[5])byte_1ADE6A20);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])byte_1ADE6A60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v3 + 32);
    v9 = (unsigned int)*(_QWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
    {
      v9 = (int)t;
      __asan_report_store4(t);
    }
    *t = v9;
    result = 0;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 0000000013C507B6-0000000013C50A6B
