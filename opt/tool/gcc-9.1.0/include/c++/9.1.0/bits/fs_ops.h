// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/fs_ops.h

// Line 167: range 000000000CE39825-000000000CE398EA
// local variable allocation has failed, the output may be wrong!
bool __fastcall std::filesystem::is_directory(std::filesystem::file_status __s)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 __s:166";
  *(_QWORD *)(v1 + 16) = std::filesystem::is_directory;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::filesystem::file_status *)(v1 + 32) = __s;
  result = std::filesystem::file_status::type((const std::filesystem::file_status *const)(v1 + 32)) == directory;
  if ( v5 == (char *)v1 )
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

// Line 171: range 000000000CE398EB-000000000CE3990C
// local variable allocation has failed, the output may be wrong!
bool __cdecl std::filesystem::is_directory(const std::filesystem::__cxx11::path *__p)
{
  const std::filesystem::__cxx11::path *v1; // rsi
  std::filesystem::file_status v2; // rdi OVERLAPPED

  v2 = (std::filesystem::file_status)std::filesystem::status((std::filesystem *)__p, v1);
  return std::filesystem::is_directory(v2);
};

// Line 209: range 000000000F77804A-000000000F77810F
// local variable allocation has failed, the output may be wrong!
bool __fastcall std::filesystem::is_regular_file(std::filesystem::file_status __s)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 __s:208";
  *(_QWORD *)(v1 + 16) = std::filesystem::is_regular_file;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::filesystem::file_status *)(v1 + 32) = __s;
  result = std::filesystem::file_status::type((const std::filesystem::file_status *const)(v1 + 32)) == regular;
  if ( v5 == (char *)v1 )
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

// Line 213: range 000000000F778110-000000000F778131
// local variable allocation has failed, the output may be wrong!
bool __cdecl std::filesystem::is_regular_file(const std::filesystem::__cxx11::path *__p)
{
  const std::filesystem::__cxx11::path *v1; // rsi
  std::filesystem::file_status v2; // rdi OVERLAPPED

  v2 = (std::filesystem::file_status)std::filesystem::status((std::filesystem *)__p, v1);
  return std::filesystem::is_regular_file(v2);
};
