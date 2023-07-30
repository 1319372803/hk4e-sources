// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/app_id_utils.h

// Line 71: range 000000000C63F49D-000000000C63F58F
__int64 __fastcall common::tools::AppIdUtils::getAppIdData(uint32_t app_id)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // edx
  char v6[80]; // [rsp+20h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 9 app_id:71";
  *(_QWORD *)(v1 + 16) = common::tools::AppIdUtils::getAppIdData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = app_id;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0
    && (char)(((v1 + 32) & 7) + 3) >= *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(v1 + 32);
  }
  v4 = *(_DWORD *)(v1 + 32);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(v3 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)(v3 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 74: range 000000000C63F5C7-000000000C63F805
std::string *__cdecl common::tools::AppIdUtils::getAppIdStr[abi:cxx11](std::string *retstr, uint32_t app_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  char v12[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 app_id_data:79 64 16 5 os:80";
  *(_QWORD *)(v2 + 16) = common::tools::AppIdUtils::getAppIdStr[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = common::tools::AppIdUtils::getAppIdData(app_id);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
         *(_WORD *)(v2 + 48) & 0x3FF);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, ".");
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, (*(_BYTE *)(v2 + 49) >> 2) & 0xF);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ".");
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         v8,
         (*(_DWORD *)(v2 + 48) >> 14) & 0x3FFF);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ".");
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, *(_BYTE *)(v2 + 51) >> 4);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  if ( v12 == (char *)v2 )
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
  return retstr;
};
