// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/camellia.cpp

// Line 14: range 000000000CF6F052-000000000CF6FBD6
void __cdecl Camellia_Ekeygen(const int n, const Byte *k, Byte *e)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r12
  unsigned __int64 v7; // rcx
  char v8; // cl
  char v9; // dl
  char v10; // dl
  unsigned __int64 v11; // rcx
  char v12; // cl
  char v13; // dl
  unsigned __int64 v14; // rcx
  char v15; // cl
  char v16; // dl
  unsigned __int64 v17; // rcx
  char v18; // cl
  char v19; // dl
  Word *v20; // rax
  char v21; // cl
  int v22; // esi
  char v23; // cl
  Word *v24; // rax
  int v25; // esi
  char v26; // cl
  const int *v27; // rdi
  int v28; // esi
  char v29; // cl
  Word *v30; // rax
  char v31; // cl
  int v32; // esi
  char v33; // cl
  Word *v34; // rax
  int v35; // esi
  char v36; // cl
  const int *v37; // rdi
  int v38; // esi
  char v39; // cl
  int i; // [rsp+2Ch] [rbp-184h]
  int ia; // [rsp+2Ch] [rbp-184h]
  int ib; // [rsp+2Ch] [rbp-184h]
  int ic; // [rsp+2Ch] [rbp-184h]
  int id; // [rsp+2Ch] [rbp-184h]
  int ie; // [rsp+2Ch] [rbp-184h]
  int ig; // [rsp+2Ch] [rbp-184h]
  char v48[384]; // [rsp+30h] [rbp-180h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 352);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 64 4 t:15 128 160 4 u:16";
  *(_QWORD *)(v3 + 16) = Camellia_Ekeygen;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862723] = -218959118;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  switch ( n )
  {
    case 128:
      for ( i = 0; i <= 15; ++i )
      {
        v7 = (unsigned __int64)&k[i];
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
          && ((i + (unsigned __int8)k) & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&k[i]);
        }
        v8 = *(_BYTE *)v7;
        v9 = *(_BYTE *)(((v3 + 32 + i) >> 3) + 0x7FFF8000);
        if ( v9 != 0 && (char)((v3 + 32 + i) & 7) >= v9 )
          __asan_report_store1(v3 + 32 + i);
        v5[i - 320] = v8;
      }
      for ( ia = 16; ia <= 31; ++ia )
      {
        v10 = *(_BYTE *)(((v3 + 32 + ia) >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)((v3 + 32 + ia) & 7) >= v10 )
          __asan_report_store1(v3 + 32 + ia);
        v5[ia - 320] = 0;
      }
      break;
    case 192:
      for ( ib = 0; ib <= 23; ++ib )
      {
        v11 = (unsigned __int64)&k[ib];
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
          && ((ib + (unsigned __int8)k) & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&k[ib]);
        }
        v12 = *(_BYTE *)v11;
        v13 = *(_BYTE *)(((v3 + 32 + ib) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)((v3 + 32 + ib) & 7) >= v13 )
          __asan_report_store1(v3 + 32 + ib);
        v5[ib - 320] = v12;
      }
      for ( ic = 24; ic <= 31; ++ic )
      {
        v14 = (unsigned __int64)&k[ic - 8];
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
          && ((ic - 8 + (unsigned __int8)k) & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&k[ic - 8]);
        }
        v15 = ~*(_BYTE *)v14;
        v16 = *(_BYTE *)(((v3 + 32 + ic) >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)((v3 + 32 + ic) & 7) >= v16 )
          __asan_report_store1(v3 + 32 + ic);
        v5[ic - 320] = v15;
      }
      break;
    case 256:
      for ( id = 0; id <= 31; ++id )
      {
        v17 = (unsigned __int64)&k[id];
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
          && ((id + (unsigned __int8)k) & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&k[id]);
        }
        v18 = *(_BYTE *)v17;
        v19 = *(_BYTE *)(((v3 + 32 + id) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && (char)((v3 + 32 + id) & 7) >= v19 )
          __asan_report_store1(v3 + 32 + id);
        v5[id - 320] = v18;
      }
      break;
  }
  XorBlock((const Byte *)(v3 + 32), (const Byte *)(v3 + 48), (Byte *)(v3 + 64));
  Camellia_Feistel((const Byte *)(v3 + 64), SIGMA, (Byte *)(v3 + 72));
  Camellia_Feistel((const Byte *)(v3 + 72), &SIGMA[8], (Byte *)(v3 + 64));
  XorBlock((const Byte *)(v3 + 64), (const Byte *)(v3 + 32), (Byte *)(v3 + 64));
  Camellia_Feistel((const Byte *)(v3 + 64), &SIGMA[16], (Byte *)(v3 + 72));
  Camellia_Feistel((const Byte *)(v3 + 72), &SIGMA[24], (Byte *)(v3 + 64));
  ByteWord((const Byte *)(v3 + 32), (Word *)(v3 + 128));
  ByteWord((const Byte *)(v3 + 64), (Word *)(v3 + 160));
  if ( n == 128 )
  {
    for ( ie = 0; ie <= 25; ie += 2 )
    {
      v20 = (Word *)(v3 + 256);
      v21 = *(_BYTE *)(((unsigned __int64)&KSFT1[ie] >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)(((unsigned __int8)&KSFT1[ie] & 7) + 3) >= v21 )
        __asan_report_load4(&KSFT1[ie]);
      v22 = KSFT1[ie];
      v23 = *(_BYTE *)(((unsigned __int64)&KIDX1[ie] >> 3) + 0x7FFF8000);
      if ( v23 != 0 && (char)(((unsigned __int8)&KIDX1[ie] & 7) + 3) >= v23 )
        __asan_report_load4(&KIDX1[ie]);
      RotBlock((const Word *)(v3 + 128 + 8LL * KIDX1[ie]), v22, v20);
      v24 = (Word *)(v3 + 272);
      v25 = ie + 1;
      v26 = *(_BYTE *)(((unsigned __int64)&KSFT1[ie + 1] >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)(((unsigned __int8)&KSFT1[ie + 1] & 7) + 3) >= v26 )
        __asan_report_load4(&KSFT1[v25]);
      LODWORD(v27) = KSFT1[v25];
      v28 = ie + 1;
      v29 = *(_BYTE *)(((unsigned __int64)&KIDX1[ie + 1] >> 3) + 0x7FFF8000);
      if ( v29 != 0 && (char)(((unsigned __int8)&KIDX1[ie + 1] & 7) + 3) >= v29 )
      {
        v27 = &KIDX1[v28];
        __asan_report_load4(v27);
      }
      RotBlock((const Word *)(v3 + 128 + 8LL * KIDX1[v28]), (const int)v27, v24);
      WordByte((const Word *)(v3 + 256), &e[8 * ie]);
    }
  }
  else
  {
    XorBlock((const Byte *)(v3 + 64), (const Byte *)(v3 + 48), (Byte *)(v3 + 80));
    Camellia_Feistel((const Byte *)(v3 + 80), &SIGMA[32], (Byte *)(v3 + 88));
    Camellia_Feistel((const Byte *)(v3 + 88), &SIGMA[40], (Byte *)(v3 + 80));
    ByteWord((const Byte *)(v3 + 48), (Word *)(v3 + 192));
    ByteWord((const Byte *)(v3 + 80), (Word *)(v3 + 224));
    for ( ig = 0; ig <= 33; ig += 2 )
    {
      v30 = (Word *)(v3 + 256);
      v31 = *(_BYTE *)(((unsigned __int64)&KSFT2[ig] >> 3) + 0x7FFF8000);
      if ( v31 != 0 && (char)(((unsigned __int8)&KSFT2[ig] & 7) + 3) >= v31 )
        __asan_report_load4(&KSFT2[ig]);
      v32 = KSFT2[ig];
      v33 = *(_BYTE *)(((unsigned __int64)&KIDX2[ig] >> 3) + 0x7FFF8000);
      if ( v33 != 0 && (char)(((unsigned __int8)&KIDX2[ig] & 7) + 3) >= v33 )
        __asan_report_load4(&KIDX2[ig]);
      RotBlock((const Word *)(v3 + 128 + 8LL * KIDX2[ig]), v32, v30);
      v34 = (Word *)(v3 + 272);
      v35 = ig + 1;
      v36 = *(_BYTE *)(((unsigned __int64)&KSFT2[ig + 1] >> 3) + 0x7FFF8000);
      if ( v36 != 0 && (char)(((unsigned __int8)&KSFT2[ig + 1] & 7) + 3) >= v36 )
        __asan_report_load4(&KSFT2[v35]);
      LODWORD(v37) = KSFT2[v35];
      v38 = ig + 1;
      v39 = *(_BYTE *)(((unsigned __int64)&KIDX2[ig + 1] >> 3) + 0x7FFF8000);
      if ( v39 != 0 && (char)(((unsigned __int8)&KIDX2[ig + 1] & 7) + 3) >= v39 )
      {
        v37 = &KIDX2[v38];
        __asan_report_load4(v37);
      }
      RotBlock((const Word *)(v3 + 128 + 8LL * KIDX2[v38]), (const int)v37, v34);
      WordByte((const Word *)(v3 + 256), &e[8 * ig]);
    }
  }
  if ( v48 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 69: range 000000000CF6FBD7-000000000CF6FE7E
void __cdecl Camellia_Encrypt(const int n, const Byte *p, const Byte *e, Byte *c)
{
  int i; // [rsp+2Ch] [rbp-4h]
  int ia; // [rsp+2Ch] [rbp-4h]
  int ib; // [rsp+2Ch] [rbp-4h]
  int ic; // [rsp+2Ch] [rbp-4h]

  XorBlock(p, e, c);
  for ( i = 0; i <= 2; ++i )
  {
    Camellia_Feistel(c, &e[16 * i + 16], c + 8);
    Camellia_Feistel(c + 8, &e[16 * i + 24], c);
  }
  Camellia_FLlayer(c, e + 64, e + 72);
  for ( ia = 0; ia <= 2; ++ia )
  {
    Camellia_Feistel(c, &e[16 * ia + 80], c + 8);
    Camellia_Feistel(c + 8, &e[16 * ia + 88], c);
  }
  Camellia_FLlayer(c, e + 128, e + 136);
  for ( ib = 0; ib <= 2; ++ib )
  {
    Camellia_Feistel(c, &e[16 * ib + 144], c + 8);
    Camellia_Feistel(c + 8, &e[16 * ib + 152], c);
  }
  if ( n == 128 )
  {
    SwapHalf(c);
    XorBlock(c, e + 192, c);
  }
  else
  {
    Camellia_FLlayer(c, e + 192, e + 200);
    for ( ic = 0; ic <= 2; ++ic )
    {
      Camellia_Feistel(c, &e[16 * ic + 208], c + 8);
      Camellia_Feistel(c + 8, &e[16 * ic + 216], c);
    }
    SwapHalf(c);
    XorBlock(c, e + 256, c);
  }
};

// Line 111: range 000000000CF6FE7F-000000000CF7011A
void __cdecl Camellia_Decrypt(const int n, const Byte *c, const Byte *e, Byte *p)
{
  int i; // [rsp+2Ch] [rbp-4h]
  int ia; // [rsp+2Ch] [rbp-4h]
  int ib; // [rsp+2Ch] [rbp-4h]
  int ic; // [rsp+2Ch] [rbp-4h]

  if ( n == 128 )
  {
    XorBlock(c, e + 192, p);
  }
  else
  {
    XorBlock(c, e + 256, p);
    for ( i = 2; i >= 0; --i )
    {
      Camellia_Feistel(p, &e[16 * i + 216], p + 8);
      Camellia_Feistel(p + 8, &e[16 * i + 208], p);
    }
    Camellia_FLlayer(p, e + 200, e + 192);
  }
  for ( ia = 2; ia >= 0; --ia )
  {
    Camellia_Feistel(p, &e[16 * ia + 152], p + 8);
    Camellia_Feistel(p + 8, &e[16 * ia + 144], p);
  }
  Camellia_FLlayer(p, e + 136, e + 128);
  for ( ib = 2; ib >= 0; --ib )
  {
    Camellia_Feistel(p, &e[16 * ib + 88], p + 8);
    Camellia_Feistel(p + 8, &e[16 * ib + 80], p);
  }
  Camellia_FLlayer(p, e + 72, e + 64);
  for ( ic = 2; ic >= 0; --ic )
  {
    Camellia_Feistel(p, &e[16 * ic + 24], p + 8);
    Camellia_Feistel(p + 8, &e[16 * ic + 16], p);
  }
  SwapHalf(p);
  XorBlock(p, e, p);
};

// Line 152: range 000000000CF7011B-000000000CF71304
void __cdecl Camellia_Feistel(const Byte *x, const Byte *k, Byte *y)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  Byte v7; // r8
  int v8; // edi
  unsigned __int64 v9; // rcx
  const Byte *v10; // rdi
  Byte v11; // r9
  const Byte *v12; // rdi
  char v13; // si
  int v14; // r11d
  const Byte *v15; // rdi
  Byte v16; // r9
  const Byte *v17; // rdi
  char v18; // si
  const Byte *v19; // rdi
  Byte v20; // r9
  const Byte *v21; // rdi
  char v22; // si
  int v23; // r11d
  const Byte *v24; // rdi
  Byte v25; // r9
  const Byte *v26; // rdi
  char v27; // si
  const Byte *v28; // rdi
  Byte v29; // r9
  const Byte *v30; // rdi
  char v31; // r8
  const Byte *v32; // rdi
  Byte v33; // r10
  const Byte *v34; // rdi
  char v35; // si
  const Byte *v36; // rdi
  Byte v37; // r9
  const Byte *v38; // rdi
  char v39; // si
  int v40; // r11d
  const Byte *v41; // rdi
  Byte v42; // r9
  const Byte *v43; // rdi
  char v44; // si
  const Byte *v45; // rdi
  Byte v46; // r9
  const Byte *v47; // rdi
  char v48; // si
  int v49; // r11d
  const Byte *v50; // rdi
  Byte v51; // r9
  const Byte *v52; // rdi
  char v53; // si
  const Byte *v54; // rdi
  Byte v55; // r9
  const Byte *v56; // rdi
  char v57; // r8
  const Byte *v58; // rdi
  Byte v59; // r10
  const Byte *v60; // rdi
  char v61; // si
  const Byte *v62; // rdi
  Byte v63; // r9
  const Byte *v64; // rdi
  char v65; // si
  Byte *v66; // rdi
  Byte v67; // si
  Byte *v68; // rdi
  Byte v69; // r9
  Byte *v70; // rdi
  Byte v71; // si
  Byte *v72; // rdi
  Byte v73; // r9
  Byte *v74; // rdi
  Byte v75; // si
  Byte *v76; // rdi
  Byte v77; // r9
  Byte *v78; // rdi
  Byte v79; // si
  Byte *v80; // rdi
  Byte v81; // r9
  Byte *v82; // rdi
  Byte v83; // si
  Byte *v84; // rdi
  Byte v85; // r9
  Byte *v86; // rdi
  Byte v87; // si
  Byte *v88; // rdi
  Byte v89; // r9
  Byte *v90; // rdi
  Byte v91; // r8
  char v95[80]; // [rsp+20h] [rbp-50h] BYREF

  v3 = (unsigned __int64)v95;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = v3 + 64;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 t:153";
  *(_QWORD *)(v3 + 16) = Camellia_Feistel;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)x & 7) >= *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load1(x);
  }
  v7 = *x;
  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)k & 7) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load1(k);
  }
  v8 = (unsigned __int8)(v7 ^ *k);
  v9 = (unsigned __int64)&SBOX[v7 ^ *k];
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    v8 = v9;
    v5 = __asan_report_load1(v9);
  }
  *(_BYTE *)(v5 - 32) = SBOX[v8];
  v10 = x + 1;
  if ( *(_BYTE *)(((unsigned __int64)(x + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 1) >> 3) + 0x7FFF8000) )
  {
    v10 = x + 1;
    v5 = __asan_report_load1(x + 1);
  }
  v11 = *v10;
  v12 = k + 1;
  if ( *(_BYTE *)(((unsigned __int64)(k + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 1) >> 3) + 0x7FFF8000) )
  {
    v12 = k + 1;
    v5 = __asan_report_load1(k + 1);
  }
  LODWORD(v12) = (unsigned __int8)(v11 ^ *v12);
  v13 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v12] >> 3) + 0x7FFF8000);
  if ( v13 != 0 && ((unsigned __int8)&SBOX[(int)v12] & 7) >= v13 )
  {
    v12 = &SBOX[(int)v12];
    v5 = __asan_report_load1(v12);
  }
  v14 = (int)SBOX[(int)v12] >> 7;
  v15 = x + 1;
  if ( *(_BYTE *)(((unsigned __int64)(x + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 1) >> 3) + 0x7FFF8000) )
  {
    v15 = x + 1;
    v5 = __asan_report_load1(x + 1);
  }
  v16 = *v15;
  v17 = k + 1;
  if ( *(_BYTE *)(((unsigned __int64)(k + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 1) >> 3) + 0x7FFF8000) )
  {
    v17 = k + 1;
    v5 = __asan_report_load1(k + 1);
  }
  LODWORD(v17) = (unsigned __int8)(v16 ^ *v17);
  v18 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v17] >> 3) + 0x7FFF8000);
  if ( v18 != 0 && ((unsigned __int8)&SBOX[(int)v17] & 7) >= v18 )
  {
    v17 = &SBOX[(int)v17];
    v5 = __asan_report_load1(v17);
  }
  *(_BYTE *)(v5 - 31) = v14 ^ (2 * SBOX[(int)v17]);
  v19 = x + 2;
  if ( *(_BYTE *)(((unsigned __int64)(x + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 2) >> 3) + 0x7FFF8000) )
  {
    v19 = x + 2;
    v5 = __asan_report_load1(x + 2);
  }
  v20 = *v19;
  v21 = k + 2;
  if ( *(_BYTE *)(((unsigned __int64)(k + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 2) >> 3) + 0x7FFF8000) )
  {
    v21 = k + 2;
    v5 = __asan_report_load1(k + 2);
  }
  LODWORD(v21) = (unsigned __int8)(v20 ^ *v21);
  v22 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v21] >> 3) + 0x7FFF8000);
  if ( v22 != 0 && ((unsigned __int8)&SBOX[(int)v21] & 7) >= v22 )
  {
    v21 = &SBOX[(int)v21];
    v5 = __asan_report_load1(v21);
  }
  v23 = (int)SBOX[(int)v21] >> 1;
  v24 = x + 2;
  if ( *(_BYTE *)(((unsigned __int64)(x + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 2) >> 3) + 0x7FFF8000) )
  {
    v24 = x + 2;
    v5 = __asan_report_load1(x + 2);
  }
  v25 = *v24;
  v26 = k + 2;
  if ( *(_BYTE *)(((unsigned __int64)(k + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 2) >> 3) + 0x7FFF8000) )
  {
    v26 = k + 2;
    v5 = __asan_report_load1(k + 2);
  }
  LODWORD(v26) = (unsigned __int8)(v25 ^ *v26);
  v27 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v26] >> 3) + 0x7FFF8000);
  if ( v27 != 0 && ((unsigned __int8)&SBOX[(int)v26] & 7) >= v27 )
  {
    v26 = &SBOX[(int)v26];
    v5 = __asan_report_load1(v26);
  }
  *(_BYTE *)(v5 - 30) = v23 ^ (SBOX[(int)v26] << 7);
  v28 = x + 3;
  if ( *(_BYTE *)(((unsigned __int64)(x + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 3) >> 3) + 0x7FFF8000) )
  {
    v28 = x + 3;
    v5 = __asan_report_load1(x + 3);
  }
  v29 = *v28;
  v30 = k + 3;
  if ( *(_BYTE *)(((unsigned __int64)(k + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 3) >> 3) + 0x7FFF8000) )
  {
    v30 = k + 3;
    v5 = __asan_report_load1(k + 3);
  }
  v31 = 2 * (v29 ^ *v30);
  v32 = x + 3;
  if ( *(_BYTE *)(((unsigned __int64)(x + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 3) >> 3) + 0x7FFF8000) )
  {
    v32 = x + 3;
    v5 = __asan_report_load1(x + 3);
  }
  v33 = *v32;
  v34 = k + 3;
  if ( *(_BYTE *)(((unsigned __int64)(k + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 3) >> 3) + 0x7FFF8000) )
  {
    v34 = k + 3;
    v5 = __asan_report_load1(k + 3);
  }
  LODWORD(v34) = (unsigned __int8)(v31 ^ ((int)(unsigned __int8)(v33 ^ *v34) >> 7));
  v35 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v34] >> 3) + 0x7FFF8000);
  if ( v35 != 0 && ((unsigned __int8)&SBOX[(int)v34] & 7) >= v35 )
  {
    v34 = &SBOX[(int)v34];
    v5 = __asan_report_load1(v34);
  }
  *(_BYTE *)(v5 - 29) = SBOX[(int)v34];
  v36 = x + 4;
  if ( *(_BYTE *)(((unsigned __int64)(x + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 4) >> 3) + 0x7FFF8000) )
  {
    v36 = x + 4;
    v5 = __asan_report_load1(x + 4);
  }
  v37 = *v36;
  v38 = k + 4;
  if ( *(_BYTE *)(((unsigned __int64)(k + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 4) >> 3) + 0x7FFF8000) )
  {
    v38 = k + 4;
    v5 = __asan_report_load1(k + 4);
  }
  LODWORD(v38) = (unsigned __int8)(v37 ^ *v38);
  v39 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v38] >> 3) + 0x7FFF8000);
  if ( v39 != 0 && ((unsigned __int8)&SBOX[(int)v38] & 7) >= v39 )
  {
    v38 = &SBOX[(int)v38];
    v5 = __asan_report_load1(v38);
  }
  v40 = (int)SBOX[(int)v38] >> 7;
  v41 = x + 4;
  if ( *(_BYTE *)(((unsigned __int64)(x + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 4) >> 3) + 0x7FFF8000) )
  {
    v41 = x + 4;
    v5 = __asan_report_load1(x + 4);
  }
  v42 = *v41;
  v43 = k + 4;
  if ( *(_BYTE *)(((unsigned __int64)(k + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 4) >> 3) + 0x7FFF8000) )
  {
    v43 = k + 4;
    v5 = __asan_report_load1(k + 4);
  }
  LODWORD(v43) = (unsigned __int8)(v42 ^ *v43);
  v44 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v43] >> 3) + 0x7FFF8000);
  if ( v44 != 0 && ((unsigned __int8)&SBOX[(int)v43] & 7) >= v44 )
  {
    v43 = &SBOX[(int)v43];
    v5 = __asan_report_load1(v43);
  }
  *(_BYTE *)(v5 - 28) = v40 ^ (2 * SBOX[(int)v43]);
  v45 = x + 5;
  if ( *(_BYTE *)(((unsigned __int64)(x + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 5) >> 3) + 0x7FFF8000) )
  {
    v45 = x + 5;
    v5 = __asan_report_load1(x + 5);
  }
  v46 = *v45;
  v47 = k + 5;
  if ( *(_BYTE *)(((unsigned __int64)(k + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 5) >> 3) + 0x7FFF8000) )
  {
    v47 = k + 5;
    v5 = __asan_report_load1(k + 5);
  }
  LODWORD(v47) = (unsigned __int8)(v46 ^ *v47);
  v48 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v47] >> 3) + 0x7FFF8000);
  if ( v48 != 0 && ((unsigned __int8)&SBOX[(int)v47] & 7) >= v48 )
  {
    v47 = &SBOX[(int)v47];
    v5 = __asan_report_load1(v47);
  }
  v49 = (int)SBOX[(int)v47] >> 1;
  v50 = x + 5;
  if ( *(_BYTE *)(((unsigned __int64)(x + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 5) >> 3) + 0x7FFF8000) )
  {
    v50 = x + 5;
    v5 = __asan_report_load1(x + 5);
  }
  v51 = *v50;
  v52 = k + 5;
  if ( *(_BYTE *)(((unsigned __int64)(k + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 5) >> 3) + 0x7FFF8000) )
  {
    v52 = k + 5;
    v5 = __asan_report_load1(k + 5);
  }
  LODWORD(v52) = (unsigned __int8)(v51 ^ *v52);
  v53 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v52] >> 3) + 0x7FFF8000);
  if ( v53 != 0 && ((unsigned __int8)&SBOX[(int)v52] & 7) >= v53 )
  {
    v52 = &SBOX[(int)v52];
    v5 = __asan_report_load1(v52);
  }
  *(_BYTE *)(v5 - 27) = v49 ^ (SBOX[(int)v52] << 7);
  v54 = x + 6;
  if ( *(_BYTE *)(((unsigned __int64)(x + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 6) >> 3) + 0x7FFF8000) )
  {
    v54 = x + 6;
    v5 = __asan_report_load1(x + 6);
  }
  v55 = *v54;
  v56 = k + 6;
  if ( *(_BYTE *)(((unsigned __int64)(k + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 6) >> 3) + 0x7FFF8000) )
  {
    v56 = k + 6;
    v5 = __asan_report_load1(k + 6);
  }
  v57 = 2 * (v55 ^ *v56);
  v58 = x + 6;
  if ( *(_BYTE *)(((unsigned __int64)(x + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 6) >> 3) + 0x7FFF8000) )
  {
    v58 = x + 6;
    v5 = __asan_report_load1(x + 6);
  }
  v59 = *v58;
  v60 = k + 6;
  if ( *(_BYTE *)(((unsigned __int64)(k + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 6) >> 3) + 0x7FFF8000) )
  {
    v60 = k + 6;
    v5 = __asan_report_load1(k + 6);
  }
  LODWORD(v60) = (unsigned __int8)(v57 ^ ((int)(unsigned __int8)(v59 ^ *v60) >> 7));
  v61 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v60] >> 3) + 0x7FFF8000);
  if ( v61 != 0 && ((unsigned __int8)&SBOX[(int)v60] & 7) >= v61 )
  {
    v60 = &SBOX[(int)v60];
    v5 = __asan_report_load1(v60);
  }
  *(_BYTE *)(v5 - 26) = SBOX[(int)v60];
  v62 = x + 7;
  if ( *(_BYTE *)(((unsigned __int64)(x + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)x + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(x + 7) >> 3) + 0x7FFF8000) )
  {
    v62 = x + 7;
    v5 = __asan_report_load1(x + 7);
  }
  v63 = *v62;
  v64 = k + 7;
  if ( *(_BYTE *)(((unsigned __int64)(k + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)k + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(k + 7) >> 3) + 0x7FFF8000) )
  {
    v64 = k + 7;
    v5 = __asan_report_load1(k + 7);
  }
  LODWORD(v64) = (unsigned __int8)(v63 ^ *v64);
  v65 = *(_BYTE *)(((unsigned __int64)&SBOX[(int)v64] >> 3) + 0x7FFF8000);
  if ( v65 != 0 && ((unsigned __int8)&SBOX[(int)v64] & 7) >= v65 )
  {
    v64 = &SBOX[(int)v64];
    v5 = __asan_report_load1(v64);
  }
  *(_BYTE *)(v5 - 25) = SBOX[(int)v64];
  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)y & 7) >= *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load1(y);
  }
  *y ^= *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 27) ^ *(_BYTE *)(v5 - 29) ^ *(_BYTE *)(v5 - 30) ^ *(_BYTE *)(v5 - 32) ^ *(_BYTE *)(v5 - 25);
  v66 = y + 1;
  if ( *(_BYTE *)(((unsigned __int64)(y + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 1) >> 3) + 0x7FFF8000) )
  {
    v66 = y + 1;
    v5 = __asan_report_load1(y + 1);
  }
  v67 = *v66;
  v68 = y + 1;
  v69 = *(_BYTE *)(v5 - 25) ^ *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 29) ^ *(_BYTE *)(v5 - 31) ^ *(_BYTE *)(v5 - 32) ^ v67;
  if ( *(_BYTE *)(((unsigned __int64)(y + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 1) >> 3) + 0x7FFF8000) )
  {
    v68 = y + 1;
    v5 = __asan_report_store1(y + 1);
  }
  *v68 = v69;
  v70 = y + 2;
  if ( *(_BYTE *)(((unsigned __int64)(y + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 2) >> 3) + 0x7FFF8000) )
  {
    v70 = y + 2;
    v5 = __asan_report_load1(y + 2);
  }
  v71 = *v70;
  v72 = y + 2;
  v73 = *(_BYTE *)(v5 - 25) ^ *(_BYTE *)(v5 - 27) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 30) ^ *(_BYTE *)(v5 - 31) ^ *(_BYTE *)(v5 - 32) ^ v71;
  if ( *(_BYTE *)(((unsigned __int64)(y + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 2) >> 3) + 0x7FFF8000) )
  {
    v72 = y + 2;
    v5 = __asan_report_store1(y + 2);
  }
  *v72 = v73;
  v74 = y + 3;
  if ( *(_BYTE *)(((unsigned __int64)(y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 3) >> 3) + 0x7FFF8000) )
  {
    v74 = y + 3;
    v5 = __asan_report_load1(y + 3);
  }
  v75 = *v74;
  v76 = y + 3;
  v77 = *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 27) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 29) ^ *(_BYTE *)(v5 - 30) ^ *(_BYTE *)(v5 - 31) ^ v75;
  if ( *(_BYTE *)(((unsigned __int64)(y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 3) >> 3) + 0x7FFF8000) )
  {
    v76 = y + 3;
    v5 = __asan_report_store1(y + 3);
  }
  *v76 = v77;
  v78 = y + 4;
  if ( *(_BYTE *)(((unsigned __int64)(y + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 4) >> 3) + 0x7FFF8000) )
  {
    v78 = y + 4;
    v5 = __asan_report_load1(y + 4);
  }
  v79 = *v78;
  v80 = y + 4;
  v81 = *(_BYTE *)(v5 - 25) ^ *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 27) ^ *(_BYTE *)(v5 - 31) ^ *(_BYTE *)(v5 - 32) ^ v79;
  if ( *(_BYTE *)(((unsigned __int64)(y + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 4) >> 3) + 0x7FFF8000) )
  {
    v80 = y + 4;
    v5 = __asan_report_store1(y + 4);
  }
  *v80 = v81;
  v82 = y + 5;
  if ( *(_BYTE *)(((unsigned __int64)(y + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 5) >> 3) + 0x7FFF8000) )
  {
    v82 = y + 5;
    v5 = __asan_report_load1(y + 5);
  }
  v83 = *v82;
  v84 = y + 5;
  v85 = *(_BYTE *)(v5 - 25) ^ *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 30) ^ *(_BYTE *)(v5 - 31) ^ v83;
  if ( *(_BYTE *)(((unsigned __int64)(y + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 5) >> 3) + 0x7FFF8000) )
  {
    v84 = y + 5;
    v5 = __asan_report_store1(y + 5);
  }
  *v84 = v85;
  v86 = y + 6;
  if ( *(_BYTE *)(((unsigned __int64)(y + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 6) >> 3) + 0x7FFF8000) )
  {
    v86 = y + 6;
    v5 = __asan_report_load1(y + 6);
  }
  v87 = *v86;
  v88 = y + 6;
  v89 = *(_BYTE *)(v5 - 25) ^ *(_BYTE *)(v5 - 27) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 29) ^ *(_BYTE *)(v5 - 30) ^ v87;
  if ( *(_BYTE *)(((unsigned __int64)(y + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 6) >> 3) + 0x7FFF8000) )
  {
    v88 = y + 6;
    v5 = __asan_report_store1(y + 6);
  }
  *v88 = v89;
  v90 = y + 7;
  if ( *(_BYTE *)(((unsigned __int64)(y + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 7) >> 3) + 0x7FFF8000) )
  {
    v90 = y + 7;
    v5 = __asan_report_load1(y + 7);
  }
  v91 = *(_BYTE *)(v5 - 26) ^ *(_BYTE *)(v5 - 28) ^ *(_BYTE *)(v5 - 29) ^ *(_BYTE *)(v5 - 32) ^ *(_BYTE *)(v5 - 27) ^ *v90;
  if ( *(_BYTE *)(((unsigned __int64)(y + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)y + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(y + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(y + 7);
  }
  y[7] = v91;
  if ( v95 == (char *)v3 )
  {
    *(_QWORD *)(v6 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)(v6 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 175: range 000000000CF71305-000000000CF71678
void __cdecl Camellia_FLlayer(Byte *x, const Byte *kl, const Byte *kr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  char v15[256]; // [rsp+20h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 32 5 t:176 96 32 5 u:176 160 32 5 v:176";
  *(_QWORD *)(v3 + 16) = Camellia_FLlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  ByteWord(x, (Word *)(v3 + 32));
  ByteWord(kl, (Word *)(v3 + 96));
  ByteWord(kr, (Word *)(v3 + 160));
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 32);
  v7 = *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 96);
  *(_QWORD *)(v3 + 40) = v6 ^ (2 * (v7 & *(_QWORD *)(v3 + 96))) ^ ((*(_QWORD *)(v3 + 32) & *(_QWORD *)(v3 + 96)) >> 31);
  v8 = *(_QWORD *)(v3 + 32);
  v9 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 104);
  *(_QWORD *)(v3 + 32) = v8 ^ (v9 | *(_QWORD *)(v3 + 104));
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 48);
  v10 = *(_QWORD *)(v3 + 48);
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 56);
  v11 = *(_QWORD *)(v3 + 56);
  if ( *(_BYTE *)(((v3 + 168) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 168);
  *(_QWORD *)(v3 + 48) = v10 ^ (v11 | *(_QWORD *)(v3 + 168));
  v12 = *(_QWORD *)(v3 + 56);
  v13 = *(_QWORD *)(v3 + 48);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v3 + 160);
  *(_QWORD *)(v3 + 56) = v12 ^ (2 * (v13 & *(_QWORD *)(v3 + 160))) ^ ((*(_QWORD *)(v3 + 48) & *(_QWORD *)(v3 + 160)) >> 31);
  WordByte((const Word *)(v3 + 32), x);
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 191: range 000000000CF71679-000000000CF7182C
void __cdecl ByteWord(const Byte *x, Word *y)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 3; ++i )
  {
    v2 = (unsigned __int64)&x[4 * i];
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + (unsigned __int8)x) & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&x[4 * i]);
    }
    v3 = (unsigned __int64)*(unsigned __int8 *)v2 << 24;
    v4 = (unsigned __int64)&x[4 * i + 1];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 1 + (unsigned __int8)x) & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&x[4 * i + 1]);
    }
    v5 = ((unsigned __int64)*(unsigned __int8 *)v4 << 16) + v3;
    v6 = (unsigned __int64)&x[4 * i + 2];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 2 + (unsigned __int8)x) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&x[4 * i + 2]);
    }
    v7 = ((unsigned __int64)*(unsigned __int8 *)v6 << 8) + v5;
    v8 = (unsigned __int64)&x[4 * i + 3];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 3 + (unsigned __int8)x) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&x[4 * i + 3]);
    }
    v9 = (unsigned __int64)&y[i];
    v10 = *(unsigned __int8 *)v8 + v7;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8();
    *(_QWORD *)v9 = v10;
  }
};

// Line 200: range 000000000CF7182D-000000000CF71A7F
void __cdecl WordByte(const Word *x, Byte *y)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  Byte v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  Byte v7; // di
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  Byte v10; // di
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  Byte v13; // di
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 3; ++i )
  {
    v2 = (unsigned __int64)&x[i];
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[i]);
    v3 = (unsigned __int64)&y[4 * i];
    v4 = BYTE3(*(_QWORD *)v2);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + (unsigned __int8)y) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    {
      v4 = 4 * i + (_BYTE)y;
      __asan_report_store1(&y[4 * i]);
    }
    *(_BYTE *)v3 = v4;
    v5 = (unsigned __int64)&x[i];
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[i]);
    v6 = (unsigned __int64)&y[4 * i + 1];
    v7 = BYTE2(*(_QWORD *)v5);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 1 + (unsigned __int8)y) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      v7 = 4 * i + 1 + (_BYTE)y;
      __asan_report_store1(&y[4 * i + 1]);
    }
    *(_BYTE *)v6 = v7;
    v8 = (unsigned __int64)&x[i];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[i]);
    v9 = (unsigned __int64)&y[4 * i + 2];
    v10 = BYTE1(*(_QWORD *)v8);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 2 + (unsigned __int8)y) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v10 = 4 * i + 2 + (_BYTE)y;
      __asan_report_store1(&y[4 * i + 2]);
    }
    *(_BYTE *)v9 = v10;
    v11 = (unsigned __int64)&x[i];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[i]);
    v12 = (unsigned __int64)&y[4 * i + 3];
    v13 = *(_QWORD *)v11;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
      && ((4 * i + 3 + (unsigned __int8)y) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    {
      v13 = 4 * i + 3 + (_BYTE)y;
      __asan_report_store1(&y[4 * i + 3]);
    }
    *(_BYTE *)v12 = v13;
  }
};

// Line 211: range 000000000CF71A80-000000000CF71D10
void __cdecl RotBlock(const Word *x, const int n, Word *y)
{
  unsigned __int64 v3; // rax
  Word v4; // rsi
  unsigned __int64 v5; // rax
  Word v6; // rcx
  unsigned __int64 v7; // rax
  Word v8; // rsi
  unsigned __int64 v9; // rax
  Word v10; // rdx
  Word *v11; // rax
  Word v12; // rsi
  Word *v13; // rax
  Word v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char r; // [rsp+2Ch] [rbp-4h]

  r = n & 0x1F;
  if ( (n & 0x1F) != 0 )
  {
    v3 = (unsigned __int64)&x[(n >> 5) & 3];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[(n >> 5) & 3]);
    v4 = *(_QWORD *)v3 << r;
    v5 = (unsigned __int64)&x[((unsigned __int8)(n >> 5) + 1) & 3];
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[((unsigned __int8)(n >> 5) + 1) & 3]);
    v6 = (*(_QWORD *)v5 >> (32 - r)) ^ v4;
    if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *y = v6;
    v7 = (unsigned __int64)&x[((unsigned __int8)(n >> 5) + 1) & 3];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[((unsigned __int8)(n >> 5) + 1) & 3]);
    v8 = *(_QWORD *)v7 << r;
    v9 = (unsigned __int64)&x[((unsigned __int8)(n >> 5) + 2) & 3];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[((unsigned __int8)(n >> 5) + 2) & 3]);
    v10 = *(_QWORD *)v9 >> (32 - r);
    v11 = y + 1;
    v12 = v10 ^ v8;
    if ( *(_BYTE *)(((unsigned __int64)(y + 1) >> 3) + 0x7FFF8000) )
      v11 = (Word *)__asan_report_store8();
    *v11 = v12;
  }
  else
  {
    v13 = (Word *)&x[(n >> 5) & 3];
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[(n >> 5) & 3]);
    v14 = *v13;
    if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *y = v14;
    v15 = (unsigned __int64)&x[((unsigned __int8)(n >> 5) + 1) & 3];
    v16 = (unsigned __int64)(y + 1);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&x[((unsigned __int8)(n >> 5) + 1) & 3]);
    v17 = *(_QWORD *)v15;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_store8();
    *(_QWORD *)v16 = v17;
  }
};

// Line 224: range 000000000CF71D11-000000000CF71E5B
void __cdecl SwapHalf(Byte *x)
{
  Byte *v1; // rcx
  Byte *v2; // rcx
  char v3; // dl
  Byte v4; // si
  Byte *v5; // rcx
  Byte t; // [rsp+1Bh] [rbp-5h]
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 7; ++i )
  {
    v1 = &x[i];
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)x) & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&x[i]);
    }
    t = *v1;
    v2 = &x[i];
    v3 = *(_BYTE *)(((unsigned __int64)&x[i + 8] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && ((i + 8 + (unsigned __int8)x) & 7) >= v3 )
      __asan_report_load1(&x[i + 8]);
    v4 = x[i + 8];
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v2);
    }
    *v2 = v4;
    v5 = &x[i + 8];
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && ((i + 8 + (unsigned __int8)x) & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&x[i + 8]);
    }
    *v5 = t;
  }
};

// Line 235: range 000000000CF71E5C-000000000CF71F5F
void __cdecl XorBlock(const Byte *x, const Byte *y, Byte *z)
{
  unsigned __int64 v3; // rcx
  char v4; // di
  unsigned __int64 v5; // rcx
  char v6; // si
  unsigned __int64 v7; // rcx
  Byte v8; // di
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i <= 15; ++i )
  {
    v3 = (unsigned __int64)&x[i];
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && ((i + (unsigned __int8)x) & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load1(&x[i]);
    v4 = *(_BYTE *)v3;
    v5 = (unsigned __int64)&y[i];
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && ((i + (unsigned __int8)y) & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      v4 = i + (_BYTE)y;
      __asan_report_load1(&y[i]);
    }
    v6 = *(_BYTE *)v5;
    v7 = (unsigned __int64)&z[i];
    v8 = v6 ^ v4;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && ((i + (unsigned __int8)z) & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    {
      v8 = i + (_BYTE)z;
      __asan_report_store1(&z[i]);
    }
    *(_BYTE *)v7 = v8;
  }
};
