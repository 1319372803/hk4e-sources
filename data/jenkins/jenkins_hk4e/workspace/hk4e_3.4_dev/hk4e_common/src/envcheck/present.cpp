// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/present.cpp

// Line 13: range 000000000CF64E32-000000000CF64EF2
void __cdecl copyKey(const unsigned __int8 *from, unsigned __int8 *to, const unsigned __int8 keyLen)
{
  unsigned __int8 *v3; // rcx
  char v4; // dl
  unsigned __int8 v5; // si
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i < keyLen; ++i )
  {
    v3 = &to[i];
    v4 = *(_BYTE *)(((unsigned __int64)&from[i] >> 3) + 0x7FFF8000);
    if ( v4 != 0 && ((i + (unsigned __int8)from) & 7) >= v4 )
      __asan_report_load1(&from[i]);
    v5 = from[i];
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v3);
    }
    *v3 = v5;
  }
};

// Line 20: range 000000000CF64EF3-000000000CF65317
void __cdecl generateRoundKeys80(const unsigned __int8 *suppliedKey, unsigned __int8 (*keys)[8])
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  char *v4; // rbx
  _DWORD *v5; // r13
  int v6; // edx
  char v7; // cl
  int v8; // r8d
  int v9; // edx
  char v10; // cl
  int v11; // ecx
  int v12; // edi
  char v13; // dl
  int v14; // ecx
  char v15; // dl
  unsigned __int8 i; // [rsp+1Eh] [rbp-82h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-81h]
  char v18[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 10 6 key:22 64 10 9 newKey:23";
  *(_QWORD *)(v2 + 16) = generateRoundKeys80;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020800;
  v5[536862722] = -202178048;
  copyKey(suppliedKey, (unsigned __int8 *)(v2 + 32), 0xAu);
  copyKey((const unsigned __int8 *)(v2 + 32), (unsigned __int8 *)keys, 8u);
  for ( i = 1; i <= 0x1Fu; ++i )
  {
    for ( j = 0; j <= 9u; ++j )
    {
      v6 = (j + 7) % 10;
      v7 = *(_BYTE *)(((v2 + 32 + v6) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)((v2 + 32 + v6) & 7) >= v7 )
        __asan_report_load1(v2 + 32 + v6);
      v8 = 32 * (unsigned __int8)v4[v6 - 64];
      v9 = (j + 8) % 10;
      v10 = *(_BYTE *)(((v2 + 32 + v9) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((v2 + 32 + v9) & 7) >= v10 )
        __asan_report_load1(v2 + 32 + v9);
      v11 = j;
      v12 = v8 | ((int)(unsigned __int8)v4[v9 - 64] >> 3);
      v13 = *(_BYTE *)(((v2 + 64 + j) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)((v2 + 64 + j) & 7) >= v13 )
      {
        LOBYTE(v12) = v2 + 64 + j;
        __asan_report_store1(v2 + 64 + j);
      }
      v4[v11 - 32] = v12;
    }
    copyKey((const unsigned __int8 *)(v2 + 64), (unsigned __int8 *)(v2 + 32), 0xAu);
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 32);
    v14 = (int)*(unsigned __int8 *)(v2 + 32) >> 4;
    v15 = *(_BYTE *)(((unsigned __int64)&sBox[v14] >> 3) + 0x7FFF8000);
    if ( v15 != 0 && ((unsigned __int8)&sBox[v14] & 7) >= v15 )
      __asan_report_load1(&sBox[v14]);
    *(_BYTE *)(v2 + 32) = (16 * sBox[v14]) | *(_BYTE *)(v2 + 32) & 0xF;
    if ( *(char *)(((v2 + 40) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 40);
    *(_BYTE *)(v2 + 40) ^= i << 7;
    if ( *(_BYTE *)(((v2 + 39) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 39) & 7) >= *(_BYTE *)(((v2 + 39) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 39);
    }
    *(_BYTE *)(v2 + 39) ^= (int)i >> 1;
    copyKey((const unsigned __int8 *)(v2 + 32), &(*keys)[8 * i], 8u);
  }
  if ( v18 == (char *)v2 )
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

// Line 46: range 000000000CF65318-000000000CF65768
void __cdecl generateRoundKeys128(const unsigned __int8 *suppliedKey, unsigned __int8 (*keys)[8])
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  char *v4; // rbx
  _DWORD *v5; // r13
  int v6; // ecx
  char v7; // dl
  int v8; // r8d
  int v9; // ecx
  char v10; // dl
  int v11; // eax
  int v12; // ecx
  char v13; // di
  char v14; // dl
  int v15; // ecx
  char v16; // dl
  char v17; // r8
  int v18; // ecx
  char v19; // dl
  unsigned __int8 i; // [rsp+1Eh] [rbp-82h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-81h]
  char v22[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 key:48 64 16 9 newKey:49";
  *(_QWORD *)(v2 + 16) = generateRoundKeys128;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  copyKey(suppliedKey, (unsigned __int8 *)(v2 + 32), 0x10u);
  copyKey((const unsigned __int8 *)(v2 + 32), (unsigned __int8 *)keys, 8u);
  for ( i = 1; i <= 0x1Fu; ++i )
  {
    for ( j = 0; j <= 0xFu; ++j )
    {
      v6 = (j + 7) % 16;
      v7 = *(_BYTE *)(((v2 + 32 + v6) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && (char)((v2 + 32 + v6) & 7) >= v7 )
        __asan_report_load1(v2 + 32 + v6);
      v8 = 32 * (unsigned __int8)v4[v6 - 64];
      v9 = (j + 8) % 16;
      v10 = *(_BYTE *)(((v2 + 32 + v9) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)((v2 + 32 + v9) & 7) >= v10 )
        __asan_report_load1(v2 + 32 + v9);
      v11 = v8 | ((int)(unsigned __int8)v4[v9 - 64] >> 3);
      v12 = j;
      v13 = v11;
      v14 = *(_BYTE *)(((v2 + 64 + j) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((v2 + 64 + j) & 7) >= v14 )
      {
        v13 = v2 + 64 + j;
        __asan_report_store1(v2 + 64 + j);
      }
      v4[v12 - 32] = v13;
    }
    copyKey((const unsigned __int8 *)(v2 + 64), (unsigned __int8 *)(v2 + 32), 0x10u);
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 32);
    v15 = (int)*(unsigned __int8 *)(v2 + 32) >> 4;
    v16 = *(_BYTE *)(((unsigned __int64)&sBox[v15] >> 3) + 0x7FFF8000);
    if ( v16 != 0 && ((unsigned __int8)&sBox[v15] & 7) >= v16 )
      __asan_report_load1(&sBox[v15]);
    v17 = 16 * sBox[v15];
    v18 = *(_BYTE *)(v2 + 32) & 0xF;
    v19 = *(_BYTE *)(((unsigned __int64)&sBox[*(_BYTE *)(v2 + 32) & 0xF] >> 3) + 0x7FFF8000);
    if ( v19 != 0 && ((unsigned __int8)&sBox[*(_BYTE *)(v2 + 32) & 0xF] & 7) >= v19 )
      __asan_report_load1(&sBox[*(_BYTE *)(v2 + 32) & 0xF]);
    *(_BYTE *)(v2 + 32) = v17 | sBox[v18];
    if ( *(char *)(((v2 + 40) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v2 + 40);
    *(_BYTE *)(v2 + 40) ^= i << 6;
    if ( *(_BYTE *)(((v2 + 39) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 39) & 7) >= *(_BYTE *)(((v2 + 39) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2 + 39);
    }
    *(_BYTE *)(v2 + 39) ^= (int)i >> 2;
    copyKey((const unsigned __int8 *)(v2 + 32), &(*keys)[8 * i], 8u);
  }
  if ( v22 == (char *)v2 )
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

// Line 71: range 000000000CF65769-000000000CF65865
void __cdecl addRoundKey(unsigned __int8 *block, unsigned __int8 *roundKey)
{
  unsigned __int64 v2; // rcx
  char v3; // di
  unsigned __int64 v4; // rcx
  char v5; // si
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // di
  unsigned __int8 i; // [rsp+1Fh] [rbp-1h]

  for ( i = 0; i <= 7u; ++i )
  {
    v2 = (unsigned __int64)&block[i];
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&block[i]);
    }
    v3 = *(_BYTE *)v2;
    v4 = (unsigned __int64)&roundKey[i];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)roundKey) & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      v3 = i + (_BYTE)roundKey;
      __asan_report_load1(&roundKey[i]);
    }
    v5 = *(_BYTE *)v4;
    v6 = (unsigned __int64)&block[i];
    v7 = v5 ^ v3;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      v7 = i + (_BYTE)block;
      __asan_report_store1(&block[i]);
    }
    *(_BYTE *)v6 = v7;
  }
};

// Line 78: range 000000000CF65866-000000000CF65ADD
void __cdecl pLayer(unsigned __int8 *block)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  int v6; // r8d
  int v7; // ecx
  char v8; // dl
  int v9; // esi
  unsigned __int64 v10; // rcx
  unsigned __int8 v11; // di
  unsigned __int8 i; // [rsp+1Ch] [rbp-64h]
  unsigned __int8 j; // [rsp+1Dh] [rbp-63h]
  unsigned __int8 indexVal; // [rsp+1Eh] [rbp-62h]
  char v16[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 10 initial:80";
  *(_QWORD *)(v1 + 16) = pLayer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  copyKey(block, (unsigned __int8 *)(v1 + 32), 8u);
  for ( i = 0; i <= 7u; ++i )
  {
    v4 = (unsigned __int64)&block[i];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&block[i]);
    }
    *(_BYTE *)v4 = 0;
    for ( j = 0; j <= 7u; ++j )
    {
      indexVal = 4 * (i & 1) - ((int)j >> 1) + 3;
      v5 = (unsigned __int64)&block[i];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[i]);
      }
      v6 = *(unsigned __int8 *)v5;
      v7 = indexVal;
      v8 = *(_BYTE *)(((v1 + 32 + indexVal) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && (char)((v1 + 32 + indexVal) & 7) >= v8 )
        __asan_report_load1(v1 + 32 + indexVal);
      v9 = ((((unsigned __int8)(8 >> ((int)i >> 1) << ((4 * j) & 4)) & *(_BYTE *)(v1 + 64 + v7 - 32)) != 0) << j) | v6;
      v10 = (unsigned __int64)&block[i];
      v11 = v9;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        v11 = i + (_BYTE)block;
        __asan_report_store1(&block[i]);
      }
      *(_BYTE *)v10 = v11;
    }
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 000000000CF65ADE-000000000CF65D5E
void __cdecl pLayerInverse(unsigned __int8 *block)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  int v6; // r8d
  int v7; // ecx
  char v8; // dl
  int v9; // esi
  unsigned __int64 v10; // rcx
  unsigned __int8 v11; // di
  unsigned __int8 i; // [rsp+1Ch] [rbp-64h]
  unsigned __int8 j; // [rsp+1Dh] [rbp-63h]
  unsigned __int8 indexVal; // [rsp+1Eh] [rbp-62h]
  char v16[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 10 initial:94";
  *(_QWORD *)(v1 + 16) = pLayerInverse;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  copyKey(block, (unsigned __int8 *)(v1 + 32), 8u);
  for ( i = 0; i <= 7u; ++i )
  {
    v4 = (unsigned __int64)&block[i];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&block[i]);
    }
    *(_BYTE *)v4 = 0;
    for ( j = 0; j <= 7u; ++j )
    {
      indexVal = 7 - ((i <= 3u) + ((2 * j) & 6));
      v5 = (unsigned __int64)&block[i];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[i]);
      }
      v6 = *(unsigned __int8 *)v5;
      v7 = indexVal;
      v8 = *(_BYTE *)(((v1 + 32 + indexVal) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && (char)((v1 + 32 + indexVal) & 7) >= v8 )
        __asan_report_load1(v1 + 32 + indexVal);
      v9 = (((((int)*(unsigned __int8 *)(v1 + 64 + v7 - 32) >> (7 - ((j <= 3u) + ((2 * i) & 6)))) & 1) != 0) << j) | v6;
      v10 = (unsigned __int64)&block[i];
      v11 = v9;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)block) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        v11 = i + (_BYTE)block;
        __asan_report_store1(&block[i]);
      }
      *(_BYTE *)v10 = v11;
    }
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 106: range 000000000CF65D5F-000000000CF660CE
void __cdecl present80_encryptBlock(unsigned __int8 *block, const unsigned __int8 *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // ecx
  char v7; // dl
  char v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // ecx
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 i; // [rsp+1Eh] [rbp-182h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-181h]
  char v18[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 256 13 roundKeys:107";
  *(_QWORD *)(v2 + 16) = present80_encryptBlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  generateRoundKeys80(key, (unsigned __int8 (*)[8])(v2 + 32));
  for ( i = 0; i <= 0x1Eu; ++i )
  {
    addRoundKey(block, (unsigned __int8 *)(v2 + 32 + 8LL * i));
    for ( j = 0; j <= 7u; ++j )
    {
      v5 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v6 = (int)*(unsigned __int8 *)v5 >> 4;
      v7 = *(_BYTE *)(((unsigned __int64)&sBox[v6] >> 3) + 0x7FFF8000);
      if ( v7 != 0 && ((unsigned __int8)&sBox[v6] & 7) >= v7 )
        __asan_report_load1(&sBox[v6]);
      v8 = 16 * sBox[v6];
      v9 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v10 = *(_BYTE *)v9 & 0xF;
      v11 = *(_BYTE *)(((unsigned __int64)&sBox[v10] >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)&sBox[v10] & 7) >= v11 )
        __asan_report_load1(&sBox[v10]);
      v12 = sBox[v10] | v8;
      v13 = (unsigned __int64)&block[j];
      v14 = v12;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v14 = j + (_BYTE)block;
        __asan_report_store1(&block[j]);
      }
      *(_BYTE *)v13 = v14;
    }
    pLayer(block);
  }
  addRoundKey(block, (unsigned __int8 *)(v2 + 280));
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 120: range 000000000CF660CF-000000000CF66437
void __cdecl present80_decryptBlock(unsigned __int8 *block, const unsigned __int8 *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // ecx
  char v7; // dl
  char v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // ecx
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 i; // [rsp+1Eh] [rbp-182h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-181h]
  char v18[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 256 13 roundKeys:121";
  *(_QWORD *)(v2 + 16) = present80_decryptBlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  generateRoundKeys80(key, (unsigned __int8 (*)[8])(v2 + 32));
  for ( i = 31; i; --i )
  {
    addRoundKey(block, (unsigned __int8 *)(v2 + 32 + 8LL * i));
    pLayerInverse(block);
    for ( j = 0; j <= 7u; ++j )
    {
      v5 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v6 = (int)*(unsigned __int8 *)v5 >> 4;
      v7 = *(_BYTE *)(((unsigned __int64)&sBoxInverse[v6] >> 3) + 0x7FFF8000);
      if ( v7 != 0 && ((unsigned __int8)&sBoxInverse[v6] & 7) >= v7 )
        __asan_report_load1(&sBoxInverse[v6]);
      v8 = 16 * sBoxInverse[v6];
      v9 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v10 = *(_BYTE *)v9 & 0xF;
      v11 = *(_BYTE *)(((unsigned __int64)&sBoxInverse[v10] >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)&sBoxInverse[v10] & 7) >= v11 )
        __asan_report_load1(&sBoxInverse[v10]);
      v12 = sBoxInverse[v10] | v8;
      v13 = (unsigned __int64)&block[j];
      v14 = v12;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v14 = j + (_BYTE)block;
        __asan_report_store1(&block[j]);
      }
      *(_BYTE *)v13 = v14;
    }
  }
  addRoundKey(block, (unsigned __int8 *)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 134: range 000000000CF66438-000000000CF667A7
void __cdecl present128_encryptBlock(unsigned __int8 *block, const unsigned __int8 *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // ecx
  char v7; // dl
  char v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // ecx
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 i; // [rsp+1Eh] [rbp-182h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-181h]
  char v18[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 256 13 roundKeys:135";
  *(_QWORD *)(v2 + 16) = present128_encryptBlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  generateRoundKeys128(key, (unsigned __int8 (*)[8])(v2 + 32));
  for ( i = 0; i <= 0x1Eu; ++i )
  {
    addRoundKey(block, (unsigned __int8 *)(v2 + 32 + 8LL * i));
    for ( j = 0; j <= 7u; ++j )
    {
      v5 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v6 = (int)*(unsigned __int8 *)v5 >> 4;
      v7 = *(_BYTE *)(((unsigned __int64)&sBox[v6] >> 3) + 0x7FFF8000);
      if ( v7 != 0 && ((unsigned __int8)&sBox[v6] & 7) >= v7 )
        __asan_report_load1(&sBox[v6]);
      v8 = 16 * sBox[v6];
      v9 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v10 = *(_BYTE *)v9 & 0xF;
      v11 = *(_BYTE *)(((unsigned __int64)&sBox[v10] >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)&sBox[v10] & 7) >= v11 )
        __asan_report_load1(&sBox[v10]);
      v12 = sBox[v10] | v8;
      v13 = (unsigned __int64)&block[j];
      v14 = v12;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v14 = j + (_BYTE)block;
        __asan_report_store1(&block[j]);
      }
      *(_BYTE *)v13 = v14;
    }
    pLayer(block);
  }
  addRoundKey(block, (unsigned __int8 *)(v2 + 280));
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 148: range 000000000CF667A8-000000000CF66B10
void __cdecl present128_decryptBlock(unsigned __int8 *block, const unsigned __int8 *key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // ecx
  char v7; // dl
  char v8; // r8
  unsigned __int64 v9; // rcx
  int v10; // ecx
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // di
  unsigned __int8 i; // [rsp+1Eh] [rbp-182h]
  unsigned __int8 j; // [rsp+1Fh] [rbp-181h]
  char v18[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 256 13 roundKeys:149";
  *(_QWORD *)(v2 + 16) = present128_decryptBlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  generateRoundKeys128(key, (unsigned __int8 (*)[8])(v2 + 32));
  for ( i = 31; i; --i )
  {
    addRoundKey(block, (unsigned __int8 *)(v2 + 32 + 8LL * i));
    pLayerInverse(block);
    for ( j = 0; j <= 7u; ++j )
    {
      v5 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v6 = (int)*(unsigned __int8 *)v5 >> 4;
      v7 = *(_BYTE *)(((unsigned __int64)&sBoxInverse[v6] >> 3) + 0x7FFF8000);
      if ( v7 != 0 && ((unsigned __int8)&sBoxInverse[v6] & 7) >= v7 )
        __asan_report_load1(&sBoxInverse[v6]);
      v8 = 16 * sBoxInverse[v6];
      v9 = (unsigned __int64)&block[j];
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&block[j]);
      }
      v10 = *(_BYTE *)v9 & 0xF;
      v11 = *(_BYTE *)(((unsigned __int64)&sBoxInverse[v10] >> 3) + 0x7FFF8000);
      if ( v11 != 0 && ((unsigned __int8)&sBoxInverse[v10] & 7) >= v11 )
        __asan_report_load1(&sBoxInverse[v10]);
      v12 = sBoxInverse[v10] | v8;
      v13 = (unsigned __int64)&block[j];
      v14 = v12;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
        && ((j + (unsigned __int8)block) & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        v14 = j + (_BYTE)block;
        __asan_report_store1(&block[j]);
      }
      *(_BYTE *)v13 = v14;
    }
  }
  addRoundKey(block, (unsigned __int8 *)(v2 + 32));
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};
