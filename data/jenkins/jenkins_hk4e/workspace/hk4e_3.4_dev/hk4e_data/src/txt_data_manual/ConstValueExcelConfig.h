// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ConstValueExcelConfig.h

// Line 49: range 000000000E1D1098-000000000E1D1339
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<bool,bool &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        bool *value,
        bool *a4,
        bool *args_0)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  int32_t result; // eax
  bool *v11; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ConstValueExcelConfigMgr::findConstValue<bool,bool &>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v11 = std::forward<bool &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,bool,bool &>(
               &config_ptr->value,
               value,
               v11,
               (bool *)&config_ptr->value);
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v9 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v5 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v5 + 32) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v5 + 32));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = -1;
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D01B4-000000000E1D04C1
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        float *a5,
        float *a6,
        float *args_3,
        float *args_4)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rax
  int32_t result; // eax
  float *v14; // rbx
  float *v15; // r15
  float *v16; // r14
  float *v17; // rax
  float *v18; // [rsp+8h] [rbp-F8h]
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &,float &,float &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v14 = std::forward<float &>(args_4);
    v18 = std::forward<float &>(args_3);
    v15 = std::forward<float &>(a6);
    v16 = std::forward<float &>(a5);
    v17 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &,float &>(
               &config_ptr->value,
               value,
               v17,
               v16,
               v15,
               v18,
               v14);
  }
  else
  {
    if ( *(char *)(((v8 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 95) & 7) >= *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v8 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v8 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v8 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v12 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v8 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v8 + 32) = v12;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v8 + 32));
    *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v8 + 64));
    result = -1;
  }
  if ( v24 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CF94E-000000000E1CFC3B
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        float *a5,
        float *a6,
        float *args_3)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  int32_t result; // eax
  float *v13; // r15
  float *v14; // r14
  float *v15; // rbx
  float *v16; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &,float &>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v13 = std::forward<float &>(args_3);
    v14 = std::forward<float &>(a6);
    v15 = std::forward<float &>(a5);
    v16 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &>(
               &config_ptr->value,
               value,
               v16,
               v15,
               v14,
               v13);
  }
  else
  {
    if ( *(char *)(((v7 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v7 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v11 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8(v7 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v7 + 32) = v11;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v7 + 32));
    *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 64));
    result = -1;
  }
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CF62A-000000000E1CF900
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        float *a5,
        float *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  float *v12; // r14
  float *v13; // rbx
  float *v14; // rax
  float *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v21[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &,float &,float &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<float &>(a6);
    v13 = std::forward<float &>(a5);
    v14 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &>(
               &config_ptr->value,
               value,
               v14,
               v13,
               v12,
               v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CE898-000000000E1CEB52
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        float *a5,
        float *args_0)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  float *v12; // rbx
  float *v13; // rax
  float *v14; // r8
  float *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &,float &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<float &>(a5);
    v13 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &,float &>(
               &config_ptr->value,
               value,
               v13,
               v12,
               v14,
               v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D133A-000000000E1D1627
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &,unsigned int &,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        unsigned int *a5,
        float *a6,
        float *args_3)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  int32_t result; // eax
  float *v13; // r15
  float *v14; // r14
  unsigned int *v15; // rbx
  float *v16; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &,unsigned int &,float &,float &>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v13 = std::forward<float &>(args_3);
    v14 = std::forward<float &>(a6);
    v15 = std::forward<unsigned int &>(a5);
    v16 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &,unsigned int &,float &,float &>(
               &config_ptr->value,
               value,
               v16,
               v15,
               v14,
               v13);
  }
  else
  {
    if ( *(char *)(((v7 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v7 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v11 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8(v7 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v7 + 32) = v11;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v7 + 32));
    *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 64));
    result = -1;
  }
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CEB54-000000000E1CEDF5
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<float,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value,
        float *a4,
        float *args_0)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  int32_t result; // eax
  float *v11; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ConstValueExcelConfigMgr::findConstValue<float,float &>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v11 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,float,float &>(
               &config_ptr->value,
               value,
               v11,
               (float *)&config_ptr->value);
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v9 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v5 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v5 + 32) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v5 + 32));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = -1;
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D0AA8-000000000E1D0D62
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<int,int &,int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        int *value,
        int *a4,
        int *a5,
        int *args_0)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  int *v12; // rbx
  int *v13; // rax
  int *v14; // r8
  int *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<int,int &,int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<int &>(a5);
    v13 = std::forward<int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,int,int &,int &>(&config_ptr->value, value, v13, v12, v14, v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CFC62-000000000E1CFF03
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        float *a4,
        float *args_0)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  int32_t result; // eax
  float *v11; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,float &>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v11 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,float &>(
               &config_ptr->value,
               value,
               v11,
               (float *)&config_ptr->value);
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v9 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v5 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v5 + 32) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v5 + 32));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = -1;
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D19E2-000000000E1D1CCF
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,float &,float &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        float *a5,
        float *a6,
        unsigned int *args_3)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  int32_t result; // eax
  unsigned int *v13; // r15
  float *v14; // r14
  float *v15; // rbx
  unsigned int *v16; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,float &,float &,unsigned int &>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v13 = std::forward<unsigned int &>(args_3);
    v14 = std::forward<float &>(a6);
    v15 = std::forward<float &>(a5);
    v16 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,float &,float &,unsigned int &>(
               &config_ptr->value,
               value,
               v16,
               v15,
               v14,
               v13);
  }
  else
  {
    if ( *(char *)(((v7 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v7 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v11 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8(v7 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v7 + 32) = v11;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v7 + 32));
    *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 64));
    result = -1;
  }
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D04C2-000000000E1D07CF
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *args_3,
        unsigned int *args_4)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rax
  int32_t result; // eax
  unsigned int *v14; // rbx
  unsigned int *v15; // r15
  unsigned int *v16; // r14
  unsigned int *v17; // rax
  unsigned int *v18; // [rsp+8h] [rbp-F8h]
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v14 = std::forward<unsigned int &>(args_4);
    v18 = std::forward<unsigned int &>(args_3);
    v15 = std::forward<unsigned int &>(a6);
    v16 = std::forward<unsigned int &>(a5);
    v17 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
               &config_ptr->value,
               value,
               v17,
               v16,
               v15,
               v18,
               v14);
  }
  else
  {
    if ( *(char *)(((v8 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 95) & 7) >= *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v8 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v8 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v8 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v12 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v8 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v8 + 32) = v12;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v8 + 32));
    *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v8 + 64));
    result = -1;
  }
  if ( v24 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CF080-000000000E1CF36D
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *args_3)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  int32_t result; // eax
  unsigned int *v13; // r15
  unsigned int *v14; // r14
  unsigned int *v15; // rbx
  unsigned int *v16; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v13 = std::forward<unsigned int &>(args_3);
    v14 = std::forward<unsigned int &>(a6);
    v15 = std::forward<unsigned int &>(a5);
    v16 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
               &config_ptr->value,
               value,
               v16,
               v15,
               v14,
               v13);
  }
  else
  {
    if ( *(char *)(((v7 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 + 95) & 7) >= *(_BYTE *)(((v7 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v7 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v11 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8(v7 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v7 + 32) = v11;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v7 + 32));
    *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 64));
    result = -1;
  }
  if ( v22 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D07D0-000000000E1D0AA6
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  unsigned int *v12; // r14
  unsigned int *v13; // rbx
  unsigned int *v14; // rax
  unsigned int *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v21[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<unsigned int &>(a6);
    v13 = std::forward<unsigned int &>(a5);
    v14 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &>(
               &config_ptr->value,
               value,
               v14,
               v13,
               v12,
               v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CF36E-000000000E1CF628
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  unsigned int *v12; // rbx
  unsigned int *v13; // rax
  unsigned int *v14; // r8
  unsigned int *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<unsigned int &>(a5);
    v13 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &>(
               &config_ptr->value,
               value,
               v13,
               v12,
               v14,
               v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CE5D0-000000000E1CE871
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned int *a4,
        unsigned int *args_0)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  int32_t result; // eax
  unsigned int *v11; // rax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v11 = std::forward<unsigned int &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
               &config_ptr->value,
               value,
               v11,
               (unsigned int *)&config_ptr->value);
  }
  else
  {
    if ( *(char *)(((v5 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v5 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v9 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v5 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v5 + 32) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v5 + 32));
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 64));
    result = -1;
  }
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1D0D64-000000000E1D1071
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned long,float &,float &,float &,float &,float &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned __int64 *value,
        float *a4,
        float *a5,
        float *a6,
        float *args_3,
        float *args_4)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r13
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rax
  int32_t result; // eax
  float *v14; // rbx
  float *v15; // r15
  float *v16; // r14
  float *v17; // rax
  float *v18; // [rsp+8h] [rbp-F8h]
  const data::ConstValueExcelConfig *config_ptr; // [rsp+48h] [rbp-B8h]
  char v24[176]; // [rsp+50h] [rbp-B0h] BYREF

  v8 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(128LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v8 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned long,float &,float &,float &,float &,float &>;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v14 = std::forward<float &>(args_4);
    v18 = std::forward<float &>(args_3);
    v15 = std::forward<float &>(a6);
    v16 = std::forward<float &>(a5);
    v17 = std::forward<float &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned long,float &,float &,float &,float &,float &>(
               &config_ptr->value,
               value,
               v17,
               v16,
               v15,
               v18,
               v14);
  }
  else
  {
    if ( *(char *)(((v8 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 95) & 7) >= *(_BYTE *)(((v8 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v8 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v8 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v8 + 64),
            (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v12 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v8 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v8 + 32) = v12;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v8 + 32));
    *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v8 + 64));
    result = -1;
  }
  if ( v24 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 000000000E1CFF04-000000000E1D018C
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<bool>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        bool *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::findConstValue<bool>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strVecToNum<0u,bool>(&config_ptr->value, value);
  }
  else
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
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
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

// Line 49: range 000000000E1CEDF6-000000000E1CF07E
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<float>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        float *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::findConstValue<float>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strVecToNum<0u,float>(&config_ptr->value, value);
  }
  else
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
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
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

// Line 49: range 000000000E1CE346-000000000E1CE5CE
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<unsigned int>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int>(&config_ptr->value, value);
  }
  else
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
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
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

// Line 49: range 000000000E1D1CD0-000000000E1D1F58
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<unsigned long>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned __int64 *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned long>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strVecToNum<0u,unsigned long>(&config_ptr->value, value);
  }
  else
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
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
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

// Line 61: range 000000000E1D2A52-000000000E1D2E8B
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<float>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        std::vector<float> *value_vec)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  __int64 v8; // rax
  int32_t result; // eax
  char *v10; // rsi
  int v11; // edx
  char v12; // al
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-128h]
  const std::vector<std::string> *__for_range; // [rsp+30h] [rbp-120h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference val_str; // [rsp+38h] [rbp-118h]
  char v17[272]; // [rsp+40h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 4 t:71 64 8 9 <unknown> 96 8 14 __for_begin:69 128 8 12 __for_end:69 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ConstValueExcelConfigMgr::findConstValue<float>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862726] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    __for_range = &config_ptr->value;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, (unsigned int)name);
    *(std::vector<std::string>::const_iterator *)(v4 + 96) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, (unsigned int)name);
    *(std::vector<std::string>::const_iterator *)(v4 + 128) = std::vector<std::string>::end(__for_range);
    while ( 1 )
    {
      v10 = (char *)(v4 + 128);
      if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 96),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v4 + 128)) )
        break;
      val_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 96));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
      *(float *)v3.m128i_i32 = common::tools::Converter<float>::convertTo(val_str);
      v11 = _mm_cvtsi128_si32(v3);
      v12 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v10) = v12 != 0;
        __asan_report_store4(v4 + 48, v10);
      }
      *(_DWORD *)(v4 + 48) = v11;
      std::vector<float>::push_back(value_vec, (const std::vector<float>::value_type *)(v4 + 48));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v4 + 96));
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      66);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v8 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_store8(v4 + 64, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v4 + 64) = v8;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)(v4 + 64));
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    result = -1;
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 61: range 000000000E1D3246-000000000E1D36D4
int32_t __cdecl ConstValueExcelConfigMgr::findConstValue<std::string>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        std::vector<std::string> *value_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  const data::ConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-148h]
  const std::vector<std::string> *__for_range; // [rsp+30h] [rbp-140h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference val_str; // [rsp+38h] [rbp-138h]
  char v13[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 9 <unknown> 64 8 14 __for_begin:69 96 8 12 __for_end:69 128 32 9 <unknown> 192 32 4 t:71";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::findConstValue<std::string>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    __for_range = &config_ptr->value;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, (unsigned int)name);
    *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, (unsigned int)name);
    *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96)) )
    {
      val_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::tools::Converter<std::string>::convertTo((std::string *)(v3 + 192), val_str);
      std::vector<std::string>::push_back(value_vec, (const std::vector<std::string>::value_type *)(v3 + 192));
      std::string::~string((void *)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
    }
    result = 0;
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      66);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = -1;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 113: range 000000000CDFD116-000000000CDFD165
uint32_t __cdecl ConstValueExcelConfigMgr::getDefaultWorldId(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->default_world_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_world_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->default_world_id_);
  }
  return this->default_world_id_;
};

// Line 140: range 000000000CDFD166-000000000CDFD1B2
uint32_t __cdecl ConstValueExcelConfigMgr::getNextDayClock(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_day_clock_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_day_clock_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_day_clock_);
  }
  return this->next_day_clock_;
};

// Line 166: range 0000000012EAAD90-0000000012EAADE4
uint32_t __cdecl ConstValueExcelConfigMgr::getPlayerMaleAvatarId(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_male_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_male_avatar_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->player_male_avatar_id_);
  }
  return this->player_male_avatar_id_;
};

// Line 201: range 0000000012EAADE6-0000000012EAAE32
uint32_t __cdecl ConstValueExcelConfigMgr::getPlayerFemaleAvatarId(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_female_avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_female_avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->player_female_avatar_id_);
  }
  return this->player_female_avatar_id_;
};

// Line 203: range 0000000013BC96D6-0000000013BC9722
uint32_t __cdecl ConstValueExcelConfigMgr::getDailyTaskNum(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_task_num_);
  }
  return this->daily_task_num_;
};

// Line 207: range 0000000013BC9724-0000000013BC9770
uint32_t __cdecl ConstValueExcelConfigMgr::getDailyTaskPossiblePoolNum(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_possible_pool_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_task_possible_pool_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_task_possible_pool_num_);
  }
  return this->daily_task_possible_pool_num_;
};

// Line 208: range 000000000F00F500-000000000F00F554
uint32_t __cdecl ConstValueExcelConfigMgr::getDailyTaskVarNum(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_var_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_task_var_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_task_var_num_);
  }
  return this->daily_task_var_num_;
};

// Line 231: range 0000000012EAAE34-0000000012EAAE88
uint32_t __cdecl ConstValueExcelConfigMgr::getCoreProudSkillMaxLevel(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->core_proud_skill_max_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->core_proud_skill_max_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->core_proud_skill_max_level_);
  }
  return this->core_proud_skill_max_level_;
};

// Line 232: range 0000000012EAAE8A-0000000012EAAED6
uint32_t __cdecl ConstValueExcelConfigMgr::getInherentProudSkillMaxLevel(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->inherent_proud_skill_max_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inherent_proud_skill_max_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->inherent_proud_skill_max_level_);
  }
  return this->inherent_proud_skill_max_level_;
};

// Line 233: range 0000000012EAAED8-0000000012EAAF2C
uint32_t __cdecl ConstValueExcelConfigMgr::getActiveSkillMaxLevel(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->active_skill_max_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->active_skill_max_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->active_skill_max_level_);
  }
  return this->active_skill_max_level_;
};

// Line 253: range 0000000014736044-000000001473609A
float __cdecl ConstValueExcelConfigMgr::getGachaGuaranteeStartCoef(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_start_coef >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_start_coef >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gacha_guarantee_start_coef);
  }
  return this->gacha_guarantee_start_coef;
};

// Line 254: range 000000001473609C-00000000147360EA
float __cdecl ConstValueExcelConfigMgr::getGachaGuaranteeIncreaseCoef(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_increase_coef >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_guarantee_increase_coef >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gacha_guarantee_increase_coef);
  }
  return this->gacha_guarantee_increase_coef;
};

// Line 292: range 0000000013BC9772-0000000013BC97C6
uint32_t __cdecl ConstValueExcelConfigMgr::getSubfieldDropDailyLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->subfield_drop_daily_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->subfield_drop_daily_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->subfield_drop_daily_limit_);
  }
  return this->subfield_drop_daily_limit_;
};

// Line 295: range 000000000F7763BA-000000000F776406
uint32_t __cdecl ConstValueExcelConfigMgr::getExploreUnlockPoint(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_unlock_point_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_unlock_point_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->explore_unlock_point_);
  }
  return this->explore_unlock_point_;
};

// Line 311: range 000000000CDFD1B4-000000000CDFD200
uint32_t __cdecl ConstValueExcelConfigMgr::getSnowMountainRoutineSpecialTag(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->snow_mountain_routine_special_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snow_mountain_routine_special_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snow_mountain_routine_special_tag_);
  }
  return this->snow_mountain_routine_special_tag_;
};

// Line 351: range 0000000012EAAF2E-0000000012EAAF7A
uint32_t __cdecl ConstValueExcelConfigMgr::getActivityExpeditionContentDuration(
        const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_expedition_content_duration_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_expedition_content_duration_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->activity_expedition_content_duration_);
  }
  return this->activity_expedition_content_duration_;
};

// Line 353: range 000000000CDFD202-000000000CDFD256
uint32_t __cdecl ConstValueExcelConfigMgr::getMuipMailHcoinLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_hcoin_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->muip_mail_hcoin_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->muip_mail_hcoin_limit_);
  }
  return this->muip_mail_hcoin_limit_;
};

// Line 354: range 000000000CDFD258-000000000CDFD2A4
uint32_t __cdecl ConstValueExcelConfigMgr::getMuipMailScoinLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_scoin_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->muip_mail_scoin_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->muip_mail_scoin_limit_);
  }
  return this->muip_mail_scoin_limit_;
};

// Line 356: range 000000000CDFD2A6-000000000CDFD2F2
uint32_t __cdecl ConstValueExcelConfigMgr::getMuipMailEquipLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_equip_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->muip_mail_equip_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->muip_mail_equip_limit_);
  }
  return this->muip_mail_equip_limit_;
};

// Line 357: range 000000000CDFD2F4-000000000CDFD348
uint32_t __cdecl ConstValueExcelConfigMgr::getMuipMailAvatarLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_avatar_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->muip_mail_avatar_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->muip_mail_avatar_limit_);
  }
  return this->muip_mail_avatar_limit_;
};

// Line 385: range 000000000F776408-000000000F776454
uint32_t __cdecl ConstValueExcelConfigMgr::getHomeEditModeCD(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_edit_mode_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_edit_mode_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_edit_mode_cd_);
  }
  return this->home_edit_mode_cd_;
};

// Line 399: range 000000000E1A2614-000000000E1A2668
uint32_t __cdecl ConstValueExcelConfigMgr::getHomePlantBoxMaterialID(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_plant_box_material_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_plant_box_material_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_plant_box_material_id_);
  }
  return this->home_plant_box_material_id_;
};

// Line 400: range 00000000147360EC-0000000014736138
uint32_t __cdecl ConstValueExcelConfigMgr::getHomeSuiteFurnitureID(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->home_suite_furniture_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_suite_furniture_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_suite_furniture_id_);
  }
  return this->home_suite_furniture_id_;
};

// Line 445: range 000000000F776456-000000000F7764A2
uint32_t __cdecl ConstValueExcelConfigMgr::getCustomGadgetPartsMaxNum(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_gadget_parts_max_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->custom_gadget_parts_max_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->custom_gadget_parts_max_num_);
  }
  return this->custom_gadget_parts_max_num_;
};

// Line 460: range 000000000CDFD34A-000000000CDFD396
uint32_t __cdecl ConstValueExcelConfigMgr::getCollectibleMailMaxCheckSendTime(
        const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->collectible_mail_max_check_send_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collectible_mail_max_check_send_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->collectible_mail_max_check_send_time_);
  }
  return this->collectible_mail_max_check_send_time_;
};

// Line 461: range 000000000CDFD398-000000000CDFD3EC
uint32_t __cdecl ConstValueExcelConfigMgr::getCollectibleMailMinCheckExpireDays(
        const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->collectible_mail_min_check_expir_days_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->collectible_mail_min_check_expir_days_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->collectible_mail_min_check_expir_days_);
  }
  return this->collectible_mail_min_check_expir_days_;
};

// Line 486: range 000000000E1A266A-000000000E1A26B6
uint32_t __cdecl ConstValueExcelConfigMgr::getGCGDeckCardLimitSize(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_deck_card_limit_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_deck_card_limit_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_deck_card_limit_size_);
  }
  return this->gcg_deck_card_limit_size_;
};

// Line 487: range 000000000E1A26B8-000000000E1A270C
uint32_t __cdecl ConstValueExcelConfigMgr::getGCGDeckCharacterLimitSize(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_deck_char_limit_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_deck_char_limit_size_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_deck_char_limit_size_);
  }
  return this->gcg_deck_char_limit_size_;
};

// Line 487: range 000000000E1A270D-000000000E1A2717
uint32_t __cdecl ConstValueExcelConfigMgr::getMaxItemCount()
{
  return 8900;
};

// Line 488: range 000000001473613A-0000000014736186
uint32_t __cdecl ConstValueExcelConfigMgr::getGCGCardLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_card_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_card_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_card_limit_);
  }
  return this->gcg_card_limit_;
};

// Line 493: range 000000000CDFD3EE-000000000CDFD43A
uint32_t __cdecl ConstValueExcelConfigMgr::getGCGRoundLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_round_limit_);
  }
  return this->gcg_round_limit_;
};

// Line 494: range 000000000CDFD43C-000000000CDFD490
uint32_t __cdecl ConstValueExcelConfigMgr::getGCGCardProficiencyLimit(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_card_proficiency_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_card_proficiency_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_card_proficiency_limit_);
  }
  return this->gcg_card_proficiency_limit_;
};

// Line 526: range 000000000CDFD492-000000000CDFD4E4
uint32_t __cdecl ConstValueExcelConfigMgr::getTimeOffsetSec(const ConstValueExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->next_day_clock_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next_day_clock_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->next_day_clock_);
  }
  return 3600 * this->next_day_clock_;
};

// Line 531: range 000000000E1A2718-000000000E1A2722
uint32_t __cdecl ConstValueExcelConfigMgr::getMaxItemErrorCount()
{
  return 8000;
};

// Line 532: range 000000000CDFD4E6-000000000CDFD4F9
const std::string *__cdecl ConstValueExcelConfigMgr::getPointCardProductId[abi:cxx11](
        const ConstValueExcelConfigMgr *const this)
{
  return &this->point_card_product_id_;
};

// Line 545: range 0000000014736188-000000001473619B
const std::set<data::MaterialType> *__cdecl ConstValueExcelConfigMgr::getCanNotDestroyMaterialTypeSet(
        const ConstValueExcelConfigMgr *const this)
{
  return &this->can_not_destroy_material_type_set_;
};

// Line 547: range 000000001473619C-00000000147361AF
const std::map<data::GatherSaveType,unsigned int> *__cdecl ConstValueExcelConfigMgr::getGatherRefreshIdMap(
        const ConstValueExcelConfigMgr *const this)
{
  return &this->gather_refresh_id_map_;
};

// Line 549: range 0000000012EAAF7C-0000000012EAAF8F
const std::vector<unsigned int> *__cdecl ConstValueExcelConfigMgr::getActivityExpeditionRewardLevelVec(
        const ConstValueExcelConfigMgr *const this)
{
  return &this->activity_expedition_reward_level_vec_;
};

// Line 550: range 0000000012EAAF90-0000000012EAB061
bool __fastcall ConstValueExcelConfigMgr::isContainsAvatarQualityType(
        const ConstValueExcelConfigMgr *const this,
        data::QualityType quality_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 quality_type:550";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::isContainsAvatarQualityType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quality_type;
  result = common::tools::MiscUtils::isContains<std::map<data::QualityType,float> const,data::QualityType>(
             &this->avatar_upgrade_cost_ratio_map_,
             (const data::QualityType *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 551: range 000000000CDFD4FA-000000000CDFD5CB
bool __fastcall ConstValueExcelConfigMgr::isContainsWeaponRankLevel(
        const ConstValueExcelConfigMgr *const this,
        uint32_t rank_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 rank_level:551";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::isContainsWeaponRankLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = rank_level;
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,float> const,unsigned int>(
             &this->weapon_scoin_ratio_map_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 552: range 00000000147361B0-0000000014736281
bool __fastcall ConstValueExcelConfigMgr::isContainsReliquaryRankLevel(
        const ConstValueExcelConfigMgr *const this,
        uint32_t rank_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 rank_level:552";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::isContainsReliquaryRankLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = rank_level;
  result = common::tools::MiscUtils::isContains<std::map<unsigned int,float> const,unsigned int>(
             &this->reliquary_scoin_ratio_map_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 820: range 000000000E1D55BA-000000000E1D5874
int32_t __fastcall ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned long &,unsigned int &>(
        const ConstValueExcelConfigMgr *const this,
        data::ConstValueType name,
        unsigned int *value,
        unsigned __int64 *a4,
        unsigned int *a5,
        unsigned __int64 *args_0)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  unsigned int *v12; // rbx
  unsigned __int64 *v13; // rax
  unsigned __int64 *v14; // r8
  unsigned int *v15; // r9
  const data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-B8h]
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned long &,unsigned int &>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862723] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    v12 = std::forward<unsigned int &>(a5);
    v13 = std::forward<unsigned long &>(a4);
    result = common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned long &,unsigned int &>(
               &config_ptr->value,
               value,
               v13,
               v12,
               v14,
               v15);
  }
  else
  {
    if ( *(char *)(((v6 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.h",
      "findConstValue",
      54);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v6 + 64),
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v10 = (__int64)data::enumValToStr(name, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v6 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v6 + 32) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v6 + 32));
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 64));
    result = -1;
  }
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
