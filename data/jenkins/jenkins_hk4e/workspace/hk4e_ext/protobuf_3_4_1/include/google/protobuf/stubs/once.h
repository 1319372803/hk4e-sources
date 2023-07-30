// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/once.h

// Line 125: range 00000000165A8FF3-00000000165A914A
void __cdecl google::protobuf::GoogleOnceInit(google::protobuf::ProtobufOnceType *once, void (*init_func)(void))
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 func:127";
  *(_QWORD *)(v2 + 16) = google::protobuf::GoogleOnceInit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( google::protobuf::internal::Acquire_Load(once) != 2 )
  {
    google::protobuf::internal::FunctionClosure0::FunctionClosure0(
      (google::protobuf::internal::FunctionClosure0 *const)(v2 + 32),
      init_func,
      0);
    google::protobuf::GoogleOnceInitImpl(once, (google::protobuf::Closure *)(v2 + 32));
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
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
};
