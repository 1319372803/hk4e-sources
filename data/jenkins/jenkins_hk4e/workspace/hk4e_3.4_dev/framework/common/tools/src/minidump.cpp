// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/minidump.cpp

// Line 81: range 0000000019B49962-0000000019B49C4C
int32_t __cdecl common::tools::initMiniDump()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // r12
  int v2; // ebp
  __int64 v4; // rax
  int *v5; // rax
  char v6; // cl
  int *v7; // rax
  char v8; // cl
  int *v9; // rax
  char v10; // cl
  _BYTE v11[312]; // [rsp+0h] [rbp-138h] BYREF

  v0 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v0 = v4;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 152 6 act:82";
  *(_QWORD *)(v0 + 16) = common::tools::initMiniDump;
  v1 = (_DWORD *)(v0 >> 3);
  v1[536862720] = -235802127;
  v1[536862725] = -218103808;
  v1[536862726] = -202116109;
  v1[536862727] = -202116109;
  memset((void *)(v0 + 40), 0, 0x90uLL);
  *(_QWORD *)(v0 + 32) = common::tools::createMiniDump;
  sigemptyset((sigset_t *)(v0 + 40));
  *(_DWORD *)(v0 + 168) = (_DWORD)&loc_10000004;
  v2 = sigaction(11, (const struct sigaction *)(v0 + 32), 0LL);
  if ( v2 )
  {
    v5 = __errno_location();
    v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v5 & 7) + 3) < v6 || !v6 )
    {
      common::milog::MiLog::writeLog(
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "%s %s %d * failed to install minidump handle for SIGSEGV. error: %d",
        "src/minidump.cpp",
        "initMiniDump",
        92LL,
        (unsigned int)*v5);
      goto LABEL_5;
    }
    __asan_report_load4(v5);
  }
  else
  {
    v2 = sigaction(8, (const struct sigaction *)(v0 + 32), 0LL);
    if ( !v2 )
    {
      v2 = sigaction(7, (const struct sigaction *)(v0 + 32), 0LL);
      if ( !v2 )
        goto LABEL_5;
      goto LABEL_18;
    }
  }
  v7 = __errno_location();
  v8 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v7 & 7) + 3) < v8 || !v8 )
  {
    common::milog::MiLog::writeLog(
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "%s %s %d * failed to install minidump handle for SIGFPE. error: %d",
      "src/minidump.cpp",
      "initMiniDump",
      98LL,
      (unsigned int)*v7);
    goto LABEL_5;
  }
  __asan_report_load4(v7);
LABEL_18:
  v9 = __errno_location();
  v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(v9);
    goto LABEL_22;
  }
  common::milog::MiLog::writeLog(
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "%s %s %d * failed to install minidump handle for SIGBUS. error: %d",
    "src/minidump.cpp",
    "initMiniDump",
    104LL,
    (unsigned int)*v9);
LABEL_5:
  if ( v11 != (_BYTE *)v0 )
  {
LABEL_22:
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    return v2;
  }
  *(_DWORD *)((v0 >> 3) + 0x7FFF8000) = 0;
  *(_QWORD *)((v0 >> 3) + 0x7FFF8014) = 0LL;
  *(_DWORD *)((v0 >> 3) + 0x7FFF801C) = 0;
  return v2;
};

// Line 109: range 0000000019B49C51-0000000019B49C68
void __cdecl GLOBAL__sub_I_minidump_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 109: range 0000000019B49916-0000000019B49960
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/minidump.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    }
    __asan_after_dynamic_init();
  }
};
