// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/siphash.cpp

// Line 10: range 000000000CF71F98-000000000CF720E7
u8_0 __cdecl load64_le(const u1 *src)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rcx
  __int64 n; // rax
  __int64 v5; // rsi
  u8_0 v6; // rdx
  char v8[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 64);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 4 w:11";
  *(_QWORD *)(v1 + 16) = load64_le;
  n = v1 >> 3;
  *(_DWORD *)(n + 2147450880) = -235802127;
  *(_DWORD *)(n + 2147450884) = -202116352;
  if ( ((unsigned __int8)src & 7) >= *(_BYTE *)(((unsigned __int64)src >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)src >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(src + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)src + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(src + 7) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(src, 8LL);
  }
  v5 = *(_QWORD *)src;
  if ( *(_BYTE *)(((unsigned __int64)(v3 - 32) >> 3) + 0x7FFF8000) )
    n = __asan_report_store8();
  *((_QWORD *)v3 - 4) = v5;
  v6 = *((_QWORD *)v3 - 4);
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)(n + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)(n + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v6;
};

// Line 18: range 000000000CF720E8-000000000CF72238
void __fastcall store64_le(unsigned __int64 dst, u8_0 w)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  char v8[80]; // [rsp+10h] [rbp-50h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 w:17";
  *(_QWORD *)(v2 + 16) = store64_le;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = w;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  v6 = *((_QWORD *)v4 - 4);
  if ( (char)(dst & 7) >= *(_BYTE *)((dst >> 3) + 0x7FFF8000) && *(_BYTE *)((dst >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((dst + 7) >> 3) + 0x7FFF8000) != 0
    && (char)((dst + 7) & 7) >= *(_BYTE *)(((dst + 7) >> 3) + 0x7FFF8000) )
  {
    v6 = dst;
    v5 = __asan_report_store_n(dst, 8LL);
  }
  *(_QWORD *)dst = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(v5 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v5 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 32: range 000000000CF72239-000000000CF72893
// local variable allocation has failed, the output may be wrong!
unsigned __int64 __cdecl siphash24_key(
        const unsigned __int8 *in,
        unsigned __int64 inlen,
        unsigned __int8 *out,
        const unsigned __int8 *k)
{
  __int64 v4; // rt0
  __int64 v5; // rt0
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rcx
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // rcx
  unsigned __int8 *v11; // rcx
  __int64 v12; // rt0
  __int64 v13; // rt0
  __int64 v14; // rt0
  __int64 v15; // rt0
  __int64 v16; // rt0
  __int64 v17; // rt0
  const u1 *ina; // [rsp+18h] [rbp-58h]
  _BYTE v0[32]; // [rsp+28h] [rbp-48h] OVERLAPPED BYREF
  u8_0 b; // [rsp+48h] [rbp-28h]
  u8_0 k0_0; // [rsp+50h] [rbp-20h]
  u8_0 k1_0; // [rsp+58h] [rbp-18h]
  const u1 *end; // [rsp+60h] [rbp-10h]
  u8_0 m; // [rsp+68h] [rbp-8h]

  ina = in;
  qmemcpy(v0, "uespemosmodnarodarenegylsetybdet", sizeof(v0));
  k0_0 = load64_le(k);
  k1_0 = load64_le(k + 8);
  end = &in[inlen & 0xFFFFFFFFFFFFFFF8LL];
  b = inlen << 56;
  *(_QWORD *)&v0[24] ^= k1_0;
  *(_QWORD *)&v0[16] ^= k0_0;
  *(_QWORD *)&v0[8] ^= k1_0;
  *(_QWORD *)v0 ^= k0_0;
  while ( ina != end )
  {
    m = load64_le(ina);
    *(_QWORD *)&v0[24] ^= m;
    *(_QWORD *)v0 += *(_QWORD *)&v0[8];
    *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
    *(_QWORD *)&v0[16] += *(_QWORD *)&v0[24];
    v4 = __ROL8__(*(_QWORD *)&v0[24], 16);
    *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v4) + __ROL8__(*(_QWORD *)v0, 32);
    *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v4, 21);
    *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
    *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
    *(_QWORD *)v0 += *(_QWORD *)&v0[8];
    *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
    *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + __ROL8__(*(_QWORD *)&v0[16], 32);
    v5 = __ROL8__(*(_QWORD *)&v0[24], 16);
    *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v5) + __ROL8__(*(_QWORD *)v0, 32);
    *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v5, 21);
    *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
    *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
    *(_QWORD *)&v0[16] = __ROL8__(*(_QWORD *)&v0[16], 32);
    *(_QWORD *)v0 ^= m;
    ina += 8;
  }
  switch ( inlen & 7 )
  {
    case 1uLL:
      goto LABEL_23;
    case 2uLL:
      goto LABEL_20;
    case 3uLL:
      goto LABEL_17;
    case 4uLL:
      goto LABEL_14;
    case 5uLL:
      goto LABEL_11;
    case 6uLL:
      goto LABEL_8;
    case 7uLL:
      v6 = (unsigned __int8 *)(ina + 6);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 6) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 6);
      }
      b |= (unsigned __int64)*v6 << 48;
LABEL_8:
      v7 = (unsigned __int8 *)(ina + 5);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 5) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 5);
      }
      b |= (unsigned __int64)*v7 << 40;
LABEL_11:
      v8 = (unsigned __int8 *)(ina + 4);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 4) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 4);
      }
      b |= (unsigned __int64)*v8 << 32;
LABEL_14:
      v9 = (unsigned __int8 *)(ina + 3);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 3);
      }
      b |= (unsigned __int64)*v9 << 24;
LABEL_17:
      v10 = (unsigned __int8 *)(ina + 2);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 2) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 2);
      }
      b |= (unsigned __int64)*v10 << 16;
LABEL_20:
      v11 = (unsigned __int8 *)(ina + 1);
      if ( *(_BYTE *)(((unsigned __int64)(ina + 1) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)ina + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(ina + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina + 1);
      }
      b |= (unsigned __int64)*v11 << 8;
LABEL_23:
      if ( *(_BYTE *)(((unsigned __int64)ina >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)ina & 7) >= *(_BYTE *)(((unsigned __int64)ina >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(ina);
      }
      b |= *ina;
      break;
    default:
      break;
  }
  *(_QWORD *)&v0[24] ^= b;
  *(_QWORD *)v0 += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[24];
  v12 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v12) + __ROL8__(*(_QWORD *)v0, 32);
  *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v12, 21);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
  *(_QWORD *)v0 += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + __ROL8__(*(_QWORD *)&v0[16], 32);
  v13 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v13) + __ROL8__(*(_QWORD *)v0, 32);
  *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v13, 21);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
  *(_QWORD *)v0 = *(_QWORD *)&v0[8] + (b ^ *(_QWORD *)v0);
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + (__ROL8__(*(_QWORD *)&v0[16], 32) ^ 0xFFLL);
  v14 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v14) + __ROL8__(*(_QWORD *)v0, 32);
  *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v14, 21);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
  *(_QWORD *)v0 += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + __ROL8__(*(_QWORD *)&v0[16], 32);
  v15 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v15) + __ROL8__(*(_QWORD *)v0, 32);
  *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v15, 21);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
  *(_QWORD *)v0 += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + __ROL8__(*(_QWORD *)&v0[16], 32);
  v16 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v16) + __ROL8__(*(_QWORD *)v0, 32);
  *(_QWORD *)&v0[24] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v16, 21);
  *(_QWORD *)&v0[16] += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)&v0[16] ^ __ROL8__(*(_QWORD *)&v0[8], 17);
  *(_QWORD *)v0 += *(_QWORD *)&v0[8];
  *(_QWORD *)&v0[8] = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[8], 13);
  *(_QWORD *)&v0[16] = *(_QWORD *)&v0[24] + __ROL8__(*(_QWORD *)&v0[16], 32);
  v17 = __ROL8__(*(_QWORD *)&v0[24], 16);
  *(_QWORD *)v0 = (*(_QWORD *)&v0[16] ^ v17) + __ROL8__(*(_QWORD *)v0, 32);
  b = *(_QWORD *)v0 ^ __ROL8__(*(_QWORD *)&v0[16] ^ v17, 21) ^ __ROL8__(*(_QWORD *)&v0[8] + *(_QWORD *)&v0[16], 32) ^ (*(_QWORD *)&v0[8] + *(_QWORD *)&v0[16]) ^ __ROL8__(*(_QWORD *)&v0[8], 17) ^ *(_QWORD *)v0;
  store64_le((unsigned __int64)out, b);
  return b;
};

// Line 88: range 000000000CF72894-000000000CF7297D
unsigned __int64 __cdecl siphash24(const unsigned __int8 *in, unsigned __int64 inlen, unsigned __int8 *out)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 result; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 4 k:89";
  *(_QWORD *)(v3 + 16) = siphash24;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  memset((void *)(v3 + 32), 0, 0x10uLL);
  result = siphash24_key(in, inlen, out, (const unsigned __int8 *)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
