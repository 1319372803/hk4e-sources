// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/hash.h

// Line 350: range 000000000C615398-000000000C61541B
size_t __cdecl google::protobuf::hash<char const*>::operator()(
        const google::protobuf::hash<char const*> *const this,
        const char *str)
{
  __int64 result; // [rsp+18h] [rbp-8h]

  for ( result = 0LL; ; result = 5 * result + *str++ )
  {
    if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)str & 7) >= *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(str);
    }
    if ( !*str )
      break;
  }
  return result;
};

// Line 399: range 000000000C61541C-000000000C6154F1
size_t __cdecl google::protobuf::hash<std::string>::operator()(
        const google::protobuf::hash<std::string > *const this,
        const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const char *v5; // rax
  size_t result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::hash<std::string>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  v5 = (const char *)std::string::c_str(key);
  result = google::protobuf::hash<char const*>::operator()(
             (const google::protobuf::hash<char const*> *const)(v2 + 32),
             v5);
  if ( v7 == (char *)v2 )
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
