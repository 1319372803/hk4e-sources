// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/atomicops_internals_x86_gcc.cc

// Line 133: range 000000000C746C70-000000000C746D26
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal32AtomicOps_Internalx86CPUFeaturesE()
{
  bool v0; // r12
  unsigned int v11; // ebp
  int v12; // ebx
  char s1[4]; // [rsp+3h] [rbp-25h] BYREF
  int v14; // [rsp+7h] [rbp-21h]
  int v15; // [rsp+Bh] [rbp-1Dh]
  char v16; // [rsp+Fh] [rbp-19h]

  v0 = 0;
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  _RAX = 0LL;
  v16 = 0;
  __asm { cpuid }
  _RAX = 1LL;
  *(_DWORD *)s1 = _RBX;
  v14 = _RDX;
  v15 = _RCX;
  __asm { cpuid }
  v11 = _RAX;
  v12 = _RDX;
  if ( ((BYTE1(_RAX) ^ 0xF) & 0xF) == 0 && !(strcmp(s1, "AuthenticAMD") | (unsigned __int8)((unsigned int)_RAX >> 20)) )
    v0 = ((v11 >> 12) & 0xF0) + ((unsigned __int8)v11 >> 4) - 32 <= 0x1F;
  google::protobuf::internal::AtomicOps_Internalx86CPUFeatures.has_amd_lock_mb_bug = v0;
  google::protobuf::internal::AtomicOps_Internalx86CPUFeatures.has_sse2 = (v12 & 0x4000000) != 0;
};
