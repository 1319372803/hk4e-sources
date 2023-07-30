// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/remove_duplicates.h

// Line 4: range 000000000CFA8C5B-000000000CFA8F1D
__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __fastcall remove_duplicates_using_copy_internal<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>(
        __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > first,
        __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > last,
        std::less<int> pred,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > result; // rax
  const int *v11; // r14
  const int *v12; // rax
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >::reference v13; // rax
  int *v14; // rdx
  int v15; // r14d
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >::reference v16; // rax
  _DWORD *v17; // rdx
  char v18[240]; // [rsp+10h] [rbp-F0h] BYREF

  v7 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 48 1 6 pred:4 64 8 8 result:6 96 8 11 previous:12 128 8 7 first:4 160 8 6 last:4";
  *(_QWORD *)(v7 + 16) = remove_duplicates_using_copy_internal<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -202116352;
  *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 128) = first;
  *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160) = last;
  *(_BYTE *)(v7 + 48) = a7;
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 128);
  if ( __gnu_cxx::operator==<int *,std::vector<int,stl_allocator<int,16>>>(
         (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 128),
         (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160)) )
  {
    result._M_current = *(int **)(v7 + 64);
  }
  else
  {
    *(_QWORD *)(v7 + 96) = *(_QWORD *)(v7 + 128);
    __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++(
      (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 128),
      0);
    __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++(
      (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 64),
      0);
    while ( __gnu_cxx::operator!=<int *,std::vector<int,stl_allocator<int,16>>>(
              (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 128),
              (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160)) )
    {
      v11 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 128));
      v12 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 96));
      if ( std::less<int>::operator()((const std::less<int> *const)(v7 + 48), v12, v11) )
      {
        v13 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 128));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 64));
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v16);
        }
        *v17 = v15;
        __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++((__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 64));
      }
      __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++((__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 128));
      __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++((__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 96));
    }
    result._M_current = *(int **)(v7 + 64);
  }
  if ( v18 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 32: range 000000000CF4C539-000000000CF4C757
__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > __fastcall remove_duplicates<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>(
        __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > first,
        __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > last,
        std::less<int> pred,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > result; // rax
  const int *v11; // r14
  const int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16[240]; // [rsp+10h] [rbp-F0h] BYREF

  v7 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 48 1 7 pred:32 64 8 11 previous:38 96 8 4 i:39 128 8 8 first:32 160 8 7 last:32";
  *(_QWORD *)(v7 + 16) = remove_duplicates<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -202116352;
  *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 128) = first;
  *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160) = last;
  *(_BYTE *)(v7 + 48) = a7;
  if ( __gnu_cxx::operator==<int *,std::vector<int,stl_allocator<int,16>>>(
         (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 128),
         (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160)) )
  {
    result._M_current = *(int **)(v7 + 160);
  }
  else
  {
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 128);
    *(_QWORD *)(v7 + 96) = *(_QWORD *)(v7 + 128);
    __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++(
      (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 96),
      0);
    while ( __gnu_cxx::operator!=<int *,std::vector<int,stl_allocator<int,16>>>(
              (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 96),
              (const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160)) )
    {
      v11 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 96));
      v12 = __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator*((const __gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 64));
      if ( !std::less<int>::operator()((const std::less<int> *const)(v7 + 48), v12, v11) )
      {
        result._M_current = remove_duplicates_using_copy_internal<__gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>,std::less<int>>(
                              *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 64),
                              *(__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *)(v7 + 160),
                              (std::less<int>)*(_QWORD *)(v7 + 160),
                              v13,
                              v14,
                              v15,
                              (char)last._M_current)._M_current;
        goto LABEL_12;
      }
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 96);
      __gnu_cxx::__normal_iterator<int *,std::vector<int,stl_allocator<int,16>>>::operator++(
        (__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > > *const)(v7 + 96),
        0);
    }
    result._M_current = *(int **)(v7 + 160);
  }
LABEL_12:
  if ( v16 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
