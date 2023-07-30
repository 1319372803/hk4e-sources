// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/aes128.cpp

// Line 10: range 000000000CF6DA89-000000000CF6E67D
void __cdecl aes128_block(AESBlock *blk, const AESTable *t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 n; // rax
  unsigned __int64 v5; // rdx
  char v6; // si
  uint32_t v7; // r8d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  char v12; // si
  int v13; // r8d
  const uint32_t *T0; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  int v19; // r8d
  const uint32_t *T1; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  int v25; // r8d
  const uint32_t *T2; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  int v31; // r8d
  const uint32_t *T3; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  AESBlock *v37; // r8
  __int64 v38; // rsi
  AESBlock *v39; // rdi
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  uint8_t v43; // r10
  const uint8_t *sbox; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  size_t v48; // rdi
  char v49; // si
  char v50; // si
  int v51; // r8d
  uint32_t *v52; // rdi
  char v53; // si
  size_t i; // [rsp+18h] [rbp-88h]
  size_t i_0; // [rsp+20h] [rbp-80h]
  size_t j; // [rsp+28h] [rbp-78h]
  size_t i_1; // [rsp+30h] [rbp-70h]
  size_t i_2; // [rsp+38h] [rbp-68h]
  char v61[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  n = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 interim:11";
  *(_QWORD *)(v2 + 16) = aes128_block;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  for ( i = 0LL; i <= 3; ++i )
  {
    v6 = *(_BYTE *)(((unsigned __int64)&blk->l[i] >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((4 * i + (_BYTE)blk) & 7) + 3) >= v6 )
      __asan_report_load4(&blk->l[i]);
    v7 = blk->l[i];
    if ( *(_BYTE *)(((unsigned __int64)&t->subKey >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->subKey);
    v8 = (unsigned __int64)&t->subKey[i];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(t->subKey) + 4 * i) & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      v8 = (unsigned __int64)&t->subKey[i];
      __asan_report_load4(v8);
    }
    blk->l[i] = *(_DWORD *)v8 ^ v7;
  }
  for ( i_0 = 1LL; i_0 <= 9; ++i_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&t->subKey >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->subKey);
    v9 = (unsigned __int64)&t->subKey[4 * i_0];
    if ( (char)((LOBYTE(t->subKey) + 16 * i_0) & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v9 + 15) >> 3) + 0x7FFF8000) != 0
      && (char)((LOBYTE(t->subKey) + 16 * i_0 + 15) & 7) >= *(_BYTE *)(((v9 + 15) >> 3) + 0x7FFF8000) )
    {
      v9 = (unsigned __int64)&t->subKey[4 * i_0];
      n = __asan_report_load_n(v9, 16LL);
    }
    v10 = *(_QWORD *)v9;
    v11 = *(_QWORD *)(v9 + 8);
    if ( *(_WORD *)(((unsigned __int64)(n - 32) >> 3) + 0x7FFF8000) )
    {
      v11 = n - 32;
      n = __asan_report_store16(n - 32, v10);
    }
    *(_QWORD *)(n - 32) = v10;
    *(_QWORD *)(n - 24) = v11;
    for ( j = 0LL; j <= 3; ++j )
    {
      v12 = *(_BYTE *)(((4 * j + n - 32) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((4 * j + n - 32) & 7) + 3) >= v12 )
        __asan_report_load4(4 * j + n - 32);
      v13 = *(_DWORD *)(n + 4 * j - 32);
      if ( *(_BYTE *)(((unsigned __int64)&t->T0 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->T0);
      T0 = t->T0;
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
        __asan_report_load8(t);
      v15 = (unsigned __int64)&t->pm[4 * j];
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->pm[4 * j]);
      v16 = *(_QWORD *)v15;
      v17 = (unsigned __int64)blk->l + *(_QWORD *)v15;
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)(v17 & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        n = __asan_report_load1(v17);
      v18 = (unsigned __int64)&T0[blk->c[v16]];
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((v18 & 7) + 3) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v18);
      *(_DWORD *)(n + 4 * j - 32) = *(_DWORD *)v18 ^ v13;
      v19 = *(_DWORD *)(n + 4 * j - 32);
      if ( *(_BYTE *)(((unsigned __int64)&t->T1 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->T1);
      T1 = t->T1;
      v21 = (unsigned __int64)&t->pm[4 * j + 1];
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->pm[4 * j + 1]);
      v22 = *(_QWORD *)v21;
      v23 = (unsigned __int64)blk->l + *(_QWORD *)v21;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0 && (char)(v23 & 7) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        n = __asan_report_load1(v23);
      v24 = (unsigned __int64)&T1[blk->c[v22]];
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && (char)((v24 & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v24);
      *(_DWORD *)(n + 4 * j - 32) = *(_DWORD *)v24 ^ v19;
      v25 = *(_DWORD *)(n + 4 * j - 32);
      if ( *(_BYTE *)(((unsigned __int64)&t->T2 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->T2);
      T2 = t->T2;
      v27 = (unsigned __int64)&t->pm[4 * j + 2];
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->pm[4 * j + 2]);
      v28 = *(_QWORD *)v27;
      v29 = (unsigned __int64)blk->l + *(_QWORD *)v27;
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0 && (char)(v29 & 7) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        n = __asan_report_load1(v29);
      v30 = (unsigned __int64)&T2[blk->c[v28]];
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) != 0 && (char)((v30 & 7) + 3) >= *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v30);
      *(_DWORD *)(n + 4 * j - 32) = *(_DWORD *)v30 ^ v25;
      v31 = *(_DWORD *)(n + 4 * j - 32);
      if ( *(_BYTE *)(((unsigned __int64)&t->T3 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->T3);
      T3 = t->T3;
      v33 = (unsigned __int64)&t->pm[4 * j + 3];
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        __asan_report_load8(&t->pm[4 * j + 3]);
      v34 = *(_QWORD *)v33;
      v35 = (unsigned __int64)blk->l + *(_QWORD *)v33;
      if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) != 0 && (char)(v35 & 7) >= *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
        n = __asan_report_load1(v35);
      v36 = (unsigned __int64)&T3[blk->c[v34]];
      if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0 && (char)((v36 & 7) + 3) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
        __asan_report_load4(v36);
      *(_DWORD *)(n + 4 * j - 32) = *(_DWORD *)v36 ^ v31;
    }
    v37 = blk;
    if ( *(_WORD *)(((unsigned __int64)(n - 32) >> 3) + 0x7FFF8000) )
      n = __asan_report_load16(n - 32);
    v38 = *(_QWORD *)(n - 32);
    v39 = *(AESBlock **)(n - 24);
    if ( ((unsigned __int8)v37 & 7) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&v37->c[15] >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v37 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)&v37->c[15] >> 3) + 0x7FFF8000) )
    {
      v38 = 16LL;
      v39 = v37;
      n = __asan_report_store_n(v37, 16LL);
    }
    *(_QWORD *)v37->l = v38;
    *(_QWORD *)&v37->c[8] = v39;
  }
  for ( i_1 = 0LL; i_1 <= 0xF; ++i_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      __asan_report_load8(t);
    v40 = (unsigned __int64)&t->pm[i_1];
    if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->pm[i_1]);
    v41 = *(_QWORD *)v40;
    v42 = (unsigned __int64)blk->l + *(_QWORD *)v40;
    if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) != 0 && (char)(v42 & 7) >= *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
      n = __asan_report_load1(v42);
    v43 = blk->c[v41];
    if ( *(_BYTE *)(((unsigned __int64)&t->sbox >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->sbox);
    sbox = t->sbox;
    v45 = (unsigned __int64)&t->pm[i_1];
    if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->pm[i_1]);
    v46 = *(_QWORD *)v45;
    v47 = (unsigned __int64)blk->l + *(_QWORD *)v45;
    if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) != 0 && (char)(v47 & 7) >= *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
      n = __asan_report_load1(v47);
    v48 = (size_t)&sbox[blk->c[v46]];
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0 && (char)(v48 & 7) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      n = __asan_report_load1(v48);
    LOBYTE(v48) = ~(v43 ^ *(_BYTE *)v48);
    v49 = *(_BYTE *)(((n - 32 + i_1) >> 3) + 0x7FFF8000);
    if ( v49 != 0 && ((n - 32 + (unsigned __int8)i_1) & 7) >= v49 )
    {
      v48 = n - 32 + i_1;
      n = __asan_report_store1(v48);
    }
    *(_BYTE *)(n + i_1 - 32) = v48;
  }
  for ( i_2 = 0LL; i_2 <= 3; ++i_2 )
  {
    v50 = *(_BYTE *)(((4 * i_2 + n - 32) >> 3) + 0x7FFF8000);
    if ( v50 != 0 && (char)(((4 * i_2 + n - 32) & 7) + 3) >= v50 )
      __asan_report_load4(4 * i_2 + n - 32);
    v51 = *(_DWORD *)(n + 4 * i_2 - 32);
    if ( *(_BYTE *)(((unsigned __int64)&t->subKey >> 3) + 0x7FFF8000) )
      __asan_report_load8(&t->subKey);
    v52 = (uint32_t *)&t->subKey[i_2 + 40];
    if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(t->subKey) + 4 * (i_2 + 40)) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
    {
      v52 = (uint32_t *)&t->subKey[i_2 + 40];
      __asan_report_load4(v52);
    }
    LODWORD(v52) = *v52 ^ v51;
    v53 = *(_BYTE *)(((unsigned __int64)&blk->l[i_2] >> 3) + 0x7FFF8000);
    if ( v53 != 0 && (char)(((4 * i_2 + (_BYTE)blk) & 7) + 3) >= v53 )
    {
      v52 = &blk->l[i_2];
      n = __asan_report_store4(v52);
    }
    blk->l[i_2] = (unsigned int)v52;
  }
  if ( v61 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 38: range 000000000CF6E67E-000000000CF6E90A
void __cdecl aes128_enc_block(AESBlock *block, u4 *subKey)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6[3840]; // [rsp+10h] [rbp-F00h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3808LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 3808;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 3648 4 t:44";
  *(_QWORD *)(v2 + 16) = aes128_enc_block;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862835] = -202116109;
  v5[536862836] = -202116109;
  v5[536862837] = -202116109;
  v5[536862838] = -202116109;
  if ( *(_BYTE *)(((v2 + 40) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3768) = subKey;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3776) = aes128_enc_block(AESBlock &,unsigned int *)::pm;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776 + 48) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3728) = Sbox;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776 + 16) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3760) = E0;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776 + 24) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3752) = E1;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776 + 32) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3744) = E2;
  if ( *(_BYTE *)(((unsigned __int64)(v4 - 3776 + 40) >> 3) + 0x7FFF8000) )
    v4 = __asan_report_store8();
  *(_QWORD *)(v4 - 3736) = E3;
  aes128_block(block, (const AESTable *)(v4 - 3776));
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81CC) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D4) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3808LL, v6);
  }
};

// Line 70: range 000000000CF6E90B-000000000CF6EB72
void __cdecl aes128_wb_key_extension(u1 *key, u4 *subKeyE)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  size_t i; // [rsp+18h] [rbp-68h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 tmpHash:71";
  *(_QWORD *)(v2 + 16) = aes128_wb_key_extension;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( ((unsigned __int8)key & 7) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(key + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(key, 16LL);
  }
  v5 = *((_QWORD *)key + 1);
  v6 = *(_QWORD *)key;
  v7 = *(unsigned __int16 *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( (_WORD)v7 )
    v6 = __asan_report_store16(v2 + 32, v7);
  *(_QWORD *)(v2 + 32) = v6;
  *(_QWORD *)(v2 + 40) = v5;
  for ( i = 0LL; i <= 0x2B; i += 4LL )
  {
    siphash24((const unsigned __int8 *)(v2 + 32), 8uLL, (unsigned __int8 *)(v2 + 40));
    siphash24((const unsigned __int8 *)(v2 + 40), 8uLL, (unsigned __int8 *)(v2 + 32));
    v8 = (unsigned __int64)&subKeyE[i];
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load16(v2 + 32);
    v9 = *(_QWORD *)(v2 + 32);
    v10 = *(_QWORD *)(v2 + 40);
    if ( (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) != 0
      && (char)((v8 + 15) & 7) >= *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) )
    {
      v9 = 16LL;
      v10 = v8;
      __asan_report_store_n(v8, 16LL);
    }
    *(_QWORD *)v8 = v9;
    *(_QWORD *)(v8 + 8) = v10;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 84: range 000000000CF6EB73-000000000CF6F019
void __cdecl aes128_wb_enc(u1 *data, size_t len, u1 *key, u1 *iv)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  char *v6; // r12
  _DWORD *v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  char v12; // dl
  char v13; // di
  u1 *v14; // rcx
  __int64 v15; // rsi
  u1 *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  u1 *v19; // rdi
  size_t i; // [rsp+20h] [rbp-170h]
  size_t j; // [rsp+28h] [rbp-168h]
  char v26[352]; // [rsp+30h] [rbp-160h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 320);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 16 6 tmp:91 80 176 10 subKeyE:87";
  *(_QWORD *)(v4 + 16) = aes128_wb_enc;
  v7 = (_DWORD *)(v4 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862728] = -202116109;
  v7[536862729] = -202116109;
  if ( (len & 0xF) == 0 )
  {
    aes128_wb_key_extension(key, (u4 *)(v4 + 80));
    for ( i = 0LL; i < len >> 4; ++i )
    {
      v8 = (unsigned __int64)&data[16 * i];
      if ( (char)((16 * i + (_BYTE)data) & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) != 0
        && (char)((v8 + 15) & 7) >= *(_BYTE *)(((v8 + 15) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v8, 16LL);
      }
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(v8 + 8);
      v11 = *(unsigned __int16 *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( (_WORD)v11 )
        v9 = __asan_report_store16(v4 + 48, v11);
      *(_QWORD *)(v4 + 48) = v9;
      *(_QWORD *)(v4 + 56) = v10;
      for ( j = 0LL; j <= 0xF; ++j )
      {
        v12 = *(_BYTE *)(((v4 + 48 + j) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && (char)((v4 + 48 + j) & 7) >= v12 )
          __asan_report_load1(v4 + 48 + j);
        v13 = v6[j - 272];
        v14 = &iv[j];
        if ( *(_BYTE *)(((unsigned __int64)&iv[j] >> 3) + 0x7FFF8000) != 0
          && (char)(((_BYTE)iv + j) & 7) >= *(_BYTE *)(((unsigned __int64)&iv[j] >> 3) + 0x7FFF8000) )
        {
          v13 = (_BYTE)iv + j;
          __asan_report_load1(&iv[j]);
        }
        v6[j - 272] = *v14 ^ v13;
      }
      aes128_enc_block((AESBlock *)(v4 + 48), (u4 *)(v4 + 80));
      if ( *(_WORD *)(((v4 + 48) >> 3) + 0x7FFF8000) )
        __asan_report_load16(v4 + 48);
      v15 = *(_QWORD *)(v4 + 48);
      v16 = *(u1 **)(v4 + 56);
      if ( ((unsigned __int8)iv & 7) >= *(_BYTE *)(((unsigned __int64)iv >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)iv >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(iv + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)iv + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(iv + 15) >> 3) + 0x7FFF8000) )
      {
        v15 = 16LL;
        v16 = iv;
        __asan_report_store_n(iv, 16LL);
      }
      *(_QWORD *)iv = v15;
      *((_QWORD *)iv + 1) = v16;
      v17 = (unsigned __int64)&data[16 * i];
      v18 = *(_QWORD *)(v4 + 48);
      v19 = *(u1 **)(v4 + 56);
      if ( (char)((16 * i + (_BYTE)data) & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v17 + 15) >> 3) + 0x7FFF8000) != 0
        && (char)((v17 + 15) & 7) >= *(_BYTE *)(((v17 + 15) >> 3) + 0x7FFF8000) )
      {
        v18 = 16LL;
        v19 = &data[16 * i];
        __asan_report_store_n(v17, 16LL);
      }
      *(_QWORD *)v17 = v18;
      *(_QWORD *)(v17 + 8) = v19;
    }
  }
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
