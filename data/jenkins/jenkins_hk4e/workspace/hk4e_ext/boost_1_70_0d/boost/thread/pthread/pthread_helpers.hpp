// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/pthread_helpers.hpp

// Line 19: range 000000000BEFD0F4-000000000BEFD1F7
int __cdecl boost::pthread::cond_init(pthread_cond_t *cond)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  int res; // [rsp+1Ch] [rbp-64h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 attr:22";
  *(_QWORD *)(v1 + 16) = boost::pthread::cond_init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  res = pthread_condattr_init((pthread_condattr_t *)(v1 + 32));
  if ( !res )
  {
    pthread_condattr_setclock((pthread_condattr_t *)(v1 + 32), 1);
    res = pthread_cond_init(cond, (const pthread_condattr_t *)(v1 + 32));
    pthread_condattr_destroy((pthread_condattr_t *)(v1 + 32));
  }
  result = res;
  if ( v6 == (char *)v1 )
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
